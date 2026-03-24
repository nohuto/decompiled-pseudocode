/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C02A9EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C004BBA0 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C014C508 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C014D818 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A9CAC (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *this,
        struct _LUID *a2,
        __int64 a3,
        struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // r14d
  unsigned int v7; // ebp
  int Win32DpiValues; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _UNICODE_STRING *v25; // r9
  int v26; // eax
  _BYTE v27[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v28[40]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (unsigned int)a2;
  memset(v28, 0, 32);
  v7 = a3;
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v28, a3, (__int64)a4);
  v11 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    v27[0] = 0;
    v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v27, 0);
    v21 = v18;
    if ( v18 >= 0 )
    {
      UpdateScaleFactorForOverride(a4, v7, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v28);
      LODWORD(v21) = DpiPersistence::WriteDpiToRegistry(this, (const struct _LUID *)v4, v7, v25);
      if ( (int)v21 >= 0 )
      {
        v26 = dword_1C00B2A80;
        if ( (*((_BYTE *)a4 + 92) & 0x20) != 0 )
          v26 = v7;
        dword_1C00B2A80 = v26;
      }
      LogScaleFactor(*this, v4, 0, a4);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdError(v22);
    }
    if ( v27[0] )
      DxgkReleaseSessionModeChangeLock(v24, v23);
    return (unsigned int)v21;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13, v15, v16);
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
}
