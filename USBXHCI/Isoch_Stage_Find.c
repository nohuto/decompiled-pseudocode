__int64 __fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // edi
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  char v11; // cl
  unsigned __int8 *v12; // r10
  int v13; // eax
  int v14; // edx
  __int64 v15; // rax
  __int64 NextStage; // rsi
  int v18; // edx
  unsigned __int64 v19; // rdx
  int v20; // edx
  int v21; // edx

  v3 = *((unsigned __int16 *)a3 + 1);
  v4 = (__int64 *)(a1 + 384);
  v5 = *(__int64 **)(a1 + 384);
  if ( (__int64 *)(a1 + 384) == v5 )
  {
LABEL_21:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = HIDWORD(*a3);
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v19,
        14,
        19,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        BYTE4(*a3),
        v3);
    }
    return 0LL;
  }
  v9 = *a3;
  while ( 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
      LOBYTE(v18) = 5;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v18,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        18,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        v5[3]);
      v9 = *a3;
    }
    v10 = v5[6];
    if ( *(_DWORD *)(v10 + 128) == HIDWORD(v9) )
      break;
    v5 = (__int64 *)*v5;
    if ( v4 == v5 )
      goto LABEL_21;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v20 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v20,
      HIBYTE(*(_DWORD *)(a2 + 12)),
      20,
      (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      HIBYTE(*(_DWORD *)(a2 + 12)),
      HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
      *(_DWORD *)(v10 + 128),
      BYTE4(*a3),
      v3);
  }
  v11 = *((_BYTE *)v5 + 130);
  v12 = (unsigned __int8 *)(v5 + 16);
  v13 = *((unsigned __int8 *)v5 + 132);
  *((_BYTE *)v5 + 133) = v13;
  *((_BYTE *)v5 + 134) = v11;
  if ( !v11
    || (v14 = v13,
        v15 = v13 * (unsigned int)*v12,
        *((_BYTE *)v5 + 134) = v11 - 1,
        NextStage = (__int64)v5 + v15 + 144,
        *((_BYTE *)v5 + 133) = (v14 + 1) % (unsigned int)*((unsigned __int8 *)v5 + 129),
        !NextStage) )
  {
LABEL_25:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v5[3],
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        22,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        v5[3],
        BYTE4(*a3),
        v3);
    return 0LL;
  }
  while ( v3 > *(_DWORD *)(NextStage + 44) )
  {
    NextStage = StageQueue_ForwardScanGetNextStage(v12);
    if ( !NextStage )
      goto LABEL_25;
  }
  if ( !v3 || v3 > *(_DWORD *)(NextStage + 48) - 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v21 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
        LOBYTE(v21) = 5;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v21,
          14,
          21,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          HIBYTE(*(_DWORD *)(a2 + 12)),
          HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
          *(_DWORD *)(NextStage + 48),
          v3 + 1);
      }
    }
    *((_DWORD *)v5 + 25) = v3 + 1;
    *(_DWORD *)(NextStage + 48) = v3 + 1;
  }
  return NextStage;
}
