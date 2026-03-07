void __fastcall ESTROBJ::vInitSimple(
        ESTROBJ *this,
        unsigned __int16 *a2,
        int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5)
{
  struct RFONTOBJ *v5; // rsi
  int v6; // edi
  struct _GLYPHPOS *v10; // rax
  struct _GLYPHPOS *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  unsigned int v15; // edx
  __int64 v16; // r10
  int v17; // edx
  int v18; // r11d
  int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
  v5 = a5;
  v6 = 0;
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 7) = v5;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  v10 = (struct _GLYPHPOS *)AllocFreeTmpBuffer(32LL);
  v11 = v10;
  if ( v10 )
  {
    *((_DWORD *)this + 58) |= 1u;
    *((_QWORD *)this + 8) = v10;
    v12 = *(_QWORD *)v5;
    v19 = 0;
    *((_DWORD *)this + 1) = *(_DWORD *)(v12 + 276) & 0x71 | 2;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v5, (struct RFONTOBJ *)1, v10, a2, &v19, a4, this) )
    {
      if ( v19 )
      {
        v13 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v13;
      }
      v11->ptl.x = 0;
      v11->ptl.y = *(_DWORD *)(*(_QWORD *)v5 + 352LL);
      v14 = (*((_DWORD *)this + 58) & 0x1400) == 0;
      v15 = *(_DWORD *)(*(_QWORD *)v5 + 312LL);
      *((_DWORD *)this + 2) = v15;
      if ( v14 && v15 )
      {
        *((_DWORD *)this + 3) = 0;
        if ( v15 > 0x7FFFFFFF )
          return;
        *((_DWORD *)this + 4) = 0;
      }
      else
      {
        *((_DWORD *)this + 2) = 0;
        v11->ptl.y = *((_DWORD *)ESTROBJ::GetLinkedRfontOnIndex(this, 0, v5) + 88);
        v17 = *(_DWORD *)(v16 + 20) + 15;
        *((_DWORD *)this + 4) = 0;
        v15 = v17 >> 4;
        v6 = v18 >> 4;
        *((_DWORD *)this + 3) = v18 >> 4;
      }
      *((_DWORD *)this + 5) = v15;
      *((_DWORD *)this + 6) = *(_DWORD *)(*(_QWORD *)v5 + 356LL);
      if ( (*(_DWORD *)(*(_QWORD *)v5 + 12LL) & 0x10000000) != 0 )
      {
        *((_DWORD *)this + 3) = v6 - 1;
        *((_DWORD *)this + 5) = v15 + 1;
      }
      *((_DWORD *)this + 58) |= 4u;
    }
  }
}
