/*
 * XREFs of ExpFreeHandleTableEntry @ 0x14061A23C
 * Callers:
 *     ExDestroyHandle @ 0x14061A1D8 (ExDestroyHandle.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     ExCreateHandleEx @ 0x140664860 (ExCreateHandleEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExpGetHandleExtraInfo @ 0x14094CB80 (ExpGetHandleExtraInfo.c)
 */

char __fastcall ExpFreeHandleTableEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  char v5; // si
  unsigned int Number; // eax
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rax
  _DWORD *HandleExtraInfo; // rax

  v4 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1);
    if ( HandleExtraInfo )
    {
      *HandleExtraInfo = 0;
      HandleExtraInfo[1] = 0;
    }
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_BYTE *)(v4 + 44) & 1;
  if ( v5 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v7 = v4 + ((Number + 1LL) << 6);
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  if ( v5 )
  {
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 )
      *(_QWORD *)(v8 + 8) = a3;
    else
      *(_QWORD *)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 16) = a3;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(a3 + 8) = v10;
    if ( !v10 )
      *(_QWORD *)(v7 + 16) = a3;
    *(_QWORD *)(v7 + 8) = a3;
  }
  --*(_DWORD *)(v7 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  return KeAbPostRelease(v7);
}
