/*
 * XREFs of DebugOutPort @ 0x1C004DCE0
 * Callers:
 *     DebugO @ 0x1C004DC80 (DebugO.c)
 *     DebugOD @ 0x1C004DCA0 (DebugOD.c)
 *     DebugOW @ 0x1C004DCC0 (DebugOW.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0001A79 (_strtoui64_0.c)
 *     WriteSystemIO @ 0x1C000624C (WriteSystemIO.c)
 *     IsNumber @ 0x1C004E1D4 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C00709E4 == 2 )
    {
LABEL_9:
      dword_1C00709E4 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0, 0, 0, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C00709E4 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C00709E4 == 1 )
    dword_1C0070098 = v5;
  else
    WriteSystemIO(dword_1C0070098, a2, v5);
  return v2;
}
