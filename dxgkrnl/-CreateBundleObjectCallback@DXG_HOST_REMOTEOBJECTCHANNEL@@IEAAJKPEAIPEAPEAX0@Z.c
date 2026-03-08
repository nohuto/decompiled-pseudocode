/*
 * XREFs of ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C0346870
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0347060 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C03225D0 (DxgkCreateBundleObjectInternal.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0371BC8 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rcx
  _BYTE *v12; // rax
  _BYTE *v13; // rdx
  int BundleObjectInternal; // eax
  unsigned int v15; // ebx
  void *v16; // rsi
  __int64 v17; // rax
  DXGSHAREDVMOBJECT *v18; // rdi
  unsigned int v19; // eax
  _DWORD v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+6Ch] [rbp-94h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  _QWORD v28[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[128]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v30[768]; // [rsp+150h] [rbp+50h] BYREF

  memset(v28, 0, sizeof(v28));
  memset(v30, 0, sizeof(v30));
  LODWORD(v28[0]) = a2;
  v21[1] = 0;
  v25 = 0;
  v28[1] = a3;
  memset(v29, 0, sizeof(v29));
  if ( a2 )
  {
    v10 = *((_QWORD *)this + 5);
    v11 = v29;
    v12 = &v30[8];
    v9 = a2;
    v13 = v30;
    do
    {
      *v11 = v13;
      v13 += 48;
      *((_DWORD *)v12 - 2) = 48;
      ++v11;
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v12 + 4) = 0;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 3) = v10;
      *((_QWORD *)v12 + 4) = 0LL;
      v12 += 48;
      --v9;
    }
    while ( v9 );
  }
  v28[2] = v29;
  LOBYTE(v9) = 1;
  v26 = *((_QWORD *)this + 4);
  v21[0] = 48;
  v28[4] = v21;
  v22 = 0LL;
  v24 = 512;
  v23 = 0LL;
  v27 = 0LL;
  LODWORD(v28[5]) = 0x10000000;
  BundleObjectInternal = DxgkCreateBundleObjectInternal(0LL, 0, v9, 0LL, (ULONG64)v28, (__int64)a4);
  v15 = BundleObjectInternal;
  if ( BundleObjectInternal >= 0 )
  {
    v16 = (void *)v28[9];
    v17 = operator new[](0x20uLL, 0x4B677844u, 256LL);
    v18 = (DXGSHAREDVMOBJECT *)v17;
    if ( v17 )
    {
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_DWORD *)(v17 + 24) = 1;
      *(_DWORD *)v17 = 16;
      *(_QWORD *)(v17 + 16) = v16;
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 56LL))(
              *((_QWORD *)this + 1),
              v17,
              13LL);
      if ( v19 )
      {
        *a5 = v19;
      }
      else
      {
        WdLogSingleEntry1(6LL, 356LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate NT shared object handle",
          356LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v15 = -1073741801;
        DXGSHAREDVMOBJECT::ReleaseReference(v18);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 345LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
        345LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v15 = -1073741801;
      if ( v16 )
        ObCloseHandle(v16, 0);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, BundleObjectInternal);
  }
  return v15;
}
