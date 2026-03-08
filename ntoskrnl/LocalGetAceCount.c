/*
 * XREFs of LocalGetAceCount @ 0x140750CCC
 * Callers:
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 * Callees:
 *     FContainCallBackAce @ 0x140750D80 (FContainCallBackAce.c)
 */

__int64 __fastcall LocalGetAceCount(wchar_t *a1, wchar_t *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v5; // ebp
  unsigned int v6; // esi
  BOOL v7; // r12d
  wchar_t *v9; // rdi
  int i; // r8d
  __int64 v12; // rdx
  wchar_t v13; // ax

  v3 = 0;
  v5 = 0;
  *a3 = 0;
  v6 = 0;
  v7 = 0;
  v9 = a1;
  if ( !(unsigned int)FContainCallBackAce(a1) )
  {
    for ( i = 0; v9 < a2; ++v9 )
    {
      if ( *v9 == 59 )
      {
        ++v6;
      }
      else if ( *v9 != 40 )
      {
        i = 1;
      }
    }
    if ( v6 == 5 * (v6 / 5) && (v6 || !i) )
      *a3 = v6 / 5;
    else
      return 87;
    return v3;
  }
  while ( v9 < a2 )
  {
    if ( *v9 != 32 )
      goto LABEL_19;
    ++v9;
  }
  if ( v9 == a2 )
    goto LABEL_20;
LABEL_19:
  v12 = 0LL;
  if ( *v9 == 40 )
    goto LABEL_21;
LABEL_20:
  v12 = 1LL;
LABEL_21:
  if ( v9 >= a2 )
    return v3;
  do
  {
    v13 = *v9;
    if ( *v9 == 32 )
      goto LABEL_34;
    if ( v12 )
      return 87;
    if ( v13 == 40 )
    {
      if ( !v7 )
        ++v5;
      goto LABEL_38;
    }
    if ( v13 != 41 )
    {
LABEL_34:
      if ( v13 == 59 )
      {
        ++v6;
      }
      else if ( v13 == 34 )
      {
        v7 = !v7;
      }
    }
    else if ( !v7 )
    {
      if ( !v5 )
        return 1336;
      if ( v5 == 1 )
      {
        if ( v6 < 5 )
          return 1336;
        ++*a3;
        v6 = 0;
      }
      --v5;
    }
LABEL_38:
    ++v9;
  }
  while ( v9 < a2 );
  if ( !v5 )
    return v3;
  *a3 = 0;
  return 1336;
}
