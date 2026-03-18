/*
 * XREFs of InbvGetDisplayState @ 0x14054E62C
 * Callers:
 *     FinalizeBootLogo @ 0x14054E85C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14054E8B0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14054EA0C (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6AC58 && (v0 = *(__int64 (**)(void))(qword_140C6AC58 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
