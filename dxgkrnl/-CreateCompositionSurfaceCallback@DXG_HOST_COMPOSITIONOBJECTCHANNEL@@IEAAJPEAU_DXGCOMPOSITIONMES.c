__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *a3,
        __int64 a4)
{
  struct CompositionSurfaceObject *v6; // rdi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  HANDLE v13; // rdi
  __int64 CurrentProcess; // rax
  int v15; // eax
  int v16; // eax
  struct _KPROCESS *v17; // rdx
  struct CompositionSurfaceObject *v19; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v21; // [rsp+60h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES v22; // [rsp+68h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-11h] BYREF
  char v24; // [rsp+C8h] [rbp+1Fh]

  v22.SecurityDescriptor = (PVOID)*((_QWORD *)this + 6);
  v21 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v22.Length = 48LL;
  v19 = 0LL;
  v6 = 0LL;
  memset(&v22.RootDirectory, 0, 24);
  v22.SecurityQualityOfService = 0LL;
  v7 = CompositionSurfaceObject::Create(0LL, &v22, 3u, a4, &v21);
  LODWORD(v9) = v7;
  if ( v7 >= 0 )
  {
    v10 = CompositionSurfaceObject::ResolveHandle(v21, 2u, v8, &v19);
    v9 = v10;
    if ( v10 >= 0
      && (v12 = *((_QWORD *)this + 4),
          v13 = v21,
          CurrentProcess = PsGetCurrentProcess(v11),
          v15 = ObDuplicateObject(CurrentProcess, v13, v12, &Handle, 0, 0, 6, 1),
          v9 = v15,
          v15 >= 0) )
    {
      v6 = v19;
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct CompositionSurfaceObject *, __int64))(**((_QWORD **)this + 1)
                                                                                          + 56LL))(
              *((_QWORD *)this + 1),
              v19,
              17LL);
      if ( v16 )
      {
        *((_DWORD *)a3 + 3) = v16;
        v6 = 0LL;
        *((_QWORD *)a3 + 2) = Handle;
        goto LABEL_12;
      }
      LODWORD(v9) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"AllocateHandle failed. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(3LL, v9);
      v6 = v19;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v7);
  }
  if ( Handle )
  {
    v17 = (struct _KPROCESS *)*((_QWORD *)this + 4);
    v24 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v17);
    ObCloseHandle(Handle, 1);
    if ( v24 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_12:
  if ( v21 )
    ObCloseHandle(v21, 1);
  if ( v6 )
    DxgkCompositionObject::Release(v6);
  *((_DWORD *)a3 + 1) = v9;
  return (unsigned int)v9;
}
