/*
 * XREFs of HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure @ 0x1C0029538
 * Callers:
 *     HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach @ 0x1C0024F90 (HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach.c)
 * Callees:
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

__int64 __fastcall HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *i; // rax
  __int64 j; // rdx
  _QWORD *v6; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 112) )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
    {
      v3 = (_QWORD *)(v2 + 16);
      for ( i = *(_QWORD **)(v2 + 16); ; i = (_QWORD *)*i )
      {
        v6 = i - 1;
        if ( v3 == i )
          break;
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 6); j = (unsigned int)(j + 1) )
        {
          if ( LODWORD(v6[9 * j + 6]) == 3 )
            LODWORD(v6[9 * j + 6]) = 6;
        }
      }
      memmove(
        (void *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)),
        *(const void **)(a1 + 104),
        8LL * *(unsigned int *)(a1 + 112));
      *(_DWORD *)(a1 + 144) += *(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 112) = 0;
    }
  }
  result = 4089LL;
  if ( !*(_DWORD *)(a1 + 128) )
    return 4061LL;
  return result;
}
