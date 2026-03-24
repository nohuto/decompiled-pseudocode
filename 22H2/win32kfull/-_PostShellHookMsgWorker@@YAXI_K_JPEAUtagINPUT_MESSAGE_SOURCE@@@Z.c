/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00435B0
 * Callers:
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0004818 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0043558 (PostShellHookMessagesEx.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C004F044 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00549A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

void __fastcall _PostShellHookMsgWorker(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  struct tagWND *v8; // rbx
  __int64 v9; // r14
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v12; // [rsp+28h] [rbp-30h]
  unsigned int v13[10]; // [rsp+30h] [rbp-28h] BYREF

  v13[0] = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 464LL);
  while ( 1 )
  {
    v8 = VWPLNextBase(*(struct tagVWPL **)(v9 + 240), a2, v8, v13, v11, v12);
    if ( !v8 )
      break;
    if ( a1 == *(_DWORD *)(gpsi + 928LL) && v8 == *(struct tagWND **)(v9 + 200) )
    {
      if ( a2 == 1 )
      {
        v10 = guiOtherWindowCreated;
LABEL_11:
        PostMessage((int)v8, a1, v10, a3);
      }
      else if ( a2 == 2 )
      {
        v10 = guiOtherWindowDestroyed;
        goto LABEL_11;
      }
    }
    else
    {
      _PostTransformableMessageExtended(v8, a1, a2, a3, a4, 1);
    }
  }
}
