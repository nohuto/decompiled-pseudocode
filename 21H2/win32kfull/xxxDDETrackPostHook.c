/*
 * XREFs of xxxDDETrackPostHook @ 0x1C0217FF8
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0214F2C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C0216B18 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0216BBC (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0217594 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02176C8 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEHookData @ 0x1C022C620 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C0242C68 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct tagWND *v13; // rax
  int v14; // r8d
  int v15; // r9d
  struct tagWND *v16; // rbx
  char v17; // si
  struct tagDDECONV *DdeConv; // rax
  __int64 v19; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // r15d
  struct tagDDECONV *v28; // rcx
  int v29; // edx
  __int128 v31; // [rsp+48h] [rbp-11h] BYREF
  __int64 v32; // [rsp+58h] [rbp-1h]
  _OWORD v33[3]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v34; // [rsp+90h] [rbp+37h]

  v5 = 0LL;
  v32 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  v31 = 0LL;
  if ( (v10 & MonitorFlags) != 0 )
  {
    v11 = *a1;
    v34 = 0LL;
    memset(v33, 0, sizeof(v33));
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v33);
      LODWORD(v11) = *a1;
    }
    else
    {
      *(_QWORD *)&v33[0] = *(unsigned __int16 *)a4;
      *((_QWORD *)&v33[0] + 1) = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, v11, a3, (unsigned int)*a4, v10, (__int64)v33);
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) )
    return 2;
  if ( *a1 == 992 )
    return 0;
  v13 = (struct tagWND *)ValidateHwnd(a3);
  v16 = v13;
  v17 = 1;
  if ( v13 )
  {
    DdeConv = FindDdeConv(v13, a2);
    v5 = (__int64)DdeConv;
    if ( DdeConv )
    {
      if ( a5
        && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL)
        && (*(_DWORD *)(*((_QWORD *)v16 + 2) + 648LL) & 0x40000) == 0 )
      {
        return 0;
      }
      if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 632LL) != 1024 )
      {
        UserSetLastError(1408LL, v19);
        return 0;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v31 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v31;
      *((_QWORD *)&v31 + 1) = v5;
      HMLockObject(v5);
      v21 = *(struct tagFREELIST **)(v5 + 72);
      *(_QWORD *)(v5 + 72) = 0LL;
      xxxFreeListFree(v21);
      if ( (*(_BYTE *)(_HMPheFromObject(v5) + 25) & 1) != 0 || *a1 != 993 && (*(_DWORD *)(v5 + 80) & 6) != 0 )
      {
        v12 = 1;
      }
      else
      {
        v25 = *(_QWORD *)(v5 + 56);
        if ( v25 )
        {
          v26 = (*(__int64 (__fastcall **)(unsigned int *, void **, __int64))(v25 + 32))(a1, a4, v5);
        }
        else if ( (*(_DWORD *)(v5 + 80) & 1) != 0 )
        {
          v26 = xxxUnexpectedServerPost(a1, a4, (struct tagDDECONV *)v5);
        }
        else
        {
          v26 = xxxUnexpectedClientPost(a1, a4, (struct tagDDECONV *)v5);
        }
        v12 = v26;
      }
      v5 = ThreadUnlock1(v23, v22, v24);
    }
    else
    {
      v12 = *a1 == 993;
    }
  }
  else
  {
    v12 = (*a1 == 993) + 1;
  }
  if ( v12 == 1 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
  {
    v27 = 0x8000;
    switch ( (unsigned __int16)*a1 )
    {
      case 0x3E2u:
        v27 = 33025;
        break;
      case 0x3E3u:
        break;
      case 0x3E4u:
        v27 = 32769;
        break;
      default:
        if ( (unsigned __int16)*a1 != 997 )
        {
          if ( (unsigned __int16)*a1 == 998 )
            break;
          if ( (unsigned __int16)*a1 != 999 )
          {
            if ( (unsigned __int16)*a1 != 1000 )
              return v12;
            v27 = 34816;
            break;
          }
        }
        v27 = 32899;
        break;
    }
    if ( v5 )
    {
      v28 = (struct tagDDECONV *)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v17 = 0;
      }
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = 12;
        LOBYTE(v29) = v17;
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v29,
          v14,
          v15,
          4,
          14,
          12,
          (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
      }
      xxxFreeDDEHandle(v28, *a4, v27);
      return 3;
    }
  }
  return v12;
}
