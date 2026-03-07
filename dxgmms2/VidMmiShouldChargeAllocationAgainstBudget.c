bool __fastcall VidMmiShouldChargeAllocationAgainstBudget(__int64 **a1)
{
  __int64 v1; // r8

  v1 = **a1;
  return (*(_DWORD *)(v1 + 68) & 0x40) == 0 || *(_QWORD *)(a1[1][1] + 288) == **(_QWORD **)(v1 + 512);
}
