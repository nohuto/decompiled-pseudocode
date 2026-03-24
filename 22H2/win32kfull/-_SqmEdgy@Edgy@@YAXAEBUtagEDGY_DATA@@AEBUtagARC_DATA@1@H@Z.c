/*
 * XREFs of ?_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z @ 0x1C0208404
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C02080DC (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C02081BC (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall Edgy::_SqmEdgy(Edgy *this, const struct tagEDGY_DATA *a2, const struct Edgy::tagARC_DATA *a3)
{
  bool v4; // zf
  int v5; // ecx
  _DWORD v6[12]; // [rsp+30h] [rbp-40h] BYREF

  if ( gSqmIsOptedIn )
  {
    v4 = *((_DWORD *)this + 4) == 1;
    v6[2] = *((_DWORD *)a2 + 6);
    v5 = 2;
    if ( !v4 )
      v5 = 0;
    v6[3] = 0;
    v6[7] = 0;
    v6[11] = 0;
    v6[0] = 16;
    v6[1] = 1;
    v6[6] = ((_DWORD)a3 != 0) | v5;
    v6[10] = *((_DWORD *)a2 + 12) - *((_DWORD *)this + 50);
    v6[4] = 16;
    v6[5] = 1;
    v6[8] = 16;
    v6[9] = 1;
    WinSqmAddToStreamEx(0LL, 8509LL, 3LL, v6, 0);
  }
}
