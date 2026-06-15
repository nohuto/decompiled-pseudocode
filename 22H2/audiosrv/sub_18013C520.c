/*
 * XREFs of sub_18013C520 @ 0x18013C520
 * Callers:
 *     sub_18013BEEC @ 0x18013BEEC (sub_18013BEEC.c)
 *     sub_18013BFA0 @ 0x18013BFA0 (sub_18013BFA0.c)
 *     sub_18013C050 @ 0x18013C050 (sub_18013C050.c)
 *     sub_18013C100 @ 0x18013C100 (sub_18013C100.c)
 *     sub_18013C1DC @ 0x18013C1DC (sub_18013C1DC.c)
 *     sub_18013C2AC @ 0x18013C2AC (sub_18013C2AC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013C594 @ 0x18013C594 (sub_18013C594.c)
 */

__int64 __fastcall sub_18013C520(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, &unk_180178D8C, 1LL);
  if ( (int)result >= 0 )
  {
    result = sub_18013C594(a1, a2);
    if ( (int)result >= 0 )
      return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, &unk_180178D8C, 1LL);
  }
  return result;
}
