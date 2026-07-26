/*
 * XREFs of ?ndisOidPreTcpConnectionOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009EA00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC3u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_10;
  v4 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_12;
  v5 = *(_QWORD *)(v1 + 4096);
  if ( v5 && *(_BYTE *)(v5 + 1005) )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x14u )
    {
      v6 = *(_QWORD *)(v1 + 4096);
      v7 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v7 = *(_OWORD *)(v6 + 1004);
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 1020);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 20;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
LABEL_10:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  v4 = 1;
LABEL_12:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC4u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v9);
  }
  return v4;
}
