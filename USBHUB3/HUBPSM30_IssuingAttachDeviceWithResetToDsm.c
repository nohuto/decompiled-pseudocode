__int64 __fastcall HUBPSM30_IssuingAttachDeviceWithResetToDsm(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 1328) + 1636LL), 8u);
  *(_DWORD *)(*(_QWORD *)(v1 + 1328) + 1456LL) |= 0x20800u;
  return HUBMISC_AttachDevice();
}
