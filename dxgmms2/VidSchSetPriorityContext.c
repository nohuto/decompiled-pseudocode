__int64 __fastcall VidSchSetPriorityContext(struct _VIDSCH_CONTEXT *a1, int a2, int a3, int a4)
{
  __int64 v6; // rdx
  int v7; // edi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0;
  if ( !a1 )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return v9;
  }
  v6 = *((_QWORD *)a1 + 13);
  if ( *(_BYTE *)(v6 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
  {
    v9 = -1071775232;
    WdLogSingleEntry2(3LL, v6, -1071775232LL);
    return v9;
  }
  v7 = VidSchiComputePriority((_DWORD)a1, a2, a3, a4, (__int64)&v11);
  if ( v7 >= 0 )
  {
    VidSchiSetPriorityContext(a1, v11);
    *((_DWORD *)a1 + 99) = a2;
  }
  return (unsigned int)v7;
}
