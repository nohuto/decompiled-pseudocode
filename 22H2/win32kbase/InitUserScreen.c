/*
 * XREFs of InitUserScreen @ 0x1C005CD6C
 * Callers:
 *     InitVideo @ 0x1C0016804 (InitVideo.c)
 * Callees:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0012948 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     GreCreateCompatibleDC @ 0x1C003BC40 (GreCreateCompatibleDC.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     CreateCacheDC @ 0x1C005BC20 (CreateCacheDC.c)
 *     CreateEmptyRgnPublic @ 0x1C005CAC0 (CreateEmptyRgnPublic.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     xxxODI_ColorInit @ 0x1C0061B50 (xxxODI_ColorInit.c)
 *     CreateProfileUserName @ 0x1C0091D90 (CreateProfileUserName.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GreGetSystemFont @ 0x1C00BEE80 (GreGetSystemFont.c)
 *     GreMarkDCUnreadable @ 0x1C00C2748 (GreMarkDCUnreadable.c)
 *     ApiSetEditionInitGlobalCursorSizes @ 0x1C00C98E0 (ApiSetEditionInitGlobalCursorSizes.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 InitUserScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rbp
  __int64 v2; // r8
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  bool v8; // bl
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int16 v12; // bx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  bool v19; // di
  char v20; // di
  bool v21; // bl
  char v22; // bl
  bool v23; // di
  char v24; // di
  bool v25; // bl
  char v26; // bl
  bool v27; // di
  char v28; // di
  bool v29; // bl
  char v30; // bl
  bool v31; // di
  char v32; // di
  bool v33; // bl
  char v34; // bl
  bool v35; // si
  char v36; // si
  __int64 v37; // rbx
  __int128 v39; // [rsp+40h] [rbp-38h] BYREF
  __int64 v40; // [rsp+50h] [rbp-28h]
  char v41; // [rsp+80h] [rbp+8h] BYREF

  v39 = 0LL;
  v40 = 0LL;
  v1 = CreateProfileUserName(&v39);
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v2,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      11,
      (__int64)&WPP_a7da67abce9c330eea32ee74e85516b9_Traceguids);
  v3 = gpsi;
  *((_DWORD *)gpsi + 1275) = 1;
  v3[1301] = 1;
  *((_QWORD *)v3 + 640) = GreGetSystemFont(1LL, v0, v2);
  *((_QWORD *)v3 + 653) = GreGetSystemFont(0LL, v4, v5);
  *((_QWORD *)gpDispInfo + 7) = GreCreateDisplayDC(*((HDEV *)gpDispInfo + 5), 0, 0);
  v6 = *((_QWORD *)gpDispInfo + 7);
  if ( !v6 )
    goto LABEL_48;
  if ( qword_1C0294EB0 )
    qword_1C0294EB0(v6, *((_QWORD *)v3 + 640));
  GreSetDCOwnerEx(*((_QWORD *)gpDispInfo + 7), 0, 0, 0);
  *((_QWORD *)gpDispInfo + 8) = GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v7 = *((_QWORD *)gpDispInfo + 8);
  if ( !v7 )
    goto LABEL_48;
  if ( qword_1C0294EB0 )
    qword_1C0294EB0(v7, *((_QWORD *)v3 + 640));
  GreSetDCOwnerEx(*((_QWORD *)gpDispInfo + 8), 0, 0, 0);
  ghdcMem = GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v8 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v9 = v8 && ghdcMem2 != 0LL;
  if ( v9 )
  {
    GreSetDCOwnerEx((__int64)ghdcMem, 0, 0, 0);
    GreSetDCOwnerEx((__int64)ghdcMem2, 0, 0, 0);
    if ( CreateCachedMonitor() )
    {
      v11 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
      *((_WORD *)gpsi + 3499) = *(_WORD *)(v11 + 1248);
      ++*((_WORD *)gpsi + 3507);
      v12 = *((_WORD *)gpsi + 3499);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        v14 = -*(_QWORD *)CurrentProcessWin32Process;
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      }
      *(_WORD *)(CurrentProcessWin32Process + 284) = v12;
      if ( (unsigned int)ApiSetEditionInitGlobalCursorSizes(v14) )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v41, v15, v16, v17);
        if ( (int)zzzUpdateUserScreen() < 0 )
        {
          v9 = 0;
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v41);
        }
        else
        {
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v41);
          ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
          v18 = ghrgnInv0 != 0LL ? v9 : 0;
          ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
          v19 = ghrgnInv1 != 0LL;
          ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInv2 )
            v20 = v18 & v19;
          else
            v20 = 0;
          ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
          v21 = ghrgnSPB1 != 0LL;
          ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSPB2 )
            v22 = v20 & v21;
          else
            v22 = 0;
          ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
          v23 = ghrgnSCR != 0LL;
          ghrgnSW = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSW )
            v24 = v22 & v23;
          else
            v24 = 0;
          ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
          v25 = ghrgnScrl1 != 0LL;
          ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrl2 )
            v26 = v24 & v25;
          else
            v26 = 0;
          ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
          v27 = ghrgnScrlVis != 0LL;
          ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlSrc )
            v28 = v26 & v27;
          else
            v28 = 0;
          ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
          v29 = ghrgnScrlDst != 0LL;
          ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlValid )
            v30 = v28 & v29;
          else
            v30 = 0;
          ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
          v31 = ghrgnInvalidSum != 0LL;
          ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnVisNew )
            v32 = v30 & v31;
          else
            v32 = 0;
          ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
          v33 = ghrgnSWP1 != 0LL;
          ghrgnValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnValid )
            v34 = v32 & v33;
          else
            v34 = 0;
          ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
          v35 = ghrgnValidSum != 0LL;
          ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInvalid )
            v36 = v34 & v35;
          else
            v36 = 0;
          ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
          LOBYTE(v9) = v36 & (ghrgnGDC != 0LL);
          GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
          v37 = 5LL;
          do
          {
            v9 = (CreateCacheDC(0LL, 0x802u, 0LL) != 0) & (unsigned __int8)v9;
            --v37;
          }
          while ( v37 );
          GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
          if ( v9 )
          {
            GreMarkDCUnreadable(*((_QWORD *)gpDispInfo + 7));
            *((_DWORD *)gpsi + 496) = 0;
            *((_DWORD *)gpsi + 541) = InitSafeBootMode;
            *((_DWORD *)gpsi + 547) = 0;
            xxxODI_ColorInit(v1);
            if ( qword_1C0295F28 )
            {
              if ( (int)qword_1C0295F28() >= 0 && qword_1C0295F30 )
                qword_1C0295F30();
            }
          }
        }
        goto LABEL_44;
      }
    }
LABEL_48:
    v9 = 0;
  }
LABEL_44:
  if ( v1 && qword_1C0295558 )
    qword_1C0295558(&v39);
  return v9;
}
