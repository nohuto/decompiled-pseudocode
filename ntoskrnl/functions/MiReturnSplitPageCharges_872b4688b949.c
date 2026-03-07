unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // ebx

  v3 = a3;
  MiReturnCommit(a1, a2, a3);
  return MiReturnSystemCharges(a1, a2, v3);
}
