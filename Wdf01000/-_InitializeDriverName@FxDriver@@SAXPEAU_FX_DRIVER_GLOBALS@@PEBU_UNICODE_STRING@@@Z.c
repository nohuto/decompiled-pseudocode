/*
 * XREFs of ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00404D4
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0037350 (imp_WdfDriverCreate.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C0017958 (RtlStringCopyWorkerA.c)
 */

void __fastcall FxDriver::_InitializeDriverName(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegistryPath)
{
  char *DriverName; // r10
  __int64 v3; // r8
  wchar_t *Buffer; // r9
  unsigned __int64 v6; // rdx
  wchar_t *i; // rcx
  _WORD *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned int j; // r9d

  DriverName = FxDriverGlobals->Public.DriverName;
  v3 = 0LL;
  *(_OWORD *)FxDriverGlobals->Public.DriverName = 0LL;
  *(_OWORD *)&FxDriverGlobals->Public.DriverName[16] = 0LL;
  if ( RegistryPath )
  {
    Buffer = RegistryPath->Buffer;
    v6 = (unsigned __int64)&Buffer[(unsigned __int64)RegistryPath->Length >> 1];
    for ( i = (wchar_t *)(v6 - 2); *i != 92; --i )
    {
      if ( i == Buffer )
        goto LABEL_14;
    }
    if ( i == Buffer || *i != 92 )
    {
LABEL_14:
      RtlStringCopyWorkerA(DriverName, v6, 0LL, "WDF");
      return;
    }
    v8 = i + 1;
    v9 = (__int64)(v6 - (_QWORD)v8) >> 1;
    if ( v9 <= 0x1F )
    {
      if ( !v9 )
        return;
    }
    else
    {
      v9 = 31LL;
    }
    for ( j = 0; j < v9; v3 = j )
    {
      ++j;
      FxDriverGlobals->Public.DriverName[v3] = v8[v3];
    }
  }
}
