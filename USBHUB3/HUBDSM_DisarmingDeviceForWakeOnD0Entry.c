__int64 __fastcall HUBDSM_DisarmingDeviceForWakeOnD0Entry(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_CompleteWaitWake(v1);
  HUBDTX_DisarmDeviceForWakeUsingControlTransfer(v1);
  return 1000LL;
}
