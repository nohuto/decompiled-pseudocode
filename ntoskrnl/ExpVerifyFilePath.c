/*
 * XREFs of ExpVerifyFilePath @ 0x14083EE50
 * Callers:
 *     NtEnumerateBootEntries @ 0x14083E4F0 (NtEnumerateBootEntries.c)
 *     NtTranslateFilePath @ 0x14083EB70 (NtTranslateFilePath.c)
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FAB20 (ExpSetDriverEntry.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409FB97C (ExpVerifyWindowsOsOptions.c)
 * Callees:
 *     ExpSafeWcslen @ 0x14083EB44 (ExpSafeWcslen.c)
 */

__int64 __fastcall ExpVerifyFilePath(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rax
  char *v4; // r9
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _WORD *i; // rcx
  unsigned __int64 v10; // r11
  char v11; // al
  _WORD *v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r9d

  if ( (unsigned __int64)a1 > a2 )
    return 3221225485LL;
  v2 = a1 + 3;
  if ( (unsigned __int64)(a1 + 3) > a2 )
    return 3221225485LL;
  v3 = (unsigned int)a1[1];
  if ( (unsigned int)v3 < 0xC )
    return 3221225485LL;
  v4 = (char *)a1 + v3;
  if ( (_DWORD *)((char *)a1 + v3) < a1 )
    return 3221225485LL;
  if ( (unsigned __int64)v4 > a2 )
    return 3221225485LL;
  if ( *a1 != 1 )
    return 3221225485LL;
  v5 = a1[2];
  if ( (unsigned int)(v5 - 1) > 4 )
    return 3221225485LL;
  if ( (unsigned __int64)v4 < a2 )
    a2 = (unsigned __int64)v4;
  v6 = v5 - 1;
  if ( v6 && (v7 = v6 - 1) != 0 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        for ( i = v2 + 1; (unsigned __int64)(v2 + 1) <= a2; i = v2 + 1 )
        {
          if ( *((unsigned __int16 *)v2 + 1) < 4u )
            break;
          v10 = (unsigned __int64)v2 + *((unsigned __int16 *)v2 + 1);
          if ( v10 > a2 )
            break;
          v11 = *(_BYTE *)v2 & 0x7F;
          if ( v11 == 127 )
            return 0LL;
          if ( v11 == 4 && *((_BYTE *)v2 + 1) == 4 )
          {
            v13 = i;
            if ( (unsigned __int64)i >= v10 )
              break;
            while ( *v13 )
            {
              if ( (unsigned __int64)++v13 >= v10 )
                return 3221225485LL;
            }
            if ( (unsigned int)(v13 - i) == -1 )
              break;
          }
          v2 = (_DWORD *)((char *)v2
                        + ((*((unsigned __int8 *)v2 + 3) << 8) | (unsigned __int64)*((unsigned __int8 *)v2 + 2)));
        }
      }
      return 3221225485LL;
    }
    v14 = ExpSafeWcslen(v2, a2);
    if ( v14 == -1 )
      return 3221225485LL;
    v17 = ExpSafeWcslen((_WORD *)(v16 + 2 * (v14 + 1LL)), v15);
  }
  else
  {
    v17 = ExpSafeWcslen(v2, a2);
    v18 = -1;
  }
  if ( v17 == v18 )
    return 3221225485LL;
  return 0LL;
}
