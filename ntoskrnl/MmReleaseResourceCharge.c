/*
 * XREFs of MmReleaseResourceCharge @ 0x140302870
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140359F14 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140359F68 (MmChargeResources.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 */

void __fastcall MmReleaseResourceCharge(__int64 *a1, unsigned __int64 a2, __int64 CurrentPrcb, int a4)
{
  __int64 v4; // r11
  char v5; // bl
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v4 = *a1;
  v5 = CurrentPrcb;
  if ( (CurrentPrcb & 2) == 0 || a4 )
    goto LABEL_2;
  v7 = a2;
  if ( (_UNKNOWN *)v4 != &MiSystemPartition )
    goto LABEL_16;
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v8 = *(int *)(CurrentPrcb + 34460);
  if ( (_DWORD)v8 == -1 )
    goto LABEL_16;
  if ( a2 + v8 > 0x100 || a2 >= 0x80000 )
  {
LABEL_13:
    if ( (int)v8 > 192
      && (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 34460), 192, v8) )
    {
      v7 = a2 + (int)v8 - 192;
    }
LABEL_16:
    if ( v7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17280), v7);
    goto LABEL_2;
  }
  while ( 1 )
  {
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 34460), v8 + a2, v8);
    v9 = (_DWORD)v8 == v10;
    LODWORD(v8) = v10;
    if ( v9 )
      break;
    if ( v10 == -1 || a2 + v10 > 0x100 )
      goto LABEL_13;
  }
LABEL_2:
  if ( (v5 & 1) != 0 )
    MiReturnCommit(v4, a2, CurrentPrcb);
}
