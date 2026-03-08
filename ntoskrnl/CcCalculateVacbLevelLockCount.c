/*
 * XREFs of CcCalculateVacbLevelLockCount @ 0x14029C938
 * Callers:
 *     CcExtendVacbArray @ 0x14029E348 (CcExtendVacbArray.c)
 * Callees:
 *     VacbLevelReference @ 0x1402187E8 (VacbLevelReference.c)
 */

_DWORD *__fastcall CcCalculateVacbLevelLockCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  int v4; // r9d
  _QWORD *v6; // r10
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rdx
  _DWORD *result; // rax
  int v14; // r9d

  v2 = 0;
  v4 = 0;
  v6 = (_QWORD *)a2;
  v7 = 128LL;
  do
  {
    v8 = v4 + 1;
    v10 = *v6++ == 0LL;
    if ( v10 )
      v8 = v4;
    v4 = v8;
    --v7;
  }
  while ( v7 );
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v9 = v6[1] - 16LL;
    do
    {
      v10 = *(_WORD *)v9 == 765;
      v11 = v4 + 1;
      v12 = *(_QWORD *)(v9 + 24);
      if ( !v10 )
        v11 = v4;
      v4 = v11;
      if ( !v10 )
        ++v2;
      v9 = v12 - 16;
    }
    while ( v2 <= 0x3F );
  }
  result = (_DWORD *)VacbLevelReference(a1, a2, 0);
  *result = v14;
  return result;
}
