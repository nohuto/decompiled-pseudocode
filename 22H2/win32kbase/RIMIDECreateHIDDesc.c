/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C016740C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00582E8 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0057570 (WPP_RECORDER_SF_qDD.c)
 *     RIMFreeHidDesc @ 0x1C0057658 (RIMFreeHidDesc.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00589D8 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0058A7C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC634 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC7AC (RIMSearchHidTLCInfo.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00B19E0 (RIMIDEFreeInjectedInfo.c)
 *     RIMIsInteractiveCtrl @ 0x1C00B6A9C (RIMIsInteractiveCtrl.c)
 *     IsProcessHidRawInputSupported @ 0x1C00B6B68 (IsProcessHidRawInputSupported.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     RIMFreePointerDevice @ 0x1C015D624 (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C016319C (WPP_RECORDER_SF_DDq.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C0166F30 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167888 (RIMIDECreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int64 v5; // r13
  __int128 v6; // xmm0
  __int64 v7; // rsi
  int v8; // r14d
  __m128i v9; // xmm1
  int Caps; // eax
  unsigned __int16 epi16; // bx
  char *v12; // rax
  __int128 v13; // xmm0
  void *v14; // rax
  void *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // r8
  _WORD *v18; // r15
  int v19; // kr00_4
  __int64 v20; // r15
  USAGE Usage; // dx
  int v22; // edx
  unsigned int v23; // eax
  bool v24; // sf
  int v25; // ecx
  USAGE v26; // dx
  unsigned int v27; // eax
  USAGE UsagePage; // cx
  void *v29; // rax
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rdx
  struct _HIDP_CAPS v36; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+D0h] [rbp-30h]
  struct _HIDP_CAPS v39; // [rsp+E0h] [rbp-20h] BYREF
  struct _HIDP_DEVICE_DESC v40; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3[3];
  v5 = a1;
  *(_OWORD *)&v40.CollectionDesc = a3[1];
  v6 = a3[2];
  v7 = 0LL;
  *(_OWORD *)&v40.Dbg.ErrorCode = v3;
  *(_OWORD *)&v40.ReportIDs = v6;
  *(_OWORD *)&v40.Dbg.Args[3] = a3[4];
  memset(&v39, 0, sizeof(v39));
  v8 = 0;
  v9 = *(__m128i *)&v40.CollectionDesc->Reserved[11];
  v37 = *(_OWORD *)&v40.CollectionDesc->UsagePage;
  Src = v40.CollectionDesc->PreparsedData;
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v39);
  else
    Caps = -1073741637;
  if ( Caps < 0 )
    goto LABEL_37;
  if ( !v39.InputReportByteLength )
    goto LABEL_37;
  epi16 = _mm_extract_epi16(v9, 5);
  if ( !epi16 )
    goto LABEL_37;
  v12 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v7 = (__int64)v12;
  if ( !v12 )
    goto LABEL_37;
  v13 = *(_OWORD *)&v39.Usage;
  *(_QWORD *)(a2 + 464) = v12;
  *(_OWORD *)(v12 + 40) = v13;
  *(_OWORD *)(v12 + 56) = *(_OWORD *)&v39.Reserved[3];
  *(_OWORD *)(v12 + 72) = *(_OWORD *)&v39.Reserved[11];
  *(_OWORD *)(v12 + 88) = *(_OWORD *)&v39.NumberInputValueCaps;
  v14 = Win32AllocPoolZInit(*((unsigned __int16 *)v12 + 22), 1785620818LL);
  *(_QWORD *)(v7 + 24) = v14;
  if ( !v14 || (v15 = (void *)Win32AllocPool(epi16, 0x6A6E6952u), (*(_QWORD *)(v7 + 16) = v15) == 0LL) )
  {
LABEL_37:
    v8 = 1;
    goto LABEL_38;
  }
  memmove(v15, Src, epi16);
  *(_DWORD *)(v7 + 104) = epi16;
  *(_DWORD *)(v7 + 108) = 0;
  *(_DWORD *)(v7 + 112) = 0x10000;
  v16 = RIMSearchHidTLCInfo(v39.UsagePage, v39.Usage);
  v18 = v16;
  if ( v16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDq(
        v39.Usage,
        v39.UsagePage,
        v17,
        0xCu,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        v39.UsagePage,
        v39.Usage,
        v16);
      v5 = a1;
    }
  }
  else
  {
    v18 = RIMAllocateAndLinkHidTLCInfo(v39.UsagePage, v39.Usage);
    if ( !v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 3;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v22, 1, 13, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, a1);
      }
      v8 = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_qDD(
        (_DWORD)gRimLog,
        v22,
        1,
        14,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        (char)v18,
        v39.UsagePage,
        v39.Usage);
    }
    v5 = a1;
    if ( v8 )
      goto LABEL_38;
  }
  ++*((_DWORD *)v18 + 5);
  v19 = *(_DWORD *)&v39.Usage;
  *(_QWORD *)(a2 + 472) = v18;
  if ( HIWORD(v19) == 13 && ((unsigned __int16)(v19 - 1) <= 1u || (unsigned __int16)(v19 - 4) <= 1u) )
  {
    v20 = (__int64)a3;
    *(_OWORD *)&v36.Usage = v37;
    *(_QWORD *)&v36.Reserved[11] = Src;
    *(__m128i *)&v36.Reserved[3] = v9;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(v5, a2, a3, v7, &v36) )
      goto LABEL_35;
    Usage = v39.Usage;
  }
  else
  {
    v36 = v39;
    v20 = (__int64)a3;
    if ( (unsigned int)RIMIsInteractiveCtrl(&v36) )
      *(_DWORD *)(a2 + 200) |= 0x100u;
  }
  if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v5, v39.UsagePage, Usage) )
  {
    v23 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
    *(_DWORD *)(a2 + 200) |= 0x40u;
    *(_DWORD *)(a2 + 184) = v23;
  }
  else if ( *(_DWORD *)(v5 + 864) )
  {
    v24 = (int)IsProcessHidRawInputSupported() < 0;
    v25 = 0;
    if ( !v24 )
      v25 = 0x8000;
    v26 = v39.Usage;
    v27 = v25 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
    UsagePage = v39.UsagePage;
    *(_DWORD *)(a2 + 184) = v27;
    if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(UsagePage, v26) )
      goto LABEL_35;
  }
  v29 = RIMIDEAllocateInjectedInfo(v20);
  *(_QWORD *)(a2 + 384) = v29;
  if ( !v29 )
  {
LABEL_35:
    v8 = 1;
    goto LABEL_38;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
  *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x200000u;
  *(_QWORD *)(*(_QWORD *)(a2 + 384) + 88LL) = CurrentProcessWin32Process;
LABEL_38:
  if ( gpfnHidP_FreeCollectionDescription )
    gpfnHidP_FreeCollectionDescription(&v40);
  v40.CollectionDesc = 0LL;
  if ( !v8 )
    return v7;
  if ( v7 )
    RIMFreeHidDesc(v7);
  v33 = *(_QWORD *)(a2 + 480);
  if ( v33 )
  {
    RIMFreePointerDevice(v5, v33);
    *(_QWORD *)(a2 + 480) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
