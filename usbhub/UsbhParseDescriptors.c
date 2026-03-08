/*
 * XREFs of UsbhParseDescriptors @ 0x1C0032074
 * Callers:
 *     UsbhParseConfigurationDescriptorEx @ 0x1C0031F38 (UsbhParseConfigurationDescriptorEx.c)
 * Callees:
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

unsigned __int8 *__fastcall UsbhParseDescriptors(int a1, __int64 a2, unsigned int a3, unsigned __int8 *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r10
  __int64 v7; // rax
  unsigned __int8 *v8; // rcx

  v4 = 0LL;
  v5 = a2 + a3;
  if ( (unsigned __int64)a4 < v5 )
  {
    while ( v5 - (unsigned __int64)a4 >= 2 )
    {
      if ( a4[1] == 4 )
        return a4;
      v7 = *a4;
      if ( !(_BYTE)v7 )
      {
        UsbhException(a1, 0, 83, a2, a3, -1, -1, usbfile_usbd_c, 105, 0);
        return (unsigned __int8 *)v4;
      }
      v8 = &a4[v7];
      if ( a4 <= &a4[v7] )
      {
        a4 += v7;
        if ( (unsigned __int64)v8 < v5 )
          continue;
      }
      return (unsigned __int8 *)v4;
    }
  }
  return (unsigned __int8 *)v4;
}
