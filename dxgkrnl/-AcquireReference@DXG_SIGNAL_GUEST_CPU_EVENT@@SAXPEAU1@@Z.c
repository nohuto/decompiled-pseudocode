void __fastcall DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(struct DXG_SIGNAL_GUEST_CPU_EVENT *a1)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)a1 + 5) == 1 )
    _InterlockedAdd(&g_VgpuNumGuestCpuEventObjects, 1u);
}
