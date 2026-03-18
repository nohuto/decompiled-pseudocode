/*
 * XREFs of ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C008EF30
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C008EC08 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C008EE00 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C016BCD0 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0025F50 (--$AllocateIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008B020 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

__int64 __fastcall CRegion::InitializeFromRect(CRegion *this, struct _RECTL *a2)
{
  unsigned int v4; // edi
  NSInstrumentation::CLeakTrackingAllocator *v5; // rcx
  __int64 v6; // rbx
  struct _SLIST_ENTRY *v7; // rax
  struct _RECTL v9; // [rsp+20h] [rbp-28h] BYREF
  struct _RECTL *v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  v11 = 0;
  v4 = -1073741801;
  v6 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>();
  if ( v6
    && (v7 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
               v5,
               (char *)RGNMEMOBJ::s_pSCANLookAsideList),
        (*(_QWORD *)(v6 + 88) = v7) == 0LL) )
  {
    REGION::vDeleteREGION((PSLIST_ENTRY)v6);
  }
  else
  {
    v10 = (struct _RECTL *)v6;
    if ( v6 )
    {
      *(_DWORD *)(v6 + 24) = 112;
      *(_DWORD *)(v6 + 80) = 0;
      *(_DWORD *)(v6 + 32) = 0;
      *(_DWORD *)(v6 + 28) = 0;
      *(_DWORD *)(v6 + 36) = 0;
      *(_QWORD *)(v6 + 56) = v6 + 48;
      *(_QWORD *)(v6 + 48) = v6 + 48;
      v9 = *a2;
      RGNOBJ::vSet(&v10, &v9);
      v4 = 0;
      *((_QWORD *)this + 2) = v6;
      *((_DWORD *)this + 3) = 2;
    }
  }
  return v4;
}
