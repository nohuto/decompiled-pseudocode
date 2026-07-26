/*
 * XREFs of ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0037080
 * Callers:
 *     ?ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0036F50 (-ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisOidPostOpenSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xACu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      *(_QWORD *)(v3 + 16),
      v1,
      v3);
  v4 = *(_QWORD *)(v3 + 696);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 64);
    if ( v5 )
    {
      if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v1 + 52) == *(_DWORD *)(v1 + 48) )
      {
        *(_DWORD *)(v1 + 52) = *(_DWORD *)(v4 + 80);
        v5 = *(_DWORD *)(v4 + 64);
      }
      *(_DWORD *)(v1 + 32) = v5;
      v6 = *(_QWORD *)(v4 + 72);
      *(_DWORD *)(v4 + 64) = 0;
      *(_QWORD *)(v1 + 40) = v6;
      LODWORD(v6) = *(_DWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_DWORD *)(v1 + 48) = v6;
      *(_DWORD *)(v4 + 80) = 0;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v4 = *(_OWORD *)v7;
      *(_QWORD *)(v4 + 16) = *(_QWORD *)(v7 + 16);
      *(_DWORD *)(v4 + 24) = *(_DWORD *)(v7 + 24);
      *(_BYTE *)(v4 + 28) = 1;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xADu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v3,
      v1);
}
