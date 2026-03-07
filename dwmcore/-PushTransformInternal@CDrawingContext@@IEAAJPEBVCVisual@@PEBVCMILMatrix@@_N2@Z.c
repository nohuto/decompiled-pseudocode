__int64 __fastcall CDrawingContext::PushTransformInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct CMILMatrix *a3,
        char a4,
        bool a5)
{
  char v5; // r13
  __int64 v10; // rax
  void *v11; // rbx
  int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int *v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  void *v18; // rbx
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // eax
  int v23; // r14d
  _BYTE *v24; // rcx
  char v25; // dl
  char v26; // al
  bool v27; // r15
  __int64 v28; // rax
  void *v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rax
  void *v33; // rbx
  unsigned int v34; // r15d
  unsigned int v35; // eax
  unsigned int v36; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // eax
  unsigned int v51; // ecx
  unsigned __int64 v52; // rcx
  void *v53; // rbx
  int v54; // eax
  unsigned __int64 v55; // rax
  int v56; // eax
  unsigned int v57; // ecx
  void *v58; // rbx
  int v59; // eax
  unsigned int v60; // r12d
  int v61; // eax
  unsigned int v62; // ecx
  unsigned __int64 v63; // rax
  void *v64; // rbx
  char v65; // r8
  unsigned int v66; // r13d
  int v67; // eax
  unsigned int v68; // ecx
  unsigned __int64 v69; // rax
  void *v70; // rbx
  HANDLE v71; // rax
  unsigned int v72; // ecx
  HANDLE ProcessHeap; // rax
  __int64 v74; // r8
  HANDLE v75; // rax
  HANDLE v76; // rax
  void *v77; // [rsp+30h] [rbp-91h] BYREF
  __int128 v78; // [rsp+38h] [rbp-89h]
  _OWORD v79[4]; // [rsp+50h] [rbp-71h] BYREF
  int v80; // [rsp+90h] [rbp-31h]
  _OWORD v81[4]; // [rsp+A0h] [rbp-21h] BYREF
  int v82; // [rsp+E0h] [rbp+1Fh]

  v5 = 0;
  if ( !a5 )
  {
LABEL_10:
    v15 = (unsigned int *)((char *)this + 400);
    v16 = *((_DWORD *)this + 100);
    if ( v16 && a4 )
    {
      v82 = 0;
      v80 = 0;
      v38 = (unsigned int)(v16 - 1);
      v39 = *((_QWORD *)this + 52);
      v40 = *(_OWORD *)(68 * v38 + v39 + 16);
      v81[0] = *(_OWORD *)(68 * v38 + v39);
      v41 = *(_OWORD *)(68 * v38 + v39 + 32);
      v81[1] = v40;
      v42 = *(_OWORD *)(68 * v38 + v39 + 48);
      LODWORD(v39) = *(_DWORD *)(68 * v38 + v39 + 64);
      v81[2] = v41;
      v43 = *(_OWORD *)a3;
      v82 = v39;
      LODWORD(v39) = *((_DWORD *)a3 + 16);
      v81[3] = v42;
      v44 = *((_OWORD *)a3 + 1);
      v80 = v39;
      v79[0] = v43;
      v45 = *((_OWORD *)a3 + 2);
      v79[1] = v44;
      v46 = *((_OWORD *)a3 + 3);
      v79[2] = v45;
      v79[3] = v46;
      CMILMatrix::Multiply((CMILMatrix *)v79, (const struct CMILMatrix *)v81);
      v47 = CWatermarkStack<CMILMatrix,8,2,8>::Push((char *)this + 400, v79);
      v19 = v47;
      v23 = v47;
      if ( v47 >= 0 )
        goto LABEL_19;
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x45u, 0LL);
      goto LABEL_78;
    }
    v17 = *((unsigned int *)this + 101);
    v18 = 0LL;
    v19 = 0;
    v77 = 0LL;
    if ( v16 != (_DWORD)v17 )
      goto LABEL_13;
    v49 = 2 * v17;
    *(_QWORD *)&v78 = 2 * v17;
    if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
    {
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0x64u, 0LL);
    }
    else
    {
      if ( v49 <= 8 )
      {
        v49 = 8;
        *(_QWORD *)&v78 = 8LL;
      }
      v50 = HrMalloc(0x44uLL, v49, &v77);
      v19 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x6Bu, 0LL);
        v18 = v77;
      }
      else
      {
        v52 = 68LL * *v15;
        if ( v52 <= 0xFFFFFFFF )
        {
          v53 = v77;
          v19 = 0;
          memcpy_0(v77, *((const void **)this + 52), (unsigned int)v52);
          operator delete(*((void **)this + 52));
          v54 = v78;
          *((_QWORD *)this + 52) = v53;
          v18 = 0LL;
          *((_DWORD *)this + 101) = v54;
LABEL_13:
          v20 = *((_QWORD *)this + 52);
          v21 = 68LL * *v15;
          *(_OWORD *)(v21 + v20) = *(_OWORD *)a3;
          *(_OWORD *)(v21 + v20 + 16) = *((_OWORD *)a3 + 1);
          *(_OWORD *)(v21 + v20 + 32) = *((_OWORD *)a3 + 2);
          *(_OWORD *)(v21 + v20 + 48) = *((_OWORD *)a3 + 3);
          *(_DWORD *)(v21 + v20 + 64) = *((_DWORD *)a3 + 16);
          v22 = *((_DWORD *)this + 106);
          if ( v22 <= ++*v15 )
            v22 = *v15;
          *((_DWORD *)this + 106) = v22;
          goto LABEL_16;
        }
        v19 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, -2147024362, 0x6Du, 0LL);
        v18 = v77;
      }
    }
LABEL_16:
    if ( v18 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v18);
    }
    v23 = v19;
    if ( v19 >= 0 )
    {
LABEL_19:
      if ( *v15 )
        v24 = (_BYTE *)(*((_QWORD *)this + 52) + 68LL * (*v15 - 1));
      else
        v24 = &CMILMatrix::Identity;
      v25 = v24[65];
      v26 = (char)(4 * v25) >> 6;
      if ( v26 )
      {
        if ( v26 != 1 )
          v26 = 0;
      }
      else
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v24 + 3) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(*((_DWORD *)v24 + 7) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*((_DWORD *)v24 + 15) & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          v26 = 0;
          v65 = 48;
        }
        else
        {
          v26 = 1;
          v65 = 16;
        }
        v24[65] = v65 | v25 & 0xCF;
      }
      v27 = v26 == 0;
      v28 = *((unsigned int *)this + 109);
      v29 = 0LL;
      v23 = 0;
      v77 = 0LL;
      if ( *((_DWORD *)this + 108) == (_DWORD)v28 )
      {
        v55 = 2 * v28;
        *(_QWORD *)&v78 = v55;
        if ( v55 > 0xFFFFFFFF )
        {
          v23 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
          goto LABEL_28;
        }
        if ( (unsigned int)v55 <= 0x40 )
        {
          LODWORD(v55) = 64;
          *(_QWORD *)&v78 = 64LL;
        }
        v56 = HrMalloc(1uLL, (unsigned int)v55, &v77);
        v23 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x6Bu, 0LL);
          v29 = v77;
          goto LABEL_28;
        }
        v58 = v77;
        v23 = 0;
        memcpy_0(v77, *((const void **)this + 56), *((unsigned int *)this + 108));
        operator delete(*((void **)this + 56));
        v59 = v78;
        *((_QWORD *)this + 56) = v58;
        v29 = 0LL;
        *((_DWORD *)this + 109) = v59;
      }
      *(_BYTE *)(*((unsigned int *)this + 108) + *((_QWORD *)this + 56)) = v27;
      v30 = *((_DWORD *)this + 114);
      v31 = ++*((_DWORD *)this + 108);
      if ( v30 <= v31 )
        v30 = *((_DWORD *)this + 108);
      *((_DWORD *)this + 114) = v30;
LABEL_28:
      if ( v29 )
      {
        v75 = GetProcessHeap();
        HeapFree(v75, 0, v29);
      }
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v23, 0xD25u, 0LL);
LABEL_87:
        if ( *v15 )
          --*v15;
        goto LABEL_89;
      }
      if ( !a2 )
        return (unsigned int)v23;
      v32 = *((unsigned int *)this + 117);
      v33 = 0LL;
      v34 = *v15;
      v23 = 0;
      v77 = 0LL;
      if ( *((_DWORD *)this + 116) != (_DWORD)v32 )
        goto LABEL_33;
      v60 = 2 * v32;
      if ( (unsigned __int64)(2 * v32) > 0xFFFFFFFF )
      {
        v23 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024362, 0x64u, 0LL);
      }
      else
      {
        if ( v60 <= 0x40 )
          v60 = 64;
        v61 = HrMalloc(4uLL, v60, &v77);
        v23 = v61;
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x6Bu, 0LL);
          v33 = v77;
        }
        else
        {
          v63 = 4LL * *((unsigned int *)this + 116);
          if ( v63 <= 0xFFFFFFFF )
          {
            v64 = v77;
            v23 = 0;
            memcpy_0(v77, *((const void **)this + 60), (unsigned int)v63);
            operator delete(*((void **)this + 60));
            *((_QWORD *)this + 60) = v64;
            v33 = 0LL;
            *((_DWORD *)this + 117) = v60;
LABEL_33:
            *(_DWORD *)(*((_QWORD *)this + 60) + 4LL * *((unsigned int *)this + 116)) = v34;
            v35 = *((_DWORD *)this + 122);
            v36 = ++*((_DWORD *)this + 116);
            if ( v35 <= v36 )
              v35 = *((_DWORD *)this + 116);
            *((_DWORD *)this + 122) = v35;
            goto LABEL_36;
          }
          v23 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
          v33 = v77;
        }
      }
LABEL_36:
      if ( v33 )
      {
        v76 = GetProcessHeap();
        HeapFree(v76, 0, v33);
      }
      if ( v23 >= 0 )
        return (unsigned int)v23;
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v23, 0xD2Bu, 0LL);
      CWatermarkStack<bool,64,2,10>::Pop((char *)this + 432);
      goto LABEL_87;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x36u, 0LL);
LABEL_78:
    MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v19, 0xD21u, 0LL);
LABEL_89:
    if ( v5 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, 0LL, v74);
    return (unsigned int)v23;
  }
  v10 = *((unsigned int *)this + 93);
  v11 = 0LL;
  v12 = 0;
  LODWORD(v78) = 5;
  *((_QWORD *)&v78 + 1) = a2;
  v77 = 0LL;
  if ( *((_DWORD *)this + 92) != (_DWORD)v10 )
    goto LABEL_3;
  v66 = 2 * v10;
  if ( (unsigned __int64)(2 * v10) > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x40u, 0LL, 0, -2147024362, 0x64u, 0LL);
    goto LABEL_6;
  }
  if ( v66 <= 0x40 )
    v66 = 64;
  v67 = HrMalloc(0x10uLL, v66, &v77);
  v12 = v67;
  if ( v67 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x6Bu, 0LL);
    goto LABEL_71;
  }
  v69 = 16LL * *((unsigned int *)this + 92);
  if ( v69 > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
LABEL_71:
    v11 = v77;
    goto LABEL_6;
  }
  v70 = v77;
  v12 = 0;
  memcpy_0(v77, *((const void **)this + 48), (unsigned int)v69);
  operator delete(*((void **)this + 48));
  *((_QWORD *)this + 48) = v70;
  v11 = 0LL;
  *((_DWORD *)this + 93) = v66;
LABEL_3:
  *(_OWORD *)(*((_QWORD *)this + 48) + 16LL * *((unsigned int *)this + 92)) = v78;
  v13 = *((_DWORD *)this + 98);
  v14 = ++*((_DWORD *)this + 92);
  if ( v13 <= v14 )
    v13 = *((_DWORD *)this + 92);
  *((_DWORD *)this + 98) = v13;
LABEL_6:
  if ( v11 )
  {
    v71 = GetProcessHeap();
    HeapFree(v71, 0, v11);
  }
  if ( v12 >= 0 )
  {
    v5 = 1;
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0xD1Cu, 0LL);
  return (unsigned int)v12;
}
