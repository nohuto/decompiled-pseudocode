/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C002F788
 * Callers:
 *     xxxCloseClipboard @ 0x1C002FE50 (xxxCloseClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01238C8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C002F5A8 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C002FA10 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     _ConvertMemHandle @ 0x1C012C040 (_ConvertMemHandle.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C021EDE0 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall MungeClipData(struct tagWINDOWSTATION *a1)
{
  struct tagCLIP *ClipFormat; // r14
  struct tagCLIP *v3; // rsi
  struct tagCLIP *v4; // rax
  struct tagCLIP *v5; // rbp
  struct tagCLIP *v6; // rax
  struct tagCLIP *v7; // rbx
  struct tagCLIP *v8; // rbp
  struct tagCLIP *v9; // rax
  struct tagCLIP *v10; // rsi
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // rax
  int Src; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat(a1, 1u, 1u);
  v3 = FindClipFormat(a1, 7u, 1u);
  v4 = FindClipFormat(a1, 0xDu, 1u);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat(a1, 0x10u, 1u) )
    {
      v11 = *(_QWORD *)(gptiCurrent + 440LL);
      if ( v11 )
      {
        Src = *(unsigned __int16 *)(v11 + 40);
        v12 = (void *)ConvertMemHandle(&Src, 4uLL);
        v13 = (__int64)v12;
        if ( v12 )
        {
          if ( !(unsigned int)InternalSetClipboardData(a1, 0x10u, v12, 0, 1) )
          {
            v15 = HMValidateHandleNoRip(v13, 6);
            if ( v15 )
              HMUnlockDestroyObject(v15);
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
  if ( !FindClipFormat(a1, 3u, 1u) )
  {
    v6 = FindClipFormat(a1, 0xEu, 1u);
    if ( v6 )
    {
      v14 = 3;
LABEL_30:
      InternalSetClipboardData(a1, v14, (void *)((*((_QWORD *)v6 + 1) != 0LL) + 3LL), 0, 1);
      goto LABEL_8;
    }
  }
  if ( !FindClipFormat(a1, 0xEu, 1u) )
  {
    v6 = FindClipFormat(a1, 3u, 1u);
    if ( v6 )
    {
      v14 = 14;
      goto LABEL_30;
    }
  }
LABEL_8:
  v7 = FindClipFormat(a1, 2u, 1u);
  v8 = FindClipFormat(a1, 8u, 1u);
  v9 = FindClipFormat(a1, 0x11u, 1u);
  v10 = v9;
  if ( !v7 )
  {
    if ( !v8 && !v9 )
      return;
    InternalSetClipboardData(a1, 2u, (void *)2, 0, 1);
  }
  if ( !v8 )
    InternalSetClipboardData(a1, 8u, (void *)2, 0, 1);
  if ( !v10 )
    InternalSetClipboardData(a1, 0x11u, (void *)2, 0, 1);
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && !FindClipFormat(a1, 9u, 1u) )
  {
    if ( v8 || v10 )
      InternalSetClipboardData(a1, 9u, (void *)2, 0, 1);
    else
      PasteScreenPalette(a1);
  }
}
