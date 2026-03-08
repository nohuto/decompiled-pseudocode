/*
 * XREFs of xxxDDETrackPostHook @ 0x1C01FDCA4
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01FAB6C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAXK@Z @ 0x1C01FC6B8 (-xxxFreeDDEHandle@@YAXPEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01FC75C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD134 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD260 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEHookData @ 0x1C02154C0 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C022E378 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4)
{
  struct tagDDECONV *DdeConv; // rdi
  unsigned int v6; // ebx
  __int64 v10; // rcx
  struct tagWND *v11; // rax
  __int64 v12; // r8
  int v13; // r9d
  char v14; // si
  struct tagFREELIST *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ebp
  int v22; // edx
  __int128 v24; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h]
  _OWORD v26[3]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v27; // [rsp+88h] [rbp-20h]

  DdeConv = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v6 = 2;
  if ( (MonitorFlags & 0x4000000) != 0 )
  {
    v10 = *a1;
    memset(v26, 0, sizeof(v26));
    v27 = 0LL;
    if ( (_DWORD)v10 == 994 || (_DWORD)v10 == 996 || (_DWORD)v10 == 997 || (unsigned int)(v10 - 999) < 2 )
    {
      xxxClientGetDDEHookData(v10, *a4, v26);
    }
    else
    {
      *(_QWORD *)&v26[0] = *(unsigned __int16 *)a4;
      *((_QWORD *)&v26[0] + 1) = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, *a1, a3, (unsigned int)*a4, 0x4000000, (__int64)v26);
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) )
  {
    if ( *a1 == 992 )
      return 0;
    v11 = (struct tagWND *)ValidateHwnd(a3);
    v14 = 1;
    if ( v11 )
    {
      DdeConv = FindDdeConv(v11, a2);
      if ( DdeConv )
      {
        if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 632LL) != 1024 )
        {
          UserSetLastError(1408);
          return 0;
        }
        ThreadLockAlways(DdeConv, &v24);
        v15 = (struct tagFREELIST *)*((_QWORD *)DdeConv + 9);
        *((_QWORD *)DdeConv + 9) = 0LL;
        xxxFreeListFree(v15);
        if ( (*(_BYTE *)(_HMPheFromObject(DdeConv) + 25) & 1) != 0 || *a1 != 993 && (*((_DWORD *)DdeConv + 20) & 6) != 0 )
        {
          v6 = 1;
        }
        else
        {
          v19 = *((_QWORD *)DdeConv + 7);
          if ( v19 )
            v20 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v19 + 32))(a1, a4, DdeConv);
          else
            v20 = (*((_DWORD *)DdeConv + 20) & 1) != 0
                ? xxxUnexpectedServerPost(a1, a4, DdeConv)
                : xxxUnexpectedClientPost(a1, a4, DdeConv);
          v6 = v20;
        }
        DdeConv = (struct tagDDECONV *)ThreadUnlock1(v17, v16, v18);
      }
      else
      {
        v6 = *a1 == 993;
      }
    }
    else
    {
      v6 = (*a1 == 993) + 1;
    }
    if ( v6 == 1 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
    {
      v21 = 0x8000;
      switch ( (unsigned __int16)*a1 )
      {
        case 0x3E2u:
          v21 = 33025;
          break;
        case 0x3E3u:
          break;
        case 0x3E4u:
          v21 = 32769;
          break;
        default:
          if ( (unsigned __int16)*a1 != 997 )
          {
            if ( (unsigned __int16)*a1 == 998 )
              break;
            if ( (unsigned __int16)*a1 != 999 )
            {
              if ( (unsigned __int16)*a1 != 1000 )
                return v6;
              v21 = 34816;
              break;
            }
          }
          v21 = 32899;
          break;
      }
      if ( DdeConv )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v14 = 0;
        }
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = 12;
          LOBYTE(v22) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v22,
            v12,
            v13,
            4,
            14,
            12,
            (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
        }
        xxxFreeDDEHandle(*a4, v21, v12);
        return 3;
      }
    }
  }
  return v6;
}
