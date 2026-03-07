void *__fastcall xxxGetClipboardData(struct tagWINDOWSTATION *a1, unsigned int a2, struct tagGETCLIPBDATA *a3)
{
  unsigned int v4; // edi
  int v6; // ecx
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v9; // rcx
  void *v10; // rbx
  void *RenderData; // rax
  int v12; // eax
  struct tagCLIP *v13; // rax

  v4 = a2;
  if ( *((_QWORD *)a1 + 10) != gptiCurrent )
  {
    v6 = 1418;
LABEL_3:
    UserSetLastError(v6);
    return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 1);
  v9 = ClipFormat;
  if ( !ClipFormat )
  {
    v6 = 1168;
    goto LABEL_3;
  }
  if ( (unsigned __int64)(*((_QWORD *)ClipFormat + 1) - 3LL) <= 1 )
  {
    if ( v4 == 14 )
    {
      v4 = 3;
    }
    else if ( v4 == 3 )
    {
      v4 = 14;
    }
    v9 = FindClipFormat(a1, v4, 1);
    if ( !v9 )
      return 0LL;
  }
  v10 = (void *)*((_QWORD *)v9 + 1);
  if ( !v10 || v10 == (void *)3 )
  {
    RenderData = xxxGetRenderData(a1, v4);
    goto LABEL_29;
  }
  if ( v10 == (void *)2 )
  {
    switch ( v4 )
    {
      case 2u:
        RenderData = xxxGetDummyBitmap(a1, a3);
        break;
      case 8u:
        RenderData = xxxGetDummyDib(a1, a3);
        break;
      case 9u:
        RenderData = (void *)xxxGetDummyPalette(a1, a3);
        break;
      case 0x11u:
        RenderData = xxxGetDummyDibV5(a1, a3);
        break;
      default:
        goto LABEL_30;
    }
LABEL_29:
    v10 = RenderData;
LABEL_30:
    v13 = FindClipFormat(a1, v4, 1);
    if ( !v13 )
      return 0LL;
    if ( a3 )
    {
      v12 = *((_DWORD *)v13 + 4);
      goto LABEL_33;
    }
    return v10;
  }
  if ( v10 == (void *)1 )
  {
    RenderData = (void *)xxxGetDummyText(a1, v4, a3);
    goto LABEL_29;
  }
  if ( a3 )
  {
    v12 = *((_DWORD *)v9 + 4);
LABEL_33:
    *((_DWORD *)a3 + 1) = v12;
  }
  return v10;
}
