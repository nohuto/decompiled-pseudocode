/*
 * XREFs of ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x180082F00
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180084094 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLivePreview::_ContainsWindow(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9

  v3 = *(_DWORD *)(a2 + 24);
  v4 = 0LL;
  if ( !v3 )
    return 0;
  while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v4) + 40LL) != a3 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return 0;
  }
  return 1;
}
