__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        unsigned int a3)
{
  __int64 v5; // rdx
  struct _KPROCESS *v7; // rdx
  DXGPROCESS *v8; // rax
  DXGPROCESS *v9; // r14
  __int64 v10; // r8
  int *v11; // rdx
  int v12; // eax
  struct _KPROCESS *v13; // rdx
  int v14; // eax
  int v15; // eax
  struct _KPROCESS *v16; // rdx
  int v17; // eax
  struct _KPROCESS *v18; // rdx
  DXGPROCESS *v19; // rax
  DXGPROCESS *v20; // r14
  DXGPROCESS *v21; // rcx
  int v22; // eax
  struct _KPROCESS *v23; // rdx
  int v24; // eax
  struct _KPROCESS *v25; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  DXGPROCESS *v27; // rsi
  struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *v28; // rdx
  __int64 v29; // r9
  _BYTE v30[8]; // [rsp+20h] [rbp-99h] BYREF
  char v31; // [rsp+28h] [rbp-91h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-89h] BYREF
  char v33; // [rsp+60h] [rbp-59h]
  int v34; // [rsp+68h] [rbp-51h] BYREF
  int v35; // [rsp+6Ch] [rbp-4Dh]
  __int64 v36; // [rsp+70h] [rbp-49h]
  int v37; // [rsp+78h] [rbp-41h] BYREF
  int CompositionSurfaceCallback; // [rsp+7Ch] [rbp-3Dh]
  __int64 v39; // [rsp+80h] [rbp-39h]
  __int64 v40; // [rsp+88h] [rbp-31h]
  _DWORD v41[20]; // [rsp+90h] [rbp-29h] BYREF

  if ( a3 < 0xC )
  {
    v5 = a3;
LABEL_3:
    WdLogSingleEntry2(3LL, v5, -1073741811LL);
    return 3221225485LL;
  }
  v5 = *((int *)a2 + 2);
  switch ( (_DWORD)v5 )
  {
    case 1:
      if ( a3 != 16 )
        goto LABEL_44;
      v24 = *((_DWORD *)a2 + 1);
      v25 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v40 = 0LL;
      v33 = 0;
      v37 = 1886220131;
      v39 = 2LL;
      CompositionSurfaceCallback = v24;
      CPROCESSATTACHHELPER::Attach(&ApcState, v25);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v34);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
      ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
      v27 = ProcessDxgProcess;
      if ( ProcessDxgProcess )
        DXGPROCESS::AcquireReference(ProcessDxgProcess);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v34);
      if ( v27 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (DXGPROCESS *)((char *)v27 + 104), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
        if ( *((_DWORD *)v27 + 10) == 1 )
          CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
                                         this,
                                         v28,
                                         (struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *)&v37,
                                         v29);
        if ( v31 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
        v21 = v27;
        goto LABEL_53;
      }
LABEL_54:
      if ( (_BYTE)v36 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v34);
      if ( v33 )
        KeUnstackDetachProcess(&ApcState);
      v11 = &v37;
      v10 = 24LL;
      goto LABEL_59;
    case 3:
      if ( a3 != 16 )
        goto LABEL_44;
      v22 = *((_DWORD *)a2 + 1);
      v23 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v33 = 0;
      v36 = 4LL;
      v34 = 1886220131;
      v35 = v22;
      CPROCESSATTACHHELPER::Attach(&ApcState, v23);
      v14 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *)&v34);
      goto LABEL_27;
    case 5:
      if ( a3 != 1344 )
        goto LABEL_44;
      v17 = *((_DWORD *)a2 + 1);
      v18 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v40 = 0LL;
      v33 = 0;
      v39 = 6LL;
      v37 = 1886220131;
      CompositionSurfaceCallback = v17;
      CPROCESSATTACHHELPER::Attach(&ApcState, v18);
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v34);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
      v19 = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
      v20 = v19;
      if ( v19 )
        DXGPROCESS::AcquireReference(v19);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v34);
      if ( v20 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (DXGPROCESS *)((char *)v20 + 104), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
        if ( *((_DWORD *)v20 + 10) == 1 )
          CompositionSurfaceCallback = DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
                                         this,
                                         a2,
                                         (struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *)&v37);
        if ( v31 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
        v21 = v20;
LABEL_53:
        DXGPROCESS::ReleaseReference(v21);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v34);
        goto LABEL_54;
      }
      goto LABEL_54;
    case 7:
      if ( a3 != 24 )
        goto LABEL_44;
      v15 = *((_DWORD *)a2 + 1);
      v16 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v33 = 0;
      v36 = 8LL;
      v34 = 1886220131;
      v35 = v15;
      CPROCESSATTACHHELPER::Attach(&ApcState, v16);
      v14 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *)&v34);
      goto LABEL_27;
    case 9:
      if ( a3 != 488 )
        goto LABEL_44;
      v12 = *((_DWORD *)a2 + 1);
      v13 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v33 = 0;
      v36 = 10LL;
      v34 = 1886220131;
      v35 = v12;
      CPROCESSATTACHHELPER::Attach(&ApcState, v13);
      v14 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
              this,
              a2,
              (struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *)&v34);
LABEL_27:
      v35 = v14;
      if ( v33 )
        KeUnstackDetachProcess(&ApcState);
      v10 = 16LL;
      v11 = &v34;
      goto LABEL_59;
  }
  if ( (_DWORD)v5 != 11 )
    goto LABEL_3;
  if ( a3 != 16 )
  {
LABEL_44:
    WdLogSingleEntry3(3LL, v5, a3, -1073741811LL);
    return 3221225485LL;
  }
  memset(v41, 0, sizeof(v41));
  v41[0] = 1886220131;
  v41[2] = 12;
  memset(&v41[4], 0, 0x40uLL);
  v7 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  v41[1] = *((_DWORD *)a2 + 1);
  v33 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v7);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v34);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
  v8 = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
  v9 = v8;
  if ( v8 )
    DXGPROCESS::AcquireReference(v8);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v34);
  if ( v9 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (DXGPROCESS *)((char *)v9 + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    if ( *((_DWORD *)v9 + 10) == 1 )
      v41[1] = DXG_HOST_COMPOSITIONOBJECTCHANNEL::QueryStatsCallback(
                 this,
                 a2,
                 (struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN *)v41);
    if ( v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
    DXGPROCESS::ReleaseReference(v9);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v34);
  }
  if ( (_BYTE)v36 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v34);
  if ( v33 )
    KeUnstackDetachProcess(&ApcState);
  v10 = 80LL;
  v11 = v41;
LABEL_59:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), v11, v10);
  return 0LL;
}
