__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *a3)
{
  int v6; // ebx
  DxgkCompositionObject *v7; // rdi
  BOOL v8; // esi
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v11; // rax
  __int64 v12; // rcx
  unsigned int *v13; // r14
  DxgkCompositionObject *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  _BYTE v23[8]; // [rsp+50h] [rbp-28h] BYREF
  char v24; // [rsp+58h] [rbp-20h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v23);
  Current = DXGPROCESS::GetCurrent(v9);
  if ( Current )
  {
    if ( (*((_DWORD *)Current + 106) & 0x800) == 0 )
      v8 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 216LL))() != 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v24 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  if ( !v8 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    v13 = (unsigned int *)((char *)a2 + 12);
LABEL_19:
    WdLogSingleEntry3(3LL, *v13, *((int *)a2 + 4), v6);
    goto LABEL_20;
  }
  v11 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, v11, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v12 = *((_QWORD *)this + 1);
  v13 = (unsigned int *)((char *)a2 + 12);
  v14 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 72LL))(
                                   v12,
                                   *((unsigned int *)a2 + 3),
                                   17LL);
  if ( v14 )
  {
    v7 = v14;
    DxgkCompositionObject::AddRef(v14);
  }
  else
  {
    WdLogSingleEntry2(3LL, *v13, -1073741811LL);
  }
  if ( v24 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  if ( !v7 )
    goto LABEL_19;
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
  v19[3] = *v13;
  v19[4] = v7;
  v19[5] = *((int *)a2 + 4);
  LOBYTE(v20) = *((_DWORD *)a2 + 4) != 0;
  v21 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v7 + 4) + 32LL))((_QWORD *)v7 + 4, v20);
  v6 = v21;
  if ( v21 < 0 )
    WdLogSingleEntry4(3LL, *v13, v7, *((int *)a2 + 4), v21);
  DxgkCompositionObject::Release(v7);
  if ( v6 < 0 )
    goto LABEL_19;
LABEL_20:
  *((_DWORD *)a3 + 1) = v6;
  return (unsigned int)v6;
}
