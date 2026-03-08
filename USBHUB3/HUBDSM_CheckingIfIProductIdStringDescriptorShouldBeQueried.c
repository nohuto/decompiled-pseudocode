/*
 * XREFs of HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried @ 0x1C00214E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int8 *v2; // rax
  __int64 v3; // rcx
  _WORD *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 1644) & 1) == 0 )
  {
    v2 = *(unsigned __int8 **)(v1 + 2024);
    if ( v2 )
    {
      v3 = *v2;
      if ( (unsigned __int8)v3 > 2u )
      {
        v4 = v2 + 2;
        v5 = v3 - 2;
        v6 = 0;
        v7 = v5 >> 1;
        if ( (_DWORD)v7 )
        {
          while ( *v4 )
          {
            if ( *v4 == 1033 )
              return 4089LL;
            ++v6;
            ++v4;
            if ( v6 >= (unsigned int)v7 )
              return 4061LL;
          }
        }
      }
    }
  }
  return 4061LL;
}
