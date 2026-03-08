/*
 * XREFs of NtDCompositionSetMaterialProperty @ 0x1C00BE150
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00A7DB4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z @ 0x1C00BE244 (-Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z.c)
 *     FindOrCreateMaterialProperty @ 0x1C00BE2B8 (FindOrCreateMaterialProperty.c)
 *     CheckShellExperienceComposerAccess @ 0x1C0248DBC (CheckShellExperienceComposerAccess.c)
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
  __int64 v14; // r8
  int v15; // eax
  MaterialProperty *v17; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v17 = 0LL;
  v7 = 0LL;
  Object = 0LL;
  if ( UserIsCurrentProcessDwm(v9, v8, v10, v11) || (v13 = CheckShellExperienceComposerAccess(v12), v13 >= 0) )
  {
    v13 = FindOrCreateMaterialProperty(a1, a2, &v17);
    if ( v13 >= 0 )
    {
      if ( !a3
        || (LOBYTE(v14) = 1,
            v15 = DirectComposition::ResourceObject::ResolveHandle(
                    a3,
                    1LL,
                    v14,
                    (struct DirectComposition::ResourceObject **)&Object),
            v7 = (const struct DirectComposition::ResourceObject *)Object,
            v13 = v15,
            v15 >= 0) )
      {
        v13 = MaterialProperty::Store(v17, v7);
      }
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
