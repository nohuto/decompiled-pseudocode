/*
 * XREFs of EngDeviceIoControl @ 0x1C0196CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

DWORD __stdcall EngDeviceIoControl(
        HANDLE hDevice,
        DWORD dwIoControlCode,
        LPVOID lpInBuffer,
        DWORD cjInBufferSize,
        LPVOID lpOutBuffer,
        DWORD cjOutBufferSize,
        LPDWORD lpBytesReturned)
{
  DWORD v7; // ebx
  DWORD v8; // eax

  v7 = 0;
  v8 = GreDeviceIoControlImpl(
         (PDEVICE_OBJECT)hDevice,
         dwIoControlCode,
         lpInBuffer,
         cjInBufferSize,
         lpOutBuffer,
         cjOutBufferSize,
         lpBytesReturned,
         0,
         1);
  switch ( v8 )
  {
    case 0x80000005:
      return 234;
    case 0xC0000002:
      return 1;
    case 0xC000000D:
      return 87;
    case 0xC0000023:
      return 122;
    case 0xC000009A:
      return 8;
    case 0xC00000C0:
      return 55;
  }
  if ( v8 )
  {
    v7 = 997;
    if ( v8 != 259 )
      return v8;
  }
  return v7;
}
