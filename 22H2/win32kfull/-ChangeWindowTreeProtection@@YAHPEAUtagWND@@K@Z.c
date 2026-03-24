/*
 * XREFs of ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0247850
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C0247B60 (SetDisplayAffinity.c)
 * Callees:
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1C0247814 (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C0247A74 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall ChangeWindowTreeProtection(struct tagWND *a1, unsigned int a2)
{
  unsigned int v3; // r15d
  struct tagBWL *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 *i; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rbx
  struct tagWND **v15; // rdi
  struct tagWND **v16; // rsi
  struct tagWND **v18; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-8h]
  int v20; // [rsp+2Ch] [rbp-4h]
  struct tagWND *v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+80h] [rbp+50h] BYREF

  v21 = a1;
  v3 = 0;
  v5 = BuildHwndList(a1, 1, 0LL);
  if ( v5 )
  {
    v18 = 0LL;
    v19 = 0;
    v20 = 0;
    if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v18, &v21) >= 0 )
    {
      v6 = *((_QWORD *)a1 + 2);
      v7 = 0LL;
      v8 = *(_QWORD *)(v6 + 424);
      if ( a1 == *(struct tagWND **)(v6 + 1392) )
      {
        v9 = *(_QWORD *)(v6 + 1400);
        if ( v9 )
          v7 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL);
      }
      for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
      {
        v11 = HMValidateHandleNoSecure(*i, 1);
        v22 = v11;
        if ( v11 && (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 27LL) & 0x20) != 0 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL);
          if ( (a2 & 1) != 0 && v12 != v8 && v12 != v7 )
            goto LABEL_25;
          if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v18, &v22) < 0 )
            goto LABEL_25;
        }
      }
    }
    v13 = v19;
    v14 = 0LL;
    v3 = 1;
    if ( v19 )
    {
      v15 = v18;
      while ( 1 )
      {
        if ( !(unsigned int)ProtectWindowBitmap(v15[v14], a2) )
        {
          v3 = 0;
          if ( (a2 & 1) != 0 )
            break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_26;
      }
      if ( (_DWORD)v14 )
      {
        v16 = &v15[v14];
        do
        {
          ProtectWindowBitmap(*--v16, 0);
          LODWORD(v14) = v14 - 1;
        }
        while ( (_DWORD)v14 );
      }
    }
    else
    {
LABEL_25:
      v15 = v18;
    }
LABEL_26:
    FreeHwndList(v5);
    if ( v15 )
      Win32FreePool(v15);
  }
  return v3;
}
