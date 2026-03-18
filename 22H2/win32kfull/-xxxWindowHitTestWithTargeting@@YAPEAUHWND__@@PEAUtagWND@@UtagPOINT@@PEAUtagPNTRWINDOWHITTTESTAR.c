/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5F80
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1C01E4E40 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBU.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5494 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00419D0 (ThreadLockExchangeAlways.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01E3AF8 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01E3F4C (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01E3F84 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C01E46BC (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C01E4830 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E5250 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5494 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E5C0C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 */

__int64 __fastcall xxxWindowHitTestWithTargeting(
        struct tagWND **a1,
        struct tagPOINT a2,
        __int64 a3,
        struct tagRECT *a4,
        int a5)
{
  struct tagRECT v6; // xmm6
  __int64 v7; // r8
  struct tagPOINT v8; // rbx
  const struct tagWND *v9; // rsi
  __int64 v10; // r12
  int v12; // r13d
  struct tagTOUCHTARGETINGCONTACT *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // r15d
  int v19; // eax
  __int64 v20; // r9
  int WindowCloakState; // eax
  unsigned int Prop; // r15d
  _OWORD *v23; // rax
  struct tagRECT *v24; // r8
  __int128 v25; // xmm1
  __int64 v26; // rcx
  int v27; // eax
  struct tagRECT *v28; // r15
  struct tagPOINT *v29; // rax
  const struct tagWND *v30; // rax
  int v32; // [rsp+48h] [rbp-41h] BYREF
  int started; // [rsp+4Ch] [rbp-3Dh]
  int v34; // [rsp+50h] [rbp-39h]
  int v35; // [rsp+54h] [rbp-35h]
  int v36; // [rsp+58h] [rbp-31h] BYREF
  struct tagWND *v37; // [rsp+60h] [rbp-29h]
  struct tagRECT v38; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v39[6]; // [rsp+78h] [rbp-11h] BYREF
  int v40; // [rsp+E8h] [rbp+5Fh] BYREF
  struct tagPOINT v41; // [rsp+F0h] [rbp+67h] BYREF
  struct tagRECT *v42; // [rsp+100h] [rbp+77h]

  v42 = a4;
  v41 = a2;
  v6 = *a4;
  v7 = 0LL;
  v36 = -2;
  v39[2] = 0LL;
  v8 = a2;
  v32 = 0;
  v9 = (const struct tagWND *)a1;
  v40 = 0;
  v10 = 0LL;
  v37 = 0LL;
  started = 0;
  v12 = 0;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v14 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v37 = a1[13];
    started = CanPointStartResize(v37, v14, a2);
    v7 = 0LL;
  }
  v15 = gptiCurrent;
  v39[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v39;
  v39[1] = 0LL;
LABEL_52:
  if ( v9 && !v12 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways((__int64)v9, (__int64)v39);
      v17 = *(_QWORD *)(a3 + 40);
      v15 = 0LL;
      if ( !*(_DWORD *)(v17 + 176) && !*(_DWORD *)(v17 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      v18 = IsCompositionInputWindow(v9, *(_QWORD *)&a2, v7, v16);
      if ( !v18 && (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 0x10) == 0 )
        goto LABEL_51;
      v15 = *((_QWORD *)v9 + 5);
      if ( (*(_BYTE *)(v15 + 26) & 8) != 0 && (*(_BYTE *)(v15 + 24) & 0x20) != 0 )
        goto LABEL_51;
      v19 = IsWindowDesktopComposed(v9);
      v7 = 0LL;
      if ( v19 )
      {
        WindowCloakState = GetWindowCloakState((struct tagTHREADINFO **)v9);
        v7 = 0LL;
        if ( WindowCloakState )
          goto LABEL_51;
      }
      if ( started && TouchTargetingIsSpecialTarget(v37, v9) )
        goto LABEL_51;
      v32 = v7;
      if ( *(_DWORD *)(a3 + 88) != (_DWORD)v7 || v18 )
      {
        Prop = GetProp((__int64)v9, (unsigned __int16)gatomPtrTargetFlags, 1LL, v20);
        v7 = 0LL;
      }
      else
      {
        Prop = 4;
      }
      if ( *(_DWORD *)(a3 + 84) != (_DWORD)v7 && *((_QWORD *)v9 + 27) != v7 )
      {
        if ( gbIgnoreStressedOutStuff == (_DWORD)v7 )
        {
          if ( *(_QWORD *)(a3 + 96) != v7 )
          {
            v34 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3228);
            LODWORD(v7) = 0;
          }
          if ( gbIgnoreStressedOutStuff == (_DWORD)v7 && *(_DWORD *)(a3 + 88) != 1 )
          {
            v35 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3229);
          }
        }
        v23 = (_OWORD *)*((_QWORD *)v9 + 27);
        v24 = *(struct tagRECT **)(a3 + 40);
        *(_OWORD *)(a3 + 104) = *v23;
        *(_OWORD *)(a3 + 120) = v23[1];
        *(_OWORD *)(a3 + 136) = v23[2];
        v25 = v23[3];
        *(_QWORD *)(a3 + 96) = a3 + 104;
        *(_OWORD *)(a3 + 152) = v25;
        ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v41, v24, 1);
        TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v42, 1);
        v8 = v41;
      }
      v38 = *v42;
      v26 = (__int64)xxxWindowHitTestFromTargetingProperty(
                       (unsigned __int64 *)v9,
                       v8,
                       a3,
                       &v40,
                       (unsigned __int16)Prop,
                       (__int64)&v38);
      if ( *(_DWORD *)(a3 + 88) < 0xFu )
      {
        v27 = v40;
      }
      else
      {
        v27 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v40 = 0;
      }
      if ( v27 )
      {
        v38 = *v42;
        v26 = xxxTargetingHitTest((__int64)v9, a2, v8, a3, &v32, &v38, Prop, a5);
      }
      if ( !v10 && v26 )
        v10 = v26;
      if ( *(const struct tagWND **)(a3 + 168) == v9 )
        v12 = 1;
      xxxSendNCHitTest(
        (unsigned __int64 *)v9,
        a2,
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        (struct tagPOINT *)(a3 + 48),
        &v36,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v28 = v42;
      if ( v36 != -1 )
        ClipContact(v9, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), (unsigned int)v32, v42);
      v7 = 0LL;
      if ( *(_DWORD *)(a3 + 84) )
      {
        v15 = *(_QWORD *)(a3 + 96);
        if ( v15 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform((const struct _D3DMATRIX *)v15, &v41, *(struct tagRECT **)(a3 + 40), 0);
            v29 = *(struct tagPOINT **)(a3 + 40);
            v7 = 0LL;
            v8 = v41;
            *(_QWORD *)(a3 + 96) = 0LL;
            *v28 = v6;
            v29[4] = a2;
          }
        }
      }
      if ( !v12 )
      {
LABEL_51:
        v9 = (const struct tagWND *)*((_QWORD *)v9 + 11);
        goto LABEL_52;
      }
      v30 = (const struct tagWND *)*((_QWORD *)v9 + 15);
      if ( !v30 || v30 == v9 )
        break;
      v9 = (const struct tagWND *)*((_QWORD *)v9 + 15);
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))ThreadUnlock1)(v15, a2, v7);
  return v10;
}
