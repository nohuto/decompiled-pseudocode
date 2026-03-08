/*
 * XREFs of ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1800F15B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::ShouldSnapToPixels(CEffectBrush *this)
{
  unsigned int v1; // esi
  int v2; // ebx
  __int64 i; // rdi
  __int64 v5; // rcx

  v1 = *((_DWORD *)this + 36);
  v2 = 0;
  if ( !v1 )
    return 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v5 = *(_QWORD *)(i + *((_QWORD *)this + 15));
    if ( v5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 304LL))(v5) )
        break;
    }
    if ( ++v2 >= v1 )
      return 0;
  }
  return 1;
}
