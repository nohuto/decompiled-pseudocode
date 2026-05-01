/*
 * XREFs of ?v_GetBackupSubDirectoryName@CPinnedList@@UEAAJPEAGI@Z @ 0x18015F660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::v_GetBackupSubDirectoryName(CPinnedList *this, char *a2, unsigned int a3)
{
  __int64 v3; // rcx
  signed int v4; // r8d
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax

  v3 = a3;
  v4 = 0;
  if ( (unsigned __int64)(v3 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( v3 )
      *(_WORD *)a2 = 0;
  }
  else
  {
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = (char *)L"TaskBar" - a2;
      do
      {
        if ( !(v5 + v3) )
          break;
        v7 = *(_WORD *)&a2[v6];
        if ( !v7 )
          break;
        *(_WORD *)a2 = v7;
        a2 += 2;
        --v3;
      }
      while ( v3 );
    }
    v8 = (unsigned __int16 *)(a2 - 2);
    if ( v3 )
      v8 = (unsigned __int16 *)a2;
    v4 = v3 == 0 ? 0x8007007A : 0;
    *v8 = 0;
  }
  return (unsigned int)v4;
}
