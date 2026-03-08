/*
 * XREFs of ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C0165644
 * Callers:
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C01654D0 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006964 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C2C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0015344 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::NotifyProcessThaw(DXGDEVICE *this)
{
  DXGADAPTER *v2; // rcx
  bool v3; // bp
  __int64 v4; // rsi
  int *i; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  DXGDEVICE *v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  v2 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*((_BYTE *)v2 + 209) )
  {
    v8 = this;
    v9 = 0;
    if ( DXGADAPTER::IsDxgmms2(v2) )
    {
      v3 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v8) != 0;
    }
    else
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v8);
      v3 = 1;
    }
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 136LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
    if ( *((_DWORD *)this + 152) == 1 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireShared(v11);
      v12 = 1;
      for ( i = (int *)*((_QWORD *)this + 62); i != (int *)((char *)this + 496) && i; i = *(int **)i )
      {
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          (struct DXGCONTEXT *)i,
          1,
          i[98]);
        *((_BYTE *)i + 437) = 0;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
      if ( v3 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          LOBYTE(v7) = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v6 + 760) + 8LL) + 1112LL))(
            *((_QWORD *)this + 99),
            0LL,
            v7);
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, this);
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 16));
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v8 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v8);
  }
}
