/*
 * XREFs of XmExecuteInt1a @ 0x1404E8114
 * Callers:
 *     XmIntOp @ 0x1404E6750 (XmIntOp.c)
 * Callees:
 *     XmInt1aFindPciClassCode @ 0x1404E81B8 (XmInt1aFindPciClassCode.c)
 *     XmInt1aFindPciDevice @ 0x1404E82DC (XmInt1aFindPciDevice.c)
 *     XmInt1aReadConfigRegister @ 0x1404E8408 (XmInt1aReadConfigRegister.c)
 *     XmInt1aWriteConfigRegister @ 0x1404E84F0 (XmInt1aWriteConfigRegister.c)
 */

char __fastcall XmExecuteInt1a(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  bool v5; // zf
  char v6; // al

  if ( XmPciBiosPresent && *(_BYTE *)(a1 + 25) == 0xB1 )
  {
    v1 = *(unsigned __int8 *)(a1 + 24);
    if ( v1 > 0xA )
    {
      if ( v1 <= 0xD )
      {
        XmInt1aWriteConfigRegister();
        return 1;
      }
      if ( v1 == 14 )
        goto LABEL_10;
      v5 = v1 == 15;
    }
    else
    {
      if ( v1 >= 8 )
      {
        XmInt1aReadConfigRegister();
        return 1;
      }
      v2 = v1 - 1;
      if ( !v2 )
      {
        v6 = XmNumberPciBusses;
        *(_DWORD *)(a1 + 16) &= ~1u;
        *(_BYTE *)(a1 + 28) = v6;
        *(_DWORD *)(a1 + 32) = 541672272;
        *(_WORD *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 36) = 528;
        return 1;
      }
      v3 = v2 - 1;
      if ( !v3 )
      {
        XmInt1aFindPciDevice();
        return 1;
      }
      v4 = v3 - 1;
      if ( !v4 )
      {
        XmInt1aFindPciClassCode();
        return 1;
      }
      v5 = v4 == 3;
    }
    if ( v5 )
    {
LABEL_10:
      *(_DWORD *)(a1 + 16) |= 1u;
      *(_BYTE *)(a1 + 25) = -127;
      return 1;
    }
  }
  return 0;
}
