/*
 * XREFs of ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C030C89C
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C00038F8 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B92F4 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkpEscapeVidMmDelayExecution(
        struct DXGDEVICE *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v6; // rsi
  __int64 v10; // rcx
  struct DXGPAGINGQUEUE *v11; // rbx
  __int64 v12; // r9
  struct DXGPROCESS *Current; // rax
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r9
  char *v19; // rdx
  struct COREDEVICEACCESS *v20; // r8
  struct DXGPAGINGQUEUE *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGPAGINGQUEUE *v22; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  char v25; // [rsp+70h] [rbp-90h]
  _QWORD v26[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v29[88]; // [rsp+D8h] [rbp-28h] BYREF

  v6 = a3;
  if ( !a1 )
  {
    WdLogSingleEntry1(3LL, 1096LL);
    return 3221225485LL;
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
  if ( *(_DWORD *)(v10 + 288) < a2 )
  {
    WdLogSingleEntry1(3LL, 1102LL);
    return 3221225485LL;
  }
  v11 = 0LL;
  v12 = 0LL;
  v21 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v22 = 0LL;
  Current = DXGPROCESS::GetCurrent(v10);
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v21, v6, Current, &v22, 1);
  if ( v22 )
  {
    if ( a1 != *((struct DXGDEVICE **)v22 + 2) )
    {
      WdLogSingleEntry2(3LL, a1, v22);
      goto LABEL_11;
    }
    v12 = *((_QWORD *)v22 + 4);
    v11 = v21;
LABEL_13:
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 1224LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 768LL),
      *((_QWORD *)a1 + 99),
      a2,
      v12,
      a4,
      a5);
    v14 = 0;
    goto LABEL_14;
  }
  WdLogSingleEntry1(3LL, v6);
LABEL_11:
  v11 = v21;
  v14 = -1073741811;
LABEL_14:
  if ( v11 )
  {
    v15 = _InterlockedDecrement64((volatile signed __int64 *)v11 + 8);
    if ( v15 >= 0 )
    {
      if ( !v15 )
      {
        v16 = *((_QWORD *)v21 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v26,
          (struct DXGDEVICE *)v16);
        v17 = *(_QWORD *)(v16 + 16);
        v25 = 0;
        v24 = *(_QWORD *)(v17 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, v16, 2, v18, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v27, v19);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v16, v21, v20);
        COREACCESS::~COREACCESS((COREACCESS *)v29);
        COREACCESS::~COREACCESS((COREACCESS *)v28);
        if ( v25 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
        if ( v26[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v16 + 16), (struct DXGDEVICE *)v16);
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 67LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 67LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v14;
}
