/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0021450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase4(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rax
  int v3; // edi
  int v4; // esi
  char v6; // r8
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  __int64 result; // rax
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF
  __int128 v18; // [rsp+60h] [rbp-38h]
  __int64 v19; // [rsp+70h] [rbp-28h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v6 = 0;
  v7 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v8 = v1[1];
    v6 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x57u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v6,
      v2,
      v7);
  *(_DWORD *)(a1 + 212) = 7;
  v19 = 0LL;
  v17 = 0LL;
  WORD1(v17) = 1;
  v18 = 0LL;
  v9 = AMLIGetParent(v1[95]);
  v10 = AMLIGetNamedChild(v9, 1598640991LL);
  AMLIDereferenceHandleEx(v9);
  if ( !v10 )
    goto LABEL_19;
  v11 = AMLIGetNamedChild(v10, 1414746975LL);
  AMLIDereferenceHandleEx(v10);
  if ( !v11 )
    goto LABEL_19;
  v12 = v3 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 && (v14 = v13 - 1) != 0 && (v15 = v14 - 1) != 0 )
      *(_QWORD *)&v18 = v15 == 1 ? 4LL : 0LL;
    else
      *(_QWORD *)&v18 = 3LL;
  }
  else
  {
    *(_QWORD *)&v18 = 1LL;
  }
  v4 = AMLIAsyncEvalObject(v11, 0, 1, (unsigned int)&v17, (__int64)ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx(v11);
  result = 259LL;
  if ( v4 != 259 )
  {
LABEL_19:
    ACPIDeviceCompleteGenericPhase(0LL, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
