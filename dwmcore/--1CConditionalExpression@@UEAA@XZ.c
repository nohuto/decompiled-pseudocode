/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x18022404C
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1802241B0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x180223DE8 (--$_Destroy_range@V-$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  __int64 *v4; // rcx

  *(_QWORD *)this = &CConditionalExpression::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 44);
  for ( i = (_QWORD *)*((_QWORD *)this + 43); i != v2; i += 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 216LL))(*i, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)i[1] + 216LL))(i[1], 0LL);
  }
  std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
    *((__int64 **)this + 43),
    *((__int64 **)this + 44));
  *((_QWORD *)this + 44) = *((_QWORD *)this + 43);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
  v4 = (__int64 *)*((_QWORD *)this + 43);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
      v4,
      *((__int64 **)this + 44));
    std::_Deallocate<16,0>(
      *((void **)this + 43),
      (*((_QWORD *)this + 45) - *((_QWORD *)this + 43)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
