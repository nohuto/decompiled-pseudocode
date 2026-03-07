void __fastcall FxPkgPnp::RevertUsageNotificationFlags(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Type,
        unsigned __int8 InPath,
        unsigned int OldFlags)
{
  __int64 v4; // rcx
  int v5; // r9d

  FxPkgPnp::AdjustUsageCount(this, Type, InPath == 0);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 144LL) + 48LL) = v5;
}
