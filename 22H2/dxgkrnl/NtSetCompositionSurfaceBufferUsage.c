/*
 * XREFs of NtSetCompositionSurfaceBufferUsage @ 0x1C000E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0010868 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010C88 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011B50 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00170E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceBufferUsage(void *a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  char v12; // r8
  struct CCompositionBuffer *v13; // rax
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]
  struct CCompositionBuffer *v17; // [rsp+30h] [rbp-38h] BYREF
  CCompositionSurface *v18; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+18h]
  int v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v7 = 0;
  v8 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v16 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 && a3 > 2 )
    v7 = -1073741811;
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v10, v9);
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))() )
    {
      Object = 0LL;
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v12, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v18 = 0LL;
        v7 = CompositionSurfaceObject::LockForWrite(Object, &v18);
        if ( v7 >= 0 )
        {
          v17 = 0LL;
          if ( (int)CCompositionSurface::FindBuffer(v18, v8, &v17) >= 0 )
          {
            v13 = v17;
            *((_DWORD *)v17 + 43) = a3;
            *((_DWORD *)v13 + 44) = a4;
          }
          CCompositionSurface::UnlockAndRelease(v18);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
