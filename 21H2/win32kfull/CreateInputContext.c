/*
 * XREFs of CreateInputContext @ 0x1C00F30B0
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C0080464 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserCreateInputContext @ 0x1C0151050 (NtUserCreateInputContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z @ 0x1C0150AE0 (--4-$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z.c)
 */

_QWORD *__fastcall CreateInputContext(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v9; // r9
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0x2000000) != 0 )
    return 0LL;
  v4 = gpsi;
  if ( (*gpsi & 4) == 0 || a1 && !*(_QWORD *)(ThreadWin32Thread + 792) )
    return 0LL;
  v5 = *(_QWORD *)(ThreadWin32Thread + 456);
  if ( !v5 )
    return 0LL;
  LOBYTE(v4) = 17;
  v6 = HMAllocObject(ThreadWin32Thread, v5, v4);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 0LL;
  if ( a1 )
  {
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(v6 + 56, *(_QWORD *)(*(_QWORD *)(v3 + 792) + 56LL));
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(*v9 + 56LL, v7);
  }
  else
  {
    v10[0] = v3 + 792;
    v10[1] = v6;
    HMAssignmentLock(v10, 0LL);
    *(_QWORD *)(*(_QWORD *)(v3 + 480) + 256LL) = v7[6];
    *(_QWORD *)(v7[5] + 16LL) = 0LL;
    v7[7] = 0LL;
  }
  *(_QWORD *)(v7[5] + 24LL) = a1;
  return v7;
}
