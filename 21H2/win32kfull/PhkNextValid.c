/*
 * XREFs of PhkNextValid @ 0x1C0020370
 * Callers:
 *     fnHkINLPCWPEXSTRUCT @ 0x1C0002630 (fnHkINLPCWPEXSTRUCT.c)
 *     zzzUnhookWindowsHookEx @ 0x1C001FAF4 (zzzUnhookWindowsHookEx.c)
 *     PhkFirstValid @ 0x1C00202CC (PhkFirstValid.c)
 *     xxxCallNextHookEx @ 0x1C0020314 (xxxCallNextHookEx.c)
 *     zzzCancelJournalling @ 0x1C0029398 (zzzCancelJournalling.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstGlobalValid @ 0x1C006672C (PhkFirstGlobalValid.c)
 *     zzzUnhookWindowsHook @ 0x1C01E7050 (zzzUnhookWindowsHook.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C02471F0 (fnHkINLPCWPRETEXSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhkNextValid(__int64 a1)
{
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 8LL * *(int *)(a1 + 48) + 48);
LABEL_3:
    if ( !a1 || (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
