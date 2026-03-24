/*
 * XREFs of ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x1C0034EDC
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0034DB0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00367E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::bIsResizeRequiredBeforeCopyingRegion(RGNOBJ *this, struct RGNOBJ *a2, unsigned int *a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // ecx

  v3 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  v5 = 112;
  v6 = *(_DWORD *)(v3 + 80);
  if ( (v4 >= v6 || *(_DWORD *)(v3 + 24) <= 0x70u) && (v4 <= 0x70 || *(_DWORD *)(v3 + 24) > 0x70u) )
    return 0LL;
  if ( v6 > 0x70 )
    v5 = *(_DWORD *)(v3 + 80);
  *a3 = v5;
  return 1LL;
}
