/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x180097428
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1800972A0 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18026B9C4 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800972E4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z @ 0x1800BC9C4 (--$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x18023640C (--$_Destroy_range@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  __int64 v1; // rbp
  char *i; // rsi
  CResource *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *((_BYTE *)this + 580) &= ~1u;
  v1 = 0LL;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  for ( i = (char *)this + 400; (unsigned int)v1 < *((_DWORD *)this + 106); v1 = (unsigned int)(v1 + 1) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)i + 8 * v1) + 216LL))(
      *(_QWORD *)(*(_QWORD *)i + 8 * v1),
      0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)i + 8 * v1) + 16LL))(*(_QWORD *)(*(_QWORD *)i + 8 * v1));
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(i, 8LL);
  if ( (*((_BYTE *)this + 581) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  v4 = (CResource *)*((_QWORD *)this + 44);
  if ( v4 )
  {
    CResource::InternalRelease(v4);
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( *((_QWORD *)this + 47) )
  {
    ReleaseInterface<CSharedSection>((char *)this + 376);
  }
  else
  {
    v5 = (void *)*((_QWORD *)this + 48);
    if ( v5 )
    {
      operator delete(v5);
      *((_QWORD *)this + 48) = 0LL;
    }
  }
  v6 = *((_QWORD *)this + 58);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(v6, *((_QWORD *)this + 59));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 58),
      (*((_QWORD *)this + 60) - *((_QWORD *)this + 58)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 57);
  DynArrayImpl<0>::~DynArrayImpl<0>(i);
  v7 = (char *)*((_QWORD *)this + 49);
  if ( v7 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 49));
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v7 + 64);
    operator delete(v7);
  }
  v8 = *((_QWORD *)this + 43);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)this + 42);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  CBaseExpression::~CBaseExpression(this);
}
