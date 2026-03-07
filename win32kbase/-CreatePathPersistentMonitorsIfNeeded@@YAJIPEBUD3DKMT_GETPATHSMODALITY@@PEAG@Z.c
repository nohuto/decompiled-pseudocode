__int64 __fastcall CreatePathPersistentMonitorsIfNeeded(
        __int64 a1,
        const struct D3DKMT_GETPATHSMODALITY *a2,
        unsigned __int16 *a3)
{
  int v5; // ebp
  unsigned int i; // r14d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 DxgkWin32kInterface; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]

  v5 = 0;
  if ( a3 )
    *a3 = 0;
  for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
  {
    v7 = 296LL * i;
    v8 = *(_QWORD *)((char *)a2 + v7 + 56);
    if ( (v8 & 0x1100000000000000LL) != 0x100000000000000LL )
    {
      if ( (v8 & 0x200000000000000LL) != 0 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8, 0x100000000000000LL);
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface + 224))(
               *(_QWORD *)((char *)a2 + v7 + 72),
               *(unsigned int *)((char *)a2 + v7 + 84),
               0LL,
               2LL,
               v14);
        if ( v5 < 0 )
        {
          WdLogSingleEntry4(
            4LL,
            *(int *)((char *)a2 + v7 + 76),
            *(unsigned int *)((char *)a2 + v7 + 72),
            *(unsigned int *)((char *)a2 + v7 + 84));
          return (unsigned int)v5;
        }
        if ( (*(_QWORD *)((_BYTE *)a2 + v7 + 56) & 0x1000000000000000LL) != 0 )
        {
          WdLogSingleEntry3(
            5LL,
            *(int *)((char *)a2 + v7 + 76),
            *(unsigned int *)((char *)a2 + v7 + 72),
            *(unsigned int *)((char *)a2 + v7 + 84));
        }
        else if ( a3 )
        {
          ++*a3;
        }
      }
      else
      {
        v10 = *(unsigned int *)((char *)a2 + v7 + 72);
        v11 = *(int *)((char *)a2 + v7 + 76);
        v12 = *(unsigned int *)((char *)a2 + v7 + 84);
        if ( (v8 & 0x1000000000000000LL) == 0 )
        {
          WdLogSingleEntry3(4LL, v12, v11, v10);
          return (unsigned int)-1073741811;
        }
        v14 = 1LL;
        WdLogSingleEntry4(4LL, v12, v11, v10);
      }
    }
  }
  return (unsigned int)v5;
}
