void __fastcall FreeContext(char *Entry)
{
  char **v2; // rdx
  PVOID *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx
  KIRQL v7; // al
  __int64 *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rbx

  byte_1C00701C8 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v2 = (char **)*((_QWORD *)Entry + 2);
  if ( v2[1] != Entry + 16
    || (v3 = (PVOID *)*((_QWORD *)Entry + 3), *v3 != Entry + 16)
    || (*v3 = v2, v4 = Entry + 32, v2[1] = (char *)v3, v5 = *((_QWORD *)Entry + 4), *(char **)(v5 + 8) != Entry + 32)
    || (v6 = (_QWORD *)*((_QWORD *)Entry + 5), (_QWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *((_QWORD *)Entry + 5) = Entry + 32;
  *v4 = v4;
  KeReleaseSpinLock(&gmutCtxtList, byte_1C00701C8);
  FreeDataBuffs((__int64)(Entry + 128), 1u);
  v7 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v7);
  AcpiDiagTraceAmlEvaluation((__int64)Entry, 0);
  AcpiDiagTraceRecordAmlEvaluationStatistics((__int64)Entry);
  v8 = (__int64 *)*((_QWORD *)Entry + 58);
  if ( v8 )
  {
    AmliDisableWatchdog(v8);
    ExFreePoolWithTag(*((PVOID *)Entry + 58), 0);
  }
  v9 = (void *)*((_QWORD *)Entry + 56);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *((_QWORD *)Entry + 9);
  if ( v10 )
  {
    DereferenceObjectEx(v10);
    *((_QWORD *)Entry + 9) = 0LL;
  }
  v11 = *((_QWORD *)Entry + 53);
  if ( v11 )
  {
    DereferenceObjectEx(v11);
    *((_QWORD *)Entry + 53) = 0LL;
  }
  v12 = *((_QWORD *)Entry + 10);
  if ( v12 )
  {
    DereferenceObjectEx(v12);
    *((_QWORD *)Entry + 10) = 0LL;
  }
  v13 = (_QWORD *)*((_QWORD *)Entry + 63);
  if ( v13 )
  {
    do
    {
      v14 = (_QWORD *)v13[3];
      ExFreeToNPagedLookasideList(&AMLIContextLookAsideList, v13);
      v13 = v14;
    }
    while ( v14 );
  }
  ExFreeToNPagedLookasideList(&AMLIContextLookAsideList, Entry);
}
