/*
 * XREFs of PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x140998998
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x14073CD60 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopAdaptiveSetSystemInitiatedRebootTargetStateOverride(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 > 6 )
    return (unsigned int)-1073741811;
  v4 = 0;
  if ( !v2 && *(_BYTE *)(a1 + 8) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PopAcquireAdaptiveLock(1, a2);
    qword_140D53290 = ((unsigned __int8)qword_140D53290 ^ (unsigned __int8)*(_DWORD *)(a1 + 12)) & 7 ^ (unsigned __int64)qword_140D53290;
    qword_140D53290 = qword_140D53290 & 0xFFFFFFFFFFFFFFF7uLL | (*(_BYTE *)(a1 + 8) != 0 ? 8 : 0);
    PopReleaseAdaptiveLock();
  }
  return v4;
}
