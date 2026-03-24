/*
 * XREFs of ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x18009FCE4
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x1800A08FC (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800C18FC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil@@QEAA_NXZ @ 0x1800EF9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllLights(CVisual *this)
{
  char *v1; // rsi
  char *v3; // rdi
  __int64 v4; // rbp
  char IsEnabled; // al
  __int64 *v6; // rcx
  __int64 v7; // r8
  char *v8; // r14
  char *v9; // rdi
  __int64 v10; // rsi
  char v11; // al
  __int64 *v12; // rcx
  __int64 v13; // r8

  v1 = (char *)*((_QWORD *)this + 35);
  v3 = (char *)*((_QWORD *)this + 34);
  v4 = (v1 - v3) >> 4;
  if ( v4 )
  {
    while ( v3 != v1 )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_3569146171>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3569146171>::GetImpl'::`2'::impl);
      v6 = *(__int64 **)v3;
      v7 = **(_QWORD **)v3;
      if ( IsEnabled )
        (*(void (__fastcall **)(__int64 *, CVisual *))(v7 + 288))(v6, this);
      else
        (*(void (__fastcall **)(__int64 *, CVisual *))(v7 + 280))(v6, this);
      CPtrArrayBase::Remove((CPtrArrayBase *)(*(_QWORD *)v3 + 24LL), (unsigned __int64)this);
      v3 += 16;
    }
    *((_QWORD *)this + 35) = *((_QWORD *)this + 34);
  }
  v8 = (char *)*((_QWORD *)this + 38);
  v9 = (char *)*((_QWORD *)this + 37);
  v10 = (v8 - v9) >> 4;
  if ( v10 )
  {
    while ( v9 != v8 )
    {
      v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_3569146171>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3569146171>::GetImpl'::`2'::impl);
      v12 = *(__int64 **)v9;
      v13 = **(_QWORD **)v9;
      if ( v11 )
        (*(void (__fastcall **)(__int64 *, CVisual *))(v13 + 296))(v12, this);
      else
        (*(void (__fastcall **)(__int64 *, CVisual *))(v13 + 280))(v12, this);
      v9 += 16;
    }
    *((_QWORD *)this + 38) = *((_QWORD *)this + 37);
  }
  if ( v10 + v4 )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
}
