/*
 * XREFs of KiAssignAdjustableSubNodes @ 0x140B92744
 * Callers:
 *     KiPerformAutomaticGroupConfiguration @ 0x140B929BC (KiPerformAutomaticGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAssignAdjustableSubNodes(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // dx
  __int64 v6; // r10
  __int64 v7; // r8
  char v8; // r9
  unsigned int v9; // ebx
  unsigned __int16 v10; // ax

  v5 = 0;
  if ( KiSubNodeCount )
  {
    v6 = (unsigned __int16)KiSubNodeCount;
    do
    {
      v7 = *a1;
      v8 = *(_BYTE *)(*a1 + 5);
      if ( (v8 & 4) == 0 )
      {
        v9 = *(unsigned __int8 *)(v7 + 4);
        v10 = 0;
        while ( *(_DWORD *)(a4 + 4LL * v10) < v9 )
        {
          if ( ++v10 >= 0x20u )
            goto LABEL_10;
        }
        *(_WORD *)(v7 + 6) = v10;
        *(_BYTE *)(v7 + 5) = v8 | 1;
        *(_DWORD *)(a4 + 4LL * v10) -= v9;
        if ( v5 <= v10 )
          v5 = v10 + 1;
      }
LABEL_10:
      ++a1;
      --v6;
    }
    while ( v6 );
  }
  return v5;
}
