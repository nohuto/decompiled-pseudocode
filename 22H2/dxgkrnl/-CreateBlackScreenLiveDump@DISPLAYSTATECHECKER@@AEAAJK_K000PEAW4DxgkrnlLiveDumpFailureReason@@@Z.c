/*
 * XREFs of ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02BADA8
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BBD68 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0045C44 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004DEB4 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004DF10 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004DF5C (-GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02BB318 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1C02BB6A8 (-GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
        DISPLAYSTATECHECKER *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        enum DxgkrnlLiveDumpFailureReason *a7)
{
  enum DxgkrnlLiveDumpFailureReason *v7; // r15
  int BlackScreenDiagPacket; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // ebx
  int v19; // r14d
  __int64 v20; // rsi
  unsigned int v21; // ebx
  size_t v22; // r14
  _DWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v28; // rbx
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // r10
  unsigned int v32; // eax
  unsigned __int64 v33; // r8
  int v34; // eax
  unsigned __int64 v35; // r9
  unsigned int v36; // r12d
  _DWORD *v37; // r14
  unsigned int i; // ebp
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  const void *v40; // rdx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rbp
  __int64 v43; // r8
  unsigned int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int DriverWhiteboxDiagDataSize; // [rsp+40h] [rbp-48h]
  int v54; // [rsp+44h] [rbp-44h]
  int v55; // [rsp+48h] [rbp-40h]
  unsigned int v56; // [rsp+98h] [rbp+10h] BYREF
  __int64 v57; // [rsp+A0h] [rbp+18h]
  __int64 v58; // [rsp+A8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v56 = a2;
  v7 = a7;
  BlackScreenDiagPacket = 0;
  *(_DWORD *)a7 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  if ( !Global )
  {
    *(_DWORD *)v7 = 1;
    return 3221225473LL;
  }
  v14 = *((_QWORD *)Global + 100);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    *(_DWORD *)v7 = 2;
    return 3221225860LL;
  }
  v16 = *((_QWORD *)Global + 101);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    *(_DWORD *)v7 = 4;
    return 3221225860LL;
  }
  v18 = *(_DWORD *)(v16 + 16);
  LODWORD(a5) = *(_DWORD *)(v14 + 16);
  v54 = *((_DWORD *)this + 3514) << 13;
  LODWORD(a7) = v18;
  LODWORD(a6) = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v19 = a6;
  DriverWhiteboxDiagDataSize = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(this);
  v56 = *((_DWORD *)this + 3514);
  v20 = 8 * v56 + 48;
  v55 = v20 + DriverWhiteboxDiagDataSize;
  LODWORD(v58) = a5 + v18 + v54 + v19 + v20 + DriverWhiteboxDiagDataSize;
  v21 = (v58 + 4095) & 0xFFFFF000;
  if ( (unsigned int)WdDbgGetSecondaryDataMaxSize(424LL) < v21 )
  {
    *(_DWORD *)v7 = 8;
    return 3221225473LL;
  }
  v22 = v21;
  v23 = operator new[](v21, 0x4B677844u, PagedPool);
  v28 = v23;
  if ( !v23 )
  {
    v29 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    *(_QWORD *)(v29 + 24) = v22;
    WdLogEvent5_WdLowResource(v29);
    v30 = 16;
    BlackScreenDiagPacket = -1073741801;
    goto LABEL_43;
  }
  memset(v23, 0, v22);
  v31 = (unsigned int)a5;
  v32 = v56;
  v28[1] = 0;
  v33 = (unsigned int)v58;
  *v28 = v32 + 5;
  v28[2] = v20;
  v28[3] = 160;
  v56 = v31;
  if ( v20 + v31 >= v31 && v20 + v31 <= v33 )
  {
    v34 = DXGDIAGNOSTICS::ReadDiagnostics((DXGFASTMUTEX **)v14, (unsigned __int8 *)v28 + (unsigned int)v20, &v56, -1);
    v33 = (unsigned int)v58;
    BlackScreenDiagPacket = v34;
    if ( v34 >= 0 )
    {
      v20 = v56 + (unsigned int)v20;
      LODWORD(a5) = v56;
    }
    else
    {
      *(_DWORD *)v7 = 32;
    }
  }
  v35 = (unsigned int)a7;
  v28[4] = v20;
  v28[5] = 176;
  v56 = v35;
  if ( v20 + v35 >= v35 && v20 + v35 <= v33 )
  {
    BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                              (DXGFASTMUTEX **)v16,
                              (unsigned __int8 *)v28 + (unsigned int)v20,
                              &v56,
                              -1);
    if ( BlackScreenDiagPacket >= 0 )
    {
      v36 = v56;
      v20 = v56 + (unsigned int)v20;
      goto LABEL_23;
    }
    *(_DWORD *)v7 = 64;
  }
  v36 = (unsigned int)a7;
LABEL_23:
  v37 = v28 + 6;
  for ( i = 0; i < *((_DWORD *)this + 3514); ++i )
  {
    *v37 = v20;
    v37[1] = 5;
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    if ( *((_BYTE *)DisplayAdapterDiagData + 56) )
      v40 = (const void *)*((_QWORD *)DisplayAdapterDiagData + 6);
    else
      v40 = 0LL;
    if ( v40 )
    {
      memmove((char *)v28 + (unsigned int)v20, v40, 0x2000uLL);
      v37 += 2;
      v20 = (unsigned int)(v20 + 0x2000);
    }
  }
  v41 = (unsigned int)a6;
  v42 = (unsigned int)v58;
  *v37 = v20;
  v37[1] = 194;
  if ( v20 + v41 >= v41 && v20 + v41 <= v42 )
  {
    BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
                              this,
                              (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)((char *)v28 + (unsigned int)v20),
                              v41);
    if ( BlackScreenDiagPacket >= 0 )
      v20 = (unsigned int)(a6 + v20);
    else
      *(_DWORD *)v7 = 1024;
  }
  v37[2] = v20;
  v37[3] = 208;
  if ( v20 + (unsigned __int64)DriverWhiteboxDiagDataSize >= DriverWhiteboxDiagDataSize
    && v20 + (unsigned __int64)DriverWhiteboxDiagDataSize <= v42 )
  {
    BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagData(
                              this,
                              (struct _DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO *)((char *)v28 + (unsigned int)v20),
                              DriverWhiteboxDiagDataSize);
    if ( BlackScreenDiagPacket >= 0 )
      LODWORD(v20) = DriverWhiteboxDiagDataSize + v20;
    else
      *(_DWORD *)v7 = 2048;
  }
  v43 = v57;
  v37[5] = 0;
  v37[4] = v20;
  v44 = a5 + v36 + v54 + a6 + v55;
  v45 = WdDbgReportCreate(0LL, 424LL, v43, 0LL, 0LL, 0LL, 0);
  v48 = v45;
  if ( v45 )
  {
    if ( !(unsigned __int8)WdDbgReportSecondaryData(v45, v28, v44) )
    {
      v52 = WdLogNewEntry5_WdError(v51, v50);
      *(_QWORD *)(v52 + 24) = 960LL;
      WdLogEvent5_WdError(v52);
      *(_DWORD *)v7 = 256;
      BlackScreenDiagPacket = -1073741823;
    }
    WdDbgReportComplete(v48);
    goto LABEL_47;
  }
  v49 = WdLogNewEntry5_WdError(v47, v46);
  *(_QWORD *)(v49 + 24) = 953LL;
  WdLogEvent5_WdError(v49);
  v30 = 128;
  BlackScreenDiagPacket = -1073741823;
LABEL_43:
  *(_DWORD *)v7 = v30;
LABEL_47:
  if ( v28 )
    operator delete[](v28);
  return (unsigned int)BlackScreenDiagPacket;
}
