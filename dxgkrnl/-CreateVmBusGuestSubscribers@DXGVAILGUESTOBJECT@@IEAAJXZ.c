/*
 * XREFs of ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C035C9BC
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C035D3CC (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C03624E0 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // rax
  DXGVMBUSCHANNEL *v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  DXGVMBUSCHANNEL *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( *((_OWORD *)this + 5) != 0LL )
  {
    LODWORD(v5) = -1073740528;
    goto LABEL_16;
  }
  v2 = operator new[](0x18uLL, 0x4B677844u, 256LL);
  if ( !v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    goto LABEL_10;
  }
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)v2 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
  *(_WORD *)(v2 + 16) = 0;
  v3 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 10) = v2;
  v4 = DXGVMBUSCHANNEL::RegisterSubscriber(
         v3,
         0x6F746D72u,
         (struct IDXGCHANNELSUBSCRIBER *)v2,
         (struct IDXGCHANNEL **)(v2 + 8));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = operator new[](0x18uLL, 0x4B677844u, 256LL);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)v7 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
      *(_WORD *)(v7 + 16) = 0;
      v8 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
      *((_QWORD *)this + 11) = v7;
      v9 = DXGVMBUSCHANNEL::RegisterSubscriber(
             v8,
             0x706D6F63u,
             (struct IDXGCHANNELSUBSCRIBER *)v7,
             (struct IDXGCHANNEL **)(v7 + 8));
      v5 = v9;
      if ( v9 >= 0 )
        goto LABEL_16;
      goto LABEL_4;
    }
    *((_QWORD *)this + 11) = 0LL;
LABEL_10:
    v6 = -1073741801LL;
    LODWORD(v5) = -1073741801;
    goto LABEL_11;
  }
LABEL_4:
  v6 = v5;
LABEL_11:
  WdLogSingleEntry1(3LL, v6);
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
    *((_QWORD *)this + 10) = 0LL;
  }
  v11 = *((_QWORD *)this + 11);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
    *((_QWORD *)this + 11) = 0LL;
  }
LABEL_16:
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return (unsigned int)v5;
}
