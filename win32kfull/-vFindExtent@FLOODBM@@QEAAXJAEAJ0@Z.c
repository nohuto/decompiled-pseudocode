/*
 * XREFs of ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02D60B0
 * Callers:
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C02D5DB4 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02D5FE4 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 */

void __fastcall FLOODBM::vFindExtent(FLOODBM *this, int a2, int *a3, int *a4)
{
  int v4; // r11d
  int v5; // edi
  int v6; // r10d
  int v10; // esi
  int v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // edi
  int v15; // esi

  v4 = a2 - 1;
  v5 = *((_DWORD *)this + 1);
  v6 = a2 + 1;
  if ( *((_DWORD *)this + 8) )
  {
    if ( v4 >= v5 )
    {
      v13 = *((_DWORD *)this + 5);
      do
      {
        if ( (unsigned int)FLOODBM::iColorGet(this, v4) != v13 )
          break;
        --v4;
      }
      while ( v4 >= v5 );
    }
    v14 = *((_DWORD *)this + 3);
    if ( v6 < v14 )
    {
      v15 = *((_DWORD *)this + 5);
      do
      {
        if ( (unsigned int)FLOODBM::iColorGet(this, v6) != v15 )
          break;
        ++v6;
      }
      while ( v6 < v14 );
    }
  }
  else
  {
    if ( v4 >= v5 )
    {
      v10 = *((_DWORD *)this + 5);
      do
      {
        if ( (unsigned int)FLOODBM::iColorGet(this, v4) == v10 )
          break;
        --v4;
      }
      while ( v4 >= v5 );
    }
    v11 = *((_DWORD *)this + 3);
    if ( v6 < v11 )
    {
      v12 = *((_DWORD *)this + 5);
      do
      {
        if ( (unsigned int)FLOODBM::iColorGet(this, v6) == v12 )
          break;
        ++v6;
      }
      while ( v6 < v11 );
    }
  }
  *a3 = v4 + 1;
  *a4 = v6;
}
