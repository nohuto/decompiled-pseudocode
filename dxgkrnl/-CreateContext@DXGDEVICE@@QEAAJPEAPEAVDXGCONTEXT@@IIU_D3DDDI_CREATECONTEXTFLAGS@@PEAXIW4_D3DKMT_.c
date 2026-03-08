/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B530C
 * Callers:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C01B1C68 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01C4FB0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02CC178 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkCreateContext @ 0x1C02E06B0 (DxgkCreateContext.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C00487BC (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B549C (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C01B5FEC (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8C74 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        void *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  __int64 v13; // rcx
  DXGCONTEXT *Pool2; // rax
  unsigned int v15; // r9d
  DXGCONTEXT *v16; // rax
  DXGCONTEXT *v17; // rbx
  int v18; // edi
  DXGCONTEXT **v19; // rax
  __int64 v20; // rcx
  char v22[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v23; // [rsp+58h] [rbp-30h]
  int v24; // [rsp+60h] [rbp-28h]

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1819LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppContext != NULL", 1819LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 1820LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 1820LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1821LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1821LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent(v13) )
  {
    WdLogSingleEntry1(1LL, 1827LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1827LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  Pool2 = (DXGCONTEXT *)ExAllocatePool2(257LL, 504LL, 1265072196LL);
  if ( !Pool2 )
    goto LABEL_20;
  v15 = 1;
  if ( a4 )
    v15 = a4;
  v16 = DXGCONTEXT::DXGCONTEXT(Pool2, this, a3, v15, a5, a8, a9);
  v17 = v16;
  if ( v16 )
  {
    v18 = DXGCONTEXT::Initialize(v16, a6, a7);
    if ( v18 < 0 )
    {
      DXGCONTEXT::DestroyContext(v17, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v17);
    }
    else
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireExclusive(v23);
      v19 = (DXGCONTEXT **)((char *)this + 496);
      v24 = 2;
      v20 = *((_QWORD *)this + 62);
      if ( *(DXGDEVICE **)(v20 + 8) != (DXGDEVICE *)((char *)this + 496) )
        __fastfail(3u);
      *(_QWORD *)v17 = v20;
      *((_QWORD *)v17 + 1) = v19;
      *(_QWORD *)(v20 + 8) = v17;
      *v19 = v17;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
      *a2 = v17;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
  }
  else
  {
LABEL_20:
    v18 = -1073741801;
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
  return (unsigned int)v18;
}
