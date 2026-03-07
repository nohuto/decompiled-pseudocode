__int64 InitUserScreen()
{
  __int64 v0; // rdx
  const UNICODE_STRING *v1; // rbp
  __int64 v2; // r8
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  bool v8; // bl
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int16 v11; // bx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v13; // ebx
  bool v14; // di
  char v15; // di
  bool v16; // bl
  char v17; // bl
  bool v18; // di
  char v19; // di
  bool v20; // bl
  char v21; // bl
  bool v22; // di
  char v23; // di
  bool v24; // bl
  char v25; // bl
  bool v26; // di
  char v27; // di
  bool v28; // bl
  char v29; // bl
  bool v30; // si
  char v31; // si
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int128 v35; // [rsp+40h] [rbp-38h] BYREF
  __int64 v36; // [rsp+50h] [rbp-28h]
  char v37; // [rsp+80h] [rbp+8h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v1 = (const UNICODE_STRING *)CreateProfileUserName(&v35);
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
      (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
  v3 = gpsi;
  *((_DWORD *)gpsi + 1275) = 1;
  v3[1301] = 1;
  *((_QWORD *)v3 + 640) = GreGetSystemFont(1LL, v0, v2);
  *((_QWORD *)v3 + 653) = GreGetSystemFont(0LL, v4, v5);
  *((_QWORD *)gpDispInfo + 7) = GreCreateDisplayDC(*((HDEV *)gpDispInfo + 5), 0);
  v6 = *((_QWORD *)gpDispInfo + 7);
  if ( !v6 )
    goto LABEL_48;
  if ( qword_1C02D6020 )
    qword_1C02D6020(v6, *((_QWORD *)v3 + 640));
  GreSetDCOwnerEx(*((_QWORD *)gpDispInfo + 7), 0LL, 0LL, 0LL);
  *((_QWORD *)gpDispInfo + 8) = GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v7 = *((_QWORD *)gpDispInfo + 8);
  if ( !v7 )
    goto LABEL_48;
  if ( qword_1C02D6020 )
    qword_1C02D6020(v7, *((_QWORD *)v3 + 640));
  GreSetDCOwnerEx(*((_QWORD *)gpDispInfo + 8), 0LL, 0LL, 0LL);
  ghdcMem = (HDC)GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v8 = ghdcMem != 0LL;
  ghdcMem2 = (HDC)GreCreateCompatibleDC(*((HDC *)gpDispInfo + 7));
  v9 = v8 && ghdcMem2 != 0LL;
  if ( v9 )
  {
    GreSetDCOwnerEx(ghdcMem, 0LL, 0LL, 0LL);
    GreSetDCOwnerEx(ghdcMem2, 0LL, 0LL, 0LL);
    if ( CreateCachedMonitor() )
    {
      v10 = *(_QWORD *)(SGDGetSessionState() + 24);
      *((_WORD *)gpsi + 3499) = *(_WORD *)(v10 + 1248);
      ++*((_WORD *)gpsi + 3507);
      v11 = *((_WORD *)gpsi + 3499);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      *(_WORD *)(CurrentProcessWin32Process + 284) = v11;
      if ( (unsigned int)ApiSetEditionInitGlobalCursorSizes() )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v37);
        if ( (int)zzzUpdateUserScreen() < 0 )
        {
          v9 = 0;
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v37);
        }
        else
        {
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v37);
          ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
          v13 = ghrgnInv0 != 0LL ? v9 : 0;
          ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
          v14 = ghrgnInv1 != 0LL;
          ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInv2 )
            v15 = v13 & v14;
          else
            v15 = 0;
          ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
          v16 = ghrgnSPB1 != 0LL;
          ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSPB2 )
            v17 = v15 & v16;
          else
            v17 = 0;
          ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
          v18 = ghrgnSCR != 0LL;
          ghrgnSW = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSW )
            v19 = v17 & v18;
          else
            v19 = 0;
          ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
          v20 = ghrgnScrl1 != 0LL;
          ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrl2 )
            v21 = v19 & v20;
          else
            v21 = 0;
          ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
          v22 = ghrgnScrlVis != 0LL;
          ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlSrc )
            v23 = v21 & v22;
          else
            v23 = 0;
          ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
          v24 = ghrgnScrlDst != 0LL;
          ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlValid )
            v25 = v23 & v24;
          else
            v25 = 0;
          ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
          v26 = ghrgnInvalidSum != 0LL;
          ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnVisNew )
            v27 = v25 & v26;
          else
            v27 = 0;
          ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
          v28 = ghrgnSWP1 != 0LL;
          ghrgnValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnValid )
            v29 = v27 & v28;
          else
            v29 = 0;
          ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
          v30 = ghrgnValidSum != 0LL;
          ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInvalid )
            v31 = v29 & v30;
          else
            v31 = 0;
          ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
          LOBYTE(v9) = v31 & (ghrgnGDC != 0LL);
          GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
          v32 = 5LL;
          do
          {
            v9 = (CreateCacheDC(0LL, 2050LL, 0LL) != 0) & (unsigned __int8)v9;
            --v32;
          }
          while ( v32 );
          GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
          if ( v9 )
          {
            GreMarkDCUnreadable(*((_QWORD *)gpDispInfo + 7), v33);
            *((_DWORD *)gpsi + 496) = 0;
            *((_DWORD *)gpsi + 541) = InitSafeBootMode;
            *((_DWORD *)gpsi + 547) = 0;
            xxxODI_ColorInit(v1);
            if ( qword_1C02D70A0 )
            {
              if ( (int)qword_1C02D70A0() >= 0 && qword_1C02D70A8 )
                qword_1C02D70A8();
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
  if ( v1 && qword_1C02D66D0 )
    qword_1C02D66D0(&v35);
  return v9;
}
