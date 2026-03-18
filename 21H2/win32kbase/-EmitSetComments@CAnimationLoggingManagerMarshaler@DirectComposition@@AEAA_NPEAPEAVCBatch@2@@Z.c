/*
 * XREFs of ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AF68
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000ACB0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000B2B0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C000B3E0 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000B6D8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  char v6; // di
  __int64 v8; // r15
  _DWORD *v9; // r14
  int v10; // ecx
  struct DirectComposition::CBatch *v11; // rax
  unsigned __int64 v12; // r13
  struct DirectComposition::CWeakReferenceBase *v13; // rdx
  char *v14; // r9
  size_t v15; // r8
  __int64 v16; // r9
  void *v17; // rdx
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  void *v19; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 62);
  v4 = *((_DWORD *)this + 58);
  v6 = 1;
  if ( v2 < v4 )
  {
    v8 = *((unsigned int *)this + 62);
    do
    {
      v9 = *(_DWORD **)(v8 * *((_QWORD *)this + 30) + *((_QWORD *)this + 26));
      v10 = 2 * v9[2];
      if ( ((2 * *((_BYTE *)v9 + 8)) & 3) != 0 )
        v10 += 4 - ((2 * *((_BYTE *)v9 + 8)) & 3);
      v11 = *a2;
      v12 = (unsigned int)(v10 + 20);
      LODWORD(Src) = v10 + 20;
      v19 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)v11 + 17) + 40LL));
      if ( (unsigned __int64)v19 < v12
        && (!DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v19) || (unsigned __int64)v19 < v12) )
      {
        v6 = 0;
        break;
      }
      v13 = *(struct DirectComposition::CWeakReferenceBase **)v9;
      if ( *(_QWORD *)v9 )
      {
        if ( !*(_QWORD *)(*(_QWORD *)v9 + 16LL) )
          goto LABEL_13;
        v19 = 0LL;
        DirectComposition::CBatch::EnsureBatchBuffer(a2, v12, &v19);
        v14 = (char *)v19;
        *(_DWORD *)v19 = Src;
        *(_OWORD *)(v14 + 4) = 0LL;
        *((_DWORD *)v14 + 1) = 15;
        *((_DWORD *)v14 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v14 + 3) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 16LL) + 32LL);
        *((_DWORD *)v14 + 4) = v9[2];
        memmove(v14 + 20, v9 + 4, 2LL * *((_QWORD *)v9 + 1));
        v13 = *(struct DirectComposition::CWeakReferenceBase **)v9;
      }
      if ( v13 )
      {
LABEL_13:
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          *((DirectComposition::CApplicationChannel **)*a2 + 1),
          v13);
        *(_QWORD *)v9 = 0LL;
      }
      v15 = *((_QWORD *)this + 30);
      v16 = *((_QWORD *)this + 26);
      v17 = *(void **)(v8 * v15 + v16);
      if ( v17 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v17);
        v15 = *((_QWORD *)this + 30);
        v16 = *((_QWORD *)this + 26);
      }
      Src = 0LL;
      memmove((void *)(v16 + v15 * v2), &Src, v15);
      ++*((_DWORD *)this + 62);
      ++v2;
      ++v8;
    }
    while ( v2 < v4 );
  }
  if ( *((_DWORD *)this + 62) == v4 )
  {
    v6 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 208),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 62) = 0;
  }
  return v6;
}
