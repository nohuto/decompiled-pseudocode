/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016EA98
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C016CCBC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C00088CC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C016EBF4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, const struct _LUID *a2, char a3, unsigned int a4, int a5)
{
  struct DXGADAPTER *v9; // rdi
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v13; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+30h] [rbp-E8h] BYREF
  struct DXGADAPTER *v18[3]; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v19[144]; // [rsp+50h] [rbp-C8h] BYREF

  v18[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v18, a2) )
  {
    v9 = v18[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v18[0], 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( (unsigned int)PsGetCurrentProcessSessionId() == ServerSiloServiceSessionId )
        goto LABEL_8;
      v17 = 0LL;
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        v15 = *((_QWORD *)Current + 11);
        if ( v15 )
          (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v15 + 224))(0LL, &v17, 0LL);
      }
      if ( v17 == *(_QWORD *)((char *)v9 + 4636) )
      {
LABEL_8:
        LOBYTE(v13) = a3;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     a1,
                                                     v9,
                                                     v13,
                                                     a4,
                                                     a5,
                                                     0LL);
      }
      else
      {
        WdLogSingleEntry2(2LL, a2->HighPart, a2->LowPart);
        PathModalityForAdapterWithCoreAccessHeld = -1071775742;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
  }
  else
  {
    PathModalityForAdapterWithCoreAccessHeld = -1073741810;
  }
  DXGADAPTER_REFERENCE::Assign(v18, 0LL);
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
