/*
 * XREFs of NtSetCompositionSurfaceBufferUsage @ 0x1C007AD80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceBufferUsage(void *a1, __int64 *a2, unsigned int a3, int a4, int a5)
{
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  struct CCompositionBuffer *v13; // rdx
  PVOID Object; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  struct CCompositionBuffer *v17; // [rsp+30h] [rbp-48h] BYREF
  struct CCompositionSurface *v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+18h]
  int v20; // [rsp+98h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v10 = *a2;
    v16 = *a2;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 && a3 > 2 )
    v9 = -1073741811;
  KeEnterCriticalRegion();
  if ( v9 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
    {
      Object = 0LL;
      v9 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v12, (struct CompositionSurfaceObject **)&Object);
      if ( v9 >= 0 )
      {
        v18 = 0LL;
        v9 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v18);
        if ( v9 >= 0 )
        {
          v17 = 0LL;
          if ( (int)CCompositionSurface::FindBuffer(v18, v10, &v17) >= 0 )
          {
            v13 = v17;
            *((_DWORD *)v17 + 49) = a3;
            LOBYTE(v8) = a4 != 0;
            *((_DWORD *)v13 + 50) = v8;
            *((_DWORD *)v13 + 51) = a5;
          }
          CCompositionSurface::UnlockAndRelease(v18);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v9 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
