/*
 * XREFs of ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02B9C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0123B9C (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0123C28 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02B9970 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

void __fastcall vRestartbRealizeFont(struct RFONT *a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 16);
  v4 = (struct _FONTOBJ *)a1;
  v3[0] = v1;
  RFONTOBJ::vDestroyFont(&v4, 0);
  PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v3);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(a1);
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
}
