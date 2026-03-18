/*
 * XREFs of ?Clear@CLightStack@@QEAAXXZ @ 0x18003C7BC
 * Callers:
 *     ??1CLightStack@@QEAA@XZ @ 0x18003C748 (--1CLightStack@@QEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18003C780 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D54D8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLightStack::Clear(CLightStack *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 16LL * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 16LL);
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 13);
  *((_DWORD *)this + 52) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 184, 8LL);
}
