void __fastcall DXGADAPTER::QueryWDDM2_9Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_2_9_CAPS *a2)
{
  int v2; // r8d
  int v4; // r8d
  char v5; // cl

  v2 = 0;
  *(_DWORD *)a2 = 0;
  if ( *((_QWORD *)this + 366) )
  {
    v4 = (**((_DWORD **)this + 353) >> 15) & 3;
    *(_DWORD *)a2 = v4;
    v5 = -*(_BYTE *)(*((_QWORD *)this + 366) + 1880LL);
    *(_DWORD *)a2 = v4 | (v5 != 0 ? 4 : 0);
    v2 = v4 | (v5 != 0 ? 4 : 0);
  }
  *(_DWORD *)a2 = v2 | (*((_DWORD *)this + 794) != -1 ? 8 : 0);
}
