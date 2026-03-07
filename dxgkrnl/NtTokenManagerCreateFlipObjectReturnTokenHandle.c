__int64 __fastcall NtTokenManagerCreateFlipObjectReturnTokenHandle(void *a1, unsigned __int64 *a2, HANDLE *a3)
{
  int ConsumerTokenOperation; // edi
  unsigned __int64 v7; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r9
  struct DXGGLOBAL *v10; // rax
  unsigned int v11; // edx
  HANDLE Handle; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-A0h]
  __int128 v15; // [rsp+60h] [rbp-98h] BYREF
  __int128 v16; // [rsp+70h] [rbp-88h]
  __int128 v17; // [rsp+80h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-68h] BYREF
  char v19; // [rsp+A0h] [rbp-58h]
  __int64 v20; // [rsp+A8h] [rbp-50h]
  __int64 v21; // [rsp+B0h] [rbp-48h]
  __int64 v22; // [rsp+B8h] [rbp-40h]
  __int64 v23; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v24; // [rsp+118h] [rbp+20h] BYREF

  ConsumerTokenOperation = 0;
  Handle = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  v24 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  KeEnterCriticalRegion();
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v14 = *a2;
  }
  else
  {
    ConsumerTokenOperation = -1073741811;
  }
  if ( ConsumerTokenOperation >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    ConsumerTokenOperation = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*((_QWORD *)Global + 38069) + 456LL))(
                               0x80000000LL,
                               &v24);
    if ( ConsumerTokenOperation >= 0 )
    {
      ConsumerTokenOperation = FlipManagerCreateConsumerTokenOperation(a1, v7, (struct FlipManagerTokenInitInfo *)&v18);
      if ( ConsumerTokenOperation >= 0 )
      {
        LODWORD(v15) = 48;
        *((_QWORD *)&v15 + 1) = 0LL;
        DWORD2(v16) = 0;
        *(_QWORD *)&v16 = 0LL;
        v17 = v24;
        ConsumerTokenOperation = DxgkCompositionObject::Create(
                                   0LL,
                                   (__int64)&v15,
                                   3u,
                                   v9,
                                   5,
                                   144,
                                   (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                                   (__int64)&v18,
                                   &Handle);
        if ( ConsumerTokenOperation >= 0 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a3 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( v24 )
  {
    v10 = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(unsigned __int64))(*((_QWORD *)v10 + 38069) + 576LL))(v24);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v18, v11);
  return (unsigned int)ConsumerTokenOperation;
}
