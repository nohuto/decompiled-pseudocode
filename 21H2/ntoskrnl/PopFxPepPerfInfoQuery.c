/*
 * XREFs of PopFxPepPerfInfoQuery @ 0x1408E52CC
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x1408E54E4 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopPluginQueryComponentPerfCapabilities @ 0x14056DD64 (PopPluginQueryComponentPerfCapabilities.c)
 *     PopPluginQueryComponentPerfSet @ 0x14056DDB4 (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x14056DE60 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x14056DEEC (PopPluginQueryComponentPerfStates.c)
 *     PopFxPepPerfInfoFree @ 0x1408E524C (PopFxPepPerfInfoFree.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxPepPerfInfoQuery(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, _QWORD *a3)
{
  ULONG_PTR v3; // r12
  NTSTATUS v4; // edi
  _QWORD *v5; // rsi
  unsigned int v7; // r13d
  SIZE_T v8; // rbx
  _QWORD *PoolWithTag; // rax
  unsigned int v10; // ebp
  __int64 v11; // r15
  unsigned int v12; // eax
  PVOID v13; // rax
  unsigned __int16 *v14; // rbx
  __int16 v15; // cx
  SIZE_T v16; // rdx
  PVOID v17; // rax
  ULONGLONG pullResult[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v21 = 0;
  pullResult[0] = 0LL;
  v4 = 0;
  v5 = 0LL;
  if ( !PopPluginQueryComponentPerfCapabilities(BugCheckParameter3, BugCheckParameter4, &v21) )
  {
    v4 = -1073741822;
    goto LABEL_19;
  }
  v7 = v21;
  v8 = (int)(48 * v21 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x4D584650u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_4:
    v4 = -1073741670;
    goto LABEL_19;
  }
  memset(PoolWithTag, 0, v8);
  *(_DWORD *)v5 = v7;
  v10 = 0;
  if ( !v7 )
    goto LABEL_20;
  while ( 1 )
  {
    v11 = 6LL * v10;
    PopPluginQueryComponentPerfSet(
      BugCheckParameter3,
      v3,
      v10,
      &v5[v11 + 4],
      (_DWORD *)&v5[v11 + 4] + 1,
      &v5[v11 + 5],
      &v5[v11 + 5],
      &v5[v11 + 6]);
    if ( !HIDWORD(v5[v11 + 4]) )
    {
      v12 = v5[v11 + 5];
      if ( !v12 )
        PopFxBugCheck(0x61AuLL, *(_QWORD *)(BugCheckParameter3 + 64), BugCheckParameter3, v3);
      v4 = RtlULongLongMult(v12, 0x10uLL, pullResult);
      v13 = ExAllocatePoolWithTag(PagedPool, pullResult[0], 0x4D584650u);
      v5[v11 + 6] = v13;
      if ( !v13 )
        goto LABEL_4;
      PopPluginQueryComponentPerfStates(BugCheckParameter3, v3, v10, (__int64)v13);
    }
    v14 = (unsigned __int16 *)&v5[v11];
    PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, v10, (unsigned __int16 *)&v5[v11 + 1] + 1, 0LL);
    v15 = WORD1(v5[v11 + 1]);
    if ( v15 )
      break;
    LOWORD(v5[v11 + 1]) = 0;
    v5[v11 + 2] = 0LL;
LABEL_14:
    if ( ++v10 >= v7 )
      goto LABEL_18;
  }
  v16 = v14[5];
  LOWORD(v5[v11 + 1]) = v15 - 2;
  v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x4D584650u);
  v5[v11 + 2] = v17;
  if ( v17 )
  {
    PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, v10, v14 + 5, (__int64)v17);
    goto LABEL_14;
  }
  v4 = -1073741670;
LABEL_18:
  if ( v4 >= 0 )
  {
LABEL_20:
    *a3 = v5;
    return (unsigned int)v4;
  }
LABEL_19:
  PopFxPepPerfInfoFree(v5);
  return (unsigned int)v4;
}
