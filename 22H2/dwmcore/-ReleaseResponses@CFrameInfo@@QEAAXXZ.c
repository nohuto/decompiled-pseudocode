/*
 * XREFs of ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x18004D298
 * Callers:
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004D1B4 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800AF87C (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x1801F1960 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CFrameInfo::ReleaseResponses(CFrameInfo *this)
{
  __int64 v1; // rsi
  char *i; // rbx

  v1 = 0LL;
  for ( i = (char *)this + 176; (unsigned int)v1 < *((_DWORD *)this + 50); v1 = (unsigned int)(v1 + 1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)i + 8 * v1) + 40LL))(*(_QWORD *)(*(_QWORD *)i + 8 * v1));
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(i, 8LL);
}
