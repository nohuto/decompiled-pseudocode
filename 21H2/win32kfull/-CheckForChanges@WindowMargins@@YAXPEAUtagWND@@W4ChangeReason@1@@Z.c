/*
 * XREFs of ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00
 * Callers:
 *     UpdateWindowSpriteMonitor @ 0x1C0022AF0 (UpdateWindowSpriteMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01E1F08 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddds @ 0x1C007B97C (WPP_RECORDER_AND_TRACE_SF_qdddddddds.c)
 *     ?CreateMarginsProp@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C0082D50 (-CreateMarginsProp@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00B3CFC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     DwmAsyncNotifyWindowFrameMarginsChange @ 0x1C01058FC (DwmAsyncNotifyWindowFrameMarginsChange.c)
 *     ??$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1C0120334 (--$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginPr.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     WindowMargins::_anonymous_namespace_::HasNcArea @ 0x1C015C430 (WindowMargins--_anonymous_namespace_--HasNcArea.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C01D2234 (-IsWDAGContainer@@YAHXZ.c)
 */

__int64 __fastcall WindowMargins::CheckForChanges(const struct tagWND *a1, int a2)
{
  int v2; // r13d
  char v5; // r15
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // rcx
  int v17; // r13d
  __int16 WindowBordersWithDpiAwareness; // r14
  __int128 *v19; // r14
  __int64 v20; // xmm1_8
  tagObjLock **v21; // r14
  CWindowProp *Prop; // r14
  __int16 v23; // r13
  __int16 v24; // ax
  char v25; // r14
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // eax
  INT ScaledLogPixels; // ebx
  __int16 v30; // ax
  int v31; // edx
  char v32; // bl
  int v33; // edx
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  const char *v40; // rcx
  char v41; // r14
  void *v42; // rax
  int v43; // [rsp+28h] [rbp-F0h]
  int v44; // [rsp+30h] [rbp-E8h]
  int v45; // [rsp+38h] [rbp-E0h]
  int v46; // [rsp+40h] [rbp-D8h]
  char v47; // [rsp+88h] [rbp-90h]
  __int64 v48; // [rsp+98h] [rbp-80h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-78h]
  INT v50; // [rsp+A8h] [rbp-70h]
  INT v51; // [rsp+ACh] [rbp-6Ch]
  __int64 v52; // [rsp+B0h] [rbp-68h]
  __int128 v53; // [rsp+B8h] [rbp-60h]
  __int64 v54; // [rsp+C8h] [rbp-50h]
  _OWORD v55[4]; // [rsp+D8h] [rbp-40h] BYREF

  v2 = 0;
  v5 = 1;
  if ( (unsigned int)(a2 - 5) > 1 )
  {
    result = *((_QWORD *)a1 + 13);
    if ( !result )
      return result;
    v7 = *((_QWORD *)a1 + 3);
    if ( !v7 )
      return result;
    v8 = *(_QWORD *)(v7 + 8);
    if ( !v8 || result != *(_QWORD *)(v8 + 24) )
      return result;
  }
  v49 = 0LL;
  v9 = 0LL;
  v48 = 0LL;
  LOWORD(v10) = 0;
  if ( a2 == 1 )
  {
    v48 = 0LL;
    result = CWindowProp::GetProp<WindowMargins::CWindowMarginProp>(a1, &v48);
    if ( !(_DWORD)result )
      return result;
    v48 = *(_QWORD *)(v48 + 24);
    goto LABEL_58;
  }
  if ( a2 != 6 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 || !(unsigned int)IsWDAGContainer() )
    {
      memset(v55, 0, sizeof(v55));
      if ( !(unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v55) )
        goto LABEL_30;
      v13 = *((_QWORD *)a1 + 5);
      v14 = *(_DWORD *)(v13 + 24);
      if ( (v14 & 0x80000) != 0 && (v14 & 0x20000000) == 0 )
        goto LABEL_30;
      if ( (v55[0] & 1) != 0 )
        goto LABEL_30;
      if ( !(DWORD1(v55[0])
           ? DWORD1(v55[0]) == 2
           : ((unsigned __int8)~(*(_BYTE *)(v13 + 30) >> 2) & ((*(_BYTE *)(v13 + 30) & 0xC0) != 0xC0)) == 0) )
        goto LABEL_30;
      if ( (gHighContrast[4] & 1) != 0 )
        goto LABEL_30;
      LOBYTE(v12) = 1;
      if ( !(unsigned __int8)WindowMargins::_anonymous_namespace_::HasNcArea(a1, v12) )
        goto LABEL_30;
    }
    v16 = *((_QWORD *)a1 + 5);
    v17 = (*(_DWORD *)(v16 + 288) >> 8) & 0x1FF;
    if ( !v17 )
    {
      if ( (*(_BYTE *)(v16 + 233) & 4) == 0 )
        v16 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      v17 = *(unsigned __int16 *)(v16 + 284);
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v11, 1, v17);
    if ( WindowBordersWithDpiAwareness > 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 )
      {
        v24 = EngMulDiv(1, v17, 96);
        v2 = 0;
        LOWORD(v48) = WindowBordersWithDpiAwareness - v24;
        *(_DWORD *)((char *)&v48 + 2) = (unsigned __int16)(WindowBordersWithDpiAwareness - v24);
        HIWORD(v48) = WindowBordersWithDpiAwareness - v24;
        v9 = v48;
        goto LABEL_30;
      }
      LOWORD(v48) = WindowBordersWithDpiAwareness;
      WORD1(v48) = WindowBordersWithDpiAwareness;
      WORD2(v48) = WindowBordersWithDpiAwareness;
      HIWORD(v48) = WindowBordersWithDpiAwareness;
      v9 = v48;
    }
    v2 = 0;
LABEL_30:
    v48 = v9;
  }
  v19 = (__int128 *)*((_QWORD *)a1 + 18);
  BYTE8(v55[0]) = 0;
  memset(&v55[1], 0, 17);
  v52 = WindowMargins::CWindowMarginProp::s_atom;
  *(_QWORD *)&v55[0] = gDomainDummyLock;
  v20 = *((_QWORD *)v19 + 2);
  v53 = *v19;
  BYTE8(v55[2]) = 0;
  v54 = v20;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    BYTE8(v55[2]) = 1;
    if ( v19 == (__int128 *)gObjDummyLock )
      v19 = 0LL;
    *(_QWORD *)&v55[1] = v19;
    if ( !LOBYTE(v55[2]) )
    {
      v21 = (tagObjLock **)&v55[1];
      do
      {
        if ( *v21 )
          tagObjLock::LockExclusive(*v21);
        ++v2;
        ++v21;
      }
      while ( !v2 );
      LOBYTE(v55[2]) = 1;
    }
  }
  Prop = (CWindowProp *)RealGetProp(*((_QWORD *)a1 + 18), v52, 1LL);
  if ( BYTE8(v55[2]) && LOBYTE(v55[2]) )
  {
    if ( *(_QWORD *)&v55[1] )
      tagObjLock::UnLockExclusive(*(tagObjLock **)&v55[1]);
    LOBYTE(v55[2]) = 0;
  }
  if ( Prop )
  {
    v10 = *((_QWORD *)Prop + 3);
    v49 = v10;
  }
  v23 = WORD1(v48);
  if ( !(_WORD)v48 && __PAIR32__(WORD1(v48), 0) == HIWORD(v48) && !WORD2(v48) )
  {
    if ( Prop )
      CWindowProp::RemoveAndDeleteProp(Prop);
    goto LABEL_59;
  }
  if ( Prop )
  {
    if ( *((_QWORD *)Prop + 3) != v48 )
      *((_QWORD *)Prop + 3) = v9;
    goto LABEL_59;
  }
  WindowMargins::CWindowMarginProp::CreateMarginsProp(a1, (const struct FRAME_MARGIN *)&v48);
LABEL_58:
  v23 = WORD1(v48);
LABEL_59:
  v25 = BYTE6(v49);
  if ( (_WORD)v10 != (_WORD)v48 || WORD1(v49) != v23 || (result = WORD2(v49), HIDWORD(v49) != HIDWORD(v48)) )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
      && (v26 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL),
          (*(_DWORD *)(v26 + 64) & 1) != 0)
      && (v26 = *((_QWORD *)a1 + 5), v28 = *(_DWORD *)(v26 + 288), (v28 & 0xF) == 0)
      && (v28 & 0x40000000) != 0 )
    {
      ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v26 + 284));
      LODWORD(v52) = EngMulDiv((__int16)v48, ScaledLogPixels, 96);
      LOWORD(v48) = v52;
      v51 = EngMulDiv(SWORD2(v48), ScaledLogPixels, 96);
      WORD2(v48) = v51;
      v50 = EngMulDiv(SWORD1(v48), ScaledLogPixels, 96);
      WORD1(v48) = v50;
      v30 = EngMulDiv(SHIWORD(v48), ScaledLogPixels, 96);
      v32 = v30;
      HIWORD(v48) = v30;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
        || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v31) = 0;
      }
      if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v31,
          v27,
          (_DWORD)WPP_GLOBAL_Control,
          4,
          26,
          12,
          (__int64)&WPP_5d8c16ef74033e1c3b6bd48607943c03_Traceguids,
          *(_QWORD *)a1);
      }
      v33 = v52;
    }
    else
    {
      v32 = BYTE6(v48);
      v33 = (unsigned __int16)v48;
      v51 = WORD2(v48);
      v50 = WORD1(v48);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v26 = 0LL;
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( a2 )
      {
        v34 = a2 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              v37 = v36 - 1;
              if ( v37 )
              {
                v38 = v37 - 1;
                if ( v38 )
                {
                  v39 = v38 - 1;
                  if ( v39 )
                  {
                    if ( v39 == 1 )
                      v40 = "Client rect changing";
                    else
                      v40 = "Unknown";
                  }
                  else
                  {
                    v40 = "Becoming child";
                  }
                }
                else
                {
                  v40 = "Becoming TLW";
                }
              }
              else
              {
                v40 = "Theme change";
              }
            }
            else
            {
              v40 = "DPI Change";
            }
          }
          else
          {
            v40 = "Style change";
          }
        }
        else
        {
          v40 = "DWM restart";
        }
      }
      else
      {
        v40 = "CreateWindow";
      }
      v47 = v25;
      v41 = v33;
      LOBYTE(v33) = v5;
      LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qdddddddds(
        WPP_GLOBAL_Control->AttachedDevice,
        v33,
        v27,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v43,
        v44,
        v45,
        v46,
        *(_QWORD *)a1,
        v41,
        v51,
        v50,
        v32,
        v10,
        SBYTE4(v49),
        SBYTE2(v49),
        v47,
        (__int64)v40);
    }
    v42 = (void *)UserReferenceDwmApiPort(v26);
    return DwmAsyncNotifyWindowFrameMarginsChange(v42);
  }
  return result;
}
