/*
 * XREFs of ?CleanUp@CActivationObjectManager@@AEAAXXZ @ 0x1C0082584
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00747B0 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CActivationObjectManager::CleanUp(CActivationObjectManager *this)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx
  __int64 *v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  ULONG_PTR **v8; // rsi
  ULONG_PTR *v9; // rbx
  ULONG_PTR **i; // rdx
  ULONG_PTR v11; // r8
  __int64 v12; // rcx
  ULONG_PTR *j; // rcx

  RIMLockExclusive((__int64)&qword_1C02545C0);
  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v3 = v2;
  if ( v2 )
  {
    v6 = *v2;
    if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *v2;
    if ( (v6 & 1) == 0 )
      goto LABEL_5;
    v3 = (_QWORD *)*((_QWORD *)this + 3);
  }
  v4 = v2 + 1;
  v5 = (unsigned __int64)&v3[(unsigned __int64)*((unsigned int *)this + 5) >> 5];
  while ( (unsigned __int64)v4 < v5 )
  {
    v6 = *v4;
    if ( (*v4 & 1) == 0 )
      goto LABEL_5;
    ++v4;
  }
  v6 = 0LL;
LABEL_5:
  if ( v6 )
    KeBugCheckEx(0x164u, 0x333uLL, 0LL, 0LL, 0LL);
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
    Win32FreePool(v7);
  v8 = (ULONG_PTR **)*((_QWORD *)this + 1);
  v9 = (ULONG_PTR *)v8;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_10;
    v11 = *v9;
    if ( (*v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v11 = *v9;
    if ( (v11 & 1) != 0 )
    {
LABEL_10:
      for ( i = v8 + 1;
            (unsigned __int64)i < *((_QWORD *)this + 1) + 8 * ((unsigned __int64)*((unsigned int *)this + 1) >> 5);
            ++i )
      {
        if ( ((unsigned __int8)*i & 1) == 0 )
        {
          v9 = *i;
          v8 = i;
          v11 = (ULONG_PTR)*i;
          goto LABEL_15;
        }
      }
      v11 = 0LL;
    }
    else
    {
      v9 = (ULONG_PTR *)v11;
    }
LABEL_15:
    if ( !v11 )
      break;
    if ( *(_QWORD *)(v11 + 32) != v11 + 32 )
      KeBugCheckEx(0x164u, 0x333uLL, v11, 0LL, 0LL);
    for ( j = (ULONG_PTR *)v8; (*j & 1) == 0; j = (ULONG_PTR *)*j )
    {
      if ( (ULONG_PTR *)*j == v9 )
      {
        *j = *v9;
        --*(_DWORD *)this;
        *v9 |= 0x8000000000000002uLL;
        v9 = j;
        break;
      }
    }
    Win32FreePool(v11);
  }
  v12 = *((_QWORD *)this + 1);
  if ( v12 )
    Win32FreePool(v12);
  qword_1C02545C8 = 0LL;
  ExReleasePushLockExclusiveEx(&qword_1C02545C0, 0LL);
  KeLeaveCriticalRegion();
  if ( qword_1C02545C8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 27LL);
}
