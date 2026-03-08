/*
 * XREFs of ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1800D6308
 * Callers:
 *     _anonymous_namespace_::State::State @ 0x1800D606C (_anonymous_namespace_--State--State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1800D618C (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x1800D6228 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1800D6290 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800F35B0 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800FD928 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttributionObserver *__fastcall CProcessAttributionManager::CreateObserver(
        CProcessAttributionManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  __int64 *v5; // r15
  __int64 *i; // rsi
  __int64 v8; // r14
  char *v9; // rax
  char *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  _QWORD *v13; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = DefaultHeap::AllocClear(0x28uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[1] = this;
  *v2 = &CProcessAttributionManager::Observer::`vftable';
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  v15 = v2;
  if ( v4 == *((_QWORD **)this + 5) )
  {
    std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
      (char *)this + 24,
      v4,
      &v15);
    v3 = v15;
  }
  else
  {
    *v4 = v2;
    *((_QWORD *)this + 4) += 8LL;
  }
  v5 = (__int64 *)*((_QWORD *)this + 1);
  for ( i = *(__int64 **)this; i != v5; ++i )
  {
    v8 = *i;
    ++*(_DWORD *)(*i + 160);
    v9 = (char *)operator new(0x70uLL);
    v10 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x70uLL);
    else
      v10 = 0LL;
    *(_QWORD *)v10 = *(_QWORD *)v8;
    v11 = *(_QWORD *)(v8 + 112);
    v15 = v10;
    if ( v11 )
    {
      *(_OWORD *)(v10 + 8) = *(_OWORD *)(v11 + 24);
      v12 = *(_DWORD *)(v11 + 40);
    }
    else
    {
      *(_OWORD *)(v10 + 8) = *(_OWORD *)(v8 + 8);
      v12 = *(_DWORD *)(v8 + 24);
    }
    *((_DWORD *)v10 + 6) = v12;
    v13 = (_QWORD *)v3[3];
    if ( v13 == (_QWORD *)v3[4] )
    {
      std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
        v3 + 2,
        v13,
        &v15);
    }
    else
    {
      *v13 = v10;
      v3[3] += 8LL;
    }
  }
  return (struct CProcessAttributionObserver *)v3;
}
