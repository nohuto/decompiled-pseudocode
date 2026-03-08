/*
 * XREFs of bSetDeviceSessionUsage @ 0x1C001F9F0
 * Callers:
 *     DrvCloseGraphicsDevices @ 0x1C000F140 (DrvCloseGraphicsDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00A0200 (DrvCleanupOneGraphicsDevice.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

__int64 __fastcall bSetDeviceSessionUsage(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  struct _DEVICE_OBJECT *v6; // rcx
  unsigned int v7; // ecx
  const CHAR *v8; // rcx
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  int InputBuffer; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+74h] [rbp+1Ch]

  if ( a1 == -4 || (*(_DWORD *)(a1 + 160) & 0x6000008) != 0 && (*(_DWORD *)(a1 + 160) & 0x800000) == 0 )
  {
    return 1;
  }
  else
  {
    v6 = *(struct _DEVICE_OBJECT **)(a1 + 136);
    v11 = 0;
    v4 = 1;
    InputBuffer = a2;
    if ( (int)GreDeviceIoControlImpl(v6, 0x23202Bu, &InputBuffer, 8u, &InputBuffer, 8u, &v9, 1u, 1) >= 0 )
    {
      if ( v11 )
      {
        v7 = *(_DWORD *)(a1 + 164) | 2;
        if ( !a2 )
          v7 = *(_DWORD *)(a1 + 164) & 0xFFFFFFFD;
        *(_DWORD *)(a1 + 164) = v7;
      }
      else
      {
        v8 = "Trying to enable physical device already in use.\n";
        if ( !a2 )
          v8 = "Trying to disable physical device not enabled in this session.\n";
        DbgPrint(v8);
      }
      return v11;
    }
  }
  return v4;
}
