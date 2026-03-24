/*
 * XREFs of ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C028AAA0
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028B750 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023B42C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C0278054 (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  void *v8; // rsi
  DXGSHAREDVMOBJECT *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  _BYTE *v14; // rax
  _BYTE *v15; // rdx
  int BundleObjectInternal; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  DXGSHAREDVMOBJECT *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _DWORD v35[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h]
  int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  _QWORD v42[10]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v43[128]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v44[768]; // [rsp+130h] [rbp+30h] BYREF

  v8 = 0LL;
  v10 = 0LL;
  memset(v42, 0, sizeof(v42));
  memset(v44, 0, sizeof(v44));
  v35[1] = 0;
  v39 = 0;
  LODWORD(v42[0]) = a2;
  v42[1] = a3;
  memset(v43, 0, sizeof(v43));
  if ( a2 )
  {
    v12 = *((_QWORD *)this + 5);
    v13 = v43;
    v11 = a2;
    v14 = &v44[8];
    v15 = v44;
    do
    {
      *v13 = v15;
      v15 += 48;
      *((_DWORD *)v14 - 2) = 48;
      ++v13;
      *(_QWORD *)v14 = 0LL;
      *((_DWORD *)v14 + 4) = 0;
      *((_QWORD *)v14 + 1) = 0LL;
      *((_QWORD *)v14 + 3) = v12;
      *((_QWORD *)v14 + 4) = 0LL;
      v14 += 48;
      --v11;
    }
    while ( v11 );
  }
  v42[2] = v43;
  LOBYTE(v11) = 1;
  v40 = *((_QWORD *)this + 4);
  v35[0] = 48;
  v42[4] = v35;
  v36 = 0LL;
  v38 = 512;
  v37 = 0LL;
  v41 = 0LL;
  LODWORD(v42[5]) = 0x10000000;
  BundleObjectInternal = DxgkCreateBundleObjectInternal(0LL, 0, v11, 0LL, (ULONG64)v42, (__int64)a4);
  v20 = BundleObjectInternal;
  if ( BundleObjectInternal < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_17;
  }
  v8 = (void *)v42[9];
  v23 = (DXGSHAREDVMOBJECT *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v10 = v23;
  if ( v23 )
  {
    *(_DWORD *)v23 = 0;
    *((_QWORD *)v23 + 1) = 0LL;
    *((_DWORD *)v23 + 4) = 0;
    *((_DWORD *)v23 + 6) = 1;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *(_DWORD *)v10 = 16;
    *((_QWORD *)v10 + 2) = v8;
    v30 = (*(__int64 (__fastcall **)(_QWORD, DXGSHAREDVMOBJECT *, __int64))(**((_QWORD **)this + 1) + 56LL))(
            *((_QWORD *)this + 1),
            v10,
            13LL);
    if ( !v30 )
    {
      v34 = WdLogNewEntry5_WdLowResource(v31, v22, v32, v33);
      *(_QWORD *)(v34 + 24) = 375LL;
      WdLogEvent5_WdLowResource(v34);
      LODWORD(v20) = -1073741801;
LABEL_18:
      if ( v10 )
      {
        DXGSHAREDVMOBJECT::ReleaseReference(v10, v22);
        return (unsigned int)v20;
      }
      goto LABEL_11;
    }
    *a5 = v30;
LABEL_17:
    if ( (int)v20 >= 0 )
      return (unsigned int)v20;
    goto LABEL_18;
  }
  v28 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
  *(_QWORD *)(v28 + 24) = 364LL;
  WdLogEvent5_WdLowResource(v28);
  LODWORD(v20) = -1073741801;
LABEL_11:
  if ( v8 )
    ObCloseHandle(v8, 0);
  return (unsigned int)v20;
}
