void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rcx
  __int64 v3; // [rsp+90h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  if ( !*(_QWORD *)(gpqForeground + 112LL) && (GetAppImeCompatFlags((struct tagTHREADINFO *)v1) & 0x400000) == 0 )
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
        0,
        0LL);
    }
    else
    {
      v2 = *(_QWORD *)(v1 + 784);
      if ( v2 )
      {
        if ( *(char *)(*(_QWORD *)(v2 + 40) + 20LL) >= 0 )
          PostMessage(v2, 0x287u, 0x20uLL, 0LL);
      }
    }
  }
}
