void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a1 + 5);
  if ( a2 )
  {
    if ( (*(_BYTE *)(v2 + 31) & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0LL);
      SetVisible(a1, 1u);
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckPwnd(a1);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      SetOrClrWF(1, (__int64 *)a1, 0x108u, 1);
    }
  }
  else if ( (*(_BYTE *)(v2 + 31) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheckPwnd(a1);
    SetRedrawProp(a1, 1LL);
    SetVisible(a1, 2 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1));
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
}
