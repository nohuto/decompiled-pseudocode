void __fastcall DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(struct DXG_SIGNAL_GUEST_CPU_EVENT *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 5, 0xFFFFFFFF) == 1 )
  {
    ExFreePoolWithTag(a1, 0);
    _InterlockedDecrement(&g_VgpuNumGuestCpuEventObjects);
  }
}
