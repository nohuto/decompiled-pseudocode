/*
 * XREFs of InbvDisplayString @ 0x140383830
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140C6AC4C )
    return 0;
  if ( qword_140C6AC50 )
    qword_140C6AC50(&v3);
  if ( qword_140C6AC58 && (v2 = *(__int64 (**)(void))(qword_140C6AC58 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
