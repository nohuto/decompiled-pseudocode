NTSTATUS __fastcall ACPIAmliDoubleToName(_BYTE *a1, unsigned int a2)
{
  *a1 = ((a2 >> 2) & 0x1F) + 64;
  a1[1] = ((a2 >> 13) & 7) + 8 * ((a2 & 3) + 8);
  a1[2] = (BYTE1(a2) & 0x1F) + 64;
  return RtlStringCchPrintfA(a1 + 3, 5uLL, "%02X%02X", BYTE2(a2), HIBYTE(a2));
}
