/*
 * XREFs of ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0082700
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0003048 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 */

void __fastcall CActivationObjectManager::OnThreadTermination(CActivationObjectManager *this)
{
  CActivationObjectManager *v1; // rdi
  _QWORD **v2; // rsi
  _QWORD *v3; // rbx
  _QWORD **i; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *j; // rcx

  v1 = qword_1C0250798;
  RIMLockExclusive((__int64)&qword_1C02545C0);
  v2 = (_QWORD **)*((_QWORD *)v1 + 3);
  v3 = v2;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_3;
    v5 = (_QWORD *)*v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
LABEL_3:
      for ( i = v2 + 1;
            (unsigned __int64)i < *((_QWORD *)v1 + 3) + 8 * ((unsigned __int64)*((unsigned int *)v1 + 5) >> 5);
            ++i )
      {
        if ( ((unsigned __int8)*i & 1) == 0 )
        {
          v3 = *i;
          v2 = i;
          v5 = *i;
          goto LABEL_8;
        }
      }
      v5 = 0LL;
    }
    else
    {
      v3 = v5;
    }
LABEL_8:
    if ( !v5 )
      break;
    v6 = v5 - 1;
    if ( (struct _KTHREAD *)v5[6] == KeGetCurrentThread() )
    {
      *((_BYTE *)v6 + 4) = 1;
      for ( j = v2; (*j & 1) == 0; j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == v3 )
        {
          *j = *v3;
          --*((_DWORD *)v1 + 4);
          *v3 |= 0x8000000000000002uLL;
          v3 = j;
          break;
        }
      }
      CActivationObjectManager::DestroyActivationObjectInternal(v1, (struct CActivationObject *)v6);
    }
  }
  qword_1C02545C8 = 0LL;
  ExReleasePushLockExclusiveEx(&qword_1C02545C0, 0LL);
  KeLeaveCriticalRegion();
}
