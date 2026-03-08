/*
 * XREFs of wcsncpycch @ 0x1C01093D4
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 *     NtUserRemoteConnect @ 0x1C00EF850 (NtUserRemoteConnect.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0109318 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02287C0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wcsncpycch(_WORD *a1, __int64 a2, int a3)
{
  _WORD *v3; // r9
  __int64 v4; // rdx
  __int16 v5; // ax

  v3 = a1;
  if ( a3 )
  {
    v4 = a2 - (_QWORD)a1;
    do
    {
      v5 = *(_WORD *)((char *)a1 + v4);
      *a1++ = v5;
      if ( !v5 )
        break;
      --a3;
    }
    while ( a3 );
  }
  return (unsigned int)(a1 - v3);
}
