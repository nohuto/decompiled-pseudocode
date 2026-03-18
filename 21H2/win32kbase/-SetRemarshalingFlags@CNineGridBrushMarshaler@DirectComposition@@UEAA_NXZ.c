/*
 * XREFs of ?SetRemarshalingFlags@CNineGridBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021D820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CNineGridBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CNineGridBrushMarshaler *this)
{
  bool v1; // zf
  _DWORD *v2; // rax
  char v4; // r8
  _DWORD *v5; // rcx
  char v6; // r10
  char v7; // dl
  char v8; // dl
  char v9; // r10
  char v10; // dl
  char v11; // r10
  char v12; // dl
  char v13; // r10
  char v14; // dl
  char v15; // r10
  char v16; // dl
  char v17; // r10
  char v18; // dl
  char v19; // r10
  char v20; // dl
  char v21; // al

  v1 = *((_QWORD *)this + 10) == 0LL;
  v2 = (_DWORD *)((char *)this + 16);
  v4 = 1;
  v5 = (_DWORD *)((char *)this + 16);
  if ( v1 )
  {
    v6 = 0;
  }
  else
  {
    *v2 |= 0x20u;
    v6 = 1;
  }
  if ( *((float *)this + 22) == 0.0 )
  {
    v7 = 0;
  }
  else
  {
    *v2 |= 0x40u;
    v7 = 1;
  }
  v8 = v6 | v7;
  if ( *((float *)this + 24) == 0.0 )
  {
    v9 = 0;
  }
  else
  {
    *v2 |= 0x80u;
    v9 = 1;
  }
  v10 = v9 | v8;
  if ( *((float *)this + 26) == 0.0 )
  {
    v11 = 0;
  }
  else
  {
    *v2 |= 0x100u;
    v11 = 1;
  }
  v12 = v11 | v10;
  if ( *((float *)this + 28) == 0.0 )
  {
    v13 = 0;
  }
  else
  {
    *v2 |= 0x200u;
    v13 = 1;
  }
  v14 = v13 | v12;
  if ( *((float *)this + 23) == 1.0 )
  {
    v15 = 0;
  }
  else
  {
    *v2 |= 0x400u;
    v15 = 1;
  }
  v16 = v15 | v14;
  if ( *((float *)this + 25) == 1.0 )
  {
    v17 = 0;
  }
  else
  {
    *v2 |= 0x800u;
    v17 = 1;
  }
  v18 = v17 | v16;
  if ( *((float *)this + 27) == 1.0 )
  {
    v19 = 0;
  }
  else
  {
    *v2 |= 0x1000u;
    v19 = 1;
  }
  v20 = v19 | v18;
  if ( *((float *)this + 29) == 1.0 )
    v4 = 0;
  else
    *v2 |= 0x2000u;
  v21 = *((_BYTE *)this + 120);
  if ( v21 )
    *v5 |= 0x4000u;
  return v4 | v20 | v21;
}
