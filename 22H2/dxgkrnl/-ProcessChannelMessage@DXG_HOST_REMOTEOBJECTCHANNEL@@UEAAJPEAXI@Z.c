/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C034BA20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C000859C (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00085C0 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000AA18 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00150D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     Feature_856993082__private_IsEnabledDeviceUsage @ 0x1C0026424 (Feature_856993082__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x1C00429D4 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C034B230 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C034B4B4 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C03720B8 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0376288 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int *a2,
        unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rdi
  struct _KPROCESS *v10; // rdx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // ecx
  _DWORD *v17; // r14
  struct _KPROCESS *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // r8
  int v23; // ecx
  DXGSHAREDVMOBJECT *v24; // r13
  __int64 v25; // rcx
  unsigned int i; // edi
  DXGSHAREDVMOBJECT *v27; // rcx
  int v28; // [rsp+50h] [rbp-B0h]
  _BYTE v29[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  struct DXGPROCESS *ProcessDxgProcess; // [rsp+78h] [rbp-88h]
  _BYTE v33[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[24]; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  char v36; // [rsp+D8h] [rbp-28h]
  struct _KAPC_STATE v37; // [rsp+E0h] [rbp-20h] BYREF
  char v38; // [rsp+110h] [rbp+10h]
  DXGSHAREDVMOBJECT *v39[16]; // [rsp+120h] [rbp+20h] BYREF
  void *v40[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v41; // [rsp+220h] [rbp+120h] BYREF
  int BundleObjectCallback; // [rsp+224h] [rbp+124h]
  unsigned int v43[2]; // [rsp+228h] [rbp+128h] BYREF

  if ( a3 < 0xC )
  {
    v5 = a3;
LABEL_3:
    WdLogSingleEntry2(3LL, v5, -1073741811LL);
    return 3221225485LL;
  }
  v7 = (int)a2[2];
  v8 = a2[2] - 1;
  if ( !v8 )
  {
    if ( a3 != 88 )
      goto LABEL_14;
    v11 = *((_QWORD *)this + 3);
    if ( PsGetCurrentProcess(v7) != v11 && (unsigned __int8)PsGetProcessExitProcessCalled(v11) )
      goto LABEL_17;
    v12 = a2[1];
    v41 = 1869901170;
    *(_QWORD *)v43 = 2LL;
    BundleObjectCallback = v12;
    memset(v40, 0, sizeof(v40));
    v13 = a2[4];
    if ( (unsigned int)v13 > 0x10 || (v13 = a2[5], (unsigned int)v13 >= 2) )
    {
      v5 = v13;
      goto LABEL_3;
    }
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    memset(v39, 0, sizeof(v39));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v33);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, ProcessDxgProcess);
    v14 = (a2[3] >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)ProcessDxgProcess + 74) )
    {
      v15 = *((_QWORD *)ProcessDxgProcess + 35);
      if ( ((a2[3] >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60)
        && (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) == 0 )
      {
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F;
        if ( v16 )
        {
          if ( v16 == 12 )
          {
            v17 = *(_DWORD **)(v15 + 16LL * v14);
            if ( v17 )
            {
              DXGPROCESS::AcquireReference((DXGPROCESS *)v17);
              if ( (a2[5] & 1) != 0 )
              {
                v19 = 0LL;
                v28 = 0;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v20 = a2[v19 + 6];
                    v31 = v19;
                    v21 = (v20 >> 6) & 0xFFFFFF;
                    if ( v21 >= *((_DWORD *)ProcessDxgProcess + 74) )
                      break;
                    v22 = *((_QWORD *)ProcessDxgProcess + 35);
                    if ( ((v20 >> 25) & 0x60) != (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x60) )
                      break;
                    if ( (*(_DWORD *)(v22 + 16LL * v21 + 8) & 0x2000) != 0 )
                      break;
                    v23 = *(_DWORD *)(v22 + 16LL * v21 + 8) & 0x1F;
                    if ( !v23 )
                      break;
                    if ( v23 != 13 )
                    {
                      WdLogSingleEntry1(2LL, 316LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Handle type mismatch",
                        316LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      break;
                    }
                    v24 = *(DXGSHAREDVMOBJECT **)(v22 + 16LL * v21);
                    if ( !v24 )
                      break;
                    if ( (unsigned int)Feature_856993082__private_IsEnabledDeviceUsage() )
                    {
                      DXGSHAREDVMOBJECT::AddReference(v24);
                      v25 = v31;
                      v39[v31] = v24;
                    }
                    else
                    {
                      v25 = v31;
                    }
                    v40[v25] = (void *)*((_QWORD *)v24 + 1);
                    a2[v25 + 6] = *(_DWORD *)v24;
                    v19 = (unsigned int)(v28 + 1);
                    v28 = v19;
                    if ( (unsigned int)v19 >= a2[4] )
                      goto LABEL_29;
                  }
                  WdLogSingleEntry2(3LL, a2[v31 + 6], -1073741811LL);
                  BundleObjectCallback = -1073741811;
                  DXGPROCESS::ReleaseReference((DXGPROCESS *)v17);
                  v17 = 0LL;
                }
              }
              goto LABEL_29;
            }
LABEL_28:
            WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
            BundleObjectCallback = -1073741811;
LABEL_29:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
            if ( v33[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
            if ( v17 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)(v17 + 26), 0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
              if ( (v17[106] & 0x100) != 0 && v17[10] == 1 )
              {
                v18 = (struct _KPROCESS *)*((_QWORD *)this + 3);
                v38 = 0;
                CPROCESSATTACHHELPER::Attach(&v37, v18);
                CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                  (CEnsureCurrentDxgProcess *)&ApcState,
                  (struct DXGPROCESS *)v17,
                  0);
                if ( ApcState.ApcListHead[0].Blink )
                {
                  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                           this,
                                           a2[4],
                                           a2 + 6,
                                           v40,
                                           &v43[1]);
                }
                else
                {
                  WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
                  BundleObjectCallback = -1073741811;
                }
                CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&ApcState);
                if ( v38 )
                  KeUnstackDetachProcess(&v37);
              }
              else
              {
                WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
                BundleObjectCallback = -1073741811;
              }
              if ( v30 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
            }
            if ( (unsigned int)Feature_856993082__private_IsEnabledDeviceUsage() )
            {
              for ( i = 0; i < a2[4]; ++i )
              {
                v27 = v39[i];
                if ( v27 )
                {
                  DXGSHAREDVMOBJECT::ReleaseReference(v27);
                  v39[i] = 0LL;
                }
              }
            }
            if ( v17 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v29);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v17);
              if ( v30 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
            }
            goto LABEL_66;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v17 = 0LL;
    goto LABEL_28;
  }
  if ( v8 != 2 )
  {
    v5 = v7;
    goto LABEL_3;
  }
  if ( a3 != 16 )
  {
LABEL_14:
    WdLogSingleEntry3(3LL, v7, a3, -1073741811LL);
    return 3221225485LL;
  }
  v9 = *((_QWORD *)this + 3);
  if ( PsGetCurrentProcess(v7) != v9 && (unsigned __int8)PsGetProcessExitProcessCalled(v9) )
  {
LABEL_17:
    WdLogSingleEntry3(3LL, (int)a2[2], *((_QWORD *)this + 3), -1073741558LL);
    return 3221225738LL;
  }
  v10 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  *(_QWORD *)v43 = 4LL;
  v41 = 1869901170;
  v36 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v10);
  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(this, a2[3]);
  if ( v36 )
    KeUnstackDetachProcess(&ApcState);
LABEL_66:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), &v41, 16LL);
  return 0LL;
}
