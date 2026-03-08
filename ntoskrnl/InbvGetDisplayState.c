/*
 * XREFs of InbvGetDisplayState @ 0x14054C18C
 * Callers:
 *     FinalizeBootLogo @ 0x14054C3BC (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14054C410 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14054C56C (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6A7D0 && (v0 = *(__int64 (**)(void))(qword_140C6A7D0 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
