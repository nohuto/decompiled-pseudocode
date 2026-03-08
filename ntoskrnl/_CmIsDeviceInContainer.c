/*
 * XREFs of _CmIsDeviceInContainer @ 0x1406C3C74
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x1406C3AD8 (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmIsDeviceInContainer(__int64 a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6, _BYTE *a7)
{
  _BYTE *v7; // r15
  _BYTE *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rsi
  int Value; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  HANDLE v15; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE v18; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v7 = a6;
  v9 = a7;
  v10 = a1;
  v19[0] = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  LODWORD(v20) = 0;
  *a6 = 0;
  *v9 = 0;
  if ( a1 )
    a1 = *(_QWORD *)(a1 + 224);
  v11 = 224LL;
  if ( v10 )
    v11 = v10 + 224;
  Value = SysCtxRegOpenKey(a1, a2, a3, 0, 1, (__int64)v19);
  if ( Value < 0
    || (!v10 ? (LODWORD(v13) = 0) : (v13 = *(_QWORD *)v11),
        (Value = SysCtxRegOpenKey(v13, v19[0], (unsigned int)L"BaseContainers", 0, 1, (__int64)&v18), Value < 0)
     || (!v10 ? (LODWORD(v14) = 0) : (v14 = *(_QWORD *)v11),
         (Value = SysCtxRegOpenKey(v14, (_DWORD)v18, a4, 0, 1, (__int64)&Handle), Value < 0)
      || (v15 = Handle, *v7 = 1, Value = RegRtlQueryValue(v15, (__int64)&v20), Value < 0))) )
  {
    if ( Value == -1073741772 || Value == -1073741444 )
      Value = 0;
  }
  else
  {
    *v9 = 1;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( v19[0] )
    ZwClose(v19[0]);
  return (unsigned int)Value;
}
