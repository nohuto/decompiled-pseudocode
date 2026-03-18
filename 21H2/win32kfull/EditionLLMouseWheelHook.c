/*
 * XREFs of EditionLLMouseWheelHook @ 0x1C01D41E0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C007FBC0 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     PhkFirstValid @ 0x1C00EA6F4 (PhkFirstValid.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C016A81A (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  int v4; // r14d
  __int64 v5; // xmm0_8
  char v7; // bp
  char v8; // bp
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  struct tagHOOK *Valid; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+48h] [rbp-50h]

  v4 = a4;
  v5 = *a3;
  v7 = *(_BYTE *)(a1 + 12);
  v18 = *((_DWORD *)a3 + 2);
  v8 = v7 & 1;
  v9 = (unsigned int)a2;
  v17 = v5;
  if ( (unsigned __int8)IsInputThread(a1, a2, a3, a4) )
    v10 = gptiRit;
  else
    v10 = gptiCurrent;
  Valid = (struct tagHOOK *)PhkFirstValid(v10, 14);
  if ( Valid )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v16, "LowLevelMouseWheelHook", 0LL);
    v12 = *(_QWORD *)(gptiCurrent + 1376LL);
    v15 = 0;
    *(_QWORD *)(gptiCurrent + 1376LL) = a1;
    v13 = xxxCallHook2(Valid, 0, v9, a1, &v15, 0);
    *(_QWORD *)(gptiCurrent + 1376LL) = v12;
    if ( v13 )
    {
LABEL_9:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v16);
      return 1LL;
    }
    if ( v4 && !IsGpqForegroundAccessibleOnInputThread(v8, (const struct tagUIPI_INFO_INT *)&v17) )
    {
      MSGLUA_GPQFOREGROUND();
      goto LABEL_9;
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v16);
  }
  return 0LL;
}
