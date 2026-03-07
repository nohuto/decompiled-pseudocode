__int64 __fastcall HUBDTX_SetSelUsingControlTransfer(__int64 *a1)
{
  __int64 v1; // r9
  _BYTE *v2; // r14
  unsigned __int16 v3; // r8
  int v5; // esi
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r11
  unsigned __int16 v8; // r8
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // edx
  char v12; // al
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // [rsp+28h] [rbp-40h]

  v1 = *a1;
  v2 = (char *)a1 + 2196;
  v3 = *((_WORD *)a1 + 1096);
  v5 = *(unsigned __int8 *)(*a1 + 240);
  if ( v3 <= *(_WORD *)(*a1 + 2474) )
    v3 = *(_WORD *)(*a1 + 2474);
  v6 = *(_WORD *)(v1 + 2478) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2480)) + 500) / 1000;
  if ( v3 <= v6 )
  {
    *((_BYTE *)a1 + 2197) = v6;
  }
  else
  {
    *((_BYTE *)a1 + 2197) = v3;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 1u);
  }
  v7 = *((_WORD *)a1 + 1097);
  *((_WORD *)a1 + 1101) = v3 + *(_WORD *)(v1 + 2486) + ((unsigned int)*(unsigned __int8 *)(*a1 + 1187) + 5) / 0xA;
  if ( v7 <= *(_WORD *)(v1 + 2476) )
    v7 = *(_WORD *)(v1 + 2476);
  v8 = *(_WORD *)(v1 + 2482) + (__int16)(1000 * (v5 - *(unsigned __int8 *)(v1 + 2484)) + 500) / 1000;
  if ( v7 <= v8 )
  {
    *((_WORD *)a1 + 1100) = v8;
  }
  else
  {
    *((_WORD *)a1 + 1100) = v7;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 2u);
    v8 = *((_WORD *)a1 + 1100);
  }
  v9 = *a1;
  v10 = *((unsigned __int16 *)a1 + 1290);
  *((_WORD *)a1 + 1102) = v7 + *(_WORD *)(v1 + 2488) + ((unsigned int)*(unsigned __int8 *)(*a1 + 1187) + 5) / 0xA;
  v11 = *((unsigned __int16 *)a1 + 1291);
  if ( (_BYTE)v5 )
    v11 = (800 * v5 + 2200 + (v5 + 1) * (v10 + v11)) / 0x3E8;
  else
    LOWORD(v11) = v10 + v11;
  *v2 = *((_BYTE *)a1 + 2197) + v11 + 5;
  *((_WORD *)a1 + 1099) = v11 + v8 + 5;
  v12 = *((_BYTE *)a1 + 1512);
  *((_BYTE *)a1 + 400) &= 0x1Cu;
  v13 = a1[3];
  *((_BYTE *)a1 + 401) = 48;
  *((_DWORD *)a1 + 101) = 393216;
  *((_WORD *)a1 + 201) = 0;
  result = HUBMISC_ControlTransfer(
             v9,
             v13,
             (_DWORD)a1,
             (int)a1 + 248,
             (__int64)HUBDTX_ControlTransferComplete,
             (__int64)v2,
             6,
             1,
             v12);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x68u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v15);
    }
    return HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
  return result;
}
