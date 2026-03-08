/*
 * XREFs of Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C0030050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall Command_NvidiaGetFirmwareVersionCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  char v2; // cl
  __int64 v3; // rsi

  v1 = *(__int64 **)(a1 + 48);
  v2 = *((_BYTE *)v1 + 43);
  v3 = *v1;
  if ( v2 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v3 + 16),
        4,
        7,
        19,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        *((_BYTE *)v1 + 41),
        *((_DWORD *)v1 + 10));
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 328LL) = (unsigned __int8)*((_DWORD *)v1 + 10) | ((unsigned __int64)*((unsigned __int8 *)v1 + 41) << 8);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 16), 3, 7, 20, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids, v2);
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
