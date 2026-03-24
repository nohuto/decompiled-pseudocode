/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C029D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1C0299AA8 (-DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0299B08 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C029AD90 (-IsInLowBox@@YAHXZ.c)
 *     DxgkDestroyOutputDuplInternal @ 0x1C029D858 (DxgkDestroyOutputDuplInternal.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v8; // rax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // ebx
  _D3DKMT_CREATE_OUTPUTDUPL *v14; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // r8
  _DWORD *v19; // rdx
  int v20; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v21[16]; // [rsp+28h] [rbp-60h] BYREF
  _DWORD v22[4]; // [rsp+38h] [rbp-50h] BYREF
  _D3DKMT_CREATE_OUTPUTDUPL v23; // [rsp+48h] [rbp-40h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = 3480LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  if ( (g_OutputDuplicationTestControl & 2) != 0 )
    v10 = 1;
  else
    v10 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 216LL))();
  v11 = (v10 != 0 ? 4 : 0) | (8 * (g_OutputDuplicationTestControl & 1));
  v20 = v11;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    if ( (unsigned int)IsInLowBox() )
    {
      v13 = v11 | 2;
      v20 = v13;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v20 = v13 | 8;
      }
    }
  }
  v14 = (_D3DKMT_CREATE_OUTPUTDUPL *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_D3DKMT_CREATE_OUTPUTDUPL *)MmUserProbeAddress;
  v23 = *v14;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v12);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGGLOBAL *)((char *)Global + 304880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v17 = DxgkCreateOutputDuplInternal(&v23, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v20, v16);
  if ( v17 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
    {
      v17 = -1073741790;
LABEL_19:
      v22[0] = v23.hAdapter;
      v22[1] = v23.VidPnSourceId;
      v22[2] = 0;
      DxgkDestroyOutputDuplInternal(v22, 1LL);
      goto LABEL_20;
    }
    v20 |= 1u;
    v17 = DxgkCreateOutputDuplInternal(&v23, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v20, v18);
    if ( v17 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
  if ( v17 >= 0 )
  {
    v19 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = v23.RequiredKeyedMutexCount;
  }
  return (unsigned int)v17;
}
