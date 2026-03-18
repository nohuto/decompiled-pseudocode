/*
 * XREFs of UsbhParseConfigurationDescriptorEx @ 0x1C003156C
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C00293DC (UsbhConfigureUsbHub.c)
 *     UsbhGetDeviceInformation @ 0x1C0037880 (UsbhGetDeviceInformation.c)
 * Callees:
 *     UsbhParseDescriptors @ 0x1C00316BC (UsbhParseDescriptors.c)
 */

_BYTE *__fastcall UsbhParseConfigurationDescriptorEx(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  _BYTE *v8; // rdi
  unsigned __int64 v9; // rbx
  _BYTE *v13; // rax

  v8 = 0LL;
  v9 = a2 + *(unsigned __int16 *)(a2 + 2);
  do
  {
    v13 = (_BYTE *)UsbhParseDescriptors(a1, a2, *(unsigned __int16 *)(a2 + 2));
    if ( !v13 )
      break;
    v8 = v13;
    if ( a4 != -1
      && (v9 < (unsigned __int64)v13
       || (__int64)(v9 - (_QWORD)v13) > 0xFFFF
       || v9 - (unsigned __int64)v13 < 3
       || (unsigned __int8)v13[2] != a4) )
    {
      v8 = 0LL;
    }
    if ( a6 != -1
      && (v9 < (unsigned __int64)v13
       || (__int64)(v9 - (_QWORD)v13) > 0xFFFF
       || v9 - (unsigned __int64)v13 < 6
       || (unsigned __int8)v13[5] != a6) )
    {
      v8 = 0LL;
    }
    if ( a7 != -1
      && (v9 < (unsigned __int64)v13
       || (__int64)(v9 - (_QWORD)v13) > 0xFFFF
       || v9 - (unsigned __int64)v13 < 7
       || (unsigned __int8)v13[6] != a7) )
    {
      v8 = 0LL;
    }
    if ( a8 != -1
      && (v9 < (unsigned __int64)v13
       || (__int64)(v9 - (_QWORD)v13) > 0xFFFF
       || v9 - (unsigned __int64)v13 < 8
       || (unsigned __int8)v13[7] != a8) )
    {
      v8 = 0LL;
    }
  }
  while ( !v8 && *v13 );
  return v8;
}
