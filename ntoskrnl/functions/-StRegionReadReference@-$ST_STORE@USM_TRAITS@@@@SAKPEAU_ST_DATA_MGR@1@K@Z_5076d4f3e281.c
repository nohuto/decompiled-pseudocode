__int64 __fastcall ST_STORE<SM_TRAITS>::StRegionReadReference(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int16 v4; // ax
  __int64 v6; // rcx
  char v7; // al

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 1032);
  v4 = *(_WORD *)(v3 + 2 * v2);
  if ( (v4 & 0x4000) == 0 )
  {
    *(_WORD *)(v3 + 2 * v2) = v4 | 0x4000;
    return 1LL;
  }
  v6 = *(_QWORD *)(a1 + 1040);
  v7 = *(_BYTE *)(v2 + v6);
  if ( v7 != -1 )
  {
    *(_BYTE *)(v2 + v6) = v7 + 1;
    return 1LL;
  }
  return 0LL;
}
