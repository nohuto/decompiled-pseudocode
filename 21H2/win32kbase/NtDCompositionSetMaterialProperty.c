/*
 * XREFs of NtDCompositionSetMaterialProperty @ 0x1C0057A50
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z @ 0x1C0057B44 (-Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z.c)
 *     FindOrCreateMaterialProperty @ 0x1C0057BB8 (FindOrCreateMaterialProperty.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0093F84 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     CheckShellExperienceComposerAccess @ 0x1C021276C (CheckShellExperienceComposerAccess.c)
 */

__int64 __fastcall NtDCompositionSetMaterialProperty(__int64 a1, __int64 a2, void *a3)
{
  struct _ERESOURCE *v3; // rbx
  const struct DirectComposition::ResourceObject *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  MaterialProperty *v16; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v16 = 0LL;
  v7 = 0LL;
  Object = 0LL;
  if ( UserIsCurrentProcessDwm(v9, v8, v10, v11) || (v13 = CheckShellExperienceComposerAccess(v12), v13 >= 0) )
  {
    v13 = FindOrCreateMaterialProperty(a1, a2, &v16);
    if ( v13 >= 0 )
    {
      if ( !a3
        || (v14 = DirectComposition::ResourceObject::ResolveHandle(
                    a3,
                    1u,
                    1,
                    (struct DirectComposition::ResourceObject **)&Object),
            v7 = (const struct DirectComposition::ResourceObject *)Object,
            v13 = v14,
            v14 >= 0) )
      {
        v13 = MaterialProperty::Store(v16, v7);
      }
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
