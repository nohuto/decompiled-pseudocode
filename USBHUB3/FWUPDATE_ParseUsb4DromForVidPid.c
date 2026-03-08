/*
 * XREFs of FWUPDATE_ParseUsb4DromForVidPid @ 0x1C0040868
 * Callers:
 *     HUBHSM_CheckingIfAllUsb4DromDataRead @ 0x1C0009E60 (HUBHSM_CheckingIfAllUsb4DromDataRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 */

void __fastcall FWUPDATE_ParseUsb4DromForVidPid(__int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // rcx
  unsigned __int8 *v4; // rbx
  __int64 v5; // rax
  unsigned __int8 *v6; // rdx
  char v7; // al
  unsigned __int16 v8; // r9
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  v1 = *(unsigned int *)(a1 + 2684);
  v3 = *(_QWORD *)(a1 + 2688);
  if ( *(_BYTE *)(v3 + 13) != 1 )
    return;
  v4 = (unsigned __int8 *)(v3 + 22);
  while ( 1 )
  {
    v5 = *v4;
    if ( !(_BYTE)v5 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v8 = 44;
      goto LABEL_17;
    }
    v6 = &v4[v5];
    if ( (unsigned __int64)&v4[v5] > v3 + v1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v8 = 45;
      goto LABEL_17;
    }
    v7 = v4[1];
    if ( v7 >= 0 && (v7 & 0x3F) == 9 )
      break;
    v4 = v6;
    if ( (unsigned __int64)v6 >= v3 + v1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v8 = 47;
LABEL_17:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, v8, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
      return;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = v4[14];
    v11 = *((unsigned __int16 *)v4 + 4);
    v10 = *((unsigned __int16 *)v4 + 3);
    v9 = *((unsigned __int16 *)v4 + 2);
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(a1 + 2520),
      4u,
      3u,
      0x2Eu,
      (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      v9,
      v10,
      v11,
      v12);
  }
  *(_WORD *)(a1 + 2720) = *((_WORD *)v4 + 2);
  *(_WORD *)(a1 + 2722) = *((_WORD *)v4 + 3);
  *(_WORD *)(a1 + 2724) = *((_WORD *)v4 + 4);
  *(_WORD *)(a1 + 2726) = v4[14];
  *(_BYTE *)(a1 + 2728) = 1;
}
