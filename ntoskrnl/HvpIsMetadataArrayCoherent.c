/*
 * XREFs of HvpIsMetadataArrayCoherent @ 0x1407F9D58
 * Callers:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x1407F9A98 (HvpIncrementalLogFileEnumeratorAdvance.c)
 *     HvpApplyLegacyLogFile @ 0x140A2755C (HvpApplyLegacyLogFile.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpIsMetadataArrayCoherent(unsigned int *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 v6; // r10
  __int64 v7; // r8
  unsigned int v8; // edx

  v3 = 0LL;
  v6 = 8LL * a1[5] + 40;
  if ( !a3 )
    return 1;
  while ( 1 )
  {
    v7 = *(unsigned int *)(a2 + 8 * v3 + 4);
    if ( !(_DWORD)v7 )
      break;
    if ( (v7 & 0xFFF) != 0 )
      break;
    v8 = *(_DWORD *)(a2 + 8 * v3);
    if ( (v8 & 0xFFF) != 0
      || v8 + (unsigned int)v7 < v8
      || v8 + (unsigned int)v7 > a1[4]
      || (_DWORD)v3
      && v8 <= *(_DWORD *)(a2 + 8LL * (unsigned int)(v3 - 1)) + *(_DWORD *)(a2 + 8LL * (unsigned int)(v3 - 1) + 4) )
    {
      break;
    }
    v6 += v7;
    if ( v6 > 0xFFFFFFFF || v6 > a1[1] )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a3 )
      return 1;
  }
  return 0;
}
