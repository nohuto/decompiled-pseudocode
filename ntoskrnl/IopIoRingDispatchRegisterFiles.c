/*
 * XREFs of IopIoRingDispatchRegisterFiles @ 0x140946A40
 * Callers:
 *     IopProcessIoRingEntry @ 0x140947008 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopExceptionFilter @ 0x1405530E8 (IopExceptionFilter.c)
 *     IopCompleteIoRingEntry @ 0x140556F5C (IopCompleteIoRingEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall IopIoRingDispatchRegisterFiles(__int64 a1, __int64 a2)
{
  char PreviousMode; // r8
  __int64 i; // rdi
  int v6; // r10d
  void *v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  _KPROCESS *Process; // rdx
  __int16 v11; // ax
  bool v13; // al
  unsigned int v14; // edx
  bool v15; // zf
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 Pool2; // rcx
  __int64 v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-68h]
  __int128 v22; // [rsp+40h] [rbp-48h] BYREF
  bool v23; // [rsp+A0h] [rbp+18h]

  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LODWORD(i) = 0;
  v6 = *(_DWORD *)(a1 + 192);
  v7 = *(void **)(a1 + 200);
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFE) != 0 || *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 20) )
  {
    v21 = -1069154303;
    goto LABEL_36;
  }
  v8 = *(unsigned int *)(a2 + 28);
  v9 = *(_QWORD *)(a2 + 32);
  if ( !(_DWORD)v8 )
  {
    v21 = v9 != 0 ? 0xC000000D : 0;
    goto LABEL_36;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = 0;
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v11 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v11 == 332 || v11 == 452 )
      v13 = 1;
  }
  v23 = v13;
  if ( PreviousMode )
  {
    v14 = -1;
    v15 = !v13;
    v16 = 4 * v8;
    if ( v15 )
      v16 = 8 * v8;
    if ( v16 <= 0xFFFFFFFF )
      v14 = v16;
    v21 = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_36;
    if ( v14 )
    {
      v17 = v9 + v14;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (_DWORD)v8 == v6 )
  {
    Pool2 = (__int64)v7;
    v7 = 0LL;
    goto LABEL_27;
  }
  Pool2 = ExAllocatePool2(259LL, 8 * v8, 1179808329LL);
  if ( Pool2 )
  {
LABEL_27:
    for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
    {
      if ( v23 )
        v19 = *(int *)(v9 + 4 * i);
      else
        v19 = *(_QWORD *)(v9 + 8 * i);
      *(_QWORD *)(Pool2 + 8 * i) = v19;
    }
    *(_DWORD *)(a1 + 192) = i;
    *(_QWORD *)(a1 + 200) = Pool2;
    goto LABEL_36;
  }
  v21 = -1073741670;
LABEL_36:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x46527249u);
  *((_QWORD *)&v22 + 1) = (unsigned int)i;
  *(_QWORD *)&v22 = v21;
  return IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v22, 0);
}
