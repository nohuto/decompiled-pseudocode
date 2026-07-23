/*
 * XREFs of sub_1403EA330 @ 0x1403EA330
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     _guard_check_icall @ 0x140408740 (_guard_check_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall sub_1403EA330(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rdi
  __int64 result; // rax

  KeExitRetpoline(a1, a2, a3);
  KxAcquireSpinLock(&KiHardwareTriggerLock);
  KxReleaseSpinLock(&KiHardwareTriggerLock);
  v4 = *(unsigned int **)(a1 + 32);
  result = *v4;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    *v4 = result;
    if ( !(_DWORD)result )
    {
      memset(v4 + 2, 0, 0x40uLL);
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v4 + 9) + 24LL))(
                 *((_QWORD *)v4 + 9),
                 *(_QWORD *)(*((_QWORD *)v4 + 9) + 32LL),
                 *(_QWORD *)(*((_QWORD *)v4 + 9) + 40LL),
                 *(_QWORD *)(*((_QWORD *)v4 + 9) + 48LL));
    }
  }
  if ( *((_QWORD *)v4 + 4) )
    return (*((__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD))v4 + 4))(
             v4 + 2,
             *((_QWORD *)v4 + 5),
             *((_QWORD *)v4 + 6),
             *((_QWORD *)v4 + 7));
  return result;
}
