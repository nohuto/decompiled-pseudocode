/*
 * XREFs of ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C028CCDC
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028DE80 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00170E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x1C0065E44 (-Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *a3,
        __int64 a4)
{
  DxgkCompositionObject *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcess; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r15d
  __int64 v26; // rax
  struct _KPROCESS *v27; // rdx
  struct CompositionSurfaceObject *v29; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  HANDLE v31; // [rsp+50h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES v32; // [rsp+58h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF
  char v34; // [rsp+B8h] [rbp+1Fh]

  v32.SecurityDescriptor = (PVOID)*((_QWORD *)this + 6);
  v31 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v32.Length = 48LL;
  v29 = 0LL;
  v6 = 0LL;
  memset(&v32.RootDirectory, 0, 24);
  v32.SecurityQualityOfService = 0LL;
  v7 = CompositionSurfaceObject::Create(0LL, &v32, 3u, a4, &v31);
  v11 = v7;
  if ( v7 >= 0 )
  {
    v13 = CompositionSurfaceObject::ResolveHandle(v31, 2u, v10, &v29);
    v11 = v13;
    if ( v13 >= 0
      && (CurrentProcess = PsGetCurrentProcess(v15, v14, v16, v17),
          v19 = ObDuplicateObject(CurrentProcess, v31, *((_QWORD *)this + 4), &Handle, 0, 0, 6, 1),
          v11 = v19,
          v19 >= 0) )
    {
      v6 = v29;
      v25 = (*(__int64 (__fastcall **)(_QWORD, struct CompositionSurfaceObject *, __int64))(**((_QWORD **)this + 1)
                                                                                          + 56LL))(
              *((_QWORD *)this + 1),
              v29,
              17LL);
      if ( v25 )
      {
        v6 = 0LL;
      }
      else
      {
        LODWORD(v11) = -1073741801;
        v26 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
        *(_QWORD *)(v26 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v26);
      }
      if ( (int)v11 >= 0 )
      {
        *((_QWORD *)a3 + 2) = Handle;
        *((_DWORD *)a3 + 3) = v25;
        goto LABEL_14;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v20 + 24) = v11;
      WdLogEvent5_WdWarning(v20);
      v6 = v29;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdWarning(v12);
  }
  if ( Handle )
  {
    v27 = (struct _KPROCESS *)*((_QWORD *)this + 4);
    v34 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v27);
    ObCloseHandle(Handle, 1);
    if ( v34 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_14:
  if ( v31 )
    ObCloseHandle(v31, 1);
  if ( v6 )
    DxgkCompositionObject::Release(v6);
  *((_DWORD *)a3 + 1) = v11;
  return (unsigned int)v11;
}
