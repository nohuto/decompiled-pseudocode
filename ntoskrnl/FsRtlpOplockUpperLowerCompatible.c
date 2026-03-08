/*
 * XREFs of FsRtlpOplockUpperLowerCompatible @ 0x1406B36C8
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x14023EEF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403B9C94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403CD730 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053BB78 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlCheckUpperOplock @ 0x14093AC60 (FsRtlCheckUpperOplock.c)
 *     FsRtlUpperOplockFsctrl @ 0x14093B1B0 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlpOplockUpperLowerCompatible(int a1, int a2)
{
  int v2; // ecx
  char result; // al

  v2 = a1 & 0x1701E;
  result = 1;
  if ( (v2 & 0xFFFEFFFF) == 0 )
    return result;
  switch ( a2 )
  {
    case 0:
      return 0;
    case 4096:
      goto LABEL_13;
    case 12288:
      if ( v2 == 12288 )
        return result;
LABEL_13:
      if ( v2 != 4096 && v2 != 16 )
        return 0;
      return result;
  }
  if ( a2 == 20480 && (v2 == 28672 || v2 == 12288 || v2 == 4) )
    return 0;
  return result;
}
