/*
 * XREFs of ??4Hint@ActivationHints@@QEAAAEAU01@$$QEAU01@@Z @ 0x180439620
 * Callers:
 *     ??$_Move_unchecked@PEAUHint@ActivationHints@@PEAU12@@std@@YAPEAUHint@ActivationHints@@PEAU12@00@Z @ 0x180021550 (--$_Move_unchecked@PEAUHint@ActivationHints@@PEAU12@@std@@YAPEAUHint@ActivationHints@@PEAU12@00@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivationHints::Hint::operator=(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)a1);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  v4 = (_OWORD *)(a2 + 32);
  if ( a1 + 32 != a2 + 32 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 32));
    *(_OWORD *)(a1 + 32) = *v4;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_QWORD *)(a2 + 56) = 7LL;
    *(_WORD *)v4 = 0;
  }
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  v5 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return a1;
}
