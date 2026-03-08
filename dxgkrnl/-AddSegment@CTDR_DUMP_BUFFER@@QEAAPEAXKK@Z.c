/*
 * XREFs of ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0308828
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03092A0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0309D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0308FA0 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 */

void *__fastcall CTDR_DUMP_BUFFER::AddSegment(CTDR_DUMP_BUFFER *this, int a2, unsigned int a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rcx
  void *v9; // r9
  void *result; // rax

  if ( (unsigned int)*((unsigned __int16 *)this + 10) >= *(_DWORD *)this )
    return 0LL;
  v6 = *((_DWORD *)this + 6);
  v7 = *((_DWORD *)this + 4);
  if ( v6 >= v7 || v7 - v6 <= a3 )
    return 0LL;
  CTDR_DUMP_BUFFER::ShrinkLastSegment(this);
  v8 = *((_QWORD *)this + 1);
  v9 = (void *)(v8 + *((unsigned int *)this + 6));
  *(_DWORD *)(v8 + 8LL * *((unsigned __int16 *)this + 10) + 12) = a2;
  *(_DWORD *)(*((_QWORD *)this + 1) + 8LL * *((unsigned __int16 *)this + 10) + 8) = *((_DWORD *)this + 6);
  if ( a2 == 1 )
    *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) = *((_DWORD *)this + 6);
  ++*((_WORD *)this + 10);
  result = v9;
  *((_DWORD *)this + 6) += a3;
  return result;
}
