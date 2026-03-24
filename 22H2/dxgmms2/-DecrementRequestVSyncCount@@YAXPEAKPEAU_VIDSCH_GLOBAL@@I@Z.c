/*
 * XREFs of ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0015CA0
 * Callers:
 *     VidSchControlVSyncDevice @ 0x1C00884D0 (VidSchControlVSyncDevice.c)
 *     VidSchControlVSyncAdapter @ 0x1C0088620 (VidSchControlVSyncAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DecrementRequestVSyncCount(unsigned int *a1, struct _VIDSCH_GLOBAL *a2, int a3)
{
  __int64 v3; // r9

  v3 = 0LL;
  if ( *((_BYTE *)a2 + 2132) )
  {
    if ( a3 == -3 )
    {
      if ( *((_DWORD *)a2 + 10) )
      {
        do
        {
          --a1[v3];
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < *((_DWORD *)a2 + 10) );
      }
    }
    else
    {
      --a1[a3];
    }
  }
  else
  {
    --*a1;
  }
}
