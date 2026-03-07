__int64 MiConvertIoPfnTreeLockExclusiveToShared()
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v1; // ebx
  unsigned int NodeColor; // edi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  signed __int32 v6; // eax
  int v7; // [rsp+40h] [rbp+8h]
  signed __int32 v8; // [rsp+48h] [rbp+10h]
  unsigned __int32 v9; // [rsp+50h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  NodeColor = CurrentPrcb->NodeColor;
  if ( KeNumberNodes )
  {
    v3 = qword_140C65720 + 368;
    do
    {
      if ( v1 != NodeColor )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v3 + 384LL));
      v3 += 376LL;
      ++v1;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
  }
  v4 = *((_QWORD *)CurrentPrcb->MmInternal + 1577);
  v7 = 1;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 384), 1, 0x80000000);
  result = 0x80000000LL;
  if ( v8 != 0x80000000 )
  {
    do
    {
      if ( (v8 & 0x40000000) != 0 )
        v6 = v7 | 0x40000000;
      else
        v6 = v7 & 0xBFFFFFFF;
      v7 = v6;
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 384), v6, v8);
      result = v9;
    }
    while ( v8 != v9 );
  }
  return result;
}
