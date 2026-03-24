/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001BE00
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C001D964 (WPP_RECORDER_SF_qLdqss.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C001E11C (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FEE0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v6; // ecx
  unsigned int v7; // ebp
  __int64 *v8; // rsi
  int v9; // eax
  int v10; // r8d
  void *v11; // rax
  void *v12; // rdx
  __int64 v13; // r9
  __int64 v15; // r8
  void *v16; // rax
  void *v17; // rdx
  __int64 (__fastcall *v18)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 40);
  v6 = *(_DWORD *)(a1 + 104);
  v7 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 56);
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_WORD *)(a1 + 218) = 1;
  if ( v6 == 1 || (v9 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 6;
    goto LABEL_3;
  }
  if ( (*(_QWORD *)(v4 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 5;
LABEL_3:
    v10 = 0;
    v11 = &unk_1C00701BA;
    v12 = &unk_1C00701BA;
    if ( v4 )
    {
      v13 = *(_QWORD *)(v4 + 8);
      v10 = v4;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v11 = *(void **)(v4 + 568);
        if ( (v13 & 0x400000000000LL) != 0 )
          v12 = *(void **)(v4 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLdqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v12,
        v10,
        56,
        (_DWORD)v18,
        a1,
        v7,
        *(_DWORD *)(a1 + 212),
        v10,
        (__int64)v11,
        (__int64)v12);
    ACPIDeviceCompleteGenericPhase(v8, v7, 0LL, a1);
    if ( v8 )
      AMLIDereferenceHandleEx((__int64)v8);
    return 0LL;
  }
  *(_DWORD *)(a1 + 212) = 4;
  if ( v6 != 4 )
    goto LABEL_3;
  v8 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v4 + 720), 1397310559LL, a3, a4);
  if ( !v8 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 960LL), 0x100uLL);
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v4 + 960) & 0x100LL) != 0 )
    goto LABEL_3;
  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 960LL), 0x100uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v18 = ACPIDeviceCompleteGenericPhase;
  v7 = AMLIAsyncEvalObject(v8, 0LL, 0, 0LL);
  AMLIDereferenceHandleEx((__int64)v8);
  v8 = 0LL;
  if ( v7 != 259 )
    goto LABEL_3;
  v15 = *(_QWORD *)(v4 + 8);
  v16 = &unk_1C00701BA;
  v17 = &unk_1C00701BA;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v16 = *(void **)(v4 + 568);
    if ( (v15 & 0x400000000000LL) != 0 )
      v17 = *(void **)(v4 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v17,
      10,
      55,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      *(_DWORD *)(a1 + 212),
      v4,
      (__int64)v16,
      (__int64)v17);
  return 259LL;
}
