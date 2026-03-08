/*
 * XREFs of SdbpMatchOne @ 0x140A4EA60
 * Callers:
 *     <none>
 * Callees:
 *     SdbpMatchList @ 0x1407A2310 (SdbpMatchList.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchOne(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // r14d
  int v9; // ebx
  unsigned int matched; // edi
  __int64 v11; // r8
  BOOL v13; // [rsp+38h] [rbp-30h]
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF

  v7 = a5;
  v9 = 0;
  v14[0] = 0;
  v15 = 0;
  matched = SdbpMatchList(v14, &v15, a2, a3, a5, a6, 1, v13);
  if ( !matched || v15 )
  {
    v9 = v14[0];
  }
  else
  {
    LOWORD(v11) = 4099;
    LOBYTE(v9) = (unsigned int)SdbFindFirstTag(a3, v7, v11) == 0;
  }
  *a1 = v9;
  return matched;
}
