/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C015246C
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C00E44B8 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0003294 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EF174 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00F1B0C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0133E18 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C01384D0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C0152760 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01527BC (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C016D768 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C026CEDC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        DXGADAPTER ***a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  __int64 v7; // r9
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  struct DXGDEVICE **v20; // r12
  int Device; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r13
  __int64 v31; // r8
  DXGCONTEXT **v32; // r10
  struct _D3DDDI_CREATECONTEXTFLAGS v33; // ebx
  unsigned int v34; // r15d
  __int64 v35; // r9
  int v36; // r8d
  struct DXGCONTEXT **v37; // r10
  DXGDEVICE *v38; // r11
  char v39; // al
  int Context; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct DXGHWQUEUE **v43; // rdx
  unsigned int v44; // edi
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 CurrentProcess; // rax
  unsigned int v59; // eax
  SIZE_T v60; // rax
  unsigned __int64 v61; // kr00_8
  PVOID v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  struct DXGHWQUEUE **v70; // r9
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD *v74; // rax
  volatile signed __int64 *v75; // rax
  struct DXGHWQUEUE **v76; // rax
  struct DXGHWQUEUE *v77; // rcx
  DXGCONTEXT **v78; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *Current; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_QUERYADAPTERINFO v82; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v83[16]; // [rsp+A8h] [rbp-58h] BYREF
  _D3DKMT_CREATEHWQUEUE v84; // [rsp+B8h] [rbp-48h] BYREF
  int v85; // [rsp+E8h] [rbp-18h] BYREF
  int v86; // [rsp+ECh] [rbp-14h]
  unsigned int v87; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  char v89; // [rsp+128h] [rbp+28h]
  _BYTE v90[144]; // [rsp+130h] [rbp+30h] BYREF

  v7 = *((_QWORD *)this + 2);
  v89 = 0;
  v8 = (struct DXGADAPTER *)(v7 & -(__int64)(*(_QWORD *)(v7 + 2696) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v90, (struct DXGADAPTER *const)a2, v8);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18632LL));
  Current = DXGPROCESS::GetCurrent(v10, v9, v11, v12);
  if ( Current )
  {
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v90, 0LL);
    v19 = v15;
    if ( v15 >= 0 )
    {
      v20 = (struct DXGDEVICE **)((char *)this + 56);
      Device = ADAPTER_RENDER::CreateDevice(a2[338], (__int64 *)this + 7, 0, 2, v8, 0, 0, 1, 0LL, 0LL);
      v19 = Device;
      if ( Device >= 0 )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v90);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v83, *v20);
        v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v90, 0LL);
        v19 = v24;
        if ( v24 < 0 )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdEvent(v26, v25);
          v74[4] = Current;
        }
        else
        {
          *((_DWORD *)this + 13) = 1;
          if ( DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)a2) )
          {
            v59 = *((int *)a2 + 582) < 0x2000 ? 1 : *((_DWORD *)a2 + 70);
            *((_DWORD *)this + 13) = v59;
            if ( v59 > 1 )
            {
              v61 = v59;
              v60 = 8LL * v59;
              if ( !is_mul_ok(v61, 8uLL) )
                v60 = -1LL;
              v62 = operator new(v60, 0x4B677844u, 1, PagedPool);
              *((_QWORD *)this + 8) = v62;
              if ( !v62 )
              {
                v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v64, v63);
                v65[3] = a2;
                v65[4] = Current;
                v65[5] = v19;
                WdLogEvent5_WdEvent(v65);
                LODWORD(v19) = -1073741801;
              }
            }
          }
          if ( (int)v19 < 0 )
            goto LABEL_24;
          if ( !PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements((char *)this + 72, *((unsigned int *)this + 13)) )
          {
            v66 = WdLogNewEntry5_WdEvent(v28, v27);
            *(_QWORD *)(v66 + 24) = a2;
            *(_QWORD *)(v66 + 32) = Current;
            WdLogEvent5_WdEvent(v66);
            LODWORD(v19) = -1073741801;
          }
          if ( (int)v19 < 0 || (v29 = *((_DWORD *)this + 13), v30 = 0LL, !v29) )
          {
LABEL_24:
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v83);
            if ( (int)v19 < 0 && *v20 )
            {
              ADAPTER_RENDER::DestroyDevice(a2[338], *v20, 0LL);
              if ( *((_DWORD *)this + 13) > 1u )
              {
                operator delete[](*((void **)this + 8));
                *((_QWORD *)this + 8) = 0LL;
              }
              PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
              *v20 = 0LL;
            }
            else
            {
              if ( a3 )
              {
                *a3 = *v20;
                _InterlockedAdd64((volatile signed __int64 *)*v20 + 8, 1uLL);
              }
              if ( a4 )
              {
                v75 = (volatile signed __int64 *)*((_QWORD *)this + 8);
                if ( *((_DWORD *)this + 13) != 1 )
                  v75 = (volatile signed __int64 *)*v75;
                *a4 = (struct DXGCONTEXT *)v75;
                _InterlockedAdd64(v75 + 4, 1uLL);
              }
              v43 = a5;
              if ( a5 )
              {
                v76 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
                v77 = *v76;
                *a5 = *v76;
                if ( v77 )
                  _InterlockedAdd64((volatile signed __int64 *)v77 + 11, 1uLL);
              }
            }
            goto LABEL_29;
          }
          while ( 1 )
          {
            v31 = *((unsigned int *)a2 + 680);
            v32 = (DXGCONTEXT **)((char *)this + 64);
            v33.0 = 0;
            v86 = *((_DWORD *)a2 + 680);
            v85 = 0;
            if ( v29 == 1 )
              v34 = *((_DWORD *)a2 + 681);
            else
              v34 = v30;
            v87 = 1 << v34;
            if ( (*((_DWORD *)a2 + 87) & 0x10) != 0 )
            {
              memset(&v82, 0, 24);
              v82.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              *(_OWORD *)&v82.OutputDataSize = 0LL;
              v82.pOutputData = &v85;
              v82.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v82, v31) < 0 )
              {
                v69 = WdLogNewEntry5_WdAssertion(v68, v67);
                *(_QWORD *)(v69 + 24) = 2360LL;
                WdLogEvent5_WdAssertion(v69);
              }
              LODWORD(v31) = v86;
              v32 = (DXGCONTEXT **)((char *)this + 64);
            }
            v35 = *(_QWORD *)(360LL * v34 + *((_QWORD *)a2[338][2] + 323) + 32);
            if ( v35 && (*(_BYTE *)(74LL * (unsigned int)v31 + v35 + 68) & 1) != 0 )
              v33.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            if ( *((_DWORD *)this + 13) != 1 )
              v32 = (DXGCONTEXT **)((char *)*v32 + 8 * v30);
            v78 = v32;
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v20 + 2), 0, v31)
              || (v39 = 1, *((_BYTE *)a2 + 2633)) )
            {
              v39 = 0;
            }
            Context = DXGDEVICE::CreateContext(v38, v37, v36, v87, v33, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v39);
            v19 = Context;
            if ( Context < 0 )
              break;
            if ( v33.Value >= 0x10 )
            {
              v70 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              memset(&v84, 0, sizeof(v84));
              if ( (unsigned int)v30 < *((_DWORD *)this + 24) )
                v70 += v30;
              v71 = DXGCONTEXT::CreateHwQueue(*v78, &v84, 0LL, v70);
              v19 = v71;
              if ( v71 < 0 )
              {
                v74 = (_QWORD *)WdLogNewEntry5_WdEvent(v73, v72);
                v74[3] = *v78;
                v74[5] = Current;
                v74[4] = a2;
                v74[6] = v19;
                goto LABEL_61;
              }
            }
            v29 = *((_DWORD *)this + 13);
            v30 = (unsigned int)(v30 + 1);
            if ( (unsigned int)v30 >= v29 )
              goto LABEL_24;
          }
          v74 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v41);
          v74[4] = Current;
        }
        v74[5] = v19;
        v74[3] = a2;
LABEL_61:
        WdLogEvent5_WdEvent(v74);
        goto LABEL_24;
      }
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v53[3] = a2;
      CurrentProcess = PsGetCurrentProcess(v55, v54, v56, v57);
      v53[5] = v19;
      v53[4] = CurrentProcess;
      WdLogEvent5_WdError(v53);
LABEL_29:
      v44 = v19;
      goto LABEL_30;
    }
    if ( a2 == (DXGADAPTER ***)v8 || (v17 = *((unsigned int *)a2 + 50), (_DWORD)v17 == 1) && !*((_BYTE *)a2 + 2609) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
      v52[3] = a2;
      v52[4] = v8;
      v52[5] = Current;
      v52[6] = v19;
      WdLogEvent5_WdWarning(v52);
      goto LABEL_29;
    }
    v51 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v51 + 24) = a2;
    WdLogEvent5_WdWarning(v51);
    v44 = -1073741267;
  }
  else
  {
    v46 = WdLogNewEntry5_WdError(v14, v13);
    v44 = -1073741823;
    *(_QWORD *)(v46 + 24) = PsGetCurrentProcess(v48, v47, v49, v50);
    *(_QWORD *)(v46 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v46);
  }
LABEL_30:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v90, (__int64)v43);
  if ( v89 )
    KeUnstackDetachProcess(&ApcState);
  return v44;
}
