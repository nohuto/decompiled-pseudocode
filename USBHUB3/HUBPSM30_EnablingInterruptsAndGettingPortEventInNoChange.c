__int64 __fastcall HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange(__int64 a1, __int64 a2, __int64 a3)
{
  return HUBHTX_Get30PortChangeEvent(*(_QWORD *)(a1 + 960), a2, a3);
}
