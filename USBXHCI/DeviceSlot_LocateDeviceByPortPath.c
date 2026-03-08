/*
 * XREFs of DeviceSlot_LocateDeviceByPortPath @ 0x1C0037CFC
 * Callers:
 *     Crashdump_InitializeDeviceContext @ 0x1C004C684 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C0038210 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 */

__int64 __fastcall DeviceSlot_LocateDeviceByPortPath(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // eax

  v3 = 1;
  if ( *(_DWORD *)(a1 + 96) )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(a1) + 8LL * v3);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 36);
        if ( v9 == *(_DWORD *)(a2 + 4)
          && RtlCompareMemory((const void *)(v8 + 44), (const void *)(a2 + 12), 4LL * v9) == 4LL
                                                                                           * *(unsigned int *)(v8 + 36) )
        {
          break;
        }
      }
      if ( ++v3 > *(_DWORD *)(a1 + 96) )
        return (unsigned int)-1073741275;
    }
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v7;
}
