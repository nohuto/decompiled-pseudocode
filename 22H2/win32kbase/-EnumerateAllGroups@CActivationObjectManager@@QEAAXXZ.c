/*
 * XREFs of ?EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ @ 0x1C00AE4A0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0088848 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004DFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0098460 (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 */

void __fastcall CActivationObjectManager::EnumerateAllGroups(CActivationObjectManager *this)
{
  CActivationObjectManager *v1; // rbp
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 *i; // rcx
  __int64 *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *k; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 *j; // rdx
  _QWORD *m; // rdx
  __int64 v17; // rcx

  v1 = qword_1C0250798;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&qword_1C02545C0, 0LL);
  v2 = (__int64 *)*((_QWORD *)v1 + 1);
  v3 = v2;
  v4 = v2;
  if ( v2 )
  {
    v5 = *v2;
    if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v2;
    if ( (v5 & 1) == 0 )
      goto LABEL_16;
    v4 = (__int64 *)*((_QWORD *)v1 + 1);
  }
  for ( i = v2 + 1; ; ++i )
  {
    if ( i >= &v4[(unsigned __int64)*((unsigned int *)v1 + 1) >> 5] )
      goto LABEL_41;
    v7 = (__int64 *)*i;
    if ( (*i & 1) == 0 )
      break;
  }
  v2 = i;
LABEL_10:
  v3 = v7;
  v5 = (__int64)v7;
  while ( v5 )
  {
    InputExtensibilityCallout::CoreMsgSendMessage(v5, 11);
    if ( !v3 )
      goto LABEL_37;
    v5 = *v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v3;
    if ( (v5 & 1) != 0 )
    {
LABEL_37:
      for ( j = v2 + 1;
            (unsigned __int64)j < *((_QWORD *)v1 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v1 + 1) >> 5);
            ++j )
      {
        v7 = (__int64 *)*j;
        if ( (*j & 1) == 0 )
        {
          v2 = j;
          goto LABEL_10;
        }
      }
LABEL_41:
      v5 = 0LL;
    }
    else
    {
LABEL_16:
      v3 = (__int64 *)v5;
    }
  }
  v8 = (_QWORD *)*((_QWORD *)v1 + 1);
  v9 = v8;
  v10 = v8;
  if ( v8 )
  {
    v11 = (_QWORD *)*v8;
    if ( (*v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v11 = (_QWORD *)*v8;
    if ( ((unsigned __int8)v11 & 1) == 0 )
      goto LABEL_34;
    v10 = (_QWORD *)*((_QWORD *)v1 + 1);
  }
  for ( k = v8 + 1; ; ++k )
  {
    if ( k >= &v10[(unsigned __int64)*((unsigned int *)v1 + 1) >> 5] )
      goto LABEL_46;
    v13 = (_QWORD *)*k;
    if ( (*k & 1) == 0 )
      break;
  }
  v8 = k;
LABEL_27:
  v9 = v13;
  v11 = v13;
  while ( v11 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C02545C0, 0LL);
    v14 = (_QWORD *)v11[4];
    while ( v14 != v11 + 4 )
    {
      v17 = (__int64)(v14 - 4);
      v14 = (_QWORD *)*v14;
      CActivationObject::notifyISM(v17, 0);
    }
    ExReleasePushLockSharedEx(&qword_1C02545C0, 0LL);
    KeLeaveCriticalRegion();
    if ( !v9 )
      goto LABEL_42;
    v11 = (_QWORD *)*v9;
    if ( (*v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v11 = (_QWORD *)*v9;
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
LABEL_42:
      for ( m = v8 + 1;
            (unsigned __int64)m < *((_QWORD *)v1 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v1 + 1) >> 5);
            ++m )
      {
        v13 = (_QWORD *)*m;
        if ( (*m & 1) == 0 )
        {
          v8 = m;
          goto LABEL_27;
        }
      }
LABEL_46:
      v11 = 0LL;
    }
    else
    {
LABEL_34:
      v9 = v11;
    }
  }
  ExReleasePushLockSharedEx(&qword_1C02545C0, 0LL);
  KeLeaveCriticalRegion();
}
