/*
 * XREFs of ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C002830C
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00272F4 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00286CC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::Initialize(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  SfmTokenArray::Initialize((SfmTokenArray *)(a1 + 216));
  *(_QWORD *)(a1 + 176) = a2;
  *(_DWORD *)(a1 + 244) &= ~2u;
  GreInitializePushLock(a1 + 256);
  *(_QWORD *)(a1 + 280) = -1LL;
  *(_DWORD *)(a1 + 244) &= 0xFFFFFFA2;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 200) = a5;
  *(_QWORD *)(a1 + 264) = a2;
  *(_DWORD *)(a1 + 276) = a4;
  *(_DWORD *)(a1 + 272) = a3;
  *(_DWORD *)(a1 + 288) = a6;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  return 1LL;
}
