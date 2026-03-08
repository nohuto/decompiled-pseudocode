/*
 * XREFs of EditionLLMouseButtonHook @ 0x1C01AD480
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C00368A8 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D6A80 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00F02AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C014242C (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // ebp
  struct tagHOOK *Valid; // r12
  __int64 v11; // rax
  bool v12; // dl
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+34h] [rbp-54h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h]

  v20 = a3;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v7 = *(_QWORD *)(a1 + 80);
  else
    v7 = 0LL;
  if ( (unsigned __int8)IsInputThread(a1, a2, a3) )
    v8 = gptiRit;
  else
    v8 = gptiCurrent;
  v9 = *(_DWORD *)(a2 + 12) & 1;
  Valid = (struct tagHOOK *)PhkFirstValid(v8, 14);
  if ( Valid )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v22, "LowLevelMouseButtonHook", 0LL);
    v11 = *(_QWORD *)(gptiCurrent + 1416LL);
    v12 = 0;
    v21 = 0;
    v13 = *(_QWORD *)(gptiCurrent + 1400LL);
    v14 = *(_QWORD *)(gptiCurrent + 1408LL);
    v23 = v11;
    *(_QWORD *)(gptiCurrent + 1416LL) = a2;
    if ( v7 )
    {
      v15 = *(_QWORD **)(*(_QWORD *)(v7 + 16) + 424LL);
      if ( *v15 == gpepCSRSS )
      {
        *(_DWORD *)(gptiCurrent + 1412LL) = 0;
        *(_DWORD *)(gptiCurrent + 1408LL) = 0x2000;
      }
      else
      {
        *(_QWORD *)(gptiCurrent + 1408LL) = v15[108];
      }
      v12 = 1;
    }
    else
    {
      *(_DWORD *)(gptiCurrent + 1408LL) = -1;
      *(_DWORD *)(gptiCurrent + 1412LL) = -1;
    }
    if ( !v9 || *(_DWORD *)(a4 + 8) )
    {
      *(_DWORD *)(gptiCurrent + 1400LL) = -1;
      *(_DWORD *)(gptiCurrent + 1404LL) = -1;
    }
    else
    {
      *(_QWORD *)(gptiCurrent + 1400LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 864LL);
    }
    v16 = xxxCallHook2(Valid, 0, v20, a2, &v21, v12);
    v17 = v23;
    *(_QWORD *)(gptiCurrent + 1400LL) = v13;
    *(_QWORD *)(gptiCurrent + 1408LL) = v14;
    *(_QWORD *)(gptiCurrent + 1416LL) = v17;
    if ( v16 )
      goto LABEL_19;
    if ( a5 && !IsGpqForegroundAccessibleOnInputThread(v9, (const struct tagUIPI_INFO_INT *)a4) )
    {
      MSGLUA_GPQFOREGROUND(v19);
LABEL_19:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
      return 1LL;
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
  }
  return 0LL;
}
