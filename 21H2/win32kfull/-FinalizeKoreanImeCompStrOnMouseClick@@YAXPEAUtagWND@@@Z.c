/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D3E94
 * Callers:
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C01132F0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     GetAppImeCompatFlags @ 0x1C00F5524 (GetAppImeCompatFlags.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0LL;
  v1 = *((_QWORD *)a1 + 2);
  if ( !*(_QWORD *)(gpqForeground + 104LL) && (GetAppImeCompatFlags(v1) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v1 + 632) <= 0x400u )
    {
      SetSystemInputSource(&v3);
      PostInputMessage(
        gpqForeground,
        0LL,
        0,
        0x101uLL,
        229LL,
        0,
        0LL,
        0LL,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v3,
        0LL,
        0LL,
        0,
        0LL);
    }
    else
    {
      v2 = *(_QWORD *)(v1 + 784);
      if ( v2 )
      {
        if ( *(char *)(*(_QWORD *)(v2 + 40) + 20LL) >= 0 )
          PostMessage(v2, 647, 32, 0);
      }
    }
  }
}
