__int64 __fastcall ACPIBuildProcessThermalZoneFailure(_QWORD *Entry)
{
  __int64 v1; // rbx
  int v2; // r8d
  void *v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx

  v1 = Entry[5];
  v2 = 0;
  v4 = &unk_1C00622D0;
  if ( v1 )
  {
    v5 = *(_QWORD *)(v1 + 8);
    v2 = v1;
    if ( (v5 & 0x200000000000LL) != 0 && (v5 & 0x400000000000LL) != 0 )
      v4 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_LLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v4, v2, 72);
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  if ( *(_QWORD *)(v1 + 616) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 8), 0xFFFEBFFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 616), 0);
    *(_QWORD *)(v1 + 616) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 608) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 8), 0xFFFF5FFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 608), 0);
    *(_QWORD *)(v1 + 608) = 0LL;
  }
  v6 = *(void **)(v1 + 200);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(v1 + 200) = 0LL;
  }
  return ACPIBuildProcessGenericComplete(Entry);
}
