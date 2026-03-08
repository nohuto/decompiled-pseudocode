/*
 * XREFs of _CompareDisplayMode @ 0x1C01E9980
 * Callers:
 *     ?SearchIndexdModeList@MODE_UNION_LIST@@AEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@AEAI@Z @ 0x1C01E98A8 (-SearchIndexdModeList@MODE_UNION_LIST@@AEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@AEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareDisplayMode(int *a1, int *a2)
{
  int v2; // eax
  int v3; // r8d
  int v5; // eax
  int v6; // ecx

  v2 = *a1;
  v3 = *a2;
  if ( *a1 != *a2 )
    return (unsigned int)(v2 - v3);
  v2 = a1[1];
  v3 = a2[1];
  if ( v2 != v3 )
    return (unsigned int)(v2 - v3);
  v2 = a1[2];
  v3 = a2[2];
  if ( v2 != v3 )
    return (unsigned int)(v2 - v3);
  v2 = ((unsigned int)a1[10] >> 4) & 1;
  v3 = ((unsigned int)a2[10] >> 4) & 1;
  if ( v2 != v3 )
    return (unsigned int)(v2 - v3);
  v2 = a1[3];
  v3 = a2[3];
  if ( v2 != v3 )
    return (unsigned int)(v2 - v3);
  v2 = a1[6];
  v3 = a2[6];
  if ( v2 != v3 )
    return (unsigned int)(v2 - v3);
  v2 = a1[8];
  v3 = a2[8];
  if ( v2 != v3 )
    return (unsigned int)(v2 - v3);
  v5 = a1[7];
  v6 = a2[7];
  if ( v5 == v6 )
    return 0LL;
  else
    return (unsigned int)(v5 - v6);
}
