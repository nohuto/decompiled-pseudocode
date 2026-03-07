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
  __int64 v16; // rax
  int v17; // r15d
  int v18; // eax
  int WindowCloakState; // eax
  unsigned int Prop; // r15d
  _OWORD *v21; // rax
  struct tagRECT *v22; // r8
  __int128 v23; // xmm1
  __int64 v24; // rcx
  int v25; // eax
  struct tagRECT *v26; // r15
  struct tagPOINT *v27; // rax
  const struct tagWND *v28; // rax
  int v30; // [rsp+48h] [rbp-41h] BYREF
  int started; // [rsp+4Ch] [rbp-3Dh]
  int v32; // [rsp+50h] [rbp-39h]
  int v33; // [rsp+54h] [rbp-35h]
  int v34; // [rsp+58h] [rbp-31h] BYREF
  struct tagWND *v35; // [rsp+60h] [rbp-29h]
  struct tagRECT v36; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v37[6]; // [rsp+78h] [rbp-11h] BYREF
  int v38; // [rsp+E8h] [rbp+5Fh] BYREF
  struct tagPOINT v39; // [rsp+F0h] [rbp+67h] BYREF
  struct tagRECT *v40; // [rsp+100h] [rbp+77h]

  v40 = a4;
  v39 = a2;
  v6 = *a4;
  v7 = 0LL;
  v34 = -2;
  v37[2] = 0LL;
  v8 = a2;
  v30 = 0;
  v9 = (const struct tagWND *)a1;
  v38 = 0;
  v10 = 0LL;
  v35 = 0LL;
  started = 0;
  v12 = 0;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v14 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v35 = a1[13];
    started = CanPointStartResize(v35, v14, a2);
    v7 = 0LL;
  }
  v15 = gptiCurrent;
  v37[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v37;
  v37[1] = 0LL;
LABEL_52:
  if ( v9 && !v12 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways((__int64)v9, (__int64)v37);
      v16 = *(_QWORD *)(a3 + 40);
      v15 = 0LL;
      if ( !*(_DWORD *)(v16 + 176) && !*(_DWORD *)(v16 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      v17 = IsCompositionInputWindow(v9);
      if ( !v17 && (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 0x10) == 0 )
        goto LABEL_51;
      v15 = *((_QWORD *)v9 + 5);
      if ( (*(_BYTE *)(v15 + 26) & 8) != 0 && (*(_BYTE *)(v15 + 24) & 0x20) != 0 )
        goto LABEL_51;
      v18 = IsWindowDesktopComposed(v9);
      v7 = 0LL;
      if ( v18 )
      {
        WindowCloakState = GetWindowCloakState((struct tagTHREADINFO **)v9);
        v7 = 0LL;
        if ( WindowCloakState )
          goto LABEL_51;
      }
      if ( started && TouchTargetingIsSpecialTarget(v35, v9) )
        goto LABEL_51;
      v30 = v7;
      if ( *(_DWORD *)(a3 + 88) != (_DWORD)v7 || v17 )
      {
        Prop = GetProp((__int64)v9, (unsigned __int16)gatomPtrTargetFlags, 1u);
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
            v32 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3228);
            LODWORD(v7) = 0;
          }
          if ( gbIgnoreStressedOutStuff == (_DWORD)v7 && *(_DWORD *)(a3 + 88) != 1 )
          {
            v33 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3229);
          }
        }
        v21 = (_OWORD *)*((_QWORD *)v9 + 27);
        v22 = *(struct tagRECT **)(a3 + 40);
        *(_OWORD *)(a3 + 104) = *v21;
        *(_OWORD *)(a3 + 120) = v21[1];
        *(_OWORD *)(a3 + 136) = v21[2];
        v23 = v21[3];
        *(_QWORD *)(a3 + 96) = a3 + 104;
        *(_OWORD *)(a3 + 152) = v23;
        ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v39, v22, 1);
        TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v40, 1);
        v8 = v39;
      }
      v36 = *v40;
      v24 = (__int64)xxxWindowHitTestFromTargetingProperty(v9, v8, a3, &v38, (unsigned __int16)Prop, (__int64)&v36);
      if ( *(_DWORD *)(a3 + 88) < 0xFu )
      {
        v25 = v38;
      }
      else
      {
        v25 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v38 = 0;
      }
      if ( v25 )
      {
        v36 = *v40;
        v24 = xxxTargetingHitTest((__int64)v9, a2, v8, a3, &v30, &v36, Prop, a5);
      }
      if ( !v10 && v24 )
        v10 = v24;
      if ( *(const struct tagWND **)(a3 + 168) == v9 )
        v12 = 1;
      xxxSendNCHitTest(
        (float **)v9,
        a2,
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        (struct tagPOINT *)(a3 + 48),
        &v34,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v26 = v40;
      if ( v34 != -1 )
        ClipContact(v9, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), (unsigned int)v30, v40);
      v7 = 0LL;
      if ( *(_DWORD *)(a3 + 84) )
      {
        v15 = *(_QWORD *)(a3 + 96);
        if ( v15 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform((const struct _D3DMATRIX *)v15, &v39, *(struct tagRECT **)(a3 + 40), 0);
            v27 = *(struct tagPOINT **)(a3 + 40);
            v7 = 0LL;
            v8 = v39;
            *(_QWORD *)(a3 + 96) = 0LL;
            *v26 = v6;
            v27[4] = a2;
          }
        }
      }
      if ( !v12 )
      {
LABEL_51:
        v9 = (const struct tagWND *)*((_QWORD *)v9 + 11);
        goto LABEL_52;
      }
      v28 = (const struct tagWND *)*((_QWORD *)v9 + 15);
      if ( !v28 || v28 == v9 )
        break;
      v9 = (const struct tagWND *)*((_QWORD *)v9 + 15);
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))ThreadUnlock1)(v15, a2, v7);
  return v10;
}
