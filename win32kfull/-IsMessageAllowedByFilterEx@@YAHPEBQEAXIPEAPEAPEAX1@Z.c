/*
 * XREFs of ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C00CBE58
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C0037190 (NtUserPostThreadMessage.c)
 *     NtUserPostMessage @ 0x1C0047F50 (NtUserPostMessage.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00A86C0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     _PostTransformableMessageIL @ 0x1C00CB574 (_PostTransformableMessageIL.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00CB9E8 (_ChangeWindowMessageFilterEx.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00CBDD4 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00F9A30 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01B81EC (_PostMessageCheckIL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMessageAllowedByFilterEx(void *const *a1, unsigned __int16 a2, void ***a3, void ***a4)
{
  unsigned int v6; // r8d
  void **v8; // r11
  void **v9; // r9

  if ( a1
    && (v8 = (void **)a1[(unsigned __int64)a2 >> 13]) != 0LL
    && (v9 = (void **)v8[((unsigned __int64)a2 >> 9) & 0xF]) != 0LL
    && (v6 = 1, ((unsigned __int8)(1 << (a2 & 7)) & *((_BYTE *)v9 + (((unsigned __int64)a2 >> 3) & 0x3F))) != 0) )
  {
    if ( a3 )
      *a3 = v8;
    if ( a4 )
      *a4 = v9;
  }
  else
  {
    return 0;
  }
  return v6;
}
