void __fastcall DXGADAPTER::QueryWDDM1_2Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_2_CAPS *a2)
{
  UINT v4; // eax
  UINT v5; // ecx
  UINT v6; // eax
  UINT v7; // ecx
  UINT v8; // eax
  UINT v9; // ecx
  int v10; // eax
  UINT v11; // edx
  UINT v12; // edx

  a2->PreemptionCaps.GraphicsPreemptionGranularity = *((_DWORD *)this + 686);
  a2->PreemptionCaps.ComputePreemptionGranularity = *((_DWORD *)this + 687);
  v4 = a2->Value ^ (a2->Value ^ *((unsigned __int8 *)this + 2752)) & 1;
  a2->Value = v4;
  v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(2 * *((_BYTE *)this + 2753))) & 2;
  a2->Value = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(4 * *((_BYTE *)this + 2754))) & 4;
  a2->Value = v6;
  v7 = v6 & 0xFFFFFFF7 | (2 * (*((_DWORD *)this + 567) & 4 | 8));
  a2->Value = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(*((_DWORD *)this + 567) >> 23)) & 0x20;
  a2->Value = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)this + 566) << 6)) & 0x40;
  v10 = 0;
  a2->Value = v9;
  v11 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(32 * *((_DWORD *)this + 562))) & 0x80;
  a2->Value = v11;
  if ( *((_QWORD *)this + 365) && *((_QWORD *)this + 86) )
    v10 = 256;
  v12 = v10 | v11 & 0xFFFFFEFF;
  a2->Value = v12;
  a2->Value = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(*((unsigned __int8 *)this + 2758) << 9)) & 0x200;
}
