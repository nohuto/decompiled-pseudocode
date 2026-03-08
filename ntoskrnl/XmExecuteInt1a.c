/*
 * XREFs of XmExecuteInt1a @ 0x140532794
 * Callers:
 *     XmIntOp @ 0x140531920 (XmIntOp.c)
 * Callees:
 *     XmInt1aFindPciClassCode @ 0x140532848 (XmInt1aFindPciClassCode.c)
 *     XmInt1aFindPciDevice @ 0x14053296C (XmInt1aFindPciDevice.c)
 *     XmInt1aReadConfigRegister @ 0x140532A98 (XmInt1aReadConfigRegister.c)
 *     XmInt1aWriteConfigRegister @ 0x140532B88 (XmInt1aWriteConfigRegister.c)
 */

char __fastcall XmExecuteInt1a(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  char v7; // al
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx

  if ( !XmPciBiosPresent || *(_BYTE *)(a1 + 25) != 0xB1 )
    return 0;
  v1 = *(unsigned __int8 *)(a1 + 24);
  if ( v1 > 0xA )
  {
    v8 = v1 - 11;
    if ( !v8 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 )
    {
      XmInt1aWriteConfigRegister();
      return 1;
    }
    if ( v10 - 1 > 1 )
      return 0;
  }
  else
  {
    if ( v1 == 10 )
    {
LABEL_15:
      XmInt1aReadConfigRegister();
      return 1;
    }
    v2 = v1 - 1;
    if ( !v2 )
    {
      v7 = XmNumberPciBusses;
      *(_DWORD *)(a1 + 16) &= ~1u;
      *(_BYTE *)(a1 + 28) = v7;
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
    v5 = v4 - 3;
    if ( v5 )
    {
      if ( v5 - 2 >= 2 )
        return 0;
      goto LABEL_15;
    }
  }
  *(_DWORD *)(a1 + 16) |= 1u;
  *(_BYTE *)(a1 + 25) = -127;
  return 1;
}
