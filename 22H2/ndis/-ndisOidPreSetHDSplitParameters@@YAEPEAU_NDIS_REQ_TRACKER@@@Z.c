/*
 * XREFs of ?ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00A0A48 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreSetHDSplitParameters(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned __int8 v4; // bl
  wchar_t *Buffer; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA4u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      v3);
  v4 = 1;
  if ( *((_DWORD *)&v3->Header + 1) != 1 )
    goto LABEL_4;
  if ( !*a1 )
    goto LABEL_6;
  if ( v1->MajorNdisVersion <= 6u && (v1->MajorNdisVersion != 6 || !v1->MinorNdisVersion) )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_20;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->PcwDatapathEventMask >= 8u )
  {
    Buffer = v3->Reserved4.Buffer;
    if ( *(_BYTE *)Buffer == 0x80 && *((_BYTE *)Buffer + 1) && Buffer[1] >= 8u )
    {
      HDSplitCurrentConfig = v1->HDSplitCurrentConfig;
      if ( HDSplitCurrentConfig && (HDSplitCurrentConfig->HDSplitFlags & 1) != 0 )
      {
        ndisUpdateHDSplitKeyword(v1, (*((_DWORD *)Buffer + 1) & 1) == 0);
LABEL_6:
        v4 = 0;
        goto LABEL_20;
      }
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073676267;
    }
  }
  else
  {
    LODWORD(v3->OpenQueue) = 8;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA5u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v8);
  }
  return v4;
}
