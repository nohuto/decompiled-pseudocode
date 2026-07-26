/*
 * XREFs of ?ndisOidPreIovOverlyingAdapterInfo@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 */

char __fastcall ndisOidPreIovOverlyingAdapterInfo(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  __int64 v3; // rbp
  char v4; // bl
  int v5; // eax
  char v7[4]; // [rsp+38h] [rbp-20h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x51u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      v3,
      v1);
  if ( v1[1] == 1 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( v1[12] >= 0x14u )
    {
      v5 = 0;
    }
    else
    {
      v5 = -1073676268;
      v1[14] = 20;
      *((_DWORD *)a1 + 10) = -1073676268;
      v4 = 1;
    }
  }
  else
  {
    v5 = -1073741637;
    v4 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x52u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      v3,
      v4,
      *(_DWORD *)v7);
  }
  return v4;
}
