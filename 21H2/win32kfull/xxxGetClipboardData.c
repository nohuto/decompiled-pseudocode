/*
 * XREFs of xxxGetClipboardData @ 0x1C014AE38
 * Callers:
 *     NtUserGetClipboardData @ 0x1C014AAF0 (NtUserGetClipboardData.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219D30 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219EB8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A050 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A200 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C021A2DC (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00CD1F0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219D30 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219EB8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A050 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A200 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C021A2DC (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021A3E8 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

void *__fastcall xxxGetClipboardData(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v7; // rcx
  void *v8; // rbx
  int v9; // eax
  __int64 v11; // rcx
  void *RenderData; // rax
  struct tagCLIP *v13; // rax

  v4 = a2;
  if ( *((_QWORD *)a1 + 10) != gptiCurrent )
  {
    v11 = 1418LL;
LABEL_14:
    UserSetLastError(v11, a2);
    return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 1);
  v7 = ClipFormat;
  if ( !ClipFormat )
  {
    v11 = 1168LL;
    goto LABEL_14;
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
    v7 = FindClipFormat(a1, v4, 1);
    if ( !v7 )
      return 0LL;
  }
  v8 = (void *)*((_QWORD *)v7 + 1);
  if ( !v8 || v8 == (void *)3 )
  {
    RenderData = xxxGetRenderData(a1, v4);
  }
  else if ( v8 == (void *)2 )
  {
    switch ( v4 )
    {
      case 2u:
        RenderData = xxxGetDummyBitmap(a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 8u:
        RenderData = xxxGetDummyDib(a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 9u:
        RenderData = xxxGetDummyPalette(a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 0x11u:
        RenderData = xxxGetDummyDibV5(a1, (struct tagGETCLIPBDATA *)a3);
        break;
      default:
        goto LABEL_33;
    }
  }
  else
  {
    if ( v8 != (void *)1 )
    {
      if ( !a3 )
        return v8;
      v9 = *((_DWORD *)v7 + 4);
LABEL_10:
      *(_DWORD *)(a3 + 4) = v9;
      return v8;
    }
    RenderData = xxxGetDummyText(a1, v4, (struct tagGETCLIPBDATA *)a3);
  }
  v8 = RenderData;
LABEL_33:
  v13 = FindClipFormat(a1, v4, 1);
  if ( v13 )
  {
    if ( !a3 )
      return v8;
    v9 = *((_DWORD *)v13 + 4);
    goto LABEL_10;
  }
  return 0LL;
}
