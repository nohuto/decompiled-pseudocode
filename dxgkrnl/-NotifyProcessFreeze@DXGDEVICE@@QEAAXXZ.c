/*
 * XREFs of ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C01B450C
 * Callers:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0186F04 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006964 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C2C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0015344 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C01B3EC0 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C01B446C (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1C02E8970 (-TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::NotifyProcessFreeze(DXGDEVICE *this)
{
  DXGADAPTER *v2; // rcx
  bool v3; // si
  __int64 v4; // rax
  int *i; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  DXGDEVICE *v8; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+28h] [rbp-D8h]
  _BYTE v10[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h]
  char v12; // [rsp+40h] [rbp-C0h]
  _BYTE v13[8]; // [rsp+48h] [rbp-B8h] BYREF
  DXGPUSHLOCK *v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+58h] [rbp-A8h]
  _BYTE v16[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[64]; // [rsp+A8h] [rbp-58h] BYREF
  DXGDEVICE *v19; // [rsp+E8h] [rbp-18h]
  char v20; // [rsp+F0h] [rbp-10h]

  v2 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*((_BYTE *)v2 + 209) )
  {
    v9 = 0;
    v8 = this;
    if ( DXGADAPTER::IsDxgmms2(v2) )
    {
      v3 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v8) != 0;
    }
    else
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v8);
      v3 = 1;
    }
    v4 = *((_QWORD *)this + 2);
    v12 = 0;
    v11 = *(_QWORD *)(v4 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
    COREACCESS::COREACCESS((COREACCESS *)v17, *(struct DXGADAPTER *const *)(*((_QWORD *)this + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v18, *(struct DXGADAPTER *const *)(*((_QWORD *)this + 2) + 16LL));
    v19 = this;
    v20 = 0;
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v16, 0LL) >= 0 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireShared(v14);
      v15 = 1;
      for ( i = (int *)*((_QWORD *)this + 62); i != (int *)((char *)this + 496) && i; i = *(int **)i )
      {
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          (struct DXGCONTEXT *)i,
          0,
          i[98]);
        *((_BYTE *)i + 437) = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      if ( v3 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v6 + 216) + 64LL) + 4104LL));
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v16);
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 1);
          DXGDEVICE::FlushPagingQueues(this);
          LOBYTE(v7) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                  + 1112LL))(
            *((_QWORD *)this + 99),
            v7);
          DpiEnableD3Requests(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 216LL));
        }
        else
        {
          DXGDEVICE::FlushScheduler(this, 1LL, 4294967293LL);
          DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
          DXGDEVICE::TrimAllDmaPoolsToMinimum(this);
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, this);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    COREACCESS::~COREACCESS((COREACCESS *)v17);
    if ( v12 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
    if ( v8 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v8);
  }
}
