/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1803BB950
 * Callers:
 *     _lambda_5fc35d1030d0241eeb48d222f7d22fe1_::operator() @ 0x1800CF6FC (_lambda_5fc35d1030d0241eeb48d222f7d22fe1_--operator().c)
 *     _lambda_f61fa834658c673f1bf417ab36d33a49_::operator() @ 0x1800CFB3C (_lambda_f61fa834658c673f1bf417ab36d33a49_--operator().c)
 *     _lambda_f68384705a080bb04b4187854264e75d_::operator() @ 0x1800CFD78 (_lambda_f68384705a080bb04b4187854264e75d_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TouchKeyboardExperienceManager::IsFrameReady(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int128 v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&v4 = this;
  if ( !a2 )
    return 0;
  (*(void (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 24LL))(a2, &v4);
  (*(void (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a2 + 40LL))(a2, (char *)&v4 + 8);
  return v4 != 0;
}
