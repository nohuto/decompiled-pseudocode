void __fastcall DXGADAPTER::QueryWDDM2_0Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_2_0_CAPS *a2)
{
  int v2; // r9d
  UINT v4; // r8d
  int v5; // eax
  int v6; // ecx
  UINT v7; // ecx
  UINT v8; // r9d
  UINT v9; // eax
  UINT v10; // ecx

  v2 = 0;
  a2->Value = 0;
  v4 = ((*((_DWORD *)this + 570) >> 5) & 1) == 0;
  a2->Value = v4;
  v5 = *((_DWORD *)this + 571);
  v6 = 0;
  if ( (v5 & 0x60) == 0x60 )
    v6 = 2;
  v7 = v4 | v6;
  a2->Value = v7;
  if ( (*((_BYTE *)this + 2284) & 0xA0) == 0xA0 )
    v2 = 4;
  v8 = v7 | v2;
  a2->Value = v8;
  v9 = v8 | (*((_DWORD *)this + 697) > 1u ? 8 : 0);
  a2->Value = v9;
  v10 = v9 | (16 * (*((_DWORD *)this + 698) & 1));
  a2->Value = v10;
  a2->Value = v10 | (32 * (*((_BYTE *)this + 2784) & 1));
}
