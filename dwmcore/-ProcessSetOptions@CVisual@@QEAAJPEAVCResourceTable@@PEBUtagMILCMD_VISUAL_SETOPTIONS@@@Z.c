__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOPTIONS *a3)
{
  CVisual *v3; // r11
  char v4; // cl
  unsigned int v5; // ebx
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // dl
  char v9; // r8
  char v10; // r8
  char v12; // r8
  char v13; // dl

  v3 = this;
  v4 = *((_BYTE *)a3 + 9);
  v5 = 0;
  v7 = *((_BYTE *)v3 + 101);
  if ( v7 >> 7 != (v4 != 0) )
  {
    v5 = 5;
    *((_BYTE *)v3 + 101) = v7 & 0x7F | (v4 != 0 ? 0x80 : 0);
    CVisual::OnInnerTransformChanged(v3);
    v7 = *((_BYTE *)v3 + 101);
  }
  v8 = *((_BYTE *)v3 + 102);
  v9 = *((_BYTE *)a3 + 11);
  if ( (v8 & 1) != (v9 != 0) )
  {
    *((_BYTE *)v3 + 102) = v8 & 0xFE | (v9 != 0);
    v5 |= 1u;
    v8 = v8 & 0xFE | (v9 != 0);
  }
  *((_BYTE *)v3 + 101) = v7 & 0xDF | (*((_BYTE *)a3 + 8) != 0 ? 0x20 : 0);
  v10 = *((_BYTE *)a3 + 10);
  if ( ((v8 >> 4) & 1) != (v10 != 0) )
  {
    v12 = -v10;
    v13 = v8 & 0xEF;
    *((_BYTE *)v3 + 102) = v13 | (v12 != 0 ? 0x10 : 0);
    if ( v13 & 0x10 | (v12 != 0 ? 0x10 : 0) )
    {
      *((_QWORD *)v3 + 73) = 0LL;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x1000000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x800000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x400000u;
      *(_DWORD *)(*((_QWORD *)v3 + 28) + 4LL) &= ~0x200000u;
    }
    v5 |= 0x10u;
  }
  if ( v5 )
    CVisual::PropagateFlags((__int64)v3, v5);
  return 0LL;
}
