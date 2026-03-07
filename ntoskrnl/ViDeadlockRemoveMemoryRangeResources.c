__int64 __fastcall ViDeadlockRemoveMemoryRangeResources(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rbp
  _QWORD **v9; // r15
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // rbx
  char v16; // [rsp+20h] [rbp-58h]

  v4 = a2;
  v6 = 0LL;
  v7 = 0;
  v8 = ViDeadlockDatabaseHashIndex();
  v16 = ViRaiseIrqlToDpcLevel();
LABEL_2:
  ViDeadlockDetectionLock(v7);
  v9 = (_QWORD **)(16 * v8 + *((_QWORD *)ViDeadlockGlobals + 2));
  v10 = *v9;
  if ( *v9 != v9 && (unsigned int)VfUtilAddressRangeFit((char *)ViDeadlockGlobals + 16 * v8 + 32, a1, v4) )
  {
    while ( v10 != v9 )
    {
      v11 = v10 - 5;
      v10 = (_QWORD *)*v10;
      v12 = v11[1];
      if ( v12 >= a3 && v12 < a4 )
      {
        if ( !v7 )
        {
          v7 = 1;
          if ( !ViDeadlockDetectionTryConvertSharedToExclusive() )
          {
            ViDeadlockDetectionUnlock(0LL);
            v4 = a2;
            goto LABEL_2;
          }
        }
        ViDeadlockRemoveResource((__int64)v11);
        *v11 = v6;
        v6 = v11;
      }
    }
  }
  ViDeadlockDetectionUnlock(v7);
  LOBYTE(v13) = v16;
  result = ViLowerIrql(v13);
  if ( v6 )
  {
    do
    {
      v15 = (_QWORD *)*v6;
      result = ViDeadlockFree(v6);
      v6 = v15;
    }
    while ( v15 );
  }
  return result;
}
