__int64 __fastcall DxgkAttemptOpmVmBusRedirect(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int *a7,
        _DWORD *a8)
{
  _DWORD *v11; // rsi
  DXGGLOBAL *Global; // rax
  DXG_GUEST_GLOBAL_VMBUS *v13; // rdi
  struct DXGGLOBAL *v14; // rax
  unsigned int v15; // ebx
  char v17; // [rsp+48h] [rbp-29h] BYREF
  struct _LUID v18; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-19h]
  __int128 v20; // [rsp+68h] [rbp-9h] BYREF
  unsigned int *v21[2]; // [rsp+78h] [rbp+7h] BYREF
  char v22; // [rsp+88h] [rbp+17h]
  unsigned int v23; // [rsp+C8h] [rbp+57h] BYREF

  v23 = a3;
  v17 = 0;
  *(_QWORD *)&v20 = &v23;
  *((_QWORD *)&v20 + 1) = &v17;
  DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9_((__int64)v21, &v20);
  v11 = a8;
  *a8 = -1073741823;
  Global = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::IsVmConnectedToHost(Global)
    && (v13 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 214)) != 0LL
    && (v18 = 0LL,
        v19 = 0,
        *(_QWORD *)&v20 = a1,
        *((_QWORD *)&v20 + 1) = a2,
        v14 = DXGGLOBAL::GetGlobal(),
        (int)REMOTEMONITORMAPPING::FindMappingFromGuestId(
               (struct DXGGLOBAL *)((char *)v14 + 304832),
               (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v20,
               (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v18) >= 0) )
  {
    v15 = 1;
    v17 = 1;
    *v11 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(v13, v18, v19, v23, a4, a5, a6, a7);
  }
  else
  {
    v15 = 0;
  }
  if ( v22 )
    lambda_0e6dcefab9b27dbf753c4a8a5b0f464a_::operator()(v21);
  return v15;
}
