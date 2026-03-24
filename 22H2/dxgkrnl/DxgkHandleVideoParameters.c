/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C02951E8
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C02DA650 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0211840 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0211F50 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C0215A70 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0295058 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C02DD24C (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DDA44 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C02DE058 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DF6D0 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(DXGADAPTER ***a1, __int64 a2, char *Source1, __int64 a4)
{
  __int64 v5; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  int v23; // esi
  unsigned __int8 v24; // r12
  int v25; // eax
  int CurrentTvStandard; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  int updated; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int8 v35[4]; // [rsp+20h] [rbp-99h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v36; // [rsp+24h] [rbp-95h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v38[16]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v39[144]; // [rsp+40h] [rbp-79h] BYREF

  v5 = (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, (__int64)Source1, a4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v9, v8);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return (unsigned int)v11;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, *((struct DXGFASTMUTEX *const *)Current + 42), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v14);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, (struct DXGADAPTER *const)a1, 0LL);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v11 = -1073741637;
    v17[3] = a1;
    v17[4] = -1073741637LL;
LABEL_11:
    WdLogEvent5_WdError(v17);
    goto LABEL_45;
  }
  if ( (unsigned int)v5 >= *((_DWORD *)a1[337] + 20) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v11 = -1071774975;
    v17[3] = v5;
    v17[4] = a1;
    v17[5] = -1071774975LL;
    goto LABEL_11;
  }
  if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v11 = -1073741811;
    v17[3] = -1073741811LL;
    goto LABEL_11;
  }
  v37 = 0;
  v35[0] = 0;
  DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, v5, v35, &v37);
  v22 = *((_DWORD *)Source1 + 5);
  v23 = 1;
  v24 = v35[0];
  if ( v22 == 1 )
  {
    *(_QWORD *)(Source1 + 28) = 0LL;
    *(_QWORD *)(Source1 + 36) = 0LL;
    *(_QWORD *)(Source1 + 44) = 0LL;
    v11 = 0;
    *(_QWORD *)(Source1 + 52) = 0LL;
    *(_QWORD *)(Source1 + 60) = 0LL;
    *(_QWORD *)(Source1 + 68) = 0LL;
    *(_QWORD *)(Source1 + 76) = 0LL;
    *(_QWORD *)(Source1 + 84) = 0LL;
    *(_QWORD *)(Source1 + 92) = 0LL;
    memset(Source1 + 100, 0, 0x100uLL);
    *((_DWORD *)Source1 + 6) = 3;
    if ( v24 == 1 )
    {
      v36 = 0;
      DmmGetPathContentFromClientVidPnSource(a1, v5, (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *)&v36);
      v25 = (v36 == 2) + 1;
    }
    else
    {
      v25 = 1;
    }
    *((_DWORD *)Source1 + 7) = v25;
    *((_DWORD *)Source1 + 9) = 3;
    if ( v24 == 1 )
      CurrentTvStandard = GetCurrentTvStandard((struct DXGADAPTER *)a1, v37);
    else
      CurrentTvStandard = 0x8000;
    *((_DWORD *)Source1 + 8) = CurrentTvStandard;
    *((_DWORD *)Source1 + 10) = CurrentTvStandard | 0x8000;
    if ( v24 == 1 )
    {
      v36 = 0;
      DmmGetMacrovisonSupportFromClientVidPnSource(a1, v5, &v36);
      if ( (*(_BYTE *)&v36 & 4) == 0 && (*(_BYTE *)&v36 & 2) == 0 )
        v23 = 0;
    }
    *((_DWORD *)Source1 + 20) = v23;
    if ( v23 )
    {
      *((_DWORD *)Source1 + 6) |= 0x100u;
      *((_DWORD *)Source1 + 22) = 196799;
    }
    goto LABEL_45;
  }
  if ( v22 != 2 )
    goto LABEL_45;
  v11 = 0;
  if ( (*((_DWORD *)Source1 + 6) & 0x100) == 0 )
  {
LABEL_42:
    if ( v24 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        a1,
        v5,
        (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT)((*((_DWORD *)Source1 + 7) == 2) + 1));
    goto LABEL_45;
  }
  v27 = (unsigned int)(*((_DWORD *)Source1 + 21) - 1);
  if ( *((_DWORD *)Source1 + 21) != 1 )
  {
    v27 = (unsigned int)(*((_DWORD *)Source1 + 21) - 2);
    if ( *((_DWORD *)Source1 + 21) == 2 )
    {
      updated = ADAPTER_DISPLAY::DestroyCopyProtection(a1[337], v5, *((_DWORD *)Source1 + 23));
    }
    else
    {
      if ( *((_DWORD *)Source1 + 21) != 4 )
      {
        v28 = WdLogNewEntry5_WdWarning(v27, v20, v21);
        v29 = *((unsigned int *)Source1 + 21);
LABEL_33:
        *(_QWORD *)(v28 + 24) = v29;
        v11 = -1073741811;
        *(_QWORD *)(v28 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v28);
        goto LABEL_45;
      }
      v30 = *((unsigned int *)Source1 + 24);
      if ( (unsigned int)v30 > 3 )
      {
LABEL_32:
        v28 = WdLogNewEntry5_WdWarning(v27, v20, v30);
        v29 = *((unsigned int *)Source1 + 24);
        goto LABEL_33;
      }
      updated = ADAPTER_DISPLAY::UpdateCopyProtection(a1[337], v5, v30, *((_DWORD *)Source1 + 23));
    }
    goto LABEL_39;
  }
  v30 = *((unsigned int *)Source1 + 24);
  if ( (unsigned int)(v30 - 1) <= 2 )
  {
    if ( *((_DWORD *)Source1 + 20) != 1 )
      goto LABEL_32;
    updated = ADAPTER_DISPLAY::CreateCopyProtection(a1[337], v5, v30, (unsigned int *)Source1 + 23);
LABEL_39:
    v11 = updated;
    goto LABEL_41;
  }
  v32 = WdLogNewEntry5_WdWarning(v27, v20, v30);
  v11 = -1073741811;
  *(_QWORD *)(v32 + 24) = *((unsigned int *)Source1 + 24);
  *(_QWORD *)(v32 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v32);
LABEL_41:
  if ( v11 >= 0 )
    goto LABEL_42;
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39, v20);
  if ( v38[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38, v33);
  return (unsigned int)v11;
}
