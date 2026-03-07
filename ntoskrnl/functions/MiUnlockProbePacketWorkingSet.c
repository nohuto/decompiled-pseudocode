__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v1);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(_BYTE *)(a1 + 76));
}
