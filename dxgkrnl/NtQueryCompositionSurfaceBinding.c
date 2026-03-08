/*
 * XREFs of NtQueryCompositionSurfaceBinding @ 0x1C000D130
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C000D620 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D6B0 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D828 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceBinding(void *a1, unsigned __int64 a2, struct CCompositionSurface *a3)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  int Binding; // ebx
  PVOID v9; // r14
  struct CCompositionSurface *v11; // [rsp+38h] [rbp-570h] BYREF
  PVOID Object; // [rsp+40h] [rbp-568h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-560h]
  HANDLE Src[164]; // [rsp+60h] [rbp-548h] BYREF

  v4 = (unsigned __int64 *)a2;
  Object = a1;
  v11 = a3;
  v6 = 0LL;
  v13 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( a2 )
  {
    if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
      v4 = (unsigned __int64 *)MmUserProbeAddress;
    v6 = *v4;
    v13 = *v4;
  }
  KeEnterCriticalRegion();
  Object = 0LL;
  LOBYTE(v7) = 1;
  Binding = DxgkCompositionObject::ResolveHandle(a1, 1LL, v7, 1LL, &Object);
  if ( Binding >= 0 )
  {
    v9 = Object;
    v11 = 0LL;
    Binding = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v11);
    if ( Binding >= 0 )
    {
      Binding = CCompositionSurface::QueryBinding(v11, v6, (struct CSM_BUFFER_INFO *)Src);
      CCompositionSurface::UnlockAndRelease(v11);
    }
    ObfDereferenceObject(v9);
  }
  if ( a3 )
  {
    if ( (struct CCompositionSurface *)((char *)a3 + 1312) < a3 || (unsigned __int64)a3 + 1312 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a3, Src, 0x520uLL);
  }
  else
  {
    Binding = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Binding;
}
