char __fastcall Bulk_ValidateStagePointer(__int64 a1, __int64 a2)
{
  char v2; // di
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // al
  _BYTE *v7; // r11
  _BYTE *i; // r10
  _BYTE *v9; // r14
  __int64 NextStage; // rax
  _QWORD *v11; // r10
  int v13; // edx

  v2 = 0;
  if ( a2 )
  {
    v5 = (KSPIN_LOCK *)(a1 + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v7 = (_BYTE *)(a1 + 368);
    *(_BYTE *)(a1 + 104) = v6;
    for ( i = *(_BYTE **)(a1 + 368); v7 != i; i = (_BYTE *)*v11 )
    {
      v9 = i + 128;
      i[133] = i[132];
      i[134] = i[130];
      while ( 1 )
      {
        NextStage = StageQueue_ForwardScanGetNextStage(v9);
        if ( !NextStage )
          break;
        if ( NextStage == a2 )
        {
          v2 = 1;
          goto LABEL_8;
        }
      }
    }
LABEL_8:
    KeReleaseSpinLock(v5, *(_BYTE *)(a1 + 104));
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v13,
      14,
      43,
      (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  return v2;
}
