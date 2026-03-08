/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C000BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C000BE58 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(HANDLE Handle, _OWORD *a2)
{
  struct DXGGLOBAL *Global; // rax
  _QWORD *v5; // rsi
  NTSTATUS v6; // ebx
  _QWORD *v7; // r14
  CCompositionSurface *v8; // r14
  _QWORD *v9; // rcx
  _OWORD *v10; // rdi
  PVOID Object; // [rsp+38h] [rbp-110h] BYREF
  _OWORD v13[14]; // [rsp+40h] [rbp-108h] BYREF

  memset(v13, 0, sizeof(v13));
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
  {
    v5 = 0LL;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
    v7 = Object;
    if ( v6 >= 0 )
    {
      if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
      {
        v5 = v7;
      }
      else
      {
        ObfDereferenceObject(v7);
        v6 = -1073741788;
      }
    }
    if ( v6 >= 0 )
    {
      v8 = 0LL;
      v6 = ObReferenceObjectByPointer(v5, 3u, g_pDxgkCompositionObjectType, 0);
      if ( v6 >= 0 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v5 + 6, 0LL);
        v6 = 0;
        v8 = (CCompositionSurface *)(v5 + 5);
      }
      if ( v6 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v8, (struct CSM_SURFACE_UPDATE_ *)v13);
        v9 = (_QWORD *)((char *)v8 + 8);
        if ( KeGetCurrentThread() == *((struct _KTHREAD **)v8 + 2) )
        {
          *((_QWORD *)v8 + 2) = 0LL;
          ExReleasePushLockExclusiveEx(v9, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v9, 0LL);
        }
        KeLeaveCriticalRegion();
        ObfDereferenceObject((char *)v8 - 40);
      }
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    v6 = -1073741790;
  }
  if ( a2 )
  {
    if ( a2 + 14 < a2 || (unsigned __int64)(a2 + 14) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v13[0];
    a2[1] = v13[1];
    a2[2] = v13[2];
    a2[3] = v13[3];
    a2[4] = v13[4];
    a2[5] = v13[5];
    a2[6] = v13[6];
    v10 = a2 + 8;
    *(v10 - 1) = v13[7];
    *v10 = v13[8];
    v10[1] = v13[9];
    v10[2] = v13[10];
    v10[3] = v13[11];
    v10[4] = v13[12];
    v10[5] = v13[13];
  }
  else
  {
    v6 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
