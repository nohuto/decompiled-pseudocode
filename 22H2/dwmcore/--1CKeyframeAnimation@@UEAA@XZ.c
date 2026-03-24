/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A9A74
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1800A9A30 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18020E944 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180062F08 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A9BF0 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9CA4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z @ 0x1800A9CCC (--$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A9ECC (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x180163314 (--A-$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x1801D0F04 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  unsigned int v1; // edi
  char *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdi
  CExpressionValue *v7; // rdi

  *((_BYTE *)this + 548) &= ~1u;
  v1 = 0;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  if ( *((_DWORD *)this + 98) )
  {
    v3 = (char *)this + 368;
    do
    {
      v4 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[](v3, v1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 232LL))(*v4, 0LL);
      v5 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[](v3, v1);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
      ++v1;
    }
    while ( v1 < *((_DWORD *)this + 98) );
  }
  *((_DWORD *)this + 98) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 368, 8LL);
  if ( (*((_BYTE *)this + 549) & 1) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  ReleaseInterface<CD2DSharedBuffer>((CRenderTargetBitmap **)this + 40);
  if ( *((_QWORD *)this + 43) )
    ReleaseInterface<CD2DSharedBuffer>((CRenderTargetBitmap **)this + 43);
  else
    SAFE_DELETE_ARRAY<unsigned char>((char *)this + 352);
  v6 = *((_QWORD *)this + 54);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(
      *((_QWORD *)this + 54),
      *((_QWORD *)this + 55));
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 56) - v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 53);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 368);
  v7 = (CExpressionValue *)*((_QWORD *)this + 45);
  if ( v7 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 45));
    CExpressionValue::~CExpressionValue(v7);
    operator delete(v7);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)this + 312);
  CBaseExpression::~CBaseExpression(this);
}
