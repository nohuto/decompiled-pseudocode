__int64 __fastcall NtTokenManagerCreateFlipObjectTokenHandle(
        void *a1,
        unsigned __int64 *a2,
        int a3,
        unsigned int a4,
        struct FlipPropertyItem *a5,
        HANDLE *a6,
        _QWORD *a7,
        _OWORD *a8)
{
  unsigned __int64 v11; // r14
  int v12; // edi
  struct DXGGLOBAL *Global; // rax
  int ProducerTokenInitInfo; // eax
  __int64 v15; // r9
  struct DXGGLOBAL *v16; // rax
  unsigned int v17; // edx
  unsigned __int64 v19; // [rsp+50h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-B8h]
  __int128 v22; // [rsp+68h] [rbp-B0h]
  __int128 v23; // [rsp+78h] [rbp-A0h] BYREF
  char v24; // [rsp+88h] [rbp-90h]
  __int64 v25; // [rsp+90h] [rbp-88h]
  __int64 v26; // [rsp+98h] [rbp-80h]
  __int64 v27; // [rsp+A0h] [rbp-78h]
  __int64 v28; // [rsp+A8h] [rbp-70h]
  __int128 v29; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v30; // [rsp+C0h] [rbp-58h]
  __int128 v31; // [rsp+D0h] [rbp-48h]

  Handle = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v11 = 0LL;
  v21 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v22 = 0LL;
  KeEnterCriticalRegion();
  if ( a6 )
  {
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        a2 = (unsigned __int64 *)MmUserProbeAddress;
      v11 = *a2;
      v21 = *a2;
    }
    Global = DXGGLOBAL::GetGlobal();
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*((_QWORD *)Global + 38069) + 456LL))(
            0x80000000LL,
            &v19);
    if ( v12 >= 0 )
    {
      ProducerTokenInitInfo = FlipManagerCreateProducerTokenInitInfo(
                                a1,
                                a3 != 0,
                                v11,
                                a4,
                                a5,
                                (struct FlipManagerTokenInitInfo *)&v23);
      v12 = ProducerTokenInitInfo;
      if ( ProducerTokenInitInfo >= 0 )
      {
        if ( v26 )
        {
          if ( !v24 )
            ProducerTokenInitInfo = -1073741811;
          v12 = ProducerTokenInitInfo;
        }
        if ( v12 >= 0 )
        {
          if ( v27 )
          {
            *(_QWORD *)&v22 = *(_QWORD *)(v27 + 28);
            *((_QWORD *)&v22 + 1) = *(_QWORD *)(v27 + 40);
          }
          LODWORD(v29) = 48;
          *((_QWORD *)&v29 + 1) = 0LL;
          DWORD2(v30) = 0;
          *(_QWORD *)&v30 = 0LL;
          v31 = v19;
          v12 = DxgkCompositionObject::Create(
                  0LL,
                  (__int64)&v29,
                  3u,
                  v15,
                  5,
                  144,
                  (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                  (__int64)&v23,
                  &Handle);
          if ( v12 >= 0 )
          {
            if ( a7 )
            {
              if ( a7 + 1 < a7 || (unsigned __int64)(a7 + 1) > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              *a7 = v25;
            }
            if ( a8 )
            {
              if ( a8 + 1 < a8 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              *a8 = v22;
            }
            if ( a6 + 1 < a6 || (unsigned __int64)(a6 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            *a6 = Handle;
            Handle = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v19 )
  {
    v16 = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(unsigned __int64))(*((_QWORD *)v16 + 38069) + 576LL))(v19);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v23, v17);
  return (unsigned int)v12;
}
