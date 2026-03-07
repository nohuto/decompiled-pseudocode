char __fastcall Bulk_FindStage(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v5; // di
  int v7; // r13d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 *i; // r14
  __int64 NextStage; // rax
  __int64 v12; // rdx
  _QWORD **v13; // rax
  _QWORD *v14; // r15
  int v15; // r8d
  int v17; // edx
  int v18; // edx
  int v19; // edx

  v5 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( a2 )
  {
    if ( a2 == v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_DDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v18,
          14,
          49,
          (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64));
      }
      v7 = *(_DWORD *)(a1 + 348);
LABEL_13:
      v5 = 1;
    }
    else
    {
      for ( i = *(__int64 **)(a1 + 368); (__int64 *)(a1 + 368) != i; i = (__int64 *)*i )
      {
        *((_BYTE *)i + 133) = *((_BYTE *)i + 132);
        *((_BYTE *)i + 134) = *((_BYTE *)i + 130);
        while ( 2 )
        {
          NextStage = StageQueue_ForwardScanGetNextStage(i + 16);
          v8 = NextStage;
          if ( NextStage )
          {
            v12 = *(unsigned int *)(NextStage + 104);
            v13 = (_QWORD **)(NextStage + 24);
            v14 = *v13;
            while ( v13 != v14 )
            {
              if ( (unsigned __int8)TR_DoesSegmentContainDequeuePointer(v14, v12, 0xFFFFFFFFLL, a2) )
                goto LABEL_10;
              v14 = (_QWORD *)*v14;
              v13 = (_QWORD **)(v8 + 24);
              v12 = 0LL;
            }
            if ( !(unsigned __int8)TR_DoesSegmentContainDequeuePointer(
                                     *(_QWORD *)(v8 + 112),
                                     v12,
                                     *(unsigned int *)(v8 + 120),
                                     a2) )
            {
              ++v7;
              continue;
            }
LABEL_10:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v19) = 5;
              WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v19, v15, 50);
            }
            goto LABEL_13;
          }
          break;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v17,
      14,
      48,
      (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  *a3 = v8 & -(__int64)(v5 != 0);
  *a4 = v5 != 0 ? v7 : 0;
  return v5;
}
