/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C02DAFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4)
{
  unsigned int v6; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DXGDEVICE **v14; // rsi
  unsigned int v15; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // r8
  struct DXGCONTEXT *v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGHWQUEUE *v25; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v26[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v30[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v31[88]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v9 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v12,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v24[0] = 0LL;
  v25 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28, v6, Current, v24, 0, 1);
  v14 = (struct DXGDEVICE **)v24[0];
  if ( v24[0] )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v27, a2, v9, &v25, 0);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGGLOBAL *)((char *)Global + 1632), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    v17 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 189);
    v18 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 376);
    if ( v17 || v18 != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 405) != 4 )
      {
        v19 = (__int64)v14[2];
        v20 = *(_QWORD *)(v19 + 1880);
        if ( v20 == *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24, v14[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, v19, 1, v21, 0);
          v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29, 0LL);
          v15 = v22;
          if ( v22 < 0 )
          {
            WdLogSingleEntry2(4LL, v22, v19);
            COREACCESS::~COREACCESS((COREACCESS *)v31);
            COREACCESS::~COREACCESS((COREACCESS *)v30);
            if ( v24[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
            goto LABEL_18;
          }
          if ( !*(_BYTE *)(v19 + 1936) )
          {
            LOBYTE(v23) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 2928)
                                                                                              + 736LL)
                                                                                  + 8LL)
                                                                      + 560LL))(
              *(_QWORD *)(v19 + 800),
              3LL,
              v23,
              4294967293LL);
            *(_BYTE *)(v19 + 1936) = 1;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v31);
          COREACCESS::~COREACCESS((COREACCESS *)v30);
          if ( v24[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
        }
      }
      v15 = PresentCddShadowBuffer((struct DXGCONTEXT *)v14, v25, a3);
    }
    else
    {
      v15 = -1073741823;
    }
LABEL_18:
    if ( v26[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v27);
    goto LABEL_21;
  }
  v15 = 0;
LABEL_21:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
  return v15;
}
