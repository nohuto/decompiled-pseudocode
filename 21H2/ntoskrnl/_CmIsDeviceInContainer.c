/*
 * XREFs of _CmIsDeviceInContainer @ 0x14076CFE4
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x14076CE48 (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmIsDeviceInContainer(__int64 a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6, _BYTE *a7)
{
  _BYTE *v7; // r14
  _BYTE *v9; // rsi
  __int64 v10; // rdi
  int Value; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  HANDLE v14; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE v17; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  v7 = a6;
  v9 = a7;
  v10 = a1;
  v18[0] = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  LODWORD(v19) = 0;
  *a6 = 0;
  *v9 = 0;
  if ( a1 )
    a1 = *(_QWORD *)(a1 + 224);
  Value = SysCtxRegOpenKey(a1, a2, a3, 0, 1, (__int64)v18);
  if ( Value < 0
    || (!v10 ? (LODWORD(v12) = 0) : (v12 = *(_QWORD *)(v10 + 224)),
        (Value = SysCtxRegOpenKey(v12, v18[0], (unsigned int)L"BaseContainers", 0, 1, (__int64)&v17), Value < 0)
     || (!v10 ? (LODWORD(v13) = 0) : (v13 = *(_QWORD *)(v10 + 224)),
         (Value = SysCtxRegOpenKey(v13, (_DWORD)v17, a4, 0, 1, (__int64)&Handle), Value < 0)
      || (v14 = Handle, *v7 = 1, Value = RegRtlQueryValue(v14, (__int64)&v19), Value < 0))) )
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
  if ( v17 )
    ZwClose(v17);
  if ( v18[0] )
    ZwClose(v18[0]);
  return (unsigned int)Value;
}
