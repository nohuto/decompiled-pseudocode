/*
 * XREFs of KeAllocateXStateContext @ 0x14036A7A0
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14036A62C (KeSaveExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x140AE19B4 (VfCtxInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeAllocateXStateContext(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  __int64 Pool2; // rax

  v3 = 576;
  if ( a3 >= 0x240 )
    v3 = a3;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v3 + 63), 1986089816LL);
  *(_QWORD *)(a1 + 24) = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_DWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 16) = (Pool2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  return 0LL;
}
