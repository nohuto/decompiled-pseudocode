/*
 * XREFs of ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180066590
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x18002B2E0 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180066ECC (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180066F8C (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180067490 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcmp_0 @ 0x1800F3FFF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801AA3AC (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801AA480 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListEntryBatch::Render(CDrawListEntryBatch *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r15d
  _DWORD *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  void (__fastcall ***v15)(_QWORD); // rbx
  __int64 v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // r13
  __int64 v19; // rdi
  __int64 v20; // r14
  void (__fastcall ***v21)(_QWORD); // r14
  void (__fastcall ***v22)(_QWORD); // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int8 v28; // dl
  unsigned int v29; // r14d
  __int64 v30; // rdi
  int v31; // eax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rdi
  unsigned int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rdx
  unsigned int v43; // ecx
  __int64 v44; // rbx
  __int64 v45; // r14
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  __int64 result; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  _OWORD *v60; // r14
  _OWORD *v61; // r15
  __int64 v62; // rbx
  _DWORD *v63; // rdx
  unsigned int v64; // [rsp+28h] [rbp-E0h]
  void **v65; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v66; // [rsp+50h] [rbp-B8h]
  __int64 v67; // [rsp+58h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A8h]
  __int64 v69; // [rsp+68h] [rbp-A0h]
  _QWORD v70[3]; // [rsp+70h] [rbp-98h]
  int v71; // [rsp+88h] [rbp-80h]
  int v72; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned __int64 v73; // [rsp+90h] [rbp-78h]
  __int16 v74; // [rsp+98h] [rbp-70h]
  char v75; // [rsp+9Ah] [rbp-6Eh]
  __int64 v76; // [rsp+9Ch] [rbp-6Ch]
  __int128 v77; // [rsp+A4h] [rbp-64h]
  int v78; // [rsp+B4h] [rbp-54h]
  int v79; // [rsp+B8h] [rbp-50h]
  void (__fastcall ***v80)(_QWORD); // [rsp+C8h] [rbp-40h]
  __int64 v81; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-30h] BYREF
  __int64 (__fastcall ***v83)(_QWORD, __int64); // [rsp+E0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+130h] [rbp+28h]
  unsigned __int64 v85; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v86; // [rsp+140h] [rbp+38h]
  __int64 v87; // [rsp+148h] [rbp+40h] BYREF
  __int64 v88; // [rsp+150h] [rbp+48h] BYREF

  v1 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)(v1 + 208) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *(_QWORD *)(v1 + 208) = this;
  v66 = (_QWORD *)*((_QWORD *)this + 3);
  v65 = &CD3DBatchExecutionContext::`vftable';
  v3 = v66[75];
  v67 = v3;
  v68 = v66[76];
  v69 = *((_QWORD *)this + 10);
  LOWORD(v85) = 0;
  HIDWORD(v85) = -1;
  v73 = v85;
  v4 = *((_DWORD *)this + 18);
  ++dword_180347258;
  LODWORD(v70[0]) = 0;
  *(_OWORD *)&v70[1] = 0LL;
  v71 = 24;
  v72 = 0x80000000;
  v74 = 0;
  v75 = 3;
  v76 = 0LL;
  v77 = 0uLL;
  v78 = v4;
  v79 = 0;
  if ( CCommonRegistryData::EnableMegaRects )
  {
    v5 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CDrawListEntryBatch *)((char *)this + 88));
    v7 = v5;
    if ( v5 < 0 )
    {
      v64 = 243;
LABEL_130:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v64, 0LL);
      goto LABEL_47;
    }
    v3 = v67;
  }
  v8 = 0LL;
  if ( *((_DWORD *)this + 18) == 1 )
    v8 = (_DWORD *)((char *)this + 76);
  v9 = *((_QWORD *)this + 4);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v67 + 344LL))(v67, v66[274]);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v67 + 288LL))(v67, v66[275], 0LL);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v67 + 152LL))(v67, *(_QWORD *)(v69 + 72), 57LL);
  v10 = v69;
  if ( v9 && (v60 = (_OWORD *)(v9 + 16)) != 0LL )
  {
    v61 = (_OWORD *)(v69 + 288);
    if ( memcmp_0(v60, (const void *)(v69 + 288), 0x50uLL) )
    {
      *(_BYTE *)(v69 + 168) = 1;
      *v61 = *v60;
      *(_OWORD *)(v10 + 304) = v60[1];
      *(_OWORD *)(v10 + 320) = v60[2];
      *(_OWORD *)(v10 + 336) = v60[3];
      *(_OWORD *)(v10 + 352) = v60[4];
    }
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  *(_BYTE *)(v10 + 368) = v11;
  v12 = *(_QWORD *)(v10 + 176) - *((_QWORD *)this + 7);
  if ( !v12 )
    v12 = *(_QWORD *)(v10 + 184) - *((_QWORD *)this + 8);
  if ( v12 )
  {
    *(_BYTE *)(v10 + 168) = 1;
    *(_OWORD *)(v10 + 176) = *(_OWORD *)((char *)this + 56);
  }
  v87 = *(_QWORD *)(v10 + 160);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v67 + 56LL))(v67, 0LL, 1LL, &v87);
  if ( v8 )
  {
    v62 = v69;
    v63 = (_DWORD *)(v69 + 400);
    if ( *v8 == *(_DWORD *)(v69 + 400) )
    {
      if ( !*(_BYTE *)(v69 + 392) )
        goto LABEL_115;
    }
    else
    {
      *v63 = *v8;
      *(_BYTE *)(v62 + 392) = 1;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD, _DWORD))(*(_QWORD *)v66[75] + 384LL))(
      v66[75],
      *(_QWORD *)(v62 + 384),
      0LL,
      0LL,
      v63,
      0,
      0);
    *(_BYTE *)(v62 + 392) = 0;
LABEL_115:
    v88 = *(_QWORD *)(v62 + 384);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v67 + 128LL))(v67, 2LL, 1LL, &v88);
  }
  v13 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)(v13 + 200) )
  {
    v5 = CDrawListEntryBatch::RenderLoop<0>(this, &v65);
    v7 = v5;
    if ( v5 >= 0 )
      goto LABEL_46;
    v64 = 260;
    goto LABEL_130;
  }
  v14 = *(_QWORD *)(v13 + 24);
  v15 = 0LL;
  v16 = *((unsigned int *)this + 12);
  v7 = 0;
  v80 = 0LL;
  v17 = (_QWORD *)(v14 + 8 * v16);
  v18 = (_QWORD *)(v14 + 8LL * *((unsigned int *)this + 13));
  if ( v17 == v18 )
    goto LABEL_45;
  while ( 1 )
  {
    v19 = *v17;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void ***))(*(_QWORD *)*v17 + 32LL))(*v17, &v65) )
      break;
LABEL_42:
    if ( ++v17 == v18 )
      goto LABEL_43;
  }
  v20 = v69;
  LODWORD(v70[0]) |= 0x80000000;
  if ( *(_QWORD *)(v69 + 40) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v69 + 16) + 600LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v69 + 16) + 600LL),
      *(_QWORD *)(v69 + 24),
      0LL);
    *(_QWORD *)(v20 + 40) = 0LL;
    *(_DWORD *)(v20 + 48) = 0;
    if ( v75 )
    {
      if ( v75 == 2 )
      {
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v69 + 112));
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v20 + 64));
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v67 + 160LL))(
          v67,
          DWORD2(v77),
          HIDWORD(v77),
          HIDWORD(v76),
          0,
          v77);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v67 + 104LL))(v67, DWORD1(v77), (unsigned int)v76);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v20 + 64) + 600LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v20 + 64) + 600LL),
        *(_QWORD *)(v20 + 72),
        0LL);
      *(_QWORD *)(v20 + 88) = 0LL;
      *(_DWORD *)(v20 + 96) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v67 + 96LL))(
        v67,
        DWORD2(v77),
        HIDWORD(v76),
        0LL);
    }
    ++v79;
    *(_QWORD *)((char *)&v77 + 4) = 0LL;
    HIDWORD(v77) = 0;
  }
  v21 = v15;
  v22 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
  v80 = v22;
  v15 = v22;
  if ( v22 )
    (**v22)(v22);
  if ( v21 )
    (*v21)[1](v21);
  if ( v70[1] && !(_BYTE)v74 )
  {
    v81 = *(_QWORD *)(v69 + 416);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v67 + 56LL))(v67, 2LL, 1LL, &v81);
    v82 = *(_QWORD *)(v69 + 704);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v67 + 128LL))(v67, 1LL, 1LL, &v82);
    LOBYTE(v74) = 1;
  }
  v23 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), void ***, int *))(*v15)[5])(v15, &v65, &v72);
  v25 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1BFu, 0LL);
  }
  else
  {
    v26 = v69;
    if ( *(_BYTE *)(v69 + 168) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)v66[75] + 384LL))(
        v66[75],
        *(_QWORD *)(v69 + 160),
        0LL,
        0LL,
        v69 + 176,
        0,
        0);
      *(_BYTE *)(v26 + 168) = 0;
    }
    v27 = (unsigned int)v72;
    if ( v72 >= 0 )
    {
      v28 = (v72 & 4) != 0;
      v85 = v28;
      BYTE1(v85) = (v72 & 8) != 0;
      BYTE2(v85) = (v72 & 2) != 0;
      HIDWORD(v85) = (v72 & 1) != 0 ? 4 : 2;
      BYTE3(v85) = (v72 & 0x10) != 0;
      LOBYTE(v86) = (v72 & 4) != 0;
      v27 = HIDWORD(v85);
      HIDWORD(v86) = HIDWORD(v85);
      BYTE1(v86) = BYTE3(v85);
      if ( HIDWORD(v85) != HIDWORD(v73) || v28 != (_BYTE)v73 || BYTE3(v85) != BYTE1(v73) )
      {
        v52 = 190LL;
        if ( BYTE3(v85) )
          v52 = 194LL;
        if ( HIDWORD(v85) == 2 )
        {
          v53 = 0LL;
          if ( v28 )
            v53 = 2LL;
        }
        else if ( HIDWORD(v85) == 4 )
        {
          if ( v28 )
            v53 = 3LL;
          else
            v53 = 1LL;
        }
        else
        {
          v53 = 4LL;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v67 + 136LL))(v67, v66[v53 + v52]);
        v73 = v86;
        HIBYTE(v74) = 1;
      }
    }
  }
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v25, 0x13Bu, 0LL);
    v29 = 0;
    v14 = 0LL;
  }
  else
  {
    v14 = (__int64)v15;
    v29 = 0;
  }
  v7 = 0;
  if ( v14 )
  {
    v30 = v70[2];
    if ( v70[2] )
    {
      if ( *(_DWORD *)(v70[2] + 48LL) )
      {
        while ( 1 )
        {
          v55 = (*(__int64 (__fastcall **)(_QWORD, void ***, _QWORD))(**(_QWORD **)(v30 + 32) + 48LL))(
                  *(_QWORD *)(v30 + 32),
                  &v65,
                  v17[v29 + 1]);
          v7 = v55;
          if ( v55 < 0 )
            break;
          if ( ++v29 >= *(_DWORD *)(v30 + 48) )
            goto LABEL_94;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v55, 0x4Fu, 0LL);
      }
LABEL_94:
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x1EAu, 0LL);
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(__int64, void ***, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, &v65, *v17);
      v7 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v31, 0x1EFu, 0LL);
    }
  }
  if ( v70[2] )
  {
    v56 = *(unsigned int *)(v70[2] + 48LL);
    ++dword_180347260;
    dword_180347264 += v56;
    v70[2] = 0LL;
    v17 += v56;
  }
  if ( v7 >= 0 )
  {
    LODWORD(v70[0]) = 0;
    goto LABEL_42;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x16Bu, 0LL);
LABEL_43:
  if ( v15 )
    (*v15)[1](v15);
LABEL_45:
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x100u, 0LL);
  else
LABEL_46:
    CD3DBatchExecutionContext::Flush(&v65, 0x2000LL);
LABEL_47:
  if ( v79 )
    dword_180347370 += v79;
  v32 = (_QWORD *)v69;
  if ( *(_QWORD *)(v69 + 40) )
  {
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v69 + 16));
    v32 = (_QWORD *)v69;
  }
  if ( v32[11] )
  {
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v32 + 8));
    v32 = (_QWORD *)v69;
  }
  if ( v32[17] )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v32 + 14));
  v33 = *((_QWORD *)this + 4);
  if ( v33 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  }
  v34 = *((_DWORD *)this + 12);
  v35 = *((_DWORD *)this + 13);
  if ( v34 != v35 )
    dword_18034725C += v35 - v34;
  dword_18034737C += *((_DWORD *)this + 30);
  v36 = *((_QWORD *)this + 14);
  v37 = v36 + *((_QWORD *)this + 15);
  while ( v36 != v37 )
  {
    v54 = *(_QWORD **)(*((_QWORD *)this + 12) + 8 * (v36 & (*((_QWORD *)this + 13) - 1LL)));
    if ( v54[4] )
    {
      CHWDrawListEntry::ReplacePrimitive(*v54, &v83, v54 + 4, v54 + 5);
      if ( v83 )
        std::default_delete<CShape>::operator()(v57, v83);
    }
    ++v36;
  }
  std::deque<CMegaRect>::_Tidy((_QWORD *)this + 11);
  v39 = *((_QWORD *)this + 3);
  if ( *(CDrawListEntryBatch **)(v39 + 208) != this )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v85 = (unsigned __int64)this;
  *(_QWORD *)(v39 + 208) = 0LL;
  v40 = *(_DWORD *)(v39 + 168);
  v41 = v40 + 1;
  if ( v40 + 1 < v40 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v41 <= *(_DWORD *)(v39 + 164) )
    {
      *(_QWORD *)(*(_QWORD *)(v39 + 144) + 8LL * v40) = this;
      *(_DWORD *)(v39 + 168) = v41;
      goto LABEL_65;
    }
    v58 = DynArrayImpl<0>::AddMultipleAndSet(v39 + 144, 8LL, 1LL, &v85);
    if ( v58 >= 0 )
LABEL_65:
      _InterlockedIncrement((volatile signed __int32 *)(v85 + 16));
    else
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0xC0u, 0LL);
  }
  v42 = *((unsigned int *)this + 12);
  v43 = *((_DWORD *)this + 13);
  if ( (unsigned int)v42 < v43 )
  {
    v44 = 8 * v42;
    v45 = v43 - (unsigned int)v42;
    do
    {
      (*(void (__fastcall **)(_QWORD, CDrawListEntryBatch *))(**(_QWORD **)(v44 + *(_QWORD *)(v39 + 24)) + 48LL))(
        *(_QWORD *)(v44 + *(_QWORD *)(v39 + 24)),
        this);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v44 + *(_QWORD *)(v39 + 24)) + 8LL))(*(_QWORD *)(v44 + *(_QWORD *)(v39 + 24)));
      v44 += 8LL;
      --v45;
    }
    while ( v45 );
  }
  if ( (*(_DWORD *)(v39 + 216))-- == 1 )
  {
    v47 = *(_DWORD *)(v39 + 60);
    if ( v47 <= *(_DWORD *)(v39 + 48) - *(_DWORD *)(v39 + 56) )
      v47 = *(_DWORD *)(v39 + 48) - *(_DWORD *)(v39 + 56);
    *(_DWORD *)(v39 + 60) = v47;
    v48 = *(_DWORD *)(v39 + 100);
    if ( v48 <= *(_DWORD *)(v39 + 88) - *(_DWORD *)(v39 + 96) )
      v48 = *(_DWORD *)(v39 + 88) - *(_DWORD *)(v39 + 96);
    *(_DWORD *)(v39 + 100) = v48;
    v49 = *(_DWORD *)(v39 + 140);
    if ( v49 <= *(_DWORD *)(v39 + 128) - *(_DWORD *)(v39 + 136) )
      v49 = *(_DWORD *)(v39 + 128) - *(_DWORD *)(v39 + 136);
    *(_DWORD *)(v39 + 140) = v49;
    v50 = *(_DWORD *)(v39 + 180);
    if ( v50 <= *(_DWORD *)(v39 + 168) - *(_DWORD *)(v39 + 176) )
      v50 = *(_DWORD *)(v39 + 168) - *(_DWORD *)(v39 + 176);
    *(_DWORD *)(v39 + 180) = v50;
    *(_DWORD *)(v39 + 48) = 0;
    *(_DWORD *)(v39 + 56) = 0;
  }
  result = (unsigned int)v7;
  *((_QWORD *)this + 6) = -1LL;
  return result;
}
