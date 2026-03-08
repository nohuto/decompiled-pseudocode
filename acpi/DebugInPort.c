/*
 * XREFs of DebugInPort @ 0x1C004DA10
 * Callers:
 *     DebugI @ 0x1C004D9B0 (DebugI.c)
 *     DebugID @ 0x1C004D9D0 (DebugID.c)
 *     DebugIW @ 0x1C004D9F0 (DebugIW.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0001A79 (_strtoui64_0.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     IsNumber @ 0x1C004E1D4 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     ReadSystemIO @ 0x1C0052EDC (ReadSystemIO.c)
 */

__int64 __fastcall DebugInPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  unsigned int SystemIO; // esi
  unsigned int v7; // edi
  unsigned int v8; // edi

  v2 = 0;
  if ( !a1 )
  {
    if ( byte_1C00709F8 )
    {
      byte_1C00709F8 = 0;
      return v2;
    }
LABEL_13:
    PrintDebugMessage(220, 0, 0, 0, 0LL);
    return (unsigned int)-2;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( byte_1C00709F8 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_13;
  SystemIO = ReadSystemIO(v5, a2, 0xFFFFFFFFLL);
  ConPrintf("%04x: ", v5);
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 2 )
        ConPrintf("%08x", SystemIO);
    }
    else
    {
      ConPrintf("%04x", (unsigned __int16)SystemIO);
    }
  }
  else
  {
    ConPrintf("%02x", (unsigned __int8)SystemIO);
  }
  ConPrintf("\n");
  byte_1C00709F8 = 1;
  return v2;
}
