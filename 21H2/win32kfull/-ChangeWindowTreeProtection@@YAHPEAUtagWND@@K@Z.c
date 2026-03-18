/*
 * XREFs of ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0243670
 * Callers:
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C02439D4 (SetDisplayAffinity.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00FE1A0 (GetAppCompatFlags2QuadWord.c)
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1C0243634 (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@KPEBUtagPROCESSINFO@@@Z @ 0x1C02438F4 (-ProtectWindowBitmap@@YAHPEAUtagWND@@KPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall ChangeWindowTreeProtection(struct tagWND *a1, unsigned int a2)
{
  unsigned int v3; // r12d
  struct tagBWL *v4; // r13
  __int64 v5; // rcx
  const struct tagPROCESSINFO *v6; // r14
  const struct tagPROCESSINFO *v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  struct tagWND *v11; // rax
  const struct tagPROCESSINFO *v12; // rdx
  __int64 StyleWindow; // rax
  __int64 v14; // rdi
  unsigned int v16; // esi
  __int64 v17; // rbx
  unsigned int v18; // eax
  bool v19; // zf
  struct tagWND **v20; // rsi
  __int64 v21; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+28h] [rbp-8h]
  struct tagWND *v23; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+78h] [rbp+48h]
  struct tagWND *v25; // [rsp+80h] [rbp+50h] BYREF

  v24 = a2;
  v23 = a1;
  v3 = 0;
  v4 = BuildHwndList(a1, (const struct tagWND *)1, 0LL, 1);
  if ( v4 )
  {
    v21 = 0LL;
    v22 = 0LL;
    if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v21, &v23) < 0 )
      goto LABEL_15;
    v5 = *((_QWORD *)a1 + 2);
    v6 = *(const struct tagPROCESSINFO **)(v5 + 424);
    v7 = v6;
    if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) < 0 )
    {
      v8 = *(_QWORD *)(v5 + 1400);
      if ( v8 )
      {
        v5 = *(_QWORD *)(v8 + 16);
        v7 = *(const struct tagPROCESSINFO **)(v5 + 424);
      }
    }
    v9 = (_QWORD *)((char *)v4 + 32);
    v10 = GetAppCompatFlags2QuadWord(v5) & 0x80000000LL;
    while ( *v9 != 1LL )
    {
      v11 = (struct tagWND *)HMValidateHandleNoSecure(*v9, 1);
      v25 = v11;
      if ( v11 && v11 != a1 )
      {
        v12 = *(const struct tagPROCESSINFO **)(*((_QWORD *)v11 + 2) + 424LL);
        if ( (v24 & 1) == 0 || v12 == v6 || v12 == v7 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v11 + 5) + 27LL) & 0x20) != 0
            && (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v21, &v25) < 0 )
          {
            goto LABEL_15;
          }
        }
        else if ( !v10 )
        {
          StyleWindow = GetStyleWindow((__int64)v11, 2848);
          if ( !StyleWindow || (*(_BYTE *)(*(_QWORD *)(StyleWindow + 40) + 26LL) & 0x20) == 0 )
            goto LABEL_15;
        }
      }
      ++v9;
    }
    v16 = v22;
    v17 = 0LL;
    v3 = 1;
    if ( (_DWORD)v22 )
    {
      v14 = v21;
      v18 = v24;
      while ( 1 )
      {
        v19 = (unsigned int)ProtectWindowBitmap(*(struct tagWND **)(v14 + 8 * v17), v18, v7) == 0;
        v18 = v24;
        if ( v19 )
        {
          v3 = 0;
          if ( (v24 & 1) != 0 )
            break;
        }
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v16 )
          goto LABEL_16;
      }
      if ( (_DWORD)v17 )
      {
        v20 = (struct tagWND **)(v14 + 8 * v17);
        do
        {
          ProtectWindowBitmap(*--v20, 0, v7);
          LODWORD(v17) = v17 - 1;
        }
        while ( (_DWORD)v17 );
      }
    }
    else
    {
LABEL_15:
      v14 = v21;
    }
LABEL_16:
    FreeHwndList(v4);
    if ( v14 )
      Win32FreePool(v14);
  }
  return v3;
}
