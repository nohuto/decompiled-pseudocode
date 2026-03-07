__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rdx
  struct _KPROCESS *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r14
  int v18; // ecx
  int v19; // ecx
  _DWORD *v20; // r14
  struct _KPROCESS *v21; // rdx
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // r10
  int *v25; // r12
  unsigned int v26; // eax
  __int64 v27; // r11
  int v28; // ecx
  __int64 v29; // rcx
  DXGPROCESS *v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31; // [rsp+58h] [rbp-A8h]
  struct DXGPROCESS *ProcessDxgProcess; // [rsp+60h] [rbp-A0h]
  _BYTE v33[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v34[24]; // [rsp+78h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-70h] BYREF
  char v36; // [rsp+C0h] [rbp-40h]
  struct _KAPC_STATE v37; // [rsp+C8h] [rbp-38h] BYREF
  char v38; // [rsp+F8h] [rbp-8h]
  void *v39[16]; // [rsp+100h] [rbp+0h] BYREF
  int v40; // [rsp+180h] [rbp+80h] BYREF
  int BundleObjectCallback; // [rsp+184h] [rbp+84h]
  unsigned int v42[2]; // [rsp+188h] [rbp+88h] BYREF

  if ( (unsigned int)a3 < 0xC )
  {
    v5 = (unsigned int)a3;
LABEL_3:
    LODWORD(v6) = -1073741811;
    WdLogSingleEntry2(3LL, v5, -1073741811LL);
    return (unsigned int)v6;
  }
  v8 = (int)a2[2];
  v9 = a2[2] - 1;
  if ( !v9 )
  {
    if ( (_DWORD)a3 != 88 )
    {
LABEL_15:
      a3 = (unsigned int)a3;
      v11 = v8;
      v6 = -1073741811LL;
      goto LABEL_16;
    }
    v13 = *((_QWORD *)this + 3);
    if ( PsGetCurrentProcess(v8) != v13 && (unsigned __int8)PsGetProcessExitProcessCalled(v13) )
      goto LABEL_11;
    BundleObjectCallback = a2[1];
    v40 = 1869901170;
    *(_QWORD *)v42 = 2LL;
    memset(v39, 0, sizeof(v39));
    v14 = a2[4];
    if ( (unsigned int)v14 > 0x10 || (v14 = a2[5], (unsigned int)v14 >= 2) )
    {
      v5 = v14;
      goto LABEL_3;
    }
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v33);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, ProcessDxgProcess);
    v15 = (a2[3] >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)ProcessDxgProcess + 74) )
    {
      v16 = *((_QWORD *)ProcessDxgProcess + 35);
      v17 = 2LL * v15;
      v18 = *(_DWORD *)(v16 + 16LL * v15 + 8);
      if ( ((a2[3] >> 25) & 0x60) == (v18 & 0x60) && (v18 & 0x2000) == 0 )
      {
        v19 = v18 & 0x1F;
        if ( v19 )
        {
          if ( v19 == 12 )
          {
            v20 = *(_DWORD **)(v16 + 8 * v17);
            if ( v20 )
            {
              DXGPROCESS::AcquireReference((DXGPROCESS *)v20);
              v22 = a2[5];
              v30 = (DXGPROCESS *)v20;
              if ( (v22 & 1) != 0 )
              {
                v23 = 0;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v24 = v23;
                    v25 = (int *)&a2[v23];
                    v26 = ((unsigned int)v25[6] >> 6) & 0xFFFFFF;
                    if ( v26 >= *((_DWORD *)ProcessDxgProcess + 74) )
                      break;
                    v27 = *((_QWORD *)ProcessDxgProcess + 35);
                    if ( (((unsigned int)v25[6] >> 25) & 0x60) != (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x60) )
                      break;
                    if ( (*(_DWORD *)(v27 + 16LL * v26 + 8) & 0x2000) != 0 )
                      break;
                    v28 = *(_DWORD *)(v27 + 16LL * v26 + 8) & 0x1F;
                    if ( !v28 )
                      break;
                    if ( v28 != 13 )
                    {
                      WdLogSingleEntry1(2LL, 267LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Handle type mismatch",
                        267LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      break;
                    }
                    v29 = *(_QWORD *)(v27 + 16LL * v26);
                    if ( !v29 )
                      break;
                    ++v23;
                    v39[v24] = *(void **)(v29 + 8);
                    v25[6] = *(_DWORD *)v29;
                    if ( v23 >= a2[4] )
                      goto LABEL_30;
                  }
                  WdLogSingleEntry2(3LL, (unsigned int)v25[6], -1073741811LL);
                  BundleObjectCallback = -1073741811;
                  DXGPROCESS::ReleaseReference(v30);
                  v20 = 0LL;
                }
              }
              goto LABEL_30;
            }
LABEL_29:
            WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
            BundleObjectCallback = -1073741811;
LABEL_30:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
            if ( v33[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
            if ( v20 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v30, (struct DXGFASTMUTEX *const)(v20 + 26), 0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30);
              if ( (v20[106] & 0x100) != 0 && v20[10] == 1 )
              {
                v21 = (struct _KPROCESS *)*((_QWORD *)this + 3);
                v38 = 0;
                CPROCESSATTACHHELPER::Attach(&v37, v21);
                CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                  (CEnsureCurrentDxgProcess *)&ApcState,
                  (struct DXGPROCESS *)v20,
                  0);
                if ( ApcState.ApcListHead[0].Blink )
                {
                  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                           this,
                                           a2[4],
                                           a2 + 6,
                                           v39,
                                           &v42[1]);
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
              if ( v31 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v30);
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&v30);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v20);
              if ( v31 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v30);
            }
            goto LABEL_58;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v20 = 0LL;
    goto LABEL_29;
  }
  if ( v9 != 2 )
  {
    v5 = v8;
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 16 )
    goto LABEL_15;
  v10 = *((_QWORD *)this + 3);
  if ( PsGetCurrentProcess(v8) != v10 && (unsigned __int8)PsGetProcessExitProcessCalled(v10) )
  {
LABEL_11:
    v11 = (int)a2[2];
    v6 = -1073741558LL;
    a3 = *((_QWORD *)this + 3);
LABEL_16:
    WdLogSingleEntry3(3LL, v11, a3, v6);
    return (unsigned int)v6;
  }
  v12 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  *(_QWORD *)v42 = 4LL;
  v40 = 1869901170;
  v36 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v12);
  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(this, a2[3]);
  if ( v36 )
    KeUnstackDetachProcess(&ApcState);
LABEL_58:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), &v40, 16LL);
  return 0LL;
}
