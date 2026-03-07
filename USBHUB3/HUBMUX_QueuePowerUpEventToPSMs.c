__int64 __fastcall HUBMUX_QueuePowerUpEventToPSMs(__int64 a1, unsigned int a2)
{
  KSPIN_LOCK *v2; // rbx
  KIRQL v5; // al
  int v6; // eax
  __int64 *v7; // rdi
  __int64 result; // rax
  __int64 i; // rbx

  v2 = (KSPIN_LOCK *)(a1 + 2320);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2352), 0xFFFFFFF7);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2352), 0xFFFFFFFD);
  KeReleaseSpinLock(v2, v5);
  v6 = *(_DWORD *)(a1 + 2356);
  if ( !v6 )
    return HUBSM_AddEvent(a1 + 1264, 2054);
  *(_DWORD *)(a1 + 2332) = v6;
  v7 = (__int64 *)(a1 + 2360);
  result = *v7;
  for ( i = *v7 - 248; v7 != (__int64 *)result; i = result - 248 )
  {
    _InterlockedOr((volatile signed __int32 *)(i + 264), 4u);
    (*(void (__fastcall **)(__int64, _QWORD))(i + 1240))(i, a2);
    result = *(_QWORD *)(i + 248);
  }
  return result;
}
