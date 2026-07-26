/*
 * XREFs of ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0093E6C
 * Callers:
 *     ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B610 (-ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B9A4 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreQueryPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  unsigned int v7; // r10d
  int v8; // edx
  char v9; // r9
  _NDIS_PM_PARAMETERS *p_PMCurrentParameters; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int16 v13; // r8
  int v15; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = MiniportFromReqTracker;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x30u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)MiniportFromReqTracker,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  v7 = *(_DWORD *)(v1 + 48);
  v8 = 16;
  if ( v7 < 0x10 )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_17;
  }
  v9 = 2;
  if ( *(_DWORD *)(v1 + 4) == 2 )
  {
    p_PMCurrentParameters = &v6->PMCurrentParameters;
LABEL_13:
    v12 = *(_QWORD *)(v1 + 40);
    v13 = 20;
    *(_OWORD *)v12 = *(_OWORD *)&p_PMCurrentParameters->Header.Type;
    if ( v7 >= 0x14 )
    {
      v8 = 20;
      *(_DWORD *)(v12 + 16) = p_PMCurrentParameters->MediaSpecificWakeUpEvents;
    }
    else
    {
      v9 = 1;
      v13 = 16;
    }
    *(_BYTE *)v12 = 0x80;
    *(_WORD *)(v12 + 2) = v13;
    *(_BYTE *)(v12 + 1) = v9;
    *(_DWORD *)(v1 + 52) = v8;
    *(_DWORD *)(v1 + 56) = 0;
    goto LABEL_17;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v5 + 308);
    goto LABEL_13;
  }
  v11 = *((_QWORD *)a1 + 1);
  if ( v11 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    p_PMCurrentParameters = (_NDIS_PM_PARAMETERS *)(v11 + 736);
    goto LABEL_13;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_17:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = 1;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x31u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v6,
      *((_DWORD *)a1 + 10),
      v15);
  }
  return 1;
}
