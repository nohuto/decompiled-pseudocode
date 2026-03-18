/*
 * XREFs of InitUserScreen @ 0x1C006C88C
 * Callers:
 *     InitVideo @ 0x1C0068398 (InitVideo.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreCreateCompatibleDC @ 0x1C002E050 (GreCreateCompatibleDC.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxODI_ColorInit @ 0x1C0060DA0 (xxxODI_ColorInit.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00682EC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     GreGetSystemFont @ 0x1C006A0F0 (GreGetSystemFont.c)
 *     CreateCacheDC @ 0x1C006AA00 (CreateCacheDC.c)
 *     CreateEmptyRgnPublic @ 0x1C006EF60 (CreateEmptyRgnPublic.c)
 *     CreateProfileUserName @ 0x1C00B8930 (CreateProfileUserName.c)
 *     ApiSetEditionInitGlobalCursorSizes @ 0x1C00C2848 (ApiSetEditionInitGlobalCursorSizes.c)
 *     GreMarkDCUnreadable @ 0x1C00C4754 (GreMarkDCUnreadable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 InitUserScreen()
{
  int v0; // edx
  __int64 v1; // rbp
  int v2; // r8d
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  bool v6; // bl
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rcx
  __int16 v12; // bx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  bool v16; // di
  char v17; // di
  bool v18; // bl
  char v19; // bl
  bool v20; // di
  char v21; // di
  bool v22; // bl
  char v23; // bl
  bool v24; // di
  char v25; // di
  bool v26; // bl
  char v27; // bl
  bool v28; // di
  char v29; // di
  bool v30; // bl
  char v31; // bl
  bool v32; // si
  char v33; // si
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rdx
  int v38; // r8d
  __int128 v40; // [rsp+40h] [rbp-38h] BYREF
  __int64 v41; // [rsp+50h] [rbp-28h]
  char v42; // [rsp+80h] [rbp+8h] BYREF

  v40 = 0LL;
  v41 = 0LL;
  v1 = CreateProfileUserName(&v40);
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v2,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      11,
      (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
  }
  v3 = gpsi;
  *((_DWORD *)gpsi + 1275) = 1;
  v3[1301] = 1;
  *((_QWORD *)v3 + 640) = GreGetSystemFont(1);
  *((_QWORD *)v3 + 653) = GreGetSystemFont(0);
  *((_QWORD *)gpDispInfo + 7) = GreCreateDisplayDC(*((HDEV *)gpDispInfo + 5), 0, 0);
  v4 = *((_QWORD *)gpDispInfo + 7);
  if ( !v4 )
    goto LABEL_46;
  if ( qword_1C029B818 )
    qword_1C029B818(v4, *((_QWORD *)v3 + 640));
  GreSetDCOwnerEx(*((_QWORD *)gpDispInfo + 7), 0, 0, 0);
  *((_QWORD *)gpDispInfo + 8) = GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v5 = *((_QWORD *)gpDispInfo + 8);
  if ( !v5 )
    goto LABEL_46;
  if ( qword_1C029B818 )
    qword_1C029B818(v5, *((_QWORD *)v3 + 640));
  GreSetDCOwnerEx(*((_QWORD *)gpDispInfo + 8), 0, 0, 0);
  ghdcMem = GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v6 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v7 = v6 && ghdcMem2 != 0LL;
  if ( v7 )
  {
    GreSetDCOwnerEx((__int64)ghdcMem, 0, 0, 0);
    GreSetDCOwnerEx((__int64)ghdcMem2, 0, 0, 0);
    if ( CreateCachedMonitor() )
    {
      v11 = gpsi;
      *((_WORD *)gpsi + 3499) = gdmLogPixels;
      ++*((_WORD *)gpsi + 3507);
      v12 = *((_WORD *)gpsi + 3499);
      *(_WORD *)(PsGetCurrentProcessWin32Process(v11, v8, v9, v10) + 284) = v12;
      if ( (unsigned int)ApiSetEditionInitGlobalCursorSizes() )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v42, v13, v14);
        if ( (int)zzzUpdateUserScreen() < 0 )
        {
          v7 = 0;
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v42);
        }
        else
        {
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v42);
          ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
          v15 = ghrgnInv0 != 0LL ? v7 : 0;
          ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
          v16 = ghrgnInv1 != 0LL;
          ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInv2 )
            v17 = v15 & v16;
          else
            v17 = 0;
          ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
          v18 = ghrgnSPB1 != 0LL;
          ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSPB2 )
            v19 = v17 & v18;
          else
            v19 = 0;
          ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
          v20 = ghrgnSCR != 0LL;
          ghrgnSW = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSW )
            v21 = v19 & v20;
          else
            v21 = 0;
          ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
          v22 = ghrgnScrl1 != 0LL;
          ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrl2 )
            v23 = v21 & v22;
          else
            v23 = 0;
          ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
          v24 = ghrgnScrlVis != 0LL;
          ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlSrc )
            v25 = v23 & v24;
          else
            v25 = 0;
          ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
          v26 = ghrgnScrlDst != 0LL;
          ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlValid )
            v27 = v25 & v26;
          else
            v27 = 0;
          ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
          v28 = ghrgnInvalidSum != 0LL;
          ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnVisNew )
            v29 = v27 & v28;
          else
            v29 = 0;
          ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
          v30 = ghrgnSWP1 != 0LL;
          ghrgnValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnValid )
            v31 = v29 & v30;
          else
            v31 = 0;
          ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
          v32 = ghrgnValidSum != 0LL;
          ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInvalid )
            v33 = v31 & v32;
          else
            v33 = 0;
          ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
          LOBYTE(v7) = v33 & (ghrgnGDC != 0LL);
          GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), v34, v35);
          v36 = 5LL;
          do
          {
            v7 = (CreateCacheDC(0LL, 0x802u, 0LL) != 0) & (unsigned __int8)v7;
            --v36;
          }
          while ( v36 );
          GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v37, v38);
          if ( v7 )
          {
            GreMarkDCUnreadable(*((_QWORD *)gpDispInfo + 7));
            *((_DWORD *)gpsi + 496) = 0;
            *((_DWORD *)gpsi + 541) = InitSafeBootMode;
            *((_DWORD *)gpsi + 547) = 0;
            xxxODI_ColorInit(v1);
            if ( qword_1C029C858 )
            {
              if ( (int)qword_1C029C858() >= 0 && qword_1C029C860 )
                qword_1C029C860();
            }
          }
        }
        goto LABEL_42;
      }
    }
LABEL_46:
    v7 = 0;
  }
LABEL_42:
  if ( v1 && qword_1C029BE28 )
    qword_1C029BE28(&v40);
  return v7;
}
