/*
 * XREFs of ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C022F838
 * Callers:
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C022FAFC (SetDisplayAffinity.c)
 * Callees:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1C022F7FC (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C022FA64 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall ChangeWindowTreeProtection(struct tagWND *a1, unsigned int a2)
{
  unsigned int v3; // r15d
  struct tagBWL *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *i; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  char *v14; // rdi
  struct tagWND **v15; // rsi
  char *v17; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-8h]
  int v19; // [rsp+2Ch] [rbp-4h]
  struct tagWND *v20; // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF

  v20 = a1;
  v3 = 0;
  v5 = BuildHwndList(a1, 1, 0LL, 1);
  if ( v5 )
  {
    v17 = 0LL;
    v18 = 0;
    v19 = 0;
    if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v17, &v20) >= 0 )
    {
      v6 = *((_QWORD *)a1 + 2);
      v7 = 0LL;
      v8 = *(_QWORD *)(v6 + 424);
      if ( a1 == *(struct tagWND **)(v6 + 1432) )
      {
        v9 = *(_QWORD *)(v6 + 1440);
        if ( v9 )
          v7 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL);
      }
      for ( i = (_QWORD *)((char *)v5 + 32); *i != 1LL; ++i )
      {
        v11 = HMValidateHandleNoSecure(*i, 1);
        v21 = v11;
        if ( v11 && (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 27LL) & 0x20) != 0 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL);
          if ( (a2 & 1) != 0 && v12 != v8 && v12 != v7 )
            goto LABEL_24;
          if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v17, &v21) < 0 )
            goto LABEL_24;
        }
      }
    }
    v13 = 0LL;
    v3 = 1;
    if ( v18 )
    {
      v14 = v17;
      while ( 1 )
      {
        v15 = (struct tagWND **)&v14[8 * v13];
        if ( !(unsigned int)ProtectWindowBitmap(*v15, a2) )
        {
          v3 = 0;
          if ( (a2 & 1) != 0 )
            break;
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v18 )
          goto LABEL_25;
      }
      for ( ; (_DWORD)v13; LODWORD(v13) = v13 - 1 )
        ProtectWindowBitmap(*--v15, 0);
    }
    else
    {
LABEL_24:
      v14 = v17;
    }
LABEL_25:
    FreeHwndList(v5);
    if ( v14 )
      Win32FreePool(v14);
  }
  return v3;
}
