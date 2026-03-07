__int64 __fastcall DxgkThreadCallout(void **a1, char a2)
{
  volatile signed __int32 *v3; // rdi
  PVOID v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  volatile signed __int32 *v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0LL;
  if ( a2 != 1 )
  {
    v8 = (__int64)*a1;
    if ( v8 )
    {
      v9 = _InterlockedDecrement((volatile signed __int32 *)(v8 + 8));
      if ( v9 )
      {
        if ( v9 < 0 )
        {
          v10 = v9;
          WdLogSingleEntry1(2LL, v9);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v10,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
      }
      --dword_1C013B3EC;
      *a1 = 0LL;
    }
    return 0LL;
  }
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v11) >= 0 )
  {
    v3 = v11;
    if ( v11 )
    {
LABEL_7:
      ++dword_1C013B3F4;
      ++dword_1C013B3EC;
      _InterlockedIncrement(v3 + 2);
      *a1 = (void *)v11;
      return 0LL;
    }
  }
  v4 = ExAllocateFromLookasideListEx(&g_DxgkThreadLookasideList);
  v3 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 14) = -1;
    *(_QWORD *)v4 = &ReferenceCounted::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &DXGTHREAD::`vftable';
    *((_QWORD *)v4 + 5) = &DXGTHREAD::m_LockOrderTrackerUpperBound;
    *((_QWORD *)v4 + 3) = 0LL;
    strcpy((char *)v4 + 32, "DxgT");
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 2) = KeGetCurrentThread();
    v5 = PsTlsSetValue(g_DxgkThreadTlsId, v4);
    v6 = v5;
    if ( v5 >= 0 )
    {
      ++dword_1C013B3F0;
      ++dword_1C013B3E8;
      v11 = v3;
      goto LABEL_7;
    }
    ReferenceCounted::Release((ReferenceCounted *)v3);
    WdLogSingleEntry2(2LL, v3, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to set thread PsTls for DXGTHREAD 0xI64x (Status = 0xI64x).",
      (__int64)v3,
      v6,
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
  v11 = 0LL;
  WdLogSingleEntry1(6LL, 455LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to create DXGTHREAD for current thread.",
    455LL,
    0LL,
    0LL,
    0LL,
    0LL);
  result = 3221225495LL;
  *a1 = 0LL;
  return result;
}
