__int64 __fastcall IsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrentShared();
  return IsGpqForegroundAccessibleExplicit(
           a1,
           v2,
           *(_QWORD *)(*((_QWORD *)v2 + 53) + 864LL),
           *(_DWORD *)(*((_QWORD *)v2 + 53) + 12LL) & 0x80000000);
}
