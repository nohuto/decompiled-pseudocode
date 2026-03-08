/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016C98C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01C4274 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C016D30C (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, const struct _LUID *a2, char a3, unsigned int a4, int a5)
{
  struct DXGADAPTER *v9; // rdi
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v19; // rax
  __int64 v21; // [rsp+30h] [rbp-E8h] BYREF
  struct DXGADAPTER *v22[3]; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v23[144]; // [rsp+50h] [rbp-C8h] BYREF

  v22[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v22, a2) )
  {
    v9 = v22[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v22[0], 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( (unsigned int)PsGetCurrentProcessSessionId(v14, v13, v15, v16) == ServerSiloServiceSessionId )
        goto LABEL_8;
      v21 = 0LL;
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        v19 = *((_QWORD *)Current + 11);
        if ( v19 )
          (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v19 + 224))(0LL, &v21, 0LL);
      }
      if ( v21 == *(_QWORD *)((char *)v9 + 4636) )
      {
LABEL_8:
        LOBYTE(v17) = a3;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     a1,
                                                     v9,
                                                     v17,
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
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
  }
  else
  {
    PathModalityForAdapterWithCoreAccessHeld = -1073741810;
  }
  DXGADAPTER_REFERENCE::Assign(v22, 0LL);
  return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
}
