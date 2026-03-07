__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rbx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v4; // r12
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // edx
  _OWORD *v15; // r9
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v19; // r9
  _QWORD *v20; // r13
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v21; // r14
  char *v22; // rdi
  __int64 v23; // r8
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v24; // rcx
  char *v25; // r12
  _DWORD *v26; // r15
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v27; // rcx
  char *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rdx
  void (__fastcall ***v39)(_QWORD, __int64); // rcx
  int v40; // edi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rdi
  DMMVIDPN *Container; // rax
  int v46; // edi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rax
  int v58; // [rsp+50h] [rbp-68h] BYREF
  __int64 v59; // [rsp+58h] [rbp-60h]
  char v60; // [rsp+60h] [rbp-58h]
  char *v63; // [rsp+D0h] [rbp+18h]
  __int64 (__fastcall ***v64)(_QWORD, __int64); // [rsp+D8h] [rbp+20h] BYREF

  v3 = 0LL;
  v58 = -1;
  v4 = a2;
  v5 = this;
  v59 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v60 = 1;
    v58 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 7006);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v4;
  *(_QWORD *)(v10 + 32) = v5;
  if ( !v4 )
  {
    WdLogSingleEntry2(2LL, 0LL, v5);
    v40 = -1071774960;
LABEL_107:
    LODWORD(v3) = v40;
    goto LABEL_52;
  }
  if ( !v5 || *((_DWORD *)v5 + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL, v5);
    v40 = -1071774968;
    goto LABEL_107;
  }
  if ( (unsigned int)(*((_DWORD *)v4 + 1) - 3) > 1 )
    goto LABEL_7;
  v41 = *((_QWORD *)v5 + 14);
  if ( !*(_QWORD *)(v41 + 40) )
    WdLogSingleEntry0(1LL);
  v42 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v41 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v42 + 8) )
    WdLogSingleEntry0(1LL);
  v43 = *(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL);
  if ( *(int *)(v43 + 2820) < 1200 && *(_BYTE *)(v43 + 2832) )
  {
    WdLogSingleEntry0(1LL);
    v40 = -1071774960;
    goto LABEL_107;
  }
  v44 = *((_QWORD *)v5 + 14);
  if ( !*(_QWORD *)(v44 + 40) )
    WdLogSingleEntry0(1LL);
  Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v44 + 40) + 64LL);
  if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, *(_DWORD *)(*((_QWORD *)v5 + 14) + 24LL)) )
  {
    WdLogSingleEntry0(2LL);
    v40 = -1071774960;
    goto LABEL_107;
  }
LABEL_7:
  v11 = operator new[](0x70uLL, 0x4E506456u, 256LL);
  v12 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry1(6LL, v5);
    v46 = -1073741801;
    goto LABEL_60;
  }
  v13 = *(_DWORD *)v4;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_QWORD *)v11 = &SetElement::`vftable';
  *(_DWORD *)(v11 + 24) = v13;
  if ( v13 == -1 )
  {
    WdLogSingleEntry1(1LL, 240LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED", 240LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)(v12 + 40) = 0LL;
  *(_QWORD *)v12 = &DMMVIDPNSOURCEMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *(_DWORD *)(v12 + 56) = 1833173006;
  *(_QWORD *)(v12 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
  *(_QWORD *)(v12 + 48) = &DMMVIDPNSOURCEMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODE>'};
  *(_QWORD *)(v12 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
  *(_DWORD *)(v12 + 72) = 0;
  *(_OWORD *)(v12 + 76) = 0LL;
  *(_OWORD *)(v12 + 92) = 0LL;
  v14 = *((_DWORD *)v4 + 1);
  if ( v14 == 1 )
  {
LABEL_11:
    v15 = v4 + 2;
    if ( *((_DWORD *)v4 + 2) < 0x64u || *((_DWORD *)v4 + 3) < 0x64u )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)v4 + 2), *((unsigned int *)v4 + 3), v15);
      v46 = -1071774918;
    }
    else if ( *((_DWORD *)v4 + 4) < 0x64u || *((_DWORD *)v4 + 5) < 0x64u )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)v4 + 4), *((unsigned int *)v4 + 5), v15);
      v46 = -1071774917;
    }
    else if ( *((_DWORD *)v4 + 6) )
    {
      if ( *((_DWORD *)v4 + 7) )
      {
        v16 = *((_DWORD *)v4 + 8);
        if ( v16 && v16 <= 5 )
        {
          v17 = *((_DWORD *)v4 + 9);
          if ( v17 && v17 <= 3 )
          {
            *(_DWORD *)(v12 + 72) = v14;
            *(_OWORD *)(v12 + 76) = *v15;
            *(_OWORD *)(v12 + 92) = *(_OWORD *)(v4 + 6);
            goto LABEL_22;
          }
          WdLogSingleEntry2(2LL, *((int *)v4 + 9), v4 + 2);
          v46 = -1071774913;
        }
        else
        {
          WdLogSingleEntry2(2LL, *((int *)v4 + 8), v4 + 2);
          v46 = -1071774914;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, 0LL, v4 + 2);
        v46 = -1071774915;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, 0LL, v4 + 2);
      v46 = -1071774916;
    }
    WdLogSingleEntry0(3LL);
    v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v54, v53, v55, v56);
    v3 = (void (__fastcall ***)(_QWORD, __int64))v12;
    v57[3] = v12;
    v57[4] = v5;
    v57[5] = v46;
LABEL_60:
    v39 = v3;
    LODWORD(v3) = v46;
    if ( v39 )
      (**v39)(v39, 1LL);
    goto LABEL_52;
  }
  if ( v14 != 2 )
  {
    if ( (unsigned int)(v14 - 3) >= 2 )
    {
      WdLogSingleEntry3(2LL, v12, v5, *((int *)v4 + 1));
      v46 = -1071774960;
      v3 = (void (__fastcall ***)(_QWORD, __int64))v12;
      goto LABEL_60;
    }
    goto LABEL_11;
  }
  *(_DWORD *)(v12 + 72) = 2;
  *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v12 + 76) = v4[2];
LABEL_22:
  v18 = (__int64)v5 + 32;
  v64 = (__int64 (__fastcall ***)(_QWORD, __int64))v12;
  v19 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v5 + 6);
  v20 = (_QWORD *)((char *)v5 + 48);
  v63 = (char *)v5 + 32;
  v21 = v5;
  v22 = (char *)v19 - 8;
  if ( v19 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v5 + 48) )
  {
    v23 = (__int64)v19 - 8;
    if ( v19 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)8 )
    {
      while ( *(_DWORD *)(v23 + 24) != *(_DWORD *)(v12 + 24) )
      {
        v24 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v23 + 8);
        v23 = (__int64)v24 - 8;
        if ( v24 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v5 + 48) )
          v23 = 0LL;
        if ( !v23 )
          goto LABEL_28;
      }
      if ( DMMVIDPNSOURCEMODE::operator==(v23, v12) )
        goto LABEL_92;
      WdLogSingleEntry3(2LL, *(unsigned int *)(v12 + 24), v12, v5);
      v46 = -1071774940;
LABEL_93:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v64);
      v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v48, v50, v51);
      v52[3] = v4;
      v52[4] = v5;
      v52[5] = v46;
      goto LABEL_60;
    }
LABEL_28:
    v18 = (__int64)v5 + 32;
  }
  v25 = (char *)v5 + 48;
  if ( v19 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v5 + 48)
    && v19 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)8 )
  {
    v26 = (_DWORD *)(v12 + 76);
    while ( 1 )
    {
      v27 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((unsigned int *)v22 + 18);
      if ( (_DWORD)v27 != *(_DWORD *)(v12 + 72) )
        goto LABEL_35;
      if ( (_DWORD)v27 != 1 )
      {
        v38 = (unsigned int)((_DWORD)v27 - 2);
        if ( (_DWORD)v27 == 2 )
        {
          if ( *((_DWORD *)v22 + 19) == *v26 )
            goto LABEL_91;
          goto LABEL_35;
        }
        if ( (unsigned int)((_DWORD)v27 - 3) >= 2 )
        {
          if ( (unsigned int)((_DWORD)v27 - 2) <= 2 )
            WdLogSingleEntry0(1LL);
          goto LABEL_35;
        }
      }
      if ( *((_DWORD *)v22 + 19) == *v26 && *((_DWORD *)v22 + 20) == *(_DWORD *)(v12 + 80) )
      {
        v27 = v21;
        v38 = v12;
        if ( *((_DWORD *)v22 + 21) == *(_DWORD *)(v12 + 84)
          && *((_DWORD *)v22 + 22) == *(_DWORD *)(v12 + 88)
          && *((_DWORD *)v22 + 23) == *(_DWORD *)(v12 + 92)
          && *((_DWORD *)v22 + 24) == *(_DWORD *)(v12 + 96)
          && *((_DWORD *)v22 + 25) == *(_DWORD *)(v12 + 100)
          && *((_DWORD *)v22 + 26) == *(_DWORD *)(v12 + 104) )
        {
LABEL_91:
          v5 = this;
          v4 = a2;
LABEL_92:
          v47 = WdLogNewEntry5_WdTrace(v27, v38, v18, v19);
          v46 = -1071774956;
          *(_QWORD *)(v47 + 24) = v12;
          *(_QWORD *)(v47 + 32) = v21;
          goto LABEL_93;
        }
      }
LABEL_35:
      v28 = (char *)*((_QWORD *)v22 + 1);
      v22 = v28 - 8;
      if ( v28 == v25 )
        v22 = 0LL;
      if ( !v22 )
      {
        v18 = (__int64)v63;
        break;
      }
    }
  }
  if ( (_QWORD *)*v20 == v20 || (v29 = *v20 - 8LL, *v20 == 8LL) )
  {
LABEL_45:
    v31 = (_QWORD *)v20[1];
    v32 = (_QWORD *)(v12 + 8);
    if ( (_QWORD *)*v31 != v20 )
      __fastfail(3u);
    *v32 = v20;
    *(_QWORD *)(v12 + 16) = v31;
    *v31 = v32;
    v20[1] = v32;
    ++*(_QWORD *)(v18 + 32);
  }
  else
  {
    while ( v29 != v12 )
    {
      v30 = *(_QWORD **)(v29 + 8);
      v29 = (__int64)(v30 - 1);
      if ( v30 == v20 )
        v29 = 0LL;
      if ( !v29 )
        goto LABEL_45;
    }
    WdLogSingleEntry1(1LL, 108LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
    v18 = (__int64)v63;
  }
  if ( *(_QWORD *)(v12 + 40) )
  {
    WdLogSingleEntry0(1LL);
    v18 = (__int64)v63;
  }
  v33 = a2 - 4;
  *(_QWORD *)(v12 + 40) = v21;
  if ( *((_DWORD *)a2 - 4) == 305419896 )
  {
    v34 = *((_QWORD *)v33 + 1);
    if ( !v34
      || DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
           v18,
           v34) )
    {
      operator delete(v33);
    }
    else
    {
      WdLogSingleEntry2(2LL, v33, v21);
      LODWORD(v3) = -1071774928;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v33);
    LODWORD(v3) = -1071774960;
  }
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v58);
  return (unsigned int)v3;
}
