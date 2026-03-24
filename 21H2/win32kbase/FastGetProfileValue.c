/*
 * XREFs of FastGetProfileValue @ 0x1C000E9A0
 * Callers:
 *     InitScancodeMap @ 0x1C000D290 (InitScancodeMap.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C000DDE4 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlLoadStringOrError @ 0x1C000FAE0 (RtlLoadStringOrError.c)
 *     OpenCacheKeyEx @ 0x1C0026440 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall FastGetProfileValue(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        unsigned int Size,
        int a7)
{
  const WCHAR *v9; // r14
  __int64 i; // rax
  void *v12; // rsi
  ULONG *v13; // rbx
  NTSTATUS v14; // eax
  ULONG Length; // [rsp+30h] [rbp-91h] BYREF
  int v17; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v18; // [rsp+38h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-81h] BYREF
  __int128 v20; // [rsp+50h] [rbp-71h] BYREF
  _WORD v21[40]; // [rsp+60h] [rbp-61h] BYREF

  v18 = a2;
  Length = 0;
  v17 = a7 | gdwPolicyFlags;
  v9 = a3;
  DestinationString = 0LL;
  v20 = 0LL;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v21[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v21);
    v9 = v21;
  }
  for ( i = OpenCacheKeyEx(a1, a2, 131097LL, &v17); ; i = OpenCacheKeyEx(a1, v18, 131097LL, &v17) )
  {
    v12 = (void *)i;
    if ( !i )
    {
      if ( (a7 & 0x10) == 0 )
      {
LABEL_12:
        if ( v12 )
          ZwClose(v12);
        if ( a4 )
        {
          memmove(a5, a4, Size);
          return Size;
        }
      }
      return 0LL;
    }
    if ( Size )
    {
      Length = Size + 12;
      v13 = (ULONG *)Win32AllocPoolWithQuota(Size + 12, 1919972181LL);
      if ( !v13 )
        goto LABEL_12;
    }
    else
    {
      Length = 16;
      v13 = (ULONG *)&v20;
    }
    RtlInitUnicodeString(&DestinationString, v9);
    v14 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, v13, Length, &Length);
    if ( v14 >= 0 )
      break;
    if ( v14 == -2147483643 && !Size )
    {
      ZwClose(v12);
      return v13[2];
    }
    if ( !v17 )
    {
      if ( Size )
        Win32FreePool(v13);
      goto LABEL_12;
    }
    if ( Size )
      Win32FreePool(v13);
    ZwClose(v12);
  }
  Length = v13[2];
  memmove(a5, v13 + 3, Length);
  if ( Size )
    Win32FreePool(v13);
  ZwClose(v12);
  return Length;
}
