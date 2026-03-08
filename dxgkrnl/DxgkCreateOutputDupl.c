/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C032B210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1C0326A30 (-DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0326A90 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C0327EF4 (-IsInLowBox@@YAHXZ.c)
 *     DxgkDestroyOutputDuplInternal @ 0x1C032B4A8 (DxgkDestroyOutputDuplInternal.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(ULONG64 a1)
{
  struct DXGPROCESS *Current; // rdi
  int v4; // eax
  int v5; // ebx
  int v6; // ebx
  _D3DKMT_CREATE_OUTPUTDUPL *v7; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // r8
  _DWORD *v12; // rdx
  int v13; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-60h] BYREF
  _DWORD v15[4]; // [rsp+68h] [rbp-50h] BYREF
  _D3DKMT_CREATE_OUTPUTDUPL v16; // [rsp+78h] [rbp-40h] BYREF

  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 3479LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 3479LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (g_OutputDuplicationTestControl & 2) != 0 )
    v4 = 1;
  else
    v4 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 216LL))();
  v5 = (v4 != 0 ? 4 : 0) | (8 * (g_OutputDuplicationTestControl & 1));
  v13 = v5;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    if ( (unsigned int)IsInLowBox() )
    {
      v6 = v5 | 2;
      v13 = v6;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v13 = v6 | 8;
      }
    }
  }
  v7 = (_D3DKMT_CREATE_OUTPUTDUPL *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_D3DKMT_CREATE_OUTPUTDUPL *)MmUserProbeAddress;
  v16 = *v7;
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGGLOBAL *)((char *)Global + 305296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v10 = DxgkCreateOutputDuplInternal(&v16, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v13, v9);
  if ( v10 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
    {
      v10 = -1073741790;
LABEL_19:
      v15[0] = v16.hAdapter;
      v15[1] = v16.VidPnSourceId;
      v15[2] = 0;
      DxgkDestroyOutputDuplInternal(v15, 1LL);
      goto LABEL_20;
    }
    v13 |= 1u;
    v10 = DxgkCreateOutputDuplInternal(&v16, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v13, v11);
    if ( v10 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v14);
  if ( v10 >= 0 )
  {
    v12 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = v16.RequiredKeyedMutexCount;
  }
  return (unsigned int)v10;
}
