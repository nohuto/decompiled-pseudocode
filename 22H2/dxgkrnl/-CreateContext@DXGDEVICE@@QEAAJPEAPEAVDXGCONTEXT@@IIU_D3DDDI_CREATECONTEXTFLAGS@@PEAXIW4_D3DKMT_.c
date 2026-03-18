/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C018F760
 * Callers:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C019F8D4 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01E03B4 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0EF8 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkCreateContext @ 0x1C02E5440 (DxgkCreateContext.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C004981C (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018BDB0 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C018E504 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C018F8F0 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        _QWORD *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  DXGCONTEXT *Pool2; // rax
  unsigned int v14; // r9d
  DXGCONTEXT *v15; // rax
  DXGCONTEXT *v16; // rbx
  int v17; // edi
  DXGCONTEXT **v18; // rax
  __int64 v19; // rcx
  char v21[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+60h] [rbp-28h]

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1821LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppContext != NULL", 1821LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 1822LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 1822LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1823LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1823LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    WdLogSingleEntry1(1LL, 1829LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1829LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  Pool2 = (DXGCONTEXT *)ExAllocatePool2(257LL, 504LL, 1265072196LL);
  if ( !Pool2 )
    goto LABEL_20;
  v14 = 1;
  if ( a4 )
    v14 = a4;
  v15 = DXGCONTEXT::DXGCONTEXT(Pool2, this, a3, v14, a5, a8, a9);
  v16 = v15;
  if ( v15 )
  {
    v17 = DXGCONTEXT::Initialize(v15, a6, a7);
    if ( v17 < 0 )
    {
      DXGCONTEXT::DestroyContext(v16, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v16);
    }
    else
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireExclusive(v22);
      v18 = (DXGCONTEXT **)((char *)this + 496);
      v23 = 2;
      v19 = *((_QWORD *)this + 62);
      if ( *(DXGDEVICE **)(v19 + 8) != (DXGDEVICE *)((char *)this + 496) )
        __fastfail(3u);
      *(_QWORD *)v16 = v19;
      *((_QWORD *)v16 + 1) = v18;
      *(_QWORD *)(v19 + 8) = v16;
      *v18 = v16;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
      *a2 = v16;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
  }
  else
  {
LABEL_20:
    v17 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGCONTEXT class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v17;
}
