/*
 * XREFs of HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x1C008334C
 * Callers:
 *     HUBDSM_WritingCustomPropertiesInRegistry @ 0x1C0024BF0 (HUBDSM_WritingCustomPropertiesInRegistry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C00867FC (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBMISC_ParseAndWriteCustomPropertiesInRegistry(__int64 a1)
{
  __int64 v1; // rbp
  int v3; // ebx
  unsigned int v4; // esi
  const WCHAR *v5; // rdi
  __int64 v6; // rbx
  int v8; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 2112);
  v3 = 0;
  v4 = 0;
  v5 = (const WCHAR *)(v1 + 10);
  if ( *(_WORD *)(v1 + 8) )
  {
    while ( 1 )
    {
      DestinationString = 0LL;
      v6 = v5[4];
      RtlInitUnicodeString(&DestinationString, v5 + 5);
      v3 = HUBREG_WriteValueToDeviceHardwareKey(
             a1,
             (unsigned int)&DestinationString,
             *((_DWORD *)v5 + 1),
             *(_DWORD *)((char *)v5 + v6 + 10),
             (__int64)v5 + v6 + 14);
      if ( v3 < 0 )
        break;
      ++v4;
      v5 = (const WCHAR *)((char *)v5 + *(unsigned int *)v5);
      if ( v4 >= *(unsigned __int16 *)(v1 + 8) )
        return ((v3 >> 31) & 0xFFFFFFF4) + 4077;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x40u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        v8);
    }
  }
  return ((v3 >> 31) & 0xFFFFFFF4) + 4077;
}
