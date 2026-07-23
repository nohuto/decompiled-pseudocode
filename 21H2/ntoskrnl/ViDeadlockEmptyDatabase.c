/*
 * XREFs of ViDeadlockEmptyDatabase @ 0x1409E0314
 * Callers:
 *     ViDeadlockDetectionApplySettings @ 0x1409E025C (ViDeadlockDetectionApplySettings.c)
 * Callees:
 *     ViLowerIrql @ 0x1405A26E8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A2760 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409E02AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409E02E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x1409E05A8 (ViDeadlockFree.c)
 *     ViDeadlockRemoveResource @ 0x1409E0A4C (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1409E0BE8 (ViDeadlockRemoveThread.c)
 */

__int64 ViDeadlockEmptyDatabase()
{
  __int64 v0; // rdi
  _QWORD *v1; // r14
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx
  unsigned __int8 v18; // [rsp+60h] [rbp+8h]

  v0 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v18 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1);
  ViDeadlockDetectionEnabled = 0;
  if ( ViDeadlockGlobals )
  {
    v3 = *((_QWORD *)ViDeadlockGlobals + 2);
    v4 = 1023LL;
    v5 = 1023LL;
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD **)(v6 + v3);
      while ( v7 != (_QWORD *)(v0 + v3) )
      {
        v8 = v7 - 5;
        v7 = (_QWORD *)*v7;
        ViDeadlockRemoveResource((__int64)v8);
        v9 = ViDeadlockGlobals;
        *v8 = v2;
        v2 = v8;
        v3 = v9[2];
      }
      v0 += 16LL;
      v6 += 16LL;
      --v5;
    }
    while ( v5 );
    v10 = 0LL;
    v11 = *((_QWORD *)ViDeadlockGlobals + 2050);
    do
    {
      v12 = *(_QWORD **)(v5 + v11);
      while ( v12 != (_QWORD *)(v10 + v11) )
      {
        v13 = v12 - 3;
        v12 = (_QWORD *)*v12;
        ViDeadlockRemoveThread((__int64)v13);
        v14 = ViDeadlockGlobals;
        *v13 = v1;
        v1 = v13;
        v11 = v14[2050];
      }
      v10 += 16LL;
      v5 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  ViDeadlockDetectionUnlock(1);
  result = ViLowerIrql(v18);
  if ( v1 )
  {
    do
    {
      v16 = (_QWORD *)*v1;
      result = ViDeadlockFree(v1);
      v1 = v16;
    }
    while ( v16 );
  }
  if ( v2 )
  {
    do
    {
      v17 = (_QWORD *)*v2;
      result = ViDeadlockFree(v2);
      v2 = v17;
    }
    while ( v17 );
  }
  return result;
}
