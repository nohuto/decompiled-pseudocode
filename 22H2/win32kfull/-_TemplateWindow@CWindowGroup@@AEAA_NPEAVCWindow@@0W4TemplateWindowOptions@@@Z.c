/*
 * XREFs of ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C024081C
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C023F640 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C023F6DC (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C024089C (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C0240518 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 */

char __fastcall CWindowGroup::_TemplateWindow(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // bl
  __int64 v7; // rsi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  if ( a2 == a3 )
    return 1;
  v6 = 0;
  v7 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
  if ( v7 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
    v6 = CWindow::TemplateWindow(a3, v7, a4);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  }
  return v6;
}
