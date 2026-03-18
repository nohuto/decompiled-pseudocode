/*
 * XREFs of PopFxPepPerfInfoQuery @ 0x14098DAB8
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x14098DCC4 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 *     PopPluginQueryComponentPerfCapabilities @ 0x1405CEA0C (PopPluginQueryComponentPerfCapabilities.c)
 *     PopPluginQueryComponentPerfSet @ 0x1405CEA5C (PopPluginQueryComponentPerfSet.c)
 *     PopPluginQueryComponentPerfSetName @ 0x1405CEB08 (PopPluginQueryComponentPerfSetName.c)
 *     PopPluginQueryComponentPerfStates @ 0x1405CEB94 (PopPluginQueryComponentPerfStates.c)
 *     PopFxPepPerfInfoFree @ 0x14098DA38 (PopFxPepPerfInfoFree.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxPepPerfInfoQuery(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, _QWORD *a3)
{
  ULONG_PTR v3; // r12
  int v4; // edi
  _QWORD *v5; // rsi
  unsigned int v7; // r13d
  _DWORD *Pool2; // rax
  unsigned int v9; // ebp
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // kr00_8
  __int64 v14; // rax
  __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v20 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( !PopPluginQueryComponentPerfCapabilities(BugCheckParameter3, BugCheckParameter4, &v20) )
  {
    v4 = -1073741822;
LABEL_22:
    PopFxPepPerfInfoFree(v5);
    return (unsigned int)v4;
  }
  v7 = v20;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (int)(48 * v20) + 8LL, 1297630800LL);
  v5 = Pool2;
  if ( !Pool2 )
  {
LABEL_21:
    v4 = -1073741670;
    goto LABEL_22;
  }
  *Pool2 = v7;
  v9 = 0;
  if ( v7 )
  {
    do
    {
      v10 = 6LL * v9;
      PopPluginQueryComponentPerfSet(
        BugCheckParameter3,
        v3,
        v9,
        &v5[v10 + 4],
        (_DWORD *)&v5[v10 + 4] + 1,
        &v5[v10 + 5],
        &v5[v10 + 5],
        &v5[v10 + 6]);
      if ( !HIDWORD(v5[v10 + 4]) )
      {
        v11 = v5[v10 + 5];
        if ( !v11 )
          PopFxBugCheck(0x61AuLL, *(_QWORD *)(BugCheckParameter3 + 64), BugCheckParameter3, v3);
        v13 = v11;
        v12 = 16LL * v11;
        if ( is_mul_ok(v13, 0x10uLL) )
        {
          v4 = 0;
        }
        else
        {
          v12 = -1LL;
          v4 = -1073741675;
        }
        v14 = ExAllocatePool2(256LL, v12, 1297630800LL);
        v5[v10 + 6] = v14;
        if ( !v14 )
          goto LABEL_21;
        PopPluginQueryComponentPerfStates(BugCheckParameter3, v3, v9, v14);
      }
      PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, v9, (unsigned __int16 *)&v5[v10 + 1] + 1, 0LL);
      v15 = WORD1(v5[v10 + 1]);
      if ( v15 )
      {
        v16 = WORD1(v5[v10 + 1]);
        LOWORD(v5[v10 + 1]) = v15 - 2;
        v17 = ExAllocatePool2(256LL, v16, 1297630800LL);
        v5[v10 + 2] = v17;
        if ( !v17 )
          goto LABEL_21;
        PopPluginQueryComponentPerfSetName(BugCheckParameter3, v3, v9, (unsigned __int16 *)&v5[v10 + 1] + 1, v17);
      }
      else
      {
        LOWORD(v5[v10 + 1]) = 0;
        v5[v10 + 2] = 0LL;
      }
      ++v9;
    }
    while ( v9 < v7 );
    if ( v4 < 0 )
      goto LABEL_22;
  }
  *a3 = v5;
  return (unsigned int)v4;
}
