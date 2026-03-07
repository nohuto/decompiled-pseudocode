__int64 __fastcall HvpGetCellFlat(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, _DWORD *a3)
{
  __int64 v3; // rax

  if ( (_DWORD)BugCheckParameter4 == -1 )
    KeBugCheckEx(0x51u, 0x32uLL, 1uLL, BugCheckParameter3, 0xFFFFFFFFuLL);
  v3 = *(_QWORD *)(BugCheckParameter3 + 64) + 4100LL;
  *a3 = BugCheckParameter4;
  return (unsigned int)BugCheckParameter4 + v3;
}
