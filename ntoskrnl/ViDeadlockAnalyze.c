/*
 * XREFs of ViDeadlockAnalyze @ 0x140AD5740
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 *     ViDeadlockAnalyze @ 0x140AD5740 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1402E1E00 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1404166E0 (KeGetCurrentStackPointer.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViDeadlockAddParticipant @ 0x140AD53A8 (ViDeadlockAddParticipant.c)
 *     ViDeadlockAnalyze @ 0x140AD5740 (ViDeadlockAnalyze.c)
 *     ViDeadlockCertify @ 0x140AD59AC (ViDeadlockCertify.c)
 *     ViDeadlockPreprocessOptions @ 0x140AD6830 (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockAnalyze(ULONG_PTR a1, ULONG_PTR a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  int v11; // r8d
  __int64 v13; // r15
  _QWORD **v14; // r15
  _QWORD *v15; // rsi
  _QWORD *v16; // r14
  __int64 v17; // rdx
  int v18; // r9d
  unsigned int v19; // ecx
  int v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  v8 = 1;
  if ( a3 )
  {
    v9 = ViDeadlockGlobals;
    *((_DWORD *)ViDeadlockGlobals + 8199) = 0;
    ++v9[8201];
    v9[8216] = 0;
    *((_QWORD *)v9 + 4107) = 0LL;
    if ( v9[8201] == 1073741822 )
      ViDeadlockState |= 8u;
    KeQueryCurrentStackInformation((__int64)(v9 + 8283), (__int64)(v9 + 8284), (__int64)(v9 + 8286));
    a4 = v20;
  }
  v10 = ViDeadlockGlobals;
  v11 = *((_DWORD *)ViDeadlockGlobals + 8201);
  if ( *(_DWORD *)(a2 + 72) >> 3 == v11 )
    return 0LL;
  ++*((_DWORD *)ViDeadlockGlobals + 8199);
  *(_DWORD *)(a2 + 72) = (8 * v11) | *(_DWORD *)(a2 + 72) & 7;
  if ( a4 > v10[8202] )
  {
    ++v10[8204];
    return 0LL;
  }
  if ( v10[8199] >= v10[8203] )
  {
    ++v10[8205];
    return 0LL;
  }
  if ( (unsigned __int64)&KeGetCurrentStackPointer()[-*((_QWORD *)ViDeadlockGlobals + 4142)] <= 0x1630 )
  {
    ++*((_DWORD *)ViDeadlockGlobals + 8206);
    return 0LL;
  }
  v13 = *(_QWORD *)(a2 + 56);
  if ( a1 == *(_QWORD *)(v13 + 8) && (*(_DWORD *)(a2 + 72) & 4) == 0 )
    goto LABEL_15;
  v14 = (_QWORD **)(v13 + 24);
  v8 = 0;
  v15 = *v14;
  if ( *v14 != v14 )
  {
    while ( 1 )
    {
      v16 = v15 - 5;
      v17 = *(v15 - 5);
      *((_DWORD *)v15 + 8) = v15[4] & 7 | (8 * *((_DWORD *)ViDeadlockGlobals + 8201));
      if ( v17 )
      {
        v18 = v20 + 1;
        if ( v16 == (_QWORD *)a2 )
          v18 = v20;
        v8 = ViDeadlockAnalyze(a1, v17, 0, v18, a5);
        if ( v8 )
          break;
      }
      v15 = (_QWORD *)*v15;
      if ( v15 == v14 )
        goto LABEL_29;
    }
    ViDeadlockAddParticipant((__int64)(v15 - 5));
    if ( v16 == (_QWORD *)a2 )
    {
LABEL_23:
      if ( a3 )
      {
        if ( (unsigned int)ViDeadlockCertify(a5, a2) )
        {
          *((_QWORD *)ViDeadlockGlobals + 4107) = a1;
          ViDeadlockPreprocessOptions(
            byte_140C0DD7C,
            "Type !deadlock in the debugger for more information.",
            4097LL,
            a1,
            a2,
            0LL);
          VfReportIssueWithOptions(0xC4u, 0x1001uLL, a1, a2, 0LL, byte_140C0DD7C);
          return 0LL;
        }
        v8 = 0;
        goto LABEL_30;
      }
      return v8;
    }
LABEL_15:
    ViDeadlockAddParticipant(a2);
    goto LABEL_23;
  }
LABEL_29:
  if ( a3 )
  {
LABEL_30:
    v19 = *((_DWORD *)ViDeadlockGlobals + 8199);
    if ( v19 > *((_DWORD *)ViDeadlockGlobals + 8200) )
      *((_DWORD *)ViDeadlockGlobals + 8200) = v19;
  }
  return v8;
}
