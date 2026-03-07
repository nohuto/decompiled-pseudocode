__int64 __fastcall ViThunkCreateSharedExportInformation(__int64 a1, __int64 a2, __int64 a3, RTL_BITMAP *a4, void **a5)
{
  unsigned int v8; // ebx
  ULONG v9; // eax
  __int64 v10; // rbp
  void *Pool2; // rax
  __int64 v12; // r8

  v8 = 1;
  v9 = RtlNumberOfClearBits(a4);
  v10 = v9;
  if ( v9 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 24LL * v9, 0x54496656u);
    *a5 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 24 * v10);
      if ( !(unsigned int)ViThunkSnapSharedExports(a1, a2, v12, a4, v10, *a5) )
        ViThunkFreeSharedThunksArray(a5);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return v8;
}
