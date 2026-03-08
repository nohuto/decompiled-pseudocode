/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801D7784
 * Callers:
 *     ?reserve_region@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCpuClipStackState@CScopedClipStack@@_K0@Z @ 0x1800220F4 (-reserve_region@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStac.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v4; // r11
  signed __int64 v6; // r10
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 i; // r9
  _QWORD *v11; // rcx
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v4 = a4 + 2;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a3 - a2) >> 3);
  if ( v6 < 0 )
  {
    if ( *v4 >= (unsigned __int64)(0x3333333333333333LL * ((a3 - a2) >> 3)) )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - *v4 < (unsigned __int64)v6 )
    goto LABEL_8;
LABEL_3:
  v8 = a2 + 8;
  v9 = *a4;
  for ( i = *a4 + 40LL * *v4; ; i += 40LL )
  {
    v11 = (_QWORD *)(v8 - 8);
    if ( v8 - 8 == a3 )
      break;
    *(_QWORD *)i = *v11;
    *(_BYTE *)(i + 8) = *(_BYTE *)v8;
    *v11 = 0LL;
    *(_BYTE *)v8 = 0;
    *(_QWORD *)(i + 16) = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(i + 24) = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(i + 32) = *(_DWORD *)(v8 + 24);
    *(_BYTE *)(i + 36) = *(_BYTE *)(v8 + 28);
    v8 += 40LL;
  }
  result = a1;
  *v4 = 0xCCCCCCCCCCCCCCCDuLL * ((i - v9) >> 3);
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
