/*
 * XREFs of _CmIsDeviceInContainer @ 0x14075ACD4
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x14075AB3C (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmIsDeviceInContainer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  _BYTE *v7; // r14
  _BYTE *v9; // rsi
  __int64 v10; // rdi
  int Value; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const WCHAR *v15; // rdx
  HANDLE v16; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF

  v7 = a6;
  v9 = a7;
  v10 = a1;
  v19[0] = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  LODWORD(v20) = 0;
  *a6 = 0;
  *v9 = 0;
  if ( a1 )
    a1 = *(_QWORD *)(a1 + 224);
  Value = SysCtxRegOpenKey(a1, a2, a3, 0, 1u, (__int64)v19);
  if ( Value >= 0 )
  {
    v12 = v10 ? *(_QWORD *)(v10 + 224) : 0LL;
    Value = SysCtxRegOpenKey(v12, (__int64)v19[0], (__int64)L"BaseContainers", 0, 1u, (__int64)&Handle);
    if ( Value >= 0 )
    {
      v13 = v10 ? *(_QWORD *)(v10 + 224) : 0LL;
      Value = SysCtxRegOpenKey(v13, (__int64)Handle, a4, 0, 1u, (__int64)&KeyHandle);
      if ( Value >= 0 )
      {
        v15 = a5;
        v16 = KeyHandle;
        *v7 = 1;
        Value = RegRtlQueryValue(v16, v15, 0LL, 0LL, (unsigned int *)&v20);
        if ( Value >= 0 )
          *v9 = 1;
      }
    }
  }
  if ( Value == -1073741772 || Value == -1073741444 )
    Value = 0;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v19[0] )
    ZwClose(v19[0]);
  return (unsigned int)Value;
}
