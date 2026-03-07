int __fastcall ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rax
  _DWORD *v11; // r11

  v4 = *(_QWORD *)(a1 + 1032);
  v6 = a2;
  v9 = *(unsigned __int16 *)(v4 + 2LL * a2);
  if ( *(_BYTE *)(a1 + 776) )
    v10 = 0LL;
  else
    v10 = v9 >> 13;
  *(_WORD *)(v4 + 2LL * a2) = a3 + v9;
  v11 = (_DWORD *)(a1 + 16 * (v10 + 78));
  *(_DWORD *)(a1 + 8 * v10 + 1828) += a3;
  if ( *v11 != a2 )
    LODWORD(v10) = ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
                     a1,
                     a2,
                     v9 & 0x1FFF,
                     *(_WORD *)(v4 + 2LL * a2) & 0x1FFF);
  if ( a3 <= 0 )
  {
    if ( (*(_WORD *)(v4 + 2 * v6) & 0x1FFF) == 0 && (_DWORD)v6 != *v11 && !a4 )
      LODWORD(v10) = ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v6);
  }
  else if ( (_DWORD)v6 == *v11 )
  {
    v11[1] += a3;
  }
  return v10;
}
