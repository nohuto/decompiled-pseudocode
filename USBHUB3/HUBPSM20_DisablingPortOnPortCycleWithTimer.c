__int64 __fastcall HUBPSM20_DisablingPortOnPortCycleWithTimer(__int64 a1)
{
  HUBHTX_DisablePortUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
