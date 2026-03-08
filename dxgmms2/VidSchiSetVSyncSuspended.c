/*
 * XREFs of VidSchiSetVSyncSuspended @ 0x1C000F7DC
 * Callers:
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0035840 (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiControlVSync @ 0x1C00A5D30 (VidSchiControlVSync.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A5F00 (VidSchIsVSyncEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSetVSyncSuspended(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 2212) )
  {
    if ( a2 == -3 )
    {
      if ( *(_DWORD *)(a1 + 40) )
      {
        do
        {
          *(_BYTE *)(v3 + a1 + 2213) = a3;
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < *(_DWORD *)(a1 + 40) );
      }
    }
    else
    {
      result = a2;
      *(_BYTE *)(a2 + a1 + 2213) = a3;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 2213) = a3;
  }
  return result;
}
