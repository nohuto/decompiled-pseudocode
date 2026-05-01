/*
 * XREFs of ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x1800214DC
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x1800213B0 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x180439B90 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUHint@ActivationHints@@PEAU12@@std@@YAPEAUHint@ActivationHints@@PEAU12@00@Z @ 0x180021550 (--$_Move_unchecked@PEAUHint@ActivationHints@@PEAU12@@std@@YAPEAUHint@ActivationHints@@PEAU12@00@.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18002158C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x180439980 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

void __fastcall ActivationHints::DeleteExpiredHints(ActivationHints *this)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 v4; // rax
  ActivationHints::Hint *v5; // rbp
  __int64 v6; // rsi
  ActivationHints::Hint *j; // rbx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  std::chrono::steady_clock::now(&v8);
  v2 = *((_QWORD *)this + 21);
  for ( i = *((_QWORD *)this + 20); i != v2; i += 80LL )
  {
    if ( v8 - *(_QWORD *)(i + 64) <= 120000000000LL )
      break;
  }
  v4 = std::_Move_unchecked<ActivationHints::Hint *,ActivationHints::Hint *>(i);
  v5 = (ActivationHints::Hint *)*((_QWORD *)this + 21);
  v6 = v4;
  for ( j = (ActivationHints::Hint *)v4; j != v5; j = (ActivationHints::Hint *)((char *)j + 80) )
    ActivationHints::Hint::~Hint(j);
  *((_QWORD *)this + 21) = v6;
}
