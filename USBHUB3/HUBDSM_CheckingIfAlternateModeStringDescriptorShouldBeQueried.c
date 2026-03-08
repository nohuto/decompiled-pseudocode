/*
 * XREFs of HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1C0022320
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_LogAlternateMode @ 0x1C002D134 (HUBDTX_LogAlternateMode.c)
 */

__int64 __fastcall HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rbx
  unsigned __int8 v3; // al
  __int64 v4; // rdi
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // dl

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(__int64 **)(v1 + 2648);
  v3 = *((_BYTE *)v2 + 8);
  v4 = *v2;
  v5 = v3;
  if ( v3 == 0xFF )
  {
    v3 = 0;
    *((_BYTE *)v2 + 8) = 0;
    v5 = 0;
  }
  v6 = *(_BYTE *)(v4 + 4);
  if ( v3 < v6 )
  {
    do
    {
      if ( *(_BYTE *)(v4 + 4LL * v3 + 47) )
        break;
      HUBDTX_LogAlternateMode(v1, 0LL);
      v5 = *((_BYTE *)v2 + 8) + 1;
      *((_BYTE *)v2 + 8) = v5;
      v3 = v5;
      v6 = *(_BYTE *)(v4 + 4);
    }
    while ( v5 < v6 );
  }
  if ( v5 != v6 )
    return 4089LL;
  *((_BYTE *)v2 + 8) = -1;
  return 4061LL;
}
