/*
 * XREFs of sub_18000F1A0 @ 0x18000F1A0
 * Callers:
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F1A0(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &ISpectreRenderer::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180139F50;
  if ( qword_180218538 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180218538 + 8LL))(qword_180218538);
  *(_QWORD *)a1 = &off_180139FC8;
  *(_QWORD *)(a1 + 16) = off_18013A040;
  result = a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  return result;
}
