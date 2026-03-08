/*
 * XREFs of DpiLdaStopAllAdaptersInChain @ 0x1C03A4294
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapter @ 0x1C03A1DF4 (DpiKsrStopAdapter.c)
 * Callees:
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 */

__int64 __fastcall DpiLdaStopAllAdaptersInChain(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rbx
  unsigned int v3; // edi
  __int64 v6; // rax
  int v7; // ecx
  struct _DEVICE_OBJECT *v8; // r15
  _DWORD *v9; // rbp
  int v10; // ecx

  DeviceExtension = a1->DeviceExtension;
  v3 = 0;
  if ( *((_BYTE *)DeviceExtension + 508) != 1 )
  {
    v6 = DeviceExtension[341];
    if ( !v6 )
    {
      v7 = *((_DWORD *)DeviceExtension + 59);
      if ( v7 == 2 || *((_DWORD *)DeviceExtension + 60) == 2 && ((v7 - 3) & 0xFFFFFFFC) == 0 && v7 != 4 )
        DpiFdoStopAdapter(a1, a2);
      return 0LL;
    }
    DeviceExtension = *(_QWORD **)(v6 + 64);
  }
  if ( *((_DWORD *)DeviceExtension + 684) )
  {
    do
    {
      v8 = *(struct _DEVICE_OBJECT **)(DeviceExtension[341] + 8LL * v3);
      v9 = v8->DeviceExtension;
      v10 = v9[59];
      if ( v10 == 2 || v9[60] == 2 && ((v10 - 3) & 0xFFFFFFFC) == 0 && v10 != 4 )
      {
        DpiFdoStopAdapter(v8, a2);
        if ( v8 != a1 )
          v9[59] = 1;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)DeviceExtension + 684) );
  }
  return 0LL;
}
