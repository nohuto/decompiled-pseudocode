__int64 __fastcall sub_1403EBD40(__int64 a1)
{
  unsigned int *v2; // rdi
  __int64 result; // rax

  KeExitRetpoline();
  KxAcquireSpinLock(&KiHardwareTriggerLock);
  KeReleaseSpinLockFromDpcLevel(&KiHardwareTriggerLock);
  v2 = *(unsigned int **)(a1 + 32);
  result = *v2;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    *v2 = result;
    if ( !(_DWORD)result )
    {
      memset(v2 + 2, 0, 0x40uLL);
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v2 + 9) + 24LL))(
                 *((_QWORD *)v2 + 9),
                 *(_QWORD *)(*((_QWORD *)v2 + 9) + 32LL),
                 *(_QWORD *)(*((_QWORD *)v2 + 9) + 40LL),
                 *(_QWORD *)(*((_QWORD *)v2 + 9) + 48LL));
    }
  }
  if ( *((_QWORD *)v2 + 4) )
    return (*((__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD))v2 + 4))(
             v2 + 2,
             *((_QWORD *)v2 + 5),
             *((_QWORD *)v2 + 6),
             *((_QWORD *)v2 + 7));
  return result;
}
