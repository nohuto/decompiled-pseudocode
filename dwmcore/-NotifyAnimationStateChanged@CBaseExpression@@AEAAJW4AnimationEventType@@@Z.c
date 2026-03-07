__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // edi
  const struct SubchannelMaskInfo *v6; // r8
  float v7; // xmm0_4
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int16 v20; // cx
  void *v21; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  int v25; // edi
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // edi
  int v32; // edi
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int16 v35; // ax
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rax
  unsigned int v39; // ecx
  __int64 v40; // rax
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rax
  __int128 v46; // xmm0
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  __int64 v49; // rax
  unsigned int v50; // [rsp+20h] [rbp-E0h]
  unsigned int v51; // [rsp+20h] [rbp-E0h]
  void *v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+30h] [rbp-D0h]
  __int128 *v54; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+58h] [rbp-A8h]
  __int128 v57; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h]
  _OWORD v59[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h]
  __int128 v62; // [rsp+E0h] [rbp-20h]
  __int128 v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp+0h] BYREF
  int v65; // [rsp+108h] [rbp+8h]
  char v66; // [rsp+10Ch] [rbp+Ch]
  _DWORD v67[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v68; // [rsp+150h] [rbp+50h] BYREF
  int v69; // [rsp+158h] [rbp+58h]
  char v70; // [rsp+15Ch] [rbp+5Ch]

  v4 = 0;
  memset_0(v67, 0, sizeof(v67));
  v5 = 18;
  v68 = 0LL;
  v69 = 18;
  v70 = 0;
  if ( a2 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 8LL, a1);
    if ( (*(_BYTE *)(a1 + 232) & 4) != 0 )
    {
      AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)a1);
      CAnimationLoggingManager::LogAnimationEnded(
        AnimationLoggingManagerNoRef,
        *(_QWORD *)(a1 + 168),
        v42,
        *(unsigned int *)(a1 + 208),
        *(_DWORD *)(a1 + 192),
        0);
    }
  }
  else if ( a2 == 2 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 9LL, a1);
  }
  if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
  {
    memset_0(&v60, 0, 0x40uLL);
    v64 = 0LL;
    v65 = 18;
    v66 = 0;
    if ( (a2 != 8 || (*(_BYTE *)(a1 + 216) & 2) != 0 && *(_BYTE *)(a1 + 148))
      && a2 != 16
      && CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)v67) )
    {
      v6 = *(const struct SubchannelMaskInfo **)(a1 + 200);
      if ( v6 )
      {
        v29 = CBaseExpression::MergeValueWithMask(
                (const struct CExpressionValue *)v67,
                (const struct CExpressionValue *)(a1 + 72),
                v6,
                (struct CExpressionValue *)&v60);
        v4 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x654u, 0LL);
          goto LABEL_31;
        }
      }
      else if ( *(_DWORD *)(a1 + 152) != 11 )
      {
        CExpressionValue::CopyFrom((CExpressionValue *)&v60, (const struct CExpressionValue *)(a1 + 72));
      }
      v5 = v69;
      LODWORD(v7) = v60;
    }
    else
    {
      v67[0] = 0;
      v7 = 0.0;
      LODWORD(v60) = 0;
      a2 = 16;
      v69 = 18;
      v70 = 1;
      v65 = 18;
      v66 = 1;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1240LL);
    v9 = *(_QWORD *)(v8 + 40);
    if ( v5 > 69 )
    {
      v25 = v5 - 70;
      if ( !v25 )
      {
        v26 = *(_QWORD *)(a1 + 48);
        if ( v26 )
          v27 = *(_DWORD *)(v26 + 76);
        else
          v27 = 0;
        v28 = v27;
        v20 = 5;
        v55 = v28;
        v56 = *(unsigned int *)(a1 + 64);
        v54 = &v57;
        v21 = &unk_1803393EA;
        v57 = v60;
        goto LABEL_27;
      }
      v31 = v25 - 1;
      if ( v31 )
      {
        v32 = v31 - 33;
        if ( !v32 )
        {
          v38 = *(_QWORD *)(a1 + 48);
          if ( v38 )
            v39 = *(_DWORD *)(v38 + 76);
          else
            v39 = 0;
          v40 = v39;
          v20 = 7;
          v55 = v40;
          v56 = *(unsigned int *)(a1 + 64);
          v54 = &v57;
          v21 = &unk_1803393F6;
          v57 = v60;
          v58 = v61;
          goto LABEL_27;
        }
        if ( v32 != 161 )
          goto LABEL_61;
        v33 = *(_QWORD *)(a1 + 48);
        if ( v33 )
          v34 = *(_DWORD *)(v33 + 76);
        else
          v34 = 0;
        v55 = v34;
        v56 = *(unsigned int *)(a1 + 64);
        v54 = v59;
        v59[0] = v60;
        v59[1] = v61;
        v53 = a2;
        v52 = &unk_1803393FC;
        v35 = 8;
        v59[2] = v62;
        v59[3] = v63;
LABEL_53:
        LOWORD(v50) = v35;
        goto LABEL_28;
      }
      v49 = *(_QWORD *)(a1 + 48);
      v46 = v60;
      if ( v49 )
        v48 = *(_DWORD *)(v49 + 76);
      else
        v48 = 0;
      v54 = &v57;
      v55 = v48;
      v56 = *(unsigned int *)(a1 + 64);
      v35 = 6;
      v53 = a2;
      v52 = &unk_1803393F0;
    }
    else
    {
      if ( v5 != 69 )
      {
        v10 = v5 - 11;
        if ( !v10 )
        {
          CPathData::GetPathData(*(_QWORD *)(a1 + 136), &v55);
          v43 = *(_QWORD *)(a1 + 48);
          if ( v43 )
            v44 = *(_DWORD *)(v43 + 76);
          else
            v44 = 0;
          *(_QWORD *)&v57 = v44;
          *((_QWORD *)&v57 + 1) = *(unsigned int *)(a1 + 64);
          LOWORD(v50) = 9;
          v16 = CoreUICallSend(v9, &v57, 2LL, 0LL, v50, &unk_180339402, a2, v56);
          goto LABEL_29;
        }
        v11 = v10 - 6;
        if ( !v11 )
        {
          v36 = *(_QWORD *)(a1 + 48);
          if ( v36 )
            v37 = *(_DWORD *)(v36 + 76);
          else
            v37 = 0;
          v55 = v37;
          v56 = *(unsigned int *)(a1 + 64);
          LOWORD(v50) = 0;
          v16 = CoreUICallSend(
                  v9,
                  &v55,
                  2LL,
                  0LL,
                  v50,
                  &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_nojTCorKGaq7usLSlUi67Vt3n6A,
                  a2,
                  (unsigned __int8)v60);
          goto LABEL_29;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          v23 = *(_QWORD *)(a1 + 48);
          if ( v23 )
            v24 = *(_DWORD *)(v23 + 76);
          else
            v24 = 0;
          v55 = v24;
          v56 = *(unsigned int *)(a1 + 64);
          LOWORD(v50) = 1;
          v16 = CoreUICallSend(v9, &v55, 2LL, 0LL, v50, &unk_1803393D4, a2, v7);
          goto LABEL_29;
        }
        v13 = v12 - 17;
        if ( !v13 )
        {
          v14 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)&v57 = __PAIR64__(DWORD1(v60), LODWORD(v7));
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 76);
          else
            v15 = 0;
          v55 = v15;
          v56 = *(unsigned int *)(a1 + 64);
          LOWORD(v50) = 2;
          v16 = CoreUICallSend(v9, &v55, 2LL, 0LL, v50, &unk_1803393D8, a2, &v57);
          goto LABEL_29;
        }
        if ( v13 == 17 )
        {
          v17 = *(_QWORD *)(a1 + 48);
          if ( v17 )
            v18 = *(_DWORD *)(v17 + 76);
          else
            v18 = 0;
          DWORD2(v57) = DWORD2(v60);
          v19 = v18;
          v20 = 3;
          v55 = v19;
          v56 = *(unsigned int *)(a1 + 64);
          v54 = &v57;
          v21 = &unk_1803393DE;
          *(_QWORD *)&v57 = v60;
LABEL_27:
          v53 = a2;
          v52 = v21;
          LOWORD(v50) = v20;
LABEL_28:
          v16 = CoreUICallSend(v9, &v55, 2LL, 0LL, v50, v52, v53, v54);
LABEL_29:
          LODWORD(v8) = 0x80000000;
          v4 = v16;
          if ( (int)(v16 + 0x80000000) >= 0 && v16 != -2018375675 )
          {
            v51 = 1767;
LABEL_62:
            MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v4, v51, 0LL);
            goto LABEL_31;
          }
          v4 = 0;
LABEL_31:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v64);
          goto LABEL_32;
        }
LABEL_61:
        v4 = -2147024809;
        v51 = 1760;
        goto LABEL_62;
      }
      v45 = *(_QWORD *)(a1 + 48);
      v46 = v60;
      if ( v45 )
        v47 = *(_DWORD *)(v45 + 76);
      else
        v47 = 0;
      v55 = v47;
      v56 = *(unsigned int *)(a1 + 64);
      v54 = &v57;
      v53 = a2;
      v52 = &unk_1803393E4;
      v35 = 4;
    }
    v57 = v46;
    goto LABEL_53;
  }
LABEL_32:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v68);
  return v4;
}
