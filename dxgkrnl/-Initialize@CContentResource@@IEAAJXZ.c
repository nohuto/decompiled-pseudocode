/*
 * XREFs of ?Initialize@CContentResource@@IEAAJXZ @ 0x1C008771C
 * Callers:
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C00875F4 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 * Callees:
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D6B0 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000DB08 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ??$FindProperty@UFlipContentHCompSurf@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHCompSurf@@@Z @ 0x1C0087458 (--$FindProperty@UFlipContentHCompSurf@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHCompSurf@@.c)
 */

__int64 __fastcall CContentResource::Initialize(CContentResource *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  void *v5; // rcx
  int v6; // eax
  PVOID v7; // rdi
  int v8; // eax
  CCompositionSurface *v9; // rdx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF
  struct CCompositionSurface *v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    Object = 0LL;
    CFlipPropertySetBase::FindProperty<FlipContentHCompSurf>(v3, &Object);
    if ( Object )
    {
      v5 = *(void **)Object;
      if ( *(_QWORD *)Object )
      {
        Object = 0LL;
        v12 = 0LL;
        v6 = CompositionSurfaceObject::ResolveHandle(v5, 2u, v4, (struct CompositionSurfaceObject **)&Object);
        v7 = Object;
        v2 = v6;
        if ( v6 >= 0 )
        {
          v8 = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v12);
          v9 = v12;
          v2 = v8;
          if ( v8 >= 0 )
          {
            if ( CCompositionSurface::GetActiveBuffer(v12) )
            {
              v2 = -1073741811;
            }
            else
            {
              *((_QWORD *)this + 6) = v7;
              v7 = 0LL;
            }
          }
          if ( v9 )
            CCompositionSurface::UnlockAndRelease(v9);
        }
        if ( v7 )
          ObfDereferenceObject(v7);
      }
    }
  }
  return v2;
}
