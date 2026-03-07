__int64 __fastcall HUBPSM20_GettingPortLostChangesOnStart(__int64 a1, __int64 a2, __int64 a3)
{
  return HUBHTX_GetPortLostChangeEvent(*(_QWORD *)(a1 + 960), a2, a3);
}
