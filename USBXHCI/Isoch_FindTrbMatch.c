char __fastcall Isoch_FindTrbMatch(__int64 a1, signed __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  char v6; // bl
  int v7; // r13d
  __int64 v8; // rbp
  __int64 v9; // rcx
  int v10; // edx
  int v11; // edx
  __int64 *i; // rsi
  unsigned __int8 *NextStage; // rax
  signed __int64 v14; // r10
  int v15; // edx
  unsigned __int8 *v16; // r12
  unsigned __int8 *v17; // r14
  int v18; // r8d
  int v19; // edx
  char result; // al
  signed __int64 v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+B0h] [rbp+8h]
  int v23; // [rsp+B8h] [rbp+10h]

  v23 = (int)a2;
  v6 = 0;
  v7 = 0;
  v22 = 0;
  v8 = 0LL;
  v21 = *a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( *a2 )
  {
    if ( *a2 == v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v11,
          14,
          36,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      v7 = *(_DWORD *)(a1 + 376);
LABEL_24:
      v6 = 1;
    }
    else
    {
      for ( i = *(__int64 **)(a1 + 384); (__int64 *)(a1 + 384) != i; i = (__int64 *)*i )
      {
        *((_BYTE *)i + 133) = *((_BYTE *)i + 132);
        *((_BYTE *)i + 134) = *((_BYTE *)i + 130);
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)i + 128);
        while ( 2 )
        {
          v8 = (__int64)NextStage;
          if ( NextStage )
          {
            v15 = *((_DWORD *)NextStage + 22);
            v16 = NextStage + 24;
            v17 = (unsigned __int8 *)*((_QWORD *)NextStage + 3);
            while ( v16 != v17 )
            {
              if ( TR_DoesSegmentContainDequeuePointer((__int64)v17, v15, 0xFFFFFFFF, v14) )
                goto LABEL_20;
              v17 = *(unsigned __int8 **)v17;
              v15 = 0;
              v14 = v21;
            }
            if ( !TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v8 + 96), v15, *(_DWORD *)(v8 + 104), v14) )
            {
              ++v7;
              NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)i + 128);
              v14 = v21;
              continue;
            }
LABEL_20:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v19) = 5;
              WPP_RECORDER_SF_DDqq(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v19,
                v18,
                37,
                (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                i[3],
                v8);
            }
            v22 = Isoch_CalculateBytesTransferred(a1, v8, v23);
            goto LABEL_24;
          }
          break;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v10,
      14,
      35,
      (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  *a3 = v8 & -(__int64)(v6 != 0);
  *a4 = v6 != 0 ? v7 : 0;
  result = v6;
  *a5 = v6 != 0 ? v22 : 0;
  return result;
}
