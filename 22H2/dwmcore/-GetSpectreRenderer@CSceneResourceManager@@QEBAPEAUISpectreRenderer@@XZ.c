/*
 * XREFs of ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801BD0A4
 * Callers:
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x1801BD0BC (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BD3AC (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801BD41C (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BD54C (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D4794 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     <none>
 */

struct ISpectreRenderer *__fastcall CSceneResourceManager::GetSpectreRenderer(CSceneResourceManager *this)
{
  struct ISpectreRenderer *result; // rax

  result = (struct ISpectreRenderer *)*((_QWORD *)this + 3);
  if ( result )
    return (struct ISpectreRenderer *)*((_QWORD *)result + 12);
  return result;
}
