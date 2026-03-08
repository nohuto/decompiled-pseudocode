/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C007B090
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z @ 0x1C007C4E4 (-SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        void *a1,
        unsigned __int64 *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        char *Src,
        struct CCompositionSurface *a8)
{
  unsigned __int64 *v10; // r10
  int v12; // ebx
  unsigned __int64 v13; // r14
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  size_t v17; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // r8
  int v21; // [rsp+44h] [rbp-94h] BYREF
  struct CCompositionSurface *v22; // [rsp+48h] [rbp-90h] BYREF
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-80h]
  unsigned int v25[16]; // [rsp+60h] [rbp-78h] BYREF

  v10 = a2;
  Object = a1;
  v22 = a8;
  v12 = 0;
  v13 = 0LL;
  v24 = 0LL;
  v21 = 0;
  if ( a2
    && Src
    && a6
    && (v14 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
            + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333),
        v15 = (((v14 & 0xF0F0F0F) + ((v14 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
            + ((((v14 & 0xF0F0F0F) + ((v14 >> 4) & 0xF0F0F0F)) >> 8) & 0xFF00FF),
        v16 = (unsigned __int16)v15 + HIWORD(v15),
        v16 < 0x10) )
  {
    if ( v10 + 1 < v10 || (unsigned __int64)(v10 + 1) > MmUserProbeAddress )
      v10 = (unsigned __int64 *)MmUserProbeAddress;
    v13 = *v10;
    v24 = *v10;
    v17 = 4LL * v16;
    if ( &Src[v17] < Src || (unsigned __int64)&Src[v17] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, Src, v17);
  }
  else
  {
    v12 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v12 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
    {
      Object = 0LL;
      v12 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v19, (struct CompositionSurfaceObject **)&Object);
      if ( v12 >= 0 )
      {
        v22 = 0LL;
        v12 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v22);
        if ( v12 >= 0 )
        {
          v12 = CCompositionSurface::SetIndependentFlip(v22, v13, a3 != 0, a4 != 0, a5, a6, v25, &v21);
          CCompositionSurface::UnlockAndRelease(v22);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v12 = -1073741790;
    }
  }
  if ( v12 >= 0 )
  {
    if ( a8 )
    {
      if ( (struct CCompositionSurface *)((char *)a8 + 4) < a8 || (unsigned __int64)a8 + 4 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_DWORD *)a8 = v21;
    }
    else
    {
      v12 = -1073741811;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
