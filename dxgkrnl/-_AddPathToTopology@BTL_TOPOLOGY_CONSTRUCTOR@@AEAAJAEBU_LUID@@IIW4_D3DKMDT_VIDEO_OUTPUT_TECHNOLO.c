/*
 * XREFs of ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x1C03BC928
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03BBFE0 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03BC994 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03BDA54 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01826C8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        struct _LUID *a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a6,
        char a7,
        char a8,
        char a9)
{
  __int64 result; // rax

  ++*((_WORD *)this + 4);
  result = CCD_TOPOLOGY::AddPathDescriptor(*(_QWORD *)this, (__int64 *)a2, a3, a4, a7, a8, a9, a5, a6, 0, 0LL);
  if ( (_DWORD)result == -1073741789 )
    return 0LL;
  return result;
}
