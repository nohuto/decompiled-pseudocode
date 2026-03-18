/*
 * XREFs of IoctlFirmwareProcess @ 0x1C00029FC
 * Callers:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 * Callees:
 *     FirmwareGetInfo @ 0x1C0002AC0 (FirmwareGetInfo.c)
 *     FirmwareActivate @ 0x1C001A838 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C001AA58 (FirmwareDownload.c)
 */

__int64 __fastcall IoctlFirmwareProcess(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  unsigned int Info; // eax
  unsigned int v9; // edi

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = 16LL;
  }
  v6 = *(unsigned int *)(a2 + v5);
  if ( (unsigned int)v6 >= 0x34 )
  {
    v7 = (unsigned int)v4[11];
    if ( v6 >= v7 + (unsigned __int64)(unsigned int)v4[12]
      && v4[7]
      && (v4[10] & 1) != 0
      && (unsigned int)v7 >= 0x34
      && (v7 & 3) == 0 )
    {
      switch ( v4[9] )
      {
        case 1:
          Info = FirmwareGetInfo(a1, a2);
          goto LABEL_11;
        case 2:
          Info = FirmwareDownload(a1, a2);
LABEL_11:
          v9 = Info;
          if ( !Info )
            return v9;
          goto LABEL_20;
        case 3:
          Info = FirmwareActivate(a1, a2);
          goto LABEL_11;
      }
    }
    else
    {
      v4[5] = 3;
    }
  }
  *(_BYTE *)(a2 + 3) = 21;
  v9 = -1056964602;
LABEL_20:
  if ( *(_BYTE *)(a1 + 24) )
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return v9;
}
