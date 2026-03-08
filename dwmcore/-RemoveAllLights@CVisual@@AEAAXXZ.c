/*
 * XREFs of ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x18009A15C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800D5814 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllLights(CVisual *this)
{
  char *v1; // rbp
  char *v3; // rdi
  __int64 v4; // rsi
  char *v5; // rbp
  char *v6; // r14
  __int64 v7; // rdi

  v1 = (char *)*((_QWORD *)this + 36);
  v3 = (char *)*((_QWORD *)this + 35);
  v4 = (v1 - v3) >> 4;
  if ( v4 )
  {
    while ( v3 != v1 )
    {
      (*(void (__fastcall **)(_QWORD, CVisual *))(**(_QWORD **)v3 + 264LL))(*(_QWORD *)v3, this);
      CPtrArrayBase::Remove((CPtrArrayBase *)(*(_QWORD *)v3 + 24LL), (unsigned __int64)this);
      v3 += 16;
    }
    *((_QWORD *)this + 36) = *((_QWORD *)this + 35);
  }
  v5 = (char *)*((_QWORD *)this + 39);
  v6 = (char *)*((_QWORD *)this + 38);
  v7 = (v5 - v6) >> 4;
  if ( v7 )
  {
    while ( v6 != v5 )
    {
      (*(void (__fastcall **)(_QWORD, CVisual *))(**(_QWORD **)v6 + 264LL))(*(_QWORD *)v6, this);
      v6 += 16;
    }
    *((_QWORD *)this + 39) = *((_QWORD *)this + 38);
  }
  if ( v7 + v4 )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
}
