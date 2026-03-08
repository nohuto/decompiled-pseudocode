/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180057560
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800573C0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180055954 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800AB96C (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800EDB80 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2)
{
  unsigned int v2; // esi
  struct CExpressionValueStack *v3; // r15
  int v5; // ecx
  int v6; // edx
  int v7; // r12d
  char v8; // r13
  char v9; // di
  int *v10; // r10
  int v11; // r8d
  bool v12; // cc
  int v13; // r9d
  float v14; // xmm1_4
  unsigned int *v15; // r11
  _DWORD *v16; // r9
  int *v17; // rdx
  unsigned int v18; // ecx
  int v19; // r14d
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r10
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r10
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  __int128 v33; // xmm1
  __int64 v34; // rdi
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // r14d
  int v43; // ecx
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // r14d
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // eax
  unsigned int v50; // ecx
  int SampledStartingValue; // eax
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  __int64 v54; // rdx
  int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  struct CExpressionValueStack *v60; // [rsp+48h] [rbp-B8h]
  __int128 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+60h] [rbp-A0h]
  __int128 v63; // [rsp+70h] [rbp-90h]
  __int128 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  int v66; // [rsp+98h] [rbp-68h]
  char v67; // [rsp+9Ch] [rbp-64h]
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v69; // [rsp+B0h] [rbp-50h]
  __int128 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+E0h] [rbp-20h] BYREF
  int v73; // [rsp+E8h] [rbp-18h]
  char v74; // [rsp+ECh] [rbp-14h]
  __int128 v75; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v76; // [rsp+100h] [rbp+0h]
  __int128 v77; // [rsp+110h] [rbp+10h]
  __int128 v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+130h] [rbp+30h]
  int v80; // [rsp+138h] [rbp+38h]
  char v81; // [rsp+13Ch] [rbp+3Ch]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v2 = *((_DWORD *)this + 28);
  v3 = a2;
  v60 = a2;
  LODWORD(v59) = v2;
  if ( v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v5 = *((_DWORD *)this + 23);
  v6 = *((_DWORD *)this + 20);
  if ( v5 < v6 )
  {
    v7 = *((_DWORD *)this + 20);
  }
  else
  {
    v7 = v5;
    if ( v5 > *((_DWORD *)this + 21) )
      v7 = *((_DWORD *)this + 21);
  }
  v8 = *((_BYTE *)this + 140);
  v9 = v8 & 8;
  if ( (v8 & 8) != 0 )
    v7 = *((_DWORD *)this + 30) - v7;
  v10 = (int *)((char *)this + 84);
  v11 = v7 - *((_DWORD *)this + 31);
  if ( !*((_BYTE *)this + 96) )
  {
    if ( v5 < v6 )
      goto LABEL_87;
    if ( v5 >= *v10 )
      goto LABEL_13;
    goto LABEL_10;
  }
  v12 = v5 < v6;
  if ( v5 > v6 )
  {
    if ( v5 > *v10 )
    {
LABEL_13:
      v12 = v5 < v6;
      goto LABEL_14;
    }
LABEL_10:
    if ( v11 >= 0 && v11 <= *((_DWORD *)this + 32) && (v8 & 0x20) == 0 )
    {
      v15 = (unsigned int *)((char *)this + 116);
      goto LABEL_27;
    }
    goto LABEL_13;
  }
LABEL_14:
  if ( !v12 )
  {
    v13 = v5;
    if ( v5 > *v10 )
      v13 = *v10;
    goto LABEL_17;
  }
LABEL_87:
  v13 = *((_DWORD *)this + 20);
LABEL_17:
  v14 = (float)*((int *)this + 22);
  if ( (float)((float)v13 / v14) == 0.0 )
  {
    v15 = (unsigned int *)((char *)this + 116);
    if ( v9 )
    {
      v47 = *((_DWORD *)this + 30);
      v48 = v2 - 1;
    }
    else
    {
      v47 = 0;
      v48 = 0;
    }
    *v15 = v48;
    *((_DWORD *)this + 31) = v47;
    *((_DWORD *)this + 32) = 0;
  }
  else
  {
    if ( v5 >= v6 )
    {
      v6 = v5;
      if ( v5 > *v10 )
        v6 = *v10;
    }
    v15 = (unsigned int *)((char *)this + 116);
    v16 = (_DWORD *)((char *)this + 128);
    if ( (float)((float)v6 / v14) == 1.0 )
    {
      if ( v9 )
      {
        v49 = 0;
        v50 = 0;
      }
      else
      {
        v49 = *((_DWORD *)this + 30);
        v50 = v2 - 1;
      }
      *v15 = v50;
      *((_DWORD *)this + 31) = v49;
      *v16 = 0;
    }
    else
    {
      v17 = (int *)*((_QWORD *)this + 13);
      v18 = 0;
      *v15 = 0;
      *((_DWORD *)this + 31) = 0;
      *v16 = 0;
      v19 = *v17;
      while ( 1 )
      {
        v20 = v18 + 1;
        if ( v17[6 * v20] > v19 + v7 )
          break;
        ++v18;
        if ( (unsigned int)v20 >= v2 - 1 )
          goto LABEL_25;
      }
      *v15 = v18;
      *((_DWORD *)this + 31) = v17[6 * v18] - v19;
      *v16 = v17[6 * v20] - v17[6 * v18];
LABEL_25:
      v2 = v59;
      v3 = v60;
    }
  }
  *((_BYTE *)this + 140) = v8 & 0xDF;
LABEL_27:
  v72 = 0LL;
  v73 = 18;
  v74 = 0;
  v65 = 0LL;
  v66 = 18;
  v67 = 0;
  v79 = 0LL;
  v80 = 18;
  v81 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v21 = *v15;
  v22 = *((_QWORD *)this + 13);
  v23 = v22 + 24 * v21;
  if ( (unsigned int)v21 >= v2 - 1 )
  {
    v24 = v22 + 24LL * (unsigned int)(v21 - 1);
  }
  else
  {
    v24 = v22 + 24 * v21;
    v23 = v22 + 24LL * (unsigned int)(v21 + 1);
  }
  v25 = *(_QWORD *)(v24 + 8);
  v26 = *(_DWORD *)(v25 + 20);
  if ( v26 != 1 )
  {
    v39 = v26 - 2;
    if ( v39 )
    {
      if ( v39 != 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      SampledStartingValue = CKeyframeAnimation::GetSampledStartingValue(
                               *(CKeyframeAnimation **)(v25 + 24),
                               (struct CExpressionValue *)&v68);
      v42 = SampledStartingValue;
      if ( SampledStartingValue >= 0 )
        goto LABEL_33;
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, SampledStartingValue, 0x50u, 0LL);
    }
    else
    {
      v40 = CKeyframeAnimation::ProcessInnerExpression(
              *(CKeyframeAnimation **)(v25 + 24),
              *(_DWORD *)(v25 + 32),
              v3,
              (struct CExpressionValue *)&v68);
      v42 = v40;
      if ( v40 >= 0 )
        goto LABEL_33;
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x4Au, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v42, 0x1CDu, 0LL);
    goto LABEL_103;
  }
  v27 = *(_DWORD *)(v25 + 96);
  if ( v27 == 18 )
  {
    LODWORD(v68) = *(_DWORD *)(v25 + 24);
LABEL_32:
    v74 = 1;
    goto LABEL_33;
  }
  if ( v27 == 35 )
  {
    v73 = 35;
    *(_QWORD *)&v68 = *(_QWORD *)(v25 + 24);
    goto LABEL_32;
  }
  switch ( v27 )
  {
    case 11:
      v54 = *(_QWORD *)(v25 + 88);
      v73 = 11;
      v74 = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=(&v72, v54);
      break;
    case 17:
      LOBYTE(v68) = *(_BYTE *)(v25 + 24);
      v73 = 17;
      goto LABEL_32;
    case 42:
      v73 = 42;
      LODWORD(v68) = *(_DWORD *)(v25 + 24);
      goto LABEL_32;
    case 52:
      v73 = 52;
      *(_QWORD *)&v68 = *(_QWORD *)(v25 + 24);
      DWORD2(v68) = *(_DWORD *)(v25 + 32);
      goto LABEL_32;
    case 69:
      v73 = 69;
      v68 = *(_OWORD *)(v25 + 24);
      goto LABEL_32;
    case 70:
      v73 = 70;
      v68 = *(_OWORD *)(v25 + 24);
      goto LABEL_32;
    case 71:
      v73 = 71;
      v68 = *(_OWORD *)(v25 + 24);
      goto LABEL_32;
    case 104:
      v73 = 104;
      v68 = *(_OWORD *)(v25 + 24);
      *(_QWORD *)&v69 = *(_QWORD *)(v25 + 40);
      goto LABEL_32;
    case 265:
      v73 = 265;
      v68 = *(_OWORD *)(v25 + 24);
      v69 = *(_OWORD *)(v25 + 40);
      v70 = *(_OWORD *)(v25 + 56);
      v71 = *(_OWORD *)(v25 + 72);
      goto LABEL_32;
    default:
      break;
  }
LABEL_33:
  v28 = *(_QWORD *)(v23 + 8);
  v29 = *(_DWORD *)(v28 + 20);
  if ( v29 != 1 )
  {
    v43 = v29 - 2;
    if ( v43 )
    {
      if ( v43 != 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v55 = CKeyframeAnimation::GetSampledStartingValue(
              *(CKeyframeAnimation **)(v28 + 24),
              (struct CExpressionValue *)&v61);
      v46 = v55;
      if ( v55 >= 0 )
        goto LABEL_37;
      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x50u, 0LL);
    }
    else
    {
      v44 = CKeyframeAnimation::ProcessInnerExpression(
              *(CKeyframeAnimation **)(v28 + 24),
              *(_DWORD *)(v28 + 32),
              v3,
              (struct CExpressionValue *)&v61);
      v46 = v44;
      if ( v44 >= 0 )
        goto LABEL_37;
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x4Au, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v46, 0x1CEu, 0LL);
LABEL_103:
    v34 = v79;
    goto LABEL_43;
  }
  v30 = *(_DWORD *)(v28 + 96);
  if ( v30 == 18 )
  {
    LODWORD(v61) = *(_DWORD *)(v28 + 24);
    v66 = 18;
LABEL_36:
    v67 = 1;
    goto LABEL_37;
  }
  if ( v30 == 35 )
  {
    v66 = 35;
    *(_QWORD *)&v61 = *(_QWORD *)(v28 + 24);
    goto LABEL_36;
  }
  switch ( v30 )
  {
    case 11:
      v58 = *(_QWORD *)(v28 + 88);
      v66 = 11;
      v67 = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=(&v65, v58);
      break;
    case 17:
      LOBYTE(v61) = *(_BYTE *)(v28 + 24);
      v66 = 17;
      goto LABEL_36;
    case 42:
      v66 = 42;
      LODWORD(v61) = *(_DWORD *)(v28 + 24);
      goto LABEL_36;
    case 52:
      v66 = 52;
      *(_QWORD *)&v61 = *(_QWORD *)(v28 + 24);
      DWORD2(v61) = *(_DWORD *)(v28 + 32);
      goto LABEL_36;
    case 69:
      v66 = 69;
      v61 = *(_OWORD *)(v28 + 24);
      goto LABEL_36;
    case 70:
      v66 = 70;
      v61 = *(_OWORD *)(v28 + 24);
      goto LABEL_36;
    case 71:
      v66 = 71;
      v61 = *(_OWORD *)(v28 + 24);
      goto LABEL_36;
    case 104:
      v66 = 104;
      v61 = *(_OWORD *)(v28 + 24);
      *(_QWORD *)&v62 = *(_QWORD *)(v28 + 40);
      goto LABEL_36;
    case 265:
      v66 = 265;
      v61 = *(_OWORD *)(v28 + 24);
      v62 = *(_OWORD *)(v28 + 40);
      v63 = *(_OWORD *)(v28 + 56);
      v64 = *(_OWORD *)(v28 + 72);
      goto LABEL_36;
    default:
      break;
  }
LABEL_37:
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, __int128 *))(**(_QWORD **)(v23 + 16) + 32LL))(
    *(_QWORD *)(v23 + 16),
    *(_QWORD *)(v24 + 8),
    *(unsigned int *)(*(_QWORD *)(v24 + 8) + 16LL),
    &v68,
    &v61,
    &v75);
  v31 = *((_DWORD *)this + 23);
  v32 = *((_DWORD *)this + 20);
  if ( *((_BYTE *)this + 96) )
  {
    if ( v31 > v32 && v31 <= *((_DWORD *)this + 21) )
      goto LABEL_40;
  }
  else if ( v31 >= v32 && v31 < *((_DWORD *)this + 21) )
  {
    goto LABEL_40;
  }
  *((_BYTE *)this + 140) &= ~2u;
LABEL_40:
  v33 = v76;
  v34 = v79;
  *(_OWORD *)this = v75;
  v35 = v77;
  *((_OWORD *)this + 1) = v33;
  v36 = v78;
  *((_OWORD *)this + 2) = v35;
  *((_OWORD *)this + 3) = v36;
  if ( *((_QWORD *)this + 8) != v34 )
  {
    v59 = v34;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v59);
    v59 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v34;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v59);
    v34 = v79;
  }
  *((_DWORD *)this + 18) = v80;
  *((_BYTE *)this + 76) = v81;
LABEL_43:
  if ( v34 )
  {
    v79 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v37 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
}
