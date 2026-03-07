__int64 __fastcall ProtectWindowBitmap(struct tagWND *a1, unsigned int a2)
{
  int v4; // esi
  int v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rcx

  v4 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 56LL);
  else
    v5 = 0;
  v6 = ChangeWindowBitmapOwner((__int64)a1, v5);
  if ( v6 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    {
      v7 = IsWindowDesktopComposed(a1);
      v6 = GreProtectSpriteContent(v8, *(_QWORD *)a1, v7, a2);
      if ( !v6 )
      {
        if ( v4 )
          ChangeWindowBitmapOwner((__int64)a1, 0);
      }
    }
  }
  return v6;
}
