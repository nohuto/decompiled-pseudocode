/*
 * XREFs of ?SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025EB1C
 * Callers:
 *     ?SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025EA30 (-SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetRemarshalingFlags(
        DirectComposition::CScenePbrMaterialMarshaler *this)
{
  int *v1; // rdx
  int v2; // eax

  v1 = (int *)((char *)this + 16);
  if ( *((float *)this + 14) != 0.5 )
    *v1 |= 0x20u;
  if ( *((_DWORD *)this + 15) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x80u;
  v2 = *v1 | 0x100;
  *v1 = v2;
  if ( *((_BYTE *)this + 84) )
  {
    v2 |= 0x200u;
    *v1 = v2;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v2 |= 0x400u;
    *v1 = v2;
  }
  if ( *((float *)this + 24) != 1.0 )
  {
    v2 |= 0x800u;
    *v1 = v2;
  }
  if ( *((_QWORD *)this + 13) )
  {
    v2 |= 0x1000u;
    *v1 = v2;
  }
  if ( *((float *)this + 28) != 1.0 )
    *v1 = v2 | 0x2000;
  return 1;
}
