__int64 __fastcall HvpReleaseCellFlat(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  *(_DWORD *)a2 = -1;
  return HvpGetBinContextInitialize((char *)a2 + 4);
}
