__int64 __fastcall FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(FxPkgPnp *this)
{
  __int64 result; // rax
  __int32 v2; // eax
  __int64 v3; // r10
  __int64 v4; // r11

  if ( !this->m_PendingDevicePowerIrp )
    return 5LL;
  v2 = FxPkgPnp::GetSystemPowerAction(this) - 4;
  if ( v2 && (unsigned int)(v2 - 1) >= 2 )
    result = *(unsigned int *)(*(_QWORD *)(v4 + 184) + 24LL);
  else
    result = 5LL;
  if ( *(_BYTE *)(v3 + 157) == 5 )
  {
    if ( *(_DWORD *)(v3 + 284) )
      return 6LL;
  }
  return result;
}
