void __fastcall _PostShellHookMsgWorker(unsigned int a1, __int64 a2, __int64 a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned __int64 v6; // r14
  struct tagWND *v8; // r8
  __int64 v9; // rbp
  struct tagWND *v10; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // r8
  unsigned int v13[10]; // [rsp+30h] [rbp-28h] BYREF

  v13[0] = 0;
  v6 = a2;
  v8 = 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 464LL);
  while ( 1 )
  {
    v10 = VWPLNextBase(*(struct tagVWPL **)(v9 + 240), a2, v8, v13);
    v11 = v10;
    if ( !v10 )
      break;
    a2 = gpsi;
    if ( a1 != *(_DWORD *)(gpsi + 928LL) || v10 != *(struct tagWND **)(v9 + 200) )
    {
      _PostTransformableMessageExtended(v10, a1, v6, a3, a4, 1);
      goto LABEL_6;
    }
    if ( v6 == 1 )
    {
      v12 = (unsigned int)guiOtherWindowCreated;
    }
    else
    {
      if ( v6 != 2 )
        goto LABEL_6;
      v12 = (unsigned int)guiOtherWindowDestroyed;
    }
    PostMessage(v10, a1, v12, a3);
LABEL_6:
    v8 = v11;
  }
}
