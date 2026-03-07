__int64 __fastcall SetClipboardData(__int64 a1, char *a2, int a3, int a4)
{
  unsigned int v7; // edi
  struct tagWINDOWSTATION *v8; // rcx
  unsigned int v10; // esi

  v7 = a1;
  v8 = CheckClipboardAccess(a1);
  if ( !v8 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v10 = InternalSetClipboardData(v8, v7, a2, a3, a4);
  if ( v10 )
  {
    if ( v7 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( v7 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v10;
}
