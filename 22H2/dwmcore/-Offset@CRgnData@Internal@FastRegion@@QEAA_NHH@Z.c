/*
 * XREFs of ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x18025F968
 * Callers:
 *     ?Offset@CRegionShape@@QEAAJJJ@Z @ 0x1800F23A4 (-Offset@CRegionShape@@QEAAJJJ@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x180262B3C (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CRgnData::Offset(FastRegion::Internal::CRgnData *this, int a2, int a3)
{
  int v3; // r11d
  __int64 v7; // r10
  _DWORD *v8; // rbx
  int v9; // edi
  int v10; // ecx
  __int64 v11; // r10
  int v12; // r8d
  __int64 i; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // rdx
  unsigned __int64 v18; // r11

  v3 = *((_DWORD *)this + 1);
  v7 = *(int *)this;
  v8 = (_DWORD *)((char *)this + 12);
  v9 = *((_DWORD *)this + 2);
  v10 = v3 + a2;
  v11 = v7 - 1;
  v12 = v9 + a2;
  if ( a2 <= 0 )
  {
    if ( v10 > v3 )
      return 0;
  }
  else if ( v12 < v9 )
  {
    return 0;
  }
  if ( a3 <= 0 )
  {
    if ( *v8 + a3 > *v8 )
      return 0;
  }
  else if ( *((_DWORD *)this + 2 * v11 + 3) + a3 < *((_DWORD *)this + 2 * v11 + 3) )
  {
    return 0;
  }
  *((_DWORD *)this + 1) = v10;
  *((_DWORD *)this + 2) = v12;
  if ( v11 > 0 )
  {
    for ( i = 0LL; i < v11; ++i )
    {
      *v8 += a3;
      v15 = (int)v8[3];
      v16 = 0LL;
      v17 = (_DWORD *)((char *)v8 + (int)v8[1]);
      v18 = (unsigned __int64)(v15 + 8 - (int)v8[1] + 3) >> 2;
      if ( v17 > (_DWORD *)((char *)v8 + v15 + 8) )
        v18 = 0LL;
      if ( v18 )
      {
        do
        {
          *v17 += a2;
          ++v16;
          ++v17;
        }
        while ( v16 != v18 );
      }
      v8 += 2;
    }
  }
  *((_DWORD *)this + 2 * v11 + 3) += a3;
  return 1;
}
