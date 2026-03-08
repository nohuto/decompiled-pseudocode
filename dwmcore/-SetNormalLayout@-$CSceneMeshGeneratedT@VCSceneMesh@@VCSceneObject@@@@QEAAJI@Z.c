/*
 * XREFs of ?SetNormalLayout@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJI@Z @ 0x1801C484C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::SetNormalLayout(__int64 *a1, int a2)
{
  __int64 v2; // rax

  if ( a2 != *((_DWORD *)a1 + 19) )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 19) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
