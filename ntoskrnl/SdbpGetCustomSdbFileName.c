/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x140A4FEA8
 * Callers:
 *     SdbGetPathCustomSdb @ 0x140A4FA40 (SdbGetPathCustomSdb.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslGuidToString @ 0x14084C0B4 (AslGuidToString.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(wchar_t *a1, __int64 a2, unsigned int *a3)
{
  signed int v4; // ebx
  __int64 v5; // rdx
  wchar_t *v6; // rax
  __int64 v7; // r8
  char *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  signed __int64 v11; // rdx
  __int16 v12; // r8
  char *v13; // rax

  *a1 = 0;
  v4 = AslGuidToString(a1, 0x2Bu, a3);
  if ( v4 < 0 )
    goto LABEL_2;
  v5 = 43LL;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = (43 - v5) & -(__int64)(v5 != 0);
  v4 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    v8 = (char *)&a1[v7];
    v9 = 43 - v7;
    if ( 43 != v7 )
    {
      v10 = 2147483646LL;
      v11 = (char *)L".sdb" - v8;
      do
      {
        if ( !v10 )
          break;
        v12 = *(_WORD *)&v8[v11];
        if ( !v12 )
          break;
        *(_WORD *)v8 = v12;
        --v10;
        v8 += 2;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 2;
    if ( v9 )
      v13 = v8;
    v4 = v9 == 0 ? 0x80000005 : 0;
    *(_WORD *)v13 = 0;
  }
  if ( v4 < 0 )
LABEL_2:
    AslLogCallPrintf(1LL);
  else
    return 0;
  return (unsigned int)v4;
}
