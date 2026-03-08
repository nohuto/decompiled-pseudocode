/*
 * XREFs of HvlpLogMicrocodeUpdateStatus @ 0x14093E204
 * Callers:
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14093E628 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpGetLogicalProcessorProperty @ 0x14053EAB4 (HvlpGetLogicalProcessorProperty.c)
 *     CmLogMcUpdateStatus @ 0x1406133DC (CmLogMcUpdateStatus.c)
 */

void HvlpLogMicrocodeUpdateStatus()
{
  unsigned int v0; // ebx
  ULONG *v1; // rdi
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  v0 = 0;
  memset(v2, 0, sizeof(v2));
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v1 = (ULONG *)dword_140D2A9B4;
    do
    {
      HvlpGetLogicalProcessorProperty(*v1, 1, v2);
      if ( (int)CmLogMcUpdateStatus(*v1, (__int64)v2) < 0 )
        break;
      ++v0;
      v1 += 30;
    }
    while ( v0 < (unsigned int)HvlpLogicalProcessorCount );
  }
}
