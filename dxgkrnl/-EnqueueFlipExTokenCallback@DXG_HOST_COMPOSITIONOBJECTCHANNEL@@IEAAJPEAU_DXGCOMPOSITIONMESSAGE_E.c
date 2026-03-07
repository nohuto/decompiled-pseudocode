__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN *a2,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *a3)
{
  unsigned int v6; // ebx
  DxgkCompositionObject *v7; // rdi
  BOOL v8; // esi
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v11; // rax
  DxgkCompositionObject *v12; // rax
  int v13; // eax
  _BYTE v15[8]; // [rsp+50h] [rbp-28h] BYREF
  char v16; // [rsp+58h] [rbp-20h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v15);
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
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  if ( v8 )
  {
    v11 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, v11, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    v12 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v12 )
    {
      v7 = v12;
      DxgkCompositionObject::AddRef(v12);
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
    }
    if ( v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    if ( v7 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, char *))(*((_QWORD *)v7 + 4) + 40LL))(
              (_QWORD *)v7 + 4,
              *((_QWORD *)a2 + 2),
              *((_QWORD *)a2 + 3),
              (char *)a2 + 32);
      v6 = v13;
      if ( v13 < 0 )
        WdLogSingleEntry1(3LL, v13);
      DxgkCompositionObject::Release(v7);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
  }
  *((_DWORD *)a3 + 1) = v6;
  return v6;
}
