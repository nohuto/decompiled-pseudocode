/*
 * XREFs of ACPICacheCoherencyInterface @ 0x1C009A0F4
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0010C50 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPICacheCoherencyInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  int v4; // ecx
  char v6; // al

  v2 = *(_QWORD *)(a2 + 24);
  v3 = -1073741637;
  if ( *(_WORD *)(a2 + 16) < 0x28u )
    return (unsigned int)-1073741789;
  if ( *(_WORD *)(a2 + 18) && (*(_DWORD *)(a1 + 960) & 0x1000000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 900) - 2;
    if ( v4 )
    {
      if ( v4 != 1 )
        return v3;
      v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    *(_BYTE *)(v2 + 32) = v6;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = PciConfigPinToLine;
    v3 = 0;
    *(_QWORD *)(v2 + 24) = PciConfigPinToLine;
    *(_DWORD *)v2 = 65576;
  }
  return v3;
}
