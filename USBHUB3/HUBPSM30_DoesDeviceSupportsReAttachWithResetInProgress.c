__int64 __fastcall HUBPSM30_DoesDeviceSupportsReAttachWithResetInProgress(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1336LL) & 2) != 0 ? 3089 : 3005;
}
