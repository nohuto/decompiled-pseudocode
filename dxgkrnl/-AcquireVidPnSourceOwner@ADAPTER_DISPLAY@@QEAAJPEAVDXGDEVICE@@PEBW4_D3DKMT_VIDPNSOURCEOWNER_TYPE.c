__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        PERESOURCE **this,
        struct _ERESOURCE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  signed __int64 v10; // rdi
  struct DXGPROCESS *Current; // rbx
  struct _LUID *v12; // rdx
  DXGADAPTER *v13; // rcx
  bool IsAdapterSessionized; // al
  __int64 v15; // r11
  ERESOURCE_THREAD OwnerThread; // rcx
  __int64 v17; // rbx
  unsigned int *v18; // rdi
  signed __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  PERESOURCE *v23; // r10
  __int64 v24; // r9
  struct DXGDEVICE *v25; // r11
  signed __int64 v26; // rbp
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 v27; // ebx
  __int64 v28; // r15
  PERESOURCE *v29; // rdx
  __int64 v30; // rcx
  struct DXGDEVICE *v31; // r9
  PERESOURCE *v32; // rcx
  int v34; // r8d
  int v35; // eax
  int v36; // r8d
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r15
  struct DXGDEVICE *v54; // rax
  __int64 v55; // r9
  __int64 v56; // r8
  const wchar_t *v57; // r9
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rdi
  struct DXGDEVICE **v64; // r15
  BLTQUEUE *v65; // rcx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+30h] [rbp-58h]
  __int64 v69; // [rsp+38h] [rbp-50h]
  int v70; // [rsp+50h] [rbp-38h] BYREF
  __int64 v71; // [rsp+58h] [rbp-30h]
  signed __int64 i; // [rsp+90h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 1975LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 1975LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = a5;
  if ( *((_DWORD *)this + 24) < a5 )
  {
    v37 = a5;
    WdLogSingleEntry3(2LL, a2, a5, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Invalid Output (0x%I64x) specified, returning 0x%I64x",
      (__int64)a2,
      v37,
      -1073741811LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry5(2LL, a2, a3, a4, a3, -1073741811LL);
    v57 = L"Device 0x%I64x: Invalid parameter (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
    v69 = (__int64)a3;
    v68 = (__int64)a4;
    v67 = (__int64)a3;
    goto LABEL_110;
  }
  v70 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 2009LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 2009LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 224LL))(&v70, 0LL, 0LL);
  if ( !v70 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741790LL);
    return 3221225506LL;
  }
  v13 = (DXGADAPTER *)this[2];
  LODWORD(i) = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v13, v12, (unsigned int *)&i, 0LL);
  if ( !IsAdapterSessionized )
  {
    if ( !(_DWORD)v15 )
      goto LABEL_11;
    WdLogSingleEntry5(3LL, a2, v15, IsAdapterSessionized, (unsigned int)i, -1073741790LL);
    LOBYTE(v51) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v51) )
    {
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why remote app is taking console output ownership");
      goto LABEL_63;
    }
    return 3221225506LL;
  }
  if ( !(_DWORD)v15 )
  {
    v38 = (unsigned int)i;
    v39 = IsAdapterSessionized;
    WdLogSingleEntry5(2LL, a2, 0LL, IsAdapterSessionized, (unsigned int)i, -1073741790LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Console session is trying to acquire ownership of a session adapter, device 0x%I64x, RemoteSession = 0x%I"
                "64x, bIsAdapterSessionized = 0x%I64x, AdapterSessionId = 0x%I64x, returning 0x%I64x",
      (__int64)a2,
      0LL,
      v39,
      v38,
      -1073741790LL);
    LOBYTE(v40) = 1;
    if ( !(unsigned __int8)WdIsDebuggerPresent(v40) )
      return 3221225506LL;
    DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why console app is taking sessionized output ownership");
LABEL_63:
    __debugbreak();
    return 3221225506LL;
  }
  CurrentProcess = PsGetCurrentProcess(IsAdapterSessionized);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( (_DWORD)i != ProcessSessionId )
  {
    v44 = PsGetCurrentProcess(v43);
    v45 = PsGetProcessSessionId(v44);
    v46 = (unsigned int)i;
    WdLogSingleEntry4(2LL, a2, (unsigned int)i, v45, -1073741790LL);
    v48 = PsGetCurrentProcess(v47);
    v49 = PsGetProcessSessionId(v48);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Remote session trying acquire ownership of a different sessions adapter, device 0x%I64x, AdapterSession  "
                "= 0x%I64x, Current Session  = 0x%I64x",
      (__int64)a2,
      v46,
      v49,
      -1073741790LL,
      0LL);
    LOBYTE(v50) = 1;
    if ( !(unsigned __int8)WdIsDebuggerPresent(v50) )
      return 3221225506LL;
    DbgPrintEx(
      0x65u,
      0,
      "Breaking in so rcoote can check why remote app is trying to take ownership of a remote session ouput");
    goto LABEL_63;
  }
LABEL_11:
  OwnerThread = a2->OwnerTable[1].OwnerThread;
  if ( !OwnerThread
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(OwnerThread + 2928) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 2100LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->GetRenderCore()->IsCoreResourceExclusiveOwner())",
      2100LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = 0LL;
  if ( !(_DWORD)v10 )
  {
    v26 = (char *)a3 - a4;
    goto LABEL_29;
  }
  v18 = (unsigned int *)a4;
  v19 = (char *)a3 - a4;
  for ( i = (char *)a3 - a4; ; v19 = i )
  {
    v20 = *(int *)((char *)v18 + v19);
    if ( *(unsigned int *)((char *)v18 + v19) != 1
      && *(unsigned int *)((char *)v18 + v19) != 2
      && *(unsigned int *)((char *)v18 + v19) - 3 >= 2 )
    {
      WdLogSingleEntry5(2LL, a2, v17, *(unsigned int *)&a4[4 * v17], v20, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Invalid OwnerType (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x",
        (__int64)a2,
        v17,
        *(unsigned int *)&a4[4 * v17],
        a3[v17],
        -1073741811LL);
      return 3221225485LL;
    }
    if ( *((_DWORD *)this + 24) <= *v18 )
    {
      WdLogSingleEntry5(2LL, a2, v17, *v18, v20, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Invalid VidPnSourceId (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x",
        (__int64)a2,
        v17,
        *(unsigned int *)&a4[4 * v17],
        a3[v17],
        -1073741811LL);
      return 3221225485LL;
    }
    if ( (PERESOURCE *)a2[18].SystemResourcesList.Blink != this[2] )
    {
      WdLogSingleEntry1(1LL, 2140LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice->GetDisplayAdapter(pVidPnSourceId[i]) == this->GetAdapter()",
        2140LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[16][500 * *v18]) )
    {
      v62 = *(unsigned int *)&a4[4 * v17];
      LODWORD(v17) = -1071774910;
      WdLogSingleEntry2(3LL, v62, -1071774910LL);
      return (unsigned int)v17;
    }
    v21 = 0LL;
    if ( !(_DWORD)v17 )
      goto LABEL_21;
    do
    {
      v52 = *(unsigned int *)&a4[4 * v21];
      v53 = (unsigned int)v21;
      if ( *v18 == (_DWORD)v52 )
      {
        WdLogSingleEntry5(2LL, a2, v17, (unsigned int)v21, v52, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: All VidPnSourceId have to be distinct but entry 0x%I64x and 0x%I64x have identical va"
                    "lue of 0x%I64x, returning 0x%I64x",
          (__int64)a2,
          v17,
          v53,
          *(unsigned int *)&a4[4 * v53],
          -1073741811LL);
        return 3221225485LL;
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < (unsigned int)v17 );
    v19 = i;
LABEL_21:
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop((ADAPTER_DISPLAY *)this, *v18) )
    {
      v55 = *(unsigned int *)&a4[4 * v17];
      v56 = (unsigned int)v17;
      v17 = -1071774972LL;
      goto LABEL_91;
    }
    v22 = *(int *)((char *)v18 + v19);
    if ( (_DWORD)v22 == 1 )
    {
      if ( LODWORD(a2[4].OwnerEntry.OwnerThread) )
        goto LABEL_24;
      WdLogSingleEntry5(2LL, a2, v17, *(unsigned int *)&a4[4 * v17], v22, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_SHARED (0x%I64x 0x%I64x 0x%I64x), r"
                  "eturning 0x%I64x",
        (__int64)a2,
        v17,
        *(unsigned int *)&a4[4 * v17],
        a3[v17],
        -1073741811LL);
      return 3221225485LL;
    }
    if ( (_DWORD)v22 == 3 && LODWORD(a2[4].OwnerEntry.OwnerThread) )
    {
      WdLogSingleEntry5(2LL, a2, v17, *(unsigned int *)&a4[4 * v17], v22, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: No-Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI(0x%I64x 0x%I64x 0x%"
                  "I64x), returning 0x%I64x",
        (__int64)a2,
        v17,
        *(unsigned int *)&a4[4 * v17],
        a3[v17],
        -1073741811LL);
      return 3221225485LL;
    }
LABEL_24:
    v23 = this[16];
    v24 = 500LL * *v18;
    v25 = (struct DXGDEVICE *)v23[v24 + 91];
    if ( !v25 )
    {
      if ( LODWORD(v23[v24 + 92]) )
      {
        WdLogSingleEntry1(1LL, 2317LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
          2317LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_27;
    }
    v34 = (int)v23[v24 + 92];
    if ( v25 == (struct DXGDEVICE *)a2 )
    {
      if ( v34 == (_DWORD)v22 )
        goto LABEL_27;
      WdLogSingleEntry5(
        2LL,
        a2,
        *(unsigned int *)&a4[4 * v17],
        SLODWORD(v23[500 * *(unsigned int *)&a4[4 * v17] + 92]),
        v22,
        -1073741811LL);
      v69 = a3[v17];
      v68 = SLODWORD(this[16][500 * *(unsigned int *)&a4[4 * v17] + 92]);
      v67 = *(unsigned int *)&a4[4 * v17];
LABEL_86:
      v57 = L"Device 0x%I64x: VidPn 0x%I64x can't change owner type from 0x%I64x to 0x%I64x, returning 0x%I64x";
LABEL_110:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v57, (__int64)a2, v67, v68, v69, -1073741811LL);
      return 3221225485LL;
    }
    if ( v34 != 1 )
      goto LABEL_89;
    if ( (_DWORD)v22 == 1 )
      break;
    v54 = (struct DXGDEVICE *)v23[v24 + 93];
    if ( v54 == (struct DXGDEVICE *)a2 )
    {
      if ( (_DWORD)v22 == 4 )
        goto LABEL_27;
      WdLogSingleEntry5(2LL, a2, *(unsigned int *)&a4[4 * v17], 4LL, v22, -1073741811LL);
      v69 = a3[v17];
      v68 = 4LL;
      v67 = *(unsigned int *)&a4[4 * v17];
      goto LABEL_86;
    }
    if ( v54 )
    {
      v55 = *(int *)((char *)v18 + v19);
      v17 = -1071774910LL;
      v56 = *v18;
LABEL_91:
      WdLogSingleEntry4(3LL, a2, v56, v55, v17);
      return (unsigned int)v17;
    }
LABEL_27:
    v17 = (unsigned int)(v17 + 1);
    ++v18;
    if ( (unsigned int)v17 >= a5 )
    {
      v26 = i;
      v10 = a5;
LABEL_29:
      if ( DXGDEVICE::HasContextWithHintType((DXGDEVICE *)a2, D3DKMT_CLIENTHINT_OPENGL) )
        WdLogSingleEntry1(4LL, a2);
      if ( !(_DWORD)v10 )
        return 0LL;
      v27 = a6.0;
      v28 = (unsigned int)v10;
      v71 = (unsigned int)v10;
      i = (unsigned int)v10;
      while ( 1 )
      {
        v29 = this[16];
        v30 = 500LL * *(unsigned int *)a4;
        v31 = (struct DXGDEVICE *)v29[v30 + 91];
        if ( v31 )
        {
          v35 = *(_DWORD *)&a4[v26];
          if ( v35 == 4 )
            goto LABEL_37;
          v36 = (int)v29[v30 + 92];
          if ( v31 == (struct DXGDEVICE *)a2 )
          {
            if ( v36 != v35 )
            {
              WdLogSingleEntry1(1LL, 2356LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType == pVidPnSourceOwnerType[i]",
                2356LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            goto LABEL_37;
          }
          if ( v36 != 1 || v35 == 1 )
          {
            WdLogSingleEntry1(1LL, 2366LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"(D3DKMT_VIDPNSOURCEOWNER_SHARED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType) &&"
                        " (D3DKMT_VIDPNSOURCEOWNER_SHARED != pVidPnSourceOwnerType[i])",
              2366LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
            (ADAPTER_DISPLAY *)this,
            (struct DXGDEVICE *)this[16][500 * *(unsigned int *)a4 + 91],
            *(_DWORD *)a4);
        }
        else if ( LODWORD(v29[v30 + 92]) )
        {
          WdLogSingleEntry1(1LL, 2376LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
            2376LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[15], *(unsigned int *)a4, 0LL, 0LL, 0, 1);
LABEL_37:
        if ( *(_DWORD *)&a4[v26] == 4 )
        {
          this[16][500 * *(unsigned int *)a4 + 93] = a2;
        }
        else
        {
          v32 = this[56];
          if ( v32 )
          {
            v63 = (__int64)v32[1] + 2920 * *(unsigned int *)a4;
            v64 = (struct DXGDEVICE **)(v63 + 360);
            if ( (*(_DWORD *)(v63 + 952) & 1) == 0 || a2 != (struct _ERESOURCE *)*v64 )
            {
              v65 = (BLTQUEUE *)((char *)v32[1] + 2920 * *(unsigned int *)a4);
              *(_QWORD *)(v63 + 584) = a2;
              *(_BYTE *)(v63 + 568) = 1;
              if ( (int)BLTQUEUE::IssueCommand(v65) >= 0 && a2 != (struct _ERESOURCE *)*v64 )
              {
                *v64 = (struct DXGDEVICE *)a2;
                *(_OWORD *)(v63 + 320) = 0LL;
                *(_OWORD *)(v63 + 336) = 0LL;
                *(_DWORD *)(v63 + 952) &= ~4u;
              }
            }
            v28 = v71;
            v10 = i;
          }
          this[16][500 * *(unsigned int *)a4 + 91] = a2;
          LODWORD(this[16][500 * *(unsigned int *)a4 + 92]) = *(_DWORD *)&a4[v26];
          HIDWORD(this[16][500 * *(unsigned int *)a4 + 92]) = v27;
        }
        this[16][500 * *(unsigned int *)a4 + 94] = (PERESOURCE)a2->ExclusiveWaiters;
        ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, *(_DWORD *)a4);
        WdLogSingleEntry4(4LL, a2, *(unsigned int *)a4, *(int *)&a4[v26], v28);
        if ( *(_DWORD *)&a4[v26] == 3 )
        {
          CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
          if ( CddInterface )
            (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
        }
        a4 += 4;
        i = --v10;
        if ( !v10 )
          return 0LL;
      }
    }
  }
  if ( (*((_DWORD *)a2->ExclusiveWaiters + 106) & 4) != 0 && (*(_DWORD *)(*((_QWORD *)v25 + 5) + 424LL) & 4) != 0 )
  {
    v58 = *(unsigned int *)&a4[4 * v17];
    LODWORD(v17) = -1071774910;
    WdLogSingleEntry5(3LL, a2, SLODWORD(v23[500 * v58 + 92]), v58, v22, -1071774910LL);
    LOBYTE(v59) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v59) )
    {
      DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
      __debugbreak();
    }
  }
  else
  {
LABEL_89:
    v60 = a3[v17];
    v61 = *(unsigned int *)&a4[4 * v17];
    LODWORD(v17) = -1071774910;
    WdLogSingleEntry5(3LL, a2, SLODWORD(v23[500 * v61 + 92]), v61, v60, -1071774910LL);
  }
  return (unsigned int)v17;
}
