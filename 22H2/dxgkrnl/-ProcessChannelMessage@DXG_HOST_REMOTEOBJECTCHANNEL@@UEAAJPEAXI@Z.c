/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028B750
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0002D44 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008594 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008660 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_1259646266__private_IsEnabledDeviceUsage @ 0x1C0027DDC (Feature_1259646266__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003BBC8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0238348 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023B42C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C028AAA0 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C028AD18 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KPROCESS *v15; // rdx
  struct _KPROCESS *v16; // rdi
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _KTHREAD **v22; // r12
  __int64 v23; // rcx
  struct _KTHREAD *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  struct _KTHREAD *v31; // r8
  unsigned int v32; // eax
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rax
  DXGSHAREDVMOBJECT *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct _KPROCESS *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned int i; // edi
  DXGSHAREDVMOBJECT *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  unsigned int v58; // [rsp+30h] [rbp-D0h]
  struct _KTHREAD **ProcessDxgProcess; // [rsp+38h] [rbp-C8h] BYREF
  char v60; // [rsp+40h] [rbp-C0h]
  _BYTE v61[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h]
  _BYTE v64[24]; // [rsp+68h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-80h] BYREF
  char v66; // [rsp+B0h] [rbp-50h]
  DXGSHAREDVMOBJECT *v67[16]; // [rsp+C0h] [rbp-40h] BYREF
  void *v68[16]; // [rsp+140h] [rbp+40h] BYREF
  int v69; // [rsp+1C0h] [rbp+C0h] BYREF
  int BundleObjectCallback; // [rsp+1C4h] [rbp+C4h]
  unsigned int v71[2]; // [rsp+1C8h] [rbp+C8h] BYREF

  v4 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v7[3] = v4;
LABEL_3:
    v7[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  v9 = a2[2] - 1;
  if ( a2[2] == 1 )
  {
    if ( (_DWORD)a3 != 88 )
      goto LABEL_14;
    v16 = this[3];
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v9, a2, a3, a4) != v16
      && (unsigned __int8)PsGetProcessExitProcessCalled(v16) )
    {
      goto LABEL_17;
    }
    v18 = a2[1];
    v69 = 1869901170;
    *(_QWORD *)v71 = 2LL;
    BundleObjectCallback = v18;
    memset(v68, 0, sizeof(v68));
    if ( a2[4] > 0x10 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
      v10 = a2[4];
      goto LABEL_20;
    }
    if ( a2[5] >= 2 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
      v10 = a2[5];
      goto LABEL_20;
    }
    ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(this[3]);
    v22 = ProcessDxgProcess;
    memset(v67, 0, sizeof(v67));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v61);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v64, ProcessDxgProcess);
    v25 = a2[3];
    v26 = (a2[3] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)ProcessDxgProcess + 64) )
    {
      v24 = ProcessDxgProcess[30];
      v25 = ((unsigned int)v25 >> 25) & 0x60;
      v23 = *((unsigned int *)v24 + 4 * v26 + 2);
      if ( (_BYTE)v25 == (*((_BYTE *)v24 + 16 * v26 + 8) & 0x60) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
      {
        v23 &= 0x1Fu;
        if ( (_BYTE)v23 == 12 )
        {
          v28 = *((_QWORD *)v24 + 2 * (unsigned int)v26);
          if ( v28 )
          {
            DXGPROCESS::AcquireReference((DXGPROCESS *)v28, v25);
LABEL_31:
            if ( v28 )
            {
              if ( (a2[5] & 1) != 0 )
              {
                v32 = 0;
                v58 = 0;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v33 = v32;
                    v34 = a2[v32 + 6];
                    v35 = (a2[v32 + 6] >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v35 >= *((_DWORD *)v22 + 64) )
                      break;
                    v34 = ((unsigned int)v34 >> 25) & 0x60;
                    v31 = ProcessDxgProcess[30];
                    v30 = *((unsigned int *)v31 + 4 * v35 + 2);
                    if ( (_BYTE)v34 != (*((_BYTE *)v31 + 16 * v35 + 8) & 0x60)
                      || (v30 & 0x2000) != 0
                      || (v30 & 0x1F) == 0 )
                    {
                      break;
                    }
                    v30 &= 0x1Fu;
                    if ( (_BYTE)v30 != 13 )
                    {
                      v38 = WdLogNewEntry5_WdError(v30, v34);
                      *(_QWORD *)(v38 + 24) = 316LL;
                      WdLogEvent5_WdError(v38);
                      break;
                    }
                    v36 = (DXGSHAREDVMOBJECT *)*((_QWORD *)v31 + 2 * (unsigned int)v35);
                    if ( !v36 )
                      break;
                    if ( (unsigned int)Feature_1259646266__private_IsEnabledDeviceUsage() )
                    {
                      DXGSHAREDVMOBJECT::AddReference(v36, v37);
                      v67[v33] = v36;
                    }
                    v68[v33] = (void *)*((_QWORD *)v36 + 1);
                    a2[v33 + 6] = *(_DWORD *)v36;
                    v32 = v58 + 1;
                    v58 = v32;
                    if ( v32 >= a2[4] )
                      goto LABEL_48;
                    v22 = ProcessDxgProcess;
                  }
                  v39 = WdLogNewEntry5_WdWarning(v30, v34, v31);
                  *(_QWORD *)(v39 + 24) = a2[v33 + 6];
                  *(_QWORD *)(v39 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v39);
                  BundleObjectCallback = -1073741811;
                  DXGPROCESS::ReleaseReference((DXGPROCESS *)v28, v40);
                  v28 = 0LL;
                }
              }
            }
LABEL_48:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v64);
            if ( v61[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61, v41);
            if ( v28 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)&ProcessDxgProcess,
                *(struct DXGFASTMUTEX *const *)(v28 + 104),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ProcessDxgProcess);
              if ( (*(_BYTE *)(v28 + 347) & 0x20) != 0 && *(_DWORD *)(v28 + 40) == 1 )
              {
                v45 = this[3];
                v66 = 0;
                CPROCESSATTACHHELPER::Attach(&ApcState, v45);
                CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                  (CEnsureCurrentDxgProcess *)&v62,
                  (struct DXGPROCESS *)v28);
                v49 = v63;
                if ( v63 )
                {
                  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                           (DXG_HOST_REMOTEOBJECTCHANNEL *)this,
                                           a2[4],
                                           a2 + 6,
                                           v68,
                                           &v71[1]);
                }
                else
                {
                  v51 = WdLogNewEntry5_WdWarning(v47, v46, v48);
                  *(_QWORD *)(v51 + 24) = a2[3];
                  *(_QWORD *)(v51 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v51);
                  BundleObjectCallback = -1073741811;
                }
                if ( v49 )
                  *(_QWORD *)(v49 + 8) = v62;
                if ( v66 )
                  KeUnstackDetachProcess(&ApcState);
              }
              else
              {
                v52 = WdLogNewEntry5_WdWarning(v43, v42, v44);
                *(_QWORD *)(v52 + 24) = a2[3];
                *(_QWORD *)(v52 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v52);
                BundleObjectCallback = -1073741811;
              }
              if ( v60 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&ProcessDxgProcess, v50);
            }
            if ( (unsigned int)Feature_1259646266__private_IsEnabledDeviceUsage() )
            {
              for ( i = 0; i < a2[4]; ++i )
              {
                v55 = v67[i];
                if ( v55 )
                {
                  DXGSHAREDVMOBJECT::ReleaseReference(v55, v53);
                  v67[i] = 0LL;
                }
              }
            }
            if ( v28 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&ProcessDxgProcess);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ProcessDxgProcess);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v28, v56);
              if ( v60 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&ProcessDxgProcess, v57);
            }
            goto LABEL_71;
          }
LABEL_30:
          v29 = WdLogNewEntry5_WdWarning(v23, v25, v24);
          *(_QWORD *)(v29 + 24) = a2[3];
          *(_QWORD *)(v29 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v29);
          BundleObjectCallback = -1073741811;
          goto LABEL_31;
        }
        v27 = WdLogNewEntry5_WdError(v23, v25);
        *(_QWORD *)(v27 + 24) = 316LL;
        WdLogEvent5_WdError(v27);
      }
    }
    v28 = 0LL;
    goto LABEL_30;
  }
  if ( a2[2] != 3 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
    v10 = (int)a2[2];
LABEL_20:
    v7[3] = v10;
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 16 )
  {
LABEL_14:
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
    v7[3] = (int)a2[2];
    v7[4] = v4;
    v7[5] = -1073741811LL;
    goto LABEL_4;
  }
  v11 = this[3];
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v9, a2, a3, a4) != v11
    && (unsigned __int8)PsGetProcessExitProcessCalled(v11) )
  {
LABEL_17:
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v17[3] = (int)a2[2];
    v17[4] = this[3];
    v17[5] = -1073741558LL;
    WdLogEvent5_WdWarning(v17);
    return 3221225738LL;
  }
  v15 = this[3];
  *(_QWORD *)v71 = 4LL;
  v69 = 1869901170;
  v66 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v15);
  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(
                           (DXG_HOST_REMOTEOBJECTCHANNEL *)this,
                           a2[3]);
  if ( v66 )
    KeUnstackDetachProcess(&ApcState);
LABEL_71:
  (*(void (__fastcall **)(struct _KPROCESS *, int *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], &v69, 16LL);
  return 0LL;
}
