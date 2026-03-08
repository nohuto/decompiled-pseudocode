/*
 * XREFs of ACPIBuildProcessDeviceFailure @ 0x1C000E680
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C0010C40 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C0014D18 (WPP_RECORDER_SF_LLqss.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceFailure(_QWORD *Entry)
{
  __int64 v1; // rbx
  void *v3; // r8
  __int64 v4; // rdx
  _UNKNOWN **v5; // rdx

  v1 = Entry[5];
  v3 = &unk_1C00622D0;
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 8);
    if ( (v4 & 0x200000000000LL) != 0 && (v4 & 0x400000000000LL) != 0 )
      v3 = *(void **)(v1 + 616);
  }
  v5 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_LLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v5, (_DWORD)v3, 26);
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  return ACPIBuildProcessGenericComplete(Entry);
}
