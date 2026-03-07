__int64 __fastcall MiFlushFileOnlyMdl(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rsi

  if ( (*(_BYTE *)(*(_QWORD *)BugCheckParameter2 + 62LL) & 0xC) == 8 )
  {
    MiTransferFileExtent((PMDL)a2, BugCheckParameter2, a6);
    if ( *(_DWORD *)a6 || *(_QWORD *)(a6 + 8) != *(_DWORD *)(a2 + 40) )
      KeBugCheckEx(0x1Au, 0x14001uLL, BugCheckParameter2, a3, a2);
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 44);
    v9 = *(_DWORD *)(a2 + 32);
    v10 = *(unsigned int *)(a2 + 40);
    *(_QWORD *)(a6 + 8) = 0LL;
    *(_DWORD *)a6 = 0;
    MiPersistMdl((PMDL)a2);
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = (v10 + 4095 + (((_WORD)v8 + (_WORD)v9) & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL;
  }
  return 0LL;
}
