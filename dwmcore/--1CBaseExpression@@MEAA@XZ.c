/*
 * XREFs of ??1CBaseExpression@@MEAA@XZ @ 0x180099D04
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180097428 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@MEAA@XZ @ 0x1800BC92C (--1CExpression@@MEAA@XZ.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x18022404C (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x18022BA50 (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??1CNaturalAnimation@@UEAA@XZ @ 0x180238804 (--1CNaturalAnimation@@UEAA@XZ.c)
 *     ??_ECBaseExpression@@MEAAPEAXI@Z @ 0x18023B8F0 (--_ECBaseExpression@@MEAAPEAXI@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180261254 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x18009A24C (--1CSparseStorage@@QEAA@XZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009AF40 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rbp
  void **i; // rsi
  __int64 v6; // rcx

  *(_QWORD *)this = &CBaseExpression::`vftable';
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 160LL);
  v3 = (void *)*((_QWORD *)this + 25);
  if ( v3 )
  {
    operator delete(v3, 8uLL);
    *((_QWORD *)this + 25) = 0LL;
  }
  v4 = 0LL;
  for ( i = (void **)((char *)this + 240); (unsigned int)v4 < *((_DWORD *)this + 66); v4 = (unsigned int)(v4 + 1) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*i + v4) + 216LL))(*((_QWORD *)*i + v4), 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*i + v4) + 16LL))(*((_QWORD *)*i + v4));
  }
  *((_DWORD *)this + 66) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 240, 8LL);
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 328));
  v6 = *((_QWORD *)this + 38);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 40) - v6) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
  }
  if ( *((_QWORD *)this + 30) != *((_QWORD *)this + 31) )
  {
    operator delete(*i);
    *i = 0LL;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 136);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
