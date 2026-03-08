/*
 * XREFs of ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B8BB8
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B6954 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B8C9C (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        __int64 a1,
        struct _LUID a2,
        char a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  DXGADAPTER *v12; // rdi
  int PathModeListForAdapterWithCoreAccessHeld; // ebx
  __int64 v14; // r8
  unsigned __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v17[144]; // [rsp+40h] [rbp-C8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2, &v16);
  v12 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v11, 0LL);
    PathModeListForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
    if ( PathModeListForAdapterWithCoreAccessHeld >= 0 )
    {
      LOBYTE(v14) = a3;
      PathModeListForAdapterWithCoreAccessHeld = BmlGetPathModeListForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v12,
                                                   v14,
                                                   a4,
                                                   a5,
                                                   a6);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
    DXGADAPTER::ReleaseReference(v12);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)PathModeListForAdapterWithCoreAccessHeld;
}
