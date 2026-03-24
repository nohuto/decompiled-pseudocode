/*
 * XREFs of DebugInPort @ 0x1C0066040
 * Callers:
 *     DebugI @ 0x1C0065FE0 (DebugI.c)
 *     DebugID @ 0x1C0066000 (DebugID.c)
 *     DebugIW @ 0x1C0066020 (DebugIW.c)
 * Callees:
 *     ReadSystemIO @ 0x1C0027528 (ReadSystemIO.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C0031D29 (_strtoui64_0.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 *     IsNumber @ 0x1C0066824 (IsNumber.c)
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
    if ( byte_1C00834A8 )
    {
      byte_1C00834A8 = 0;
      return v2;
    }
LABEL_13:
    PrintDebugMessage(220, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-2;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( byte_1C00834A8 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_13;
  SystemIO = ReadSystemIO(v5, a2, -1);
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
  byte_1C00834A8 = 1;
  return v2;
}
