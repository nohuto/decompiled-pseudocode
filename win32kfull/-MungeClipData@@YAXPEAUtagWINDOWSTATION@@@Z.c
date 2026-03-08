/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FEEDC
 * Callers:
 *     xxxCloseClipboard @ 0x1C0010580 (xxxCloseClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FF7D8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0012468 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01FECA4 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FF19C (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _ConvertMemHandle @ 0x1C0200554 (_ConvertMemHandle.c)
 */

void __fastcall MungeClipData(struct tagWINDOWSTATION *a1)
{
  struct tagCLIP *ClipFormat; // r14
  struct tagCLIP *v3; // rsi
  struct tagCLIP *v4; // rax
  struct tagCLIP *v5; // rbp
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct tagCLIP *v10; // rax
  unsigned int v11; // edx
  struct tagCLIP *v12; // rbx
  struct tagCLIP *v13; // rbp
  struct tagCLIP *v14; // rax
  struct tagCLIP *v15; // rsi
  int Src; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat(a1, 1u, 1);
  v3 = FindClipFormat(a1, 7u, 1);
  v4 = FindClipFormat(a1, 0xDu, 1);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat(a1, 0x10u, 1) )
    {
      v6 = *(_QWORD *)(gptiCurrent + 440LL);
      if ( v6 )
      {
        Src = *(unsigned __int16 *)(v6 + 40);
        v7 = (void *)ConvertMemHandle(&Src, 4uLL);
        v8 = (__int64)v7;
        if ( v7 )
        {
          if ( !(unsigned int)InternalSetClipboardData(a1, 0x10u, v7, 0, 1) )
          {
            v9 = HMValidateHandleNoRip(v8, 6);
            if ( v9 )
              HMUnlockDestroyObject(v9);
          }
        }
      }
    }
    if ( !ClipFormat )
      InternalSetClipboardData(a1, 1u, (void *)1, 0, 1);
    if ( !v3 )
      InternalSetClipboardData(a1, 7u, (void *)1, 0, 1);
    if ( !v5 )
      InternalSetClipboardData(a1, 0xDu, (void *)1, 0, 1);
  }
  if ( !FindClipFormat(a1, 3u, 1) )
  {
    v10 = FindClipFormat(a1, 0xEu, 1);
    if ( v10 )
    {
      v11 = 3;
LABEL_22:
      InternalSetClipboardData(a1, v11, (void *)((*((_QWORD *)v10 + 1) != 0LL) + 3LL), 0, 1);
      goto LABEL_23;
    }
  }
  if ( !FindClipFormat(a1, 0xEu, 1) )
  {
    v10 = FindClipFormat(a1, 3u, 1);
    if ( v10 )
    {
      v11 = 14;
      goto LABEL_22;
    }
  }
LABEL_23:
  v12 = FindClipFormat(a1, 2u, 1);
  v13 = FindClipFormat(a1, 8u, 1);
  v14 = FindClipFormat(a1, 0x11u, 1);
  v15 = v14;
  if ( !v12 )
  {
    if ( !v13 && !v14 )
      return;
    InternalSetClipboardData(a1, 2u, (void *)2, 0, 1);
  }
  if ( !v13 )
    InternalSetClipboardData(a1, 8u, (void *)2, 0, 1);
  if ( !v15 )
    InternalSetClipboardData(a1, 0x11u, (void *)2, 0, 1);
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && !FindClipFormat(a1, 9u, 1) )
  {
    if ( v13 || v15 )
      InternalSetClipboardData(a1, 9u, (void *)2, 0, 1);
    else
      PasteScreenPalette(a1);
  }
}
