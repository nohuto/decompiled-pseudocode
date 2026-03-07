__int64 __fastcall HUBDSM_CheckingIfBootDeviceOnReset(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(v1 + 1636), 4u);
  return (*(_DWORD *)(*(_QWORD *)(v1 + 16) + 32LL) & 0x20) != 0 ? 4089 : 4061;
}
