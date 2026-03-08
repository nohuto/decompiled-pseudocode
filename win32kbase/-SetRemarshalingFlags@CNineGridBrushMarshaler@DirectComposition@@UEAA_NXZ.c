/*
 * XREFs of ?SetRemarshalingFlags@CNineGridBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0253B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CNineGridBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CNineGridBrushMarshaler *this)
{
  _DWORD *v1; // rax
  char v3; // r8
  char v4; // r9
  char v5; // cl
  char v6; // cl
  char v7; // r9
  char v8; // cl
  char v9; // r9
  char v10; // cl
  char v11; // r9
  char v12; // cl
  char v13; // r9
  char v14; // cl
  char v15; // r9
  char v16; // cl
  char v17; // r9
  char v18; // cl
  char v19; // r9

  v1 = (_DWORD *)((char *)this + 16);
  v3 = 1;
  if ( *((_QWORD *)this + 9) )
  {
    *v1 |= 0x20u;
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( *((float *)this + 20) == 0.0 )
  {
    v5 = 0;
  }
  else
  {
    *v1 |= 0x40u;
    v5 = 1;
  }
  v6 = v4 | v5;
  if ( *((float *)this + 22) == 0.0 )
  {
    v7 = 0;
  }
  else
  {
    *v1 |= 0x80u;
    v7 = 1;
  }
  v8 = v7 | v6;
  if ( *((float *)this + 24) == 0.0 )
  {
    v9 = 0;
  }
  else
  {
    *v1 |= 0x100u;
    v9 = 1;
  }
  v10 = v9 | v8;
  if ( *((float *)this + 26) == 0.0 )
  {
    v11 = 0;
  }
  else
  {
    *v1 |= 0x200u;
    v11 = 1;
  }
  v12 = v11 | v10;
  if ( *((float *)this + 21) == 1.0 )
  {
    v13 = 0;
  }
  else
  {
    *v1 |= 0x400u;
    v13 = 1;
  }
  v14 = v13 | v12;
  if ( *((float *)this + 23) == 1.0 )
  {
    v15 = 0;
  }
  else
  {
    *v1 |= 0x800u;
    v15 = 1;
  }
  v16 = v15 | v14;
  if ( *((float *)this + 25) == 1.0 )
  {
    v17 = 0;
  }
  else
  {
    *v1 |= 0x1000u;
    v17 = 1;
  }
  v18 = v17 | v16;
  if ( *((float *)this + 27) == 1.0 )
    v3 = 0;
  else
    *v1 |= 0x2000u;
  v19 = *((_BYTE *)this + 112);
  if ( v19 )
    *v1 |= 0x4000u;
  return v3 | v19 | v18;
}
