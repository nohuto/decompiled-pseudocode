char __fastcall Bulk_IsTransferEventLikelyDuplicate_Internal(_QWORD *a1, signed __int64 a2, _BYTE *a3)
{
  char v3; // di
  __int64 v7; // rsi
  unsigned __int8 *v8; // r11
  unsigned __int8 *i; // r10
  unsigned __int8 *NextStage; // rax
  unsigned __int8 **v11; // r10

  v3 = 0;
  *a3 = 0;
  if ( (_QWORD *)a1[26] != a1 + 26 )
  {
    v7 = a1[27];
    if ( TR_DoesSegmentContainDequeuePointer(v7, 0, 0xFFFFFFFF, a2) )
      goto LABEL_9;
  }
  v8 = (unsigned __int8 *)(a1 + 46);
  for ( i = (unsigned __int8 *)a1[46]; ; i = *v11 )
  {
    if ( v8 == i )
    {
      v7 = a1[22];
      goto LABEL_8;
    }
    i[133] = i[132];
    i[134] = i[130];
    NextStage = StageQueue_ForwardScanGetNextStage(i + 128);
    if ( NextStage )
      break;
  }
  v7 = *((_QWORD *)NextStage + 12);
LABEL_8:
  if ( TR_DoesSegmentContainDequeuePointer(v7, 0, 0xFFFFFFFF, a2) )
  {
LABEL_9:
    v3 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 16)
                    + 16LL * (unsigned int)((unsigned __int64)(a2 - *(_QWORD *)(v7 + 24)) >> 4)
                    + 12) & 0xFC00) == 0x2000 )
      *a3 = 1;
  }
  return v3;
}
