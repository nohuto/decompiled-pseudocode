/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01C4FB0
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C01788E4 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000B190 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01B50A0 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B530C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B70A8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B9100 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C01C52B0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C01DD390 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0312040 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        DXGADAPTER ***a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  __int64 v6; // rdx
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rsi
  struct DXGDEVICE **v13; // r12
  int Device; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // r11d
  struct DXGCONTEXT **v20; // r9
  struct _D3DDDI_CREATECONTEXTFLAGS v21; // ebx
  unsigned int v22; // esi
  __int64 v23; // rdx
  struct DXGCONTEXT **v24; // r13
  DXGDEVICE *v25; // rsi
  unsigned int v26; // r11d
  char v27; // al
  int Context; // eax
  unsigned int v29; // ebx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 CurrentProcess; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // kr00_8
  __int64 v40; // rax
  DXGCONTEXT *v41; // rcx
  struct DXGHWQUEUE **v42; // r9
  int v43; // eax
  struct DXGPROCESS *v44; // r8
  volatile signed __int64 **v45; // rax
  volatile signed __int64 *v46; // rax
  struct DXGHWQUEUE **v47; // rax
  struct DXGHWQUEUE *v48; // rcx
  unsigned int v49; // [rsp+60h] [rbp-A0h]
  struct DXGPROCESS *Current; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_QUERYADAPTERINFO v53; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v54[16]; // [rsp+B8h] [rbp-48h] BYREF
  _D3DKMT_CREATEHWQUEUE v55; // [rsp+C8h] [rbp-38h] BYREF
  int v56; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v57; // [rsp+FCh] [rbp-4h]
  unsigned int v58; // [rsp+100h] [rbp+0h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+8h] BYREF
  char v60; // [rsp+138h] [rbp+38h]
  _BYTE v61[144]; // [rsp+140h] [rbp+40h] BYREF

  v6 = *((_QWORD *)this + 2);
  v60 = 0;
  v8 = (struct DXGADAPTER *)(v6 & -(__int64)(*(_QWORD *)(v6 + 2920) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v61, (struct DXGADAPTER *const)a2, v8);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18648LL));
  Current = DXGPROCESS::GetCurrent(v9);
  if ( Current )
  {
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61, 0LL);
    LODWORD(v12) = v11;
    if ( v11 >= 0 )
    {
      v13 = (struct DXGDEVICE **)((char *)this + 56);
      Device = ADAPTER_RENDER::CreateDevice(a2[366], (DXGDEVICE **)this + 7, 0, 2, v8, 0, 0, 1, 0LL, 0LL, 0);
      v12 = Device;
      if ( Device >= 0 )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v61);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54, *v13);
        v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61, 0LL);
        v12 = v16;
        if ( v16 < 0 )
        {
          v44 = Current;
        }
        else
        {
          *((_DWORD *)this + 13) = 1;
          if ( DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)a2) )
          {
            v37 = *((int *)a2 + 638) < 0x2000 ? 1 : *((_DWORD *)a2 + 72);
            *((_DWORD *)this + 13) = v37;
            if ( v37 > 1 )
            {
              v39 = v37;
              v38 = 8LL * v37;
              if ( !is_mul_ok(v39, 8uLL) )
                v38 = -1LL;
              v40 = operator new[](v38, 0x4B677844u, 256LL);
              *((_QWORD *)this + 8) = v40;
              if ( !v40 )
              {
                WdLogSingleEntry3(4LL, a2, Current, v12);
LABEL_46:
                LODWORD(v12) = -1073741801;
                goto LABEL_21;
              }
            }
          }
          if ( !PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements((char *)this + 72, *((unsigned int *)this + 13)) )
          {
            WdLogSingleEntry2(4LL, a2, Current);
            goto LABEL_46;
          }
          v17 = *((_DWORD *)this + 13);
          v18 = 0LL;
          v49 = 0;
          if ( !v17 )
          {
LABEL_21:
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v54);
            if ( (int)v12 < 0 && *v13 )
            {
              ADAPTER_RENDER::DestroyDevice(a2[366], *v13, 0LL);
              if ( *((_DWORD *)this + 13) > 1u )
              {
                operator delete(*((void **)this + 8));
                *((_QWORD *)this + 8) = 0LL;
              }
              PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
              *v13 = 0LL;
            }
            else
            {
              if ( a3 )
              {
                *a3 = *v13;
                _InterlockedAdd64((volatile signed __int64 *)*v13 + 8, 1uLL);
              }
              if ( a4 )
              {
                v45 = (volatile signed __int64 **)((char *)this + 64);
                if ( *((_DWORD *)this + 13) != 1 )
                  v45 = (volatile signed __int64 **)*v45;
                v46 = *v45;
                *a4 = (struct DXGCONTEXT *)v46;
                _InterlockedAdd64(v46 + 4, 1uLL);
              }
              if ( a5 )
              {
                v47 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
                v48 = *v47;
                *a5 = *v47;
                if ( v48 )
                  _InterlockedAdd64((volatile signed __int64 *)v48 + 13, 1uLL);
              }
            }
            goto LABEL_26;
          }
          while ( 1 )
          {
            v19 = *((_DWORD *)a2 + 736);
            v20 = (struct DXGCONTEXT **)((char *)this + 64);
            v57 = v19;
            v21.0 = 0;
            v56 = 0;
            if ( v17 == 1 )
              v22 = *((_DWORD *)a2 + 737);
            else
              v22 = v18;
            v58 = 1 << v22;
            if ( (*((_DWORD *)a2 + 109) & 0x10) != 0 )
            {
              memset(&v53, 0, 24);
              v53.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              *(_OWORD *)&v53.OutputDataSize = 0LL;
              v53.pOutputData = &v56;
              v53.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v53, v18) < 0 )
              {
                WdLogSingleEntry1(1LL, 2401LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2401LL, 0LL, 0LL, 0LL, 0LL);
              }
              LODWORD(v18) = v49;
              v20 = (struct DXGCONTEXT **)((char *)this + 64);
              v19 = v57;
            }
            v23 = *(_QWORD *)(*((_QWORD *)a2[366][2] + 351) + 344LL * v22 + 32);
            if ( v23 && (*(_BYTE *)(74LL * v19 + v23 + 68) & 1) != 0 )
              v21.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            if ( *((_DWORD *)this + 13) == 1 )
              v24 = v20;
            else
              v24 = (struct DXGCONTEXT **)((char *)*v20 + 8 * (unsigned int)v18);
            v25 = *v13;
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v13 + 2), 0, v19)
              || (v27 = 1, *((_BYTE *)a2 + 2857)) )
            {
              v27 = 0;
            }
            Context = DXGDEVICE::CreateContext(v25, v24, v26, v58, v21, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v27);
            v12 = Context;
            if ( Context < 0 )
              break;
            if ( v21.0 == 16 )
            {
              v41 = *v24;
              v42 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              memset(&v55, 0, sizeof(v55));
              if ( v49 < *((_DWORD *)this + 24) )
                v42 += v49;
              v43 = DXGCONTEXT::CreateHwQueue(v41, &v55, 0LL, v42);
              LODWORD(v12) = v43;
              if ( v43 < 0 )
              {
                WdLogSingleEntry4(4LL, *v24, a2, Current, v43);
                goto LABEL_21;
              }
            }
            v17 = *((_DWORD *)this + 13);
            v18 = v49 + 1;
            v49 = v18;
            if ( (unsigned int)v18 >= v17 )
              goto LABEL_21;
          }
          v44 = Current;
        }
        WdLogSingleEntry3(4LL, a2, v44, v12);
        goto LABEL_21;
      }
      CurrentProcess = PsGetCurrentProcess(v15);
      WdLogSingleEntry3(2LL, a2, CurrentProcess, v12);
      v36 = PsGetCurrentProcess(v35);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v36,
        v12,
        0LL,
        0LL);
LABEL_26:
      v29 = v12;
      goto LABEL_27;
    }
    if ( a2 == (DXGADAPTER ***)v8 || *((_DWORD *)a2 + 50) == 1 && !*((_BYTE *)a2 + 2833) )
    {
      WdLogSingleEntry4(3LL, a2, v8, Current, v11);
      goto LABEL_26;
    }
    WdLogSingleEntry1(3LL, a2);
    v29 = -1073741267;
  }
  else
  {
    v31 = PsGetCurrentProcess(v10);
    v29 = -1073741823;
    WdLogSingleEntry2(2LL, v31, -1073741823LL);
    v33 = PsGetCurrentProcess(v32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get DXGPROCESS for current CSRSS process 0x%I64x, returning 0x%I64x.",
      v33,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_27:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
  if ( v60 )
    KeUnstackDetachProcess(&ApcState);
  return v29;
}
