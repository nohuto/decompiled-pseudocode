__int64 __fastcall HUBDSM_CheckingIfBootDeviceOnD0Exit(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0xFFFFFFBF);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0xFFFFDFFF);
  return (*(_DWORD *)(*(_QWORD *)(v1 + 16) + 32LL) & 0x20) != 0 ? 4089 : 4061;
}
