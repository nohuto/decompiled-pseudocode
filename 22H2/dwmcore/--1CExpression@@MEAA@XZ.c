/*
 * XREFs of ??1CExpression@@MEAA@XZ @ 0x1800BCDCC
 * Callers:
 *     ??_ECExpression@@MEAAPEAXI@Z @ 0x1800BC9C0 (--_ECExpression@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x1800BC978 (--$ReleaseInterface@V-$CWeakReference@VCResource@@@@@@YAXAEAPEAV-$CWeakReference@VCResource@@@@@.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800BCA04 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ??$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z @ 0x1800BCE64 (--$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800BCE8C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CExpression::~CExpression(CExpression *this)
{
  __int64 i; // rdi

  *(_QWORD *)this = &CExpression::`vftable';
  ReleaseInterface<CSharedSection>((char *)this + 336);
  ReleaseInterface<CSharedSection>((char *)this + 352);
  CExpression::UnregisterSources((struct CBaseExpression **)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 106); i = (unsigned int)(i + 1) )
    ReleaseInterface<CWeakReference<CResource>>((__int64 *)(*((_QWORD *)this + 52) + 8 * i));
  operator delete(*((void **)this + 52));
  operator delete(*((void **)this + 54));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 384);
  CBaseExpression::~CBaseExpression(this);
}
