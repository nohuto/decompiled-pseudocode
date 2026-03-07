__int64 __fastcall HvpGetCellContextReinitialize(_QWORD *a1)
{
  *a1 = 0LL;
  *(_DWORD *)a1 = -1;
  return HvpGetBinContextInitialize((char *)a1 + 4);
}
