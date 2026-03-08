/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferLA @ 0x1C0019F3C
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E44 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00389B8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferLA(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( *(_BYTE *)(a1 + 657) )
    v2 = *(_QWORD *)(a1 + 640);
  else
    v2 = *(_QWORD *)(a1 + 632);
  if ( v2 )
    return *(_QWORD *)(v2 + 24);
  return result;
}
