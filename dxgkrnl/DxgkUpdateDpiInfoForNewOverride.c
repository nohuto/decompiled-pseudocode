/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C02FE570
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C004BDCC (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C016750C (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0169530 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FDFD8 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *this,
        struct _LUID *a2,
        unsigned int a3,
        struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // ebp
  int Win32DpiValues; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct _UNICODE_STRING *v15; // r9
  int v16; // eax
  _BYTE v18[8]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v19[40]; // [rsp+58h] [rbp-30h] BYREF

  v4 = (unsigned int)a2;
  memset(v19, 0, 32);
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v19);
  v10 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    v18[0] = 0;
    v14 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v18, 0);
    v10 = v14;
    if ( v14 >= 0 )
    {
      UpdateScaleFactorForOverride(a4, a3, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v19);
      LODWORD(v10) = DpiPersistence::WriteDpiToRegistry(this, (const struct _LUID *)v4, a3, v15);
      if ( (int)v10 >= 0 )
      {
        v16 = dword_1C013B3E4;
        if ( (*((_BYTE *)a4 + 92) & 0x20) != 0 )
          v16 = a3;
        dword_1C013B3E4 = v16;
      }
      LogScaleFactor(*this, v4, 0LL, a4);
    }
    else
    {
      WdLogSingleEntry1(2LL, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v18[0] )
      DxgkReleaseSessionModeChangeLock();
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(2LL, v10, CurrentProcess);
    v13 = PsGetCurrentProcess(v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Couldn't obtain scale factor collection, Status=0x%I64x EPROCESS=0x%I64x",
      v10,
      v13,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v10;
}
