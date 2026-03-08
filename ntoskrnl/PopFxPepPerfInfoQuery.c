/*
 * XREFs of PopFxPepPerfInfoQuery @ 0x140982744
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x140982948 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopPluginQueryComponentPerfCapabilities @ 0x14058A1FC (PopPluginQueryComponentPerfCapabilities.c)
 *     PopPluginQueryComponentPerfSet @ 0x14058A24C (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x14058A2F8 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x14058A384 (PopPluginQueryComponentPerfStates.c)
 *     PopFxPepPerfInfoFree @ 0x1409826C4 (PopFxPepPerfInfoFree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxPepPerfInfoQuery(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, unsigned int **a3)
{
  ULONG_PTR v3; // r12
  NTSTATUS v4; // edi
  unsigned int *v5; // rsi
  unsigned int v7; // r13d
  unsigned int *Pool2; // rax
  unsigned int v9; // ebp
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rax
  __int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // rax
  ULONGLONG pullResult[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v19 = 0;
  pullResult[0] = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( !PopPluginQueryComponentPerfCapabilities(BugCheckParameter3, BugCheckParameter4, &v19) )
  {
    v4 = -1073741822;
LABEL_19:
    PopFxPepPerfInfoFree(v5);
    return (unsigned int)v4;
  }
  v7 = v19;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, (int)(48 * v19) + 8LL, 1297630800LL);
  v5 = Pool2;
  if ( !Pool2 )
  {
LABEL_18:
    v4 = -1073741670;
    goto LABEL_19;
  }
  *Pool2 = v7;
  v9 = 0;
  if ( v7 )
  {
    do
    {
      v10 = 12LL * v9;
      PopPluginQueryComponentPerfSet(
        BugCheckParameter3,
        v3,
        v9,
        &v5[v10 + 8],
        &v5[v10 + 9],
        &v5[v10 + 10],
        &v5[v10 + 10],
        &v5[v10 + 12]);
      if ( !v5[v10 + 9] )
      {
        v11 = v5[v10 + 10];
        if ( !v11 )
          PopFxBugCheck(0x61AuLL, *(_QWORD *)(BugCheckParameter3 + 64), BugCheckParameter3, v3);
        v4 = RtlULongLongMult(v11, 0x10uLL, pullResult);
        v12 = ExAllocatePool2(256LL, pullResult[0], 1297630800LL);
        *(_QWORD *)&v5[v10 + 12] = v12;
        if ( !v12 )
          goto LABEL_18;
        PopPluginQueryComponentPerfStates(BugCheckParameter3, v3, v9, v12);
      }
      PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, v9, (unsigned __int16 *)&v5[v10 + 2] + 1, 0LL);
      v13 = HIWORD(v5[v10 + 2]);
      if ( v13 )
      {
        v14 = HIWORD(v5[v10 + 2]);
        LOWORD(v5[v10 + 2]) = v13 - 2;
        v15 = ExAllocatePool2(256LL, v14, 1297630800LL);
        *(_QWORD *)&v5[v10 + 4] = v15;
        if ( !v15 )
          goto LABEL_18;
        PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, v9, (unsigned __int16 *)&v5[v10 + 2] + 1, v15);
      }
      else
      {
        LOWORD(v5[v10 + 2]) = 0;
        *(_QWORD *)&v5[v10 + 4] = 0LL;
      }
      ++v9;
    }
    while ( v9 < v7 );
    if ( v4 < 0 )
      goto LABEL_19;
  }
  *a3 = v5;
  return (unsigned int)v4;
}
