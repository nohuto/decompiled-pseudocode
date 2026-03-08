/*
 * XREFs of HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried @ 0x1C0024850
 * Callers:
 *     <none>
 * Callees:
 *     HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey @ 0x1C0085F58 (HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey.c)
 */

__int64 __fastcall HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey(v1);
  v2 = *(_DWORD *)(v1 + 1632);
  if ( (v2 & 4) != 0 || (*(_DWORD *)(v1 + 2464) & 1) != 0 )
    goto LABEL_8;
  if ( (*(_DWORD *)(v1 + 1644) & 2) != 0 && (v2 & 0x200) == 0 )
  {
    result = 4089LL;
    goto LABEL_9;
  }
  if ( (unsigned __int16)(*(_WORD *)(v1 + 1990) - 256) <= 0xFFu || (result = 4089LL, (v2 & 0x280) != 0) )
LABEL_8:
    result = 4061LL;
LABEL_9:
  _InterlockedOr((volatile signed __int32 *)(v1 + 1636), 0x20000u);
  return result;
}
