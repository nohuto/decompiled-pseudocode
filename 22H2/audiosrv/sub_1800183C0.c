/*
 * XREFs of sub_1800183C0 @ 0x1800183C0
 * Callers:
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_1800D3C38 @ 0x1800D3C38 (sub_1800D3C38.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 * Callees:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800183C0(char **a1, char *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  char *v7; // rcx
  size_t v8; // r8
  char *v10; // rdx
  __int64 v11; // rcx

  if ( !a2 )
    goto LABEL_21;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&a2[2 * v4] );
  if ( !(_DWORD)v4 )
  {
LABEL_21:
    sub_18002C26C(a1);
    return 0LL;
  }
  v5 = *((unsigned int *)*a1 - 4);
  v6 = (a2 - *a1) >> 1;
  if ( ((1 - *((_DWORD *)*a1 - 2)) | (*((_DWORD *)*a1 - 3) - (int)v4)) < 0 )
    sub_18001B550(a1, (unsigned int)v4);
  v7 = *a1;
  v8 = 2LL * (int)v4;
  if ( v6 <= v5 )
  {
    v10 = &v7[2 * v6];
    if ( !v8 )
      goto LABEL_11;
    if ( v7 && v10 )
    {
      memmove(v7, v10, v8);
      goto LABEL_11;
    }
  }
  else
  {
    if ( !v8 )
      goto LABEL_11;
    if ( v7 )
    {
      memcpy(v7, a2, v8);
      goto LABEL_11;
    }
  }
  *(_DWORD *)o__errno(v7) = 22;
  o__invalid_parameter_noinfo(v11);
LABEL_11:
  if ( (int)v4 < 0 || (int)v4 > *((_DWORD *)*a1 - 3) )
    sub_1800B8610(2147942487LL);
  *((_DWORD *)*a1 - 4) = v4;
  *(_WORD *)&(*a1)[2 * (int)v4] = 0;
  return 0LL;
}
