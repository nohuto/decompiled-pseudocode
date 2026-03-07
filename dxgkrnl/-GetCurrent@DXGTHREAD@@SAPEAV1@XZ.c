struct DXGTHREAD *DXGTHREAD::GetCurrent(void)
{
  __int64 v0; // rdi
  struct DXGTHREAD *result; // rax
  char *v2; // rax
  struct DXGTHREAD *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v6) >= 0 )
  {
    v0 = v6;
    if ( v6 )
      return (struct DXGTHREAD *)v0;
    v2 = (char *)ExAllocateFromLookasideListEx(&g_DxgkThreadLookasideList);
    v3 = (struct DXGTHREAD *)v2;
    if ( v2 )
    {
      *((_QWORD *)v2 + 3) = 0LL;
      *(_QWORD *)v2 = &ReferenceCounted::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *(_QWORD *)v2 = &DXGTHREAD::`vftable';
      *((_QWORD *)v2 + 5) = &DXGTHREAD::m_LockOrderTrackerUpperBound;
      strcpy(v2 + 32, "DxgT");
      *((_QWORD *)v2 + 6) = 0LL;
      *((_DWORD *)v2 + 14) = -1;
      *((_QWORD *)v2 + 2) = KeGetCurrentThread();
      v4 = PsTlsSetValue(g_DxgkThreadTlsId, v2);
      v5 = v4;
      if ( v4 >= 0 )
      {
        ++dword_1C013B3F0;
        result = v3;
        ++dword_1C013B3E8;
        return result;
      }
      ReferenceCounted::Release(v3);
      WdLogSingleEntry2(2LL, v3, v5);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to set thread PsTls for DXGTHREAD 0xI64x (Status = 0xI64x).",
        (__int64)v3,
        v5,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(6LL, KeGetCurrentThread());
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGTHREAD for thread 0xI64x.",
        (__int64)KeGetCurrentThread(),
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return 0LL;
  }
  return 0LL;
}
