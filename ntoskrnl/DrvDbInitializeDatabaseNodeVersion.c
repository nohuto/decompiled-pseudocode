/*
 * XREFs of DrvDbInitializeDatabaseNodeVersion @ 0x140A6B0E0
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x140865BC0 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407FFABC (DrvDbSetDriverDatabaseMappedProperty.c)
 */

__int64 __fastcall DrvDbInitializeDatabaseNodeVersion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  v4 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)a1 )
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
  else
    v5 = 0LL;
  v6 = SysCtxRegOpenKey(v5, v4, 0LL, 0, 2u, (__int64)&Handle);
  if ( v6 >= 0 )
  {
    v6 = DrvDbSetDriverDatabaseMappedProperty(
           a1,
           *(const wchar_t **)(a2 + 24),
           Handle,
           (__int64)DEVPKEY_DriverDatabase_Version,
           7u,
           (const WCHAR *)(a2 + 68),
           4u);
    if ( v6 >= 0 )
      v6 = DrvDbSetDriverDatabaseMappedProperty(
             a1,
             *(const wchar_t **)(a2 + 24),
             Handle,
             (__int64)DEVPKEY_DriverDatabase_SchemaVersion,
             7u,
             (const WCHAR *)(a2 + 72),
             4u);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
