/*
 * XREFs of ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z @ 0x18002D55C
 * Callers:
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x18002AA88 (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18002ECBC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct CBackdropBrush *__fastcall CRenderingTechniqueFragment::GetBackdropBrushNoRef(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rax
  struct CBrush *NamedInput; // rax
  struct CBrush *v10; // r14

  v2 = 0LL;
  v4 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    for ( i = 0LL; ; i += 16LL )
    {
      v8 = *((_QWORD *)this + 4);
      if ( !*(_QWORD *)(i + v8 + 8) && !*(_BYTE *)(i + v8 + 4) )
      {
        NamedInput = CBrushRenderingGraph::GetNamedInput(a2, *(_DWORD *)(i + v8));
        v10 = NamedInput;
        if ( NamedInput )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)NamedInput + 56LL))(
                 NamedInput,
                 9LL) )
          {
            break;
          }
        }
      }
      if ( ++v6 >= (unsigned int)v4 )
        return (const struct CBackdropBrush *)v2;
    }
    return v10;
  }
  return (const struct CBackdropBrush *)v2;
}
