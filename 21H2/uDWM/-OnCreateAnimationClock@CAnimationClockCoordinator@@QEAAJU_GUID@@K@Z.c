/*
 * XREFs of ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180030AE0
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x180031100 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18002FE40 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180030CA4 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180030D68 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180030EA0 (-SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x180030FB8 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z @ 0x180031088 (-_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18008A6F0 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800BA660 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 *     McTemplateU0jq_EtwEventWriteTransfer @ 0x1800BADE0 (McTemplateU0jq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnCreateAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        unsigned int a3)
{
  __int64 v5; // rax
  int AnimationClock; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct CAnimationClock *v18; // [rsp+30h] [rbp-49h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-41h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-39h] BYREF
  struct _GUID v21; // [rsp+50h] [rbp-29h] BYREF
  struct _GUID v22; // [rsp+60h] [rbp-19h] BYREF
  struct _GUID v23; // [rsp+70h] [rbp-9h] BYREF
  struct _GUID v24; // [rsp+80h] [rbp+7h] BYREF
  __int128 v25; // [rsp+90h] [rbp+17h]

  v18 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  AnimationClock = -2147024809;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v21 = *a2;
    if ( CAnimationClockCoordinator::_IsKnownClockId(this, &v21) )
    {
      v22 = *a2;
      AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v22, &v18);
    }
    else
    {
      AnimationClock = CAnimationClockCoordinator::_ClearExpiredAnimationClocks(this);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      v23 = *a2;
      AnimationClock = CAnimationClockFactory::Create(&v23, &v18);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0jq_EtwEventWriteTransfer(v10, v9, a2, a3);
      AnimationClock = CAnimationClock::SetEventCallback(v18, this);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      v11 = *((_DWORD *)this + 20);
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
        AnimationClock = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v12 > *((_DWORD *)this + 19) )
        {
          v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8u, 1, &v18);
          AnimationClock = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xC0u);
          if ( AnimationClock < 0 )
            goto LABEL_14;
        }
        else
        {
          AnimationClock = 0;
          *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v11) = v18;
          *((_DWORD *)this + 20) = v12;
        }
        _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
      }
    }
LABEL_14:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
    if ( AnimationClock >= 0 )
    {
      v25 = *(_OWORD *)((char *)v18 + 120);
      v13 = v25 - *(_QWORD *)&a2->Data1;
      if ( (_QWORD)v25 == *(_QWORD *)&a2->Data1 )
        v13 = *((_QWORD *)&v25 + 1) - *(_QWORD *)a2->Data4;
      if ( v13 )
      {
        v24 = *a2;
        AnimationClock = CAnimationClock::Initialize(v18, &v24, a3);
        if ( AnimationClock < 0 )
        {
          v20 = v8;
          EnterCriticalSection(v8);
          if ( (unsigned int)DynArray<CBitmapSource *,0>::Remove((char *)this + 56, &v18) )
            CBaseObject::Release(v18);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
        }
      }
      else if ( (int)CAnimationClock::Reset(v18, a3) < 0 )
      {
        AnimationClock = -2147019886;
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        McTemplateU0jq_EtwEventWriteTransfer(v17, v16, a2, a3);
      }
    }
    if ( v18 )
      CBaseObject::Release(v18);
  }
  return (unsigned int)AnimationClock;
}
