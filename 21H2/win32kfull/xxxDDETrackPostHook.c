/*
 * XREFs of xxxDDETrackPostHook @ 0x1C021D08C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021AC58 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021C0E8 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021C148 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C8DC (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C9C0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEHookData @ 0x1C0232D98 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C0247038 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // r14
  int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  struct tagWND *v15; // rbx
  struct tagDDECONV *DdeConv; // rax
  __int64 v17; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // esi
  struct tagDDECONV *v24; // rcx
  __int128 v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h]
  _OWORD v28[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v29; // [rsp+78h] [rbp-8h]
  struct tagDDECONV *v30; // [rsp+B8h] [rbp+38h]

  v5 = 0LL;
  v27 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  v26 = 0LL;
  if ( (v10 & MonitorFlags) != 0 )
  {
    v11 = *a1;
    v29 = 0LL;
    memset(v28, 0, sizeof(v28));
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v28);
      LODWORD(v11) = *a1;
    }
    else
    {
      *(_QWORD *)&v28[0] = *(unsigned __int16 *)a4;
      *((_QWORD *)&v28[0] + 1) = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, v11, a3, (unsigned int)*a4, v10, (__int64)v28);
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) )
    return 2;
  if ( *a1 == 992 )
    return 0;
  v13 = (struct tagWND *)ValidateHwnd(a3);
  v15 = v13;
  if ( v13 )
  {
    DdeConv = FindDdeConv(v13, a2);
    v30 = DdeConv;
    v5 = (__int64)DdeConv;
    if ( DdeConv )
    {
      if ( a5
        && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL)
        && (*(_DWORD *)(*((_QWORD *)v15 + 2) + 648LL) & 0x40000) == 0 )
      {
        return 0;
      }
      if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 632LL) != 1024 )
      {
        UserSetLastError(1408LL, v14, v17);
        return 0;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v26 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v26;
      *((_QWORD *)&v26 + 1) = v30;
      HMLockObject(v30);
      v19 = (struct tagFREELIST *)*((_QWORD *)v30 + 9);
      *((_QWORD *)v30 + 9) = 0LL;
      xxxFreeListFree(v19);
      if ( (*(_BYTE *)(_HMPheFromObject(v30) + 25) & 1) != 0 || *a1 != 993 && (*((_DWORD *)v30 + 20) & 6) != 0 )
      {
        v12 = 1;
      }
      else
      {
        v21 = *((_QWORD *)v30 + 7);
        if ( v21 )
        {
          v22 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v21 + 32))(a1, a4, v30);
        }
        else if ( (*((_DWORD *)v30 + 20) & 1) != 0 )
        {
          v22 = xxxUnexpectedServerPost(a1, a4, v30);
        }
        else
        {
          v22 = xxxUnexpectedClientPost(a1, a4, v30);
        }
        v12 = v22;
      }
      v5 = ThreadUnlock1(v20);
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
    v23 = 0x8000;
    v24 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 994);
    if ( (unsigned __int16)*a1 == 994 )
    {
      v23 = 33025;
    }
    else
    {
      v24 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 995);
      if ( (unsigned __int16)*a1 == 995 )
        goto LABEL_48;
      v24 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 996);
      if ( (unsigned __int16)*a1 == 996 )
      {
        v23 = 32769;
      }
      else
      {
        v24 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 997);
        if ( (unsigned __int16)*a1 != 997 )
        {
          v24 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 998);
          if ( (unsigned __int16)*a1 == 998 )
            goto LABEL_48;
          v24 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 999);
          if ( (unsigned __int16)*a1 != 999 )
          {
            if ( (unsigned __int16)*a1 != 1000 )
              return v12;
            v23 = 34816;
            goto LABEL_48;
          }
        }
        v23 = 32899;
      }
    }
LABEL_48:
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_((_DWORD)v24, v14, 14, 12, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      }
      xxxFreeDDEHandle(v24, *a4, v23);
      return 3;
    }
  }
  return v12;
}
