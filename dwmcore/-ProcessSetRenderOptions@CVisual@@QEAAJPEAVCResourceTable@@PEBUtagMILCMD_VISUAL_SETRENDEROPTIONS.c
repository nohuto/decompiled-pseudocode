__int64 __fastcall CVisual::ProcessSetRenderOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETRENDEROPTIONS *a3)
{
  char v3; // dl
  char v4; // al
  int v5; // r9d
  char v6; // dl
  char v7; // r9
  char v8; // al
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int v14; // r9d
  int v15; // edx
  int v16; // r9d

  v3 = 0;
  *((_BYTE *)this + 104) = 0;
  if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
  {
    v10 = *((_DWORD *)a3 + 3);
    if ( v10 != -1 )
    {
      *((_DWORD *)this + 26) &= 0xFFFFC3FF;
      *((_DWORD *)this + 26) |= (v10 & 0xF) << 10;
      *((_BYTE *)this + 104) |= 2u;
      v3 = *((_BYTE *)this + 104);
    }
  }
  v4 = v3;
  if ( (*((_BYTE *)a3 + 8) & 8) != 0 )
  {
    v5 = *((_DWORD *)a3 + 4);
    if ( v5 != -1 )
    {
      v4 = v3 | 8;
      *((_DWORD *)this + 49) = v5;
      *((_BYTE *)this + 104) = v3 | 8;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
  {
    v15 = *((_DWORD *)a3 + 5);
    if ( v15 != 5 )
    {
      *((_DWORD *)this + 26) &= 0xFFF83FFF;
      *((_DWORD *)this + 26) |= (v15 & 0x1F) << 14;
      *((_BYTE *)this + 104) |= 4u;
      v4 = *((_BYTE *)this + 104);
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 1) != 0 )
  {
    v12 = *((_DWORD *)a3 + 6);
    if ( v12 )
    {
      *((_DWORD *)this + 26) &= 0xFFFFFCFF;
      *((_DWORD *)this + 26) |= (v12 & 3) << 8;
      *((_BYTE *)this + 104) |= 1u;
      v4 = *((_BYTE *)this + 104);
    }
  }
  v6 = v4;
  if ( (*((_BYTE *)a3 + 8) & 0x10) != 0 )
  {
    v14 = *((_DWORD *)a3 + 7);
    if ( v14 != 5 )
    {
      v6 = v4 | 0x10;
      *((_DWORD *)this + 50) = v14;
      *((_BYTE *)this + 104) = v4 | 0x10;
    }
  }
  v7 = v6;
  if ( (*((_BYTE *)a3 + 8) & 0x20) != 0 )
  {
    v13 = *((_DWORD *)a3 + 8);
    if ( v13 != -1 )
    {
      v7 = v6 | 0x20;
      *((_DWORD *)this + 51) = v13;
      *((_BYTE *)this + 104) = v6 | 0x20;
    }
  }
  v8 = v7;
  if ( (*((_BYTE *)a3 + 8) & 0x40) != 0 )
  {
    v11 = *((_DWORD *)a3 + 9);
    if ( v11 != -1 )
    {
      v8 = v7 | 0x40;
      *((_DWORD *)this + 52) = v11;
      *((_BYTE *)this + 104) = v7 | 0x40;
    }
  }
  if ( *((char *)a3 + 8) < 0 )
  {
    v16 = *((_DWORD *)a3 + 10);
    if ( v16 != -1 )
    {
      *((_DWORD *)this + 53) = v16;
      *((_BYTE *)this + 104) = v8 | 0x80;
    }
  }
  CVisual::PropagateFlags((__int64)this, 5u);
  return 0LL;
}
