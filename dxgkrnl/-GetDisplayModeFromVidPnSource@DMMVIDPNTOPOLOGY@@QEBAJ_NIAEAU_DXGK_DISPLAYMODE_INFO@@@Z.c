__int64 __fastcall DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
        DMMVIDPNTOPOLOGY *this,
        bool a2,
        unsigned int a3,
        struct _DXGK_DISPLAYMODE_INFO *a4)
{
  DMMVIDPNPRESENTPATH *v5; // rcx
  DMMVIDPNTOPOLOGY *v6; // r10
  int v7; // r11d
  char *v8; // r10
  DMMVIDPNTOPOLOGY *v9; // rax

  v5 = 0LL;
  v6 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v7 = 32;
  if ( v6 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v8 = (char *)v6 - 8;
    if ( v8 )
    {
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v8 + 11) + 24LL) == a3 && *((_DWORD *)v8 + 26) < v7 )
        {
          v5 = (DMMVIDPNPRESENTPATH *)v8;
          v7 = *((_DWORD *)v8 + 26);
        }
        v9 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v8 + 1);
        v8 = (char *)v9 - 8;
        if ( v9 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
          v8 = 0LL;
      }
      while ( v8 );
      if ( v5 )
        return DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v5, a2, a4);
    }
  }
  WdLogSingleEntry3(2LL, a3, this, -1071774919LL);
  return 3223192377LL;
}
