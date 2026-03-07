__int64 __fastcall HvpGetCellPaged(ULONG_PTR BugCheckParameter3, unsigned int a2, unsigned int *a3)
{
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx

  if ( a2 == -1 )
    KeBugCheckEx(0x51u, 0x32uLL, 1uLL, BugCheckParameter3, 0xFFFFFFFFuLL);
  if ( HvShutdownComplete == 1 )
    return 0LL;
  v6 = a2 & 0xFFF;
  v7 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(632LL * (a2 >> 31) + BugCheckParameter3 + 288) + 8LL * ((a2 >> 21) & 0x3FF))
                + 24LL * ((a2 >> 12) & 0x1FF));
  v8 = HvpMapEntryGetBinAddress(BugCheckParameter3, v7, a3 + 1) + *v7;
  *a3 = a2;
  return v8 + v6 + 4;
}
