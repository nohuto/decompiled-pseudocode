/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001F100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdqss @ 0x1C0009EDC (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0022C78 (WPP_RECORDER_SF_qLdqss.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v5; // ecx
  int v6; // r15d
  __int64 v7; // r14
  int v8; // eax
  __int64 *v9; // rdi
  _DWORD *v10; // rbx
  const char *v11; // rax
  const char *v12; // rdx
  char v14; // r10
  void *v15; // rax
  void *v16; // rdx
  int v17; // [rsp+20h] [rbp-58h]

  v3 = *(_QWORD *)(a1 + 40);
  v5 = *(_DWORD *)(a1 + 104);
  v6 = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 56);
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_WORD *)(a1 + 218) = 1;
  if ( v5 == 1 || (v8 & 0x10) != 0 )
  {
    v10 = (_DWORD *)(a1 + 212);
    *(_DWORD *)(a1 + 212) = 6;
    v9 = (__int64 *)(v3 + 8);
    goto LABEL_17;
  }
  v9 = (__int64 *)(v3 + 8);
  v10 = (_DWORD *)(a1 + 212);
  if ( _bittest64((const signed __int64 *)(v3 + 8), 0x33u) )
  {
    *v10 = 5;
    goto LABEL_17;
  }
  *v10 = 4;
  if ( v5 != 4 )
  {
LABEL_17:
    v14 = 0;
    v15 = &unk_1C00622D0;
    v16 = &unk_1C00622D0;
    if ( v3 )
    {
      a3 = *v9;
      v14 = v3;
      if ( (*v9 & 0x200000000000LL) != 0 )
      {
        v15 = *(void **)(v3 + 608);
        if ( (a3 & 0x400000000000LL) != 0 )
          v16 = *(void **)(v3 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLdqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v16,
        a3,
        56,
        v17,
        a1,
        v6,
        *v10,
        v14,
        (__int64)v15,
        (__int64)v16);
    ACPIDeviceCompleteGenericPhase(v7, v6, 0LL, a1);
    if ( v7 )
      AMLIDereferenceHandleEx(v7);
    return 0LL;
  }
  v7 = AMLIGetNamedChild(*(_QWORD *)(v3 + 760), 1397310559LL);
  if ( !v7 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1008LL), 0x100uLL);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(v3 + 1008) & 0x100LL) != 0 )
    goto LABEL_17;
  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1008LL), 0x100uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v6 = AMLIAsyncEvalObject(v7, 0, 0, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx(v7);
  v7 = 0LL;
  if ( v6 != 259 )
    goto LABEL_17;
  v11 = (const char *)&unk_1C00622D0;
  v12 = (const char *)&unk_1C00622D0;
  if ( (*v9 & 0x200000000000LL) != 0 )
  {
    v11 = *(const char **)(v3 + 608);
    if ( (*v9 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(v3 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v12,
      0xAu,
      0x37u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      *v10,
      v3,
      v11,
      v12);
  return 259LL;
}
