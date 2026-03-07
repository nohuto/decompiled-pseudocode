// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        union _LARGE_INTEGER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        union _LARGE_INTEGER *a9,
        struct VIDMM_ALLOC **a10,
        struct _VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  unsigned __int64 *p_QuadPart; // r15
  unsigned int v15; // edx
  unsigned int v16; // eax
  union _LARGE_INTEGER v17; // rax
  unsigned int v18; // edi
  unsigned int v19; // r11d
  struct VIDMM_ALLOC **v20; // r14
  union _LARGE_INTEGER v21; // r13
  struct _D3DDDI_ALLOCATIONLIST *v22; // r9
  struct DXGALLOCATION *v23; // rax
  struct VIDMM_ALLOC *v24; // r10
  __int64 v25; // r15
  _DWORD *v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rdx
  unsigned __int64 *v29; // rcx
  union _LARGE_INTEGER v30; // r8
  __int64 *i; // rcx
  __int64 v32; // rax
  struct VIDMM_ALLOC *v33; // rdi
  struct VIDMM_ALLOC *v34; // r14
  unsigned int v35; // eax
  struct _VIDMM_PRIMARIES_REFERENCES *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // ebx
  __int64 v40; // rdi
  __int64 v41; // rcx
  struct VIDMM_SEGMENT *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  struct VIDMM_ALLOC *v45; // rsi
  __int64 v46; // rcx
  int v47; // eax
  _DWORD *v48; // rdx
  int v49; // r14d
  __int64 v50; // rcx
  int v51; // eax
  LONGLONG v52; // rdx
  union _LARGE_INTEGER v53; // rdi
  unsigned int v54; // edi
  __int64 v56; // rcx
  __int64 v57; // rax
  union _LARGE_INTEGER v58; // r12
  union _LARGE_INTEGER v59; // r14
  __int64 v60; // r15
  __int64 j; // rsi
  __int64 v62; // rdx
  __int64 v63; // r8
  int *v64; // r9
  signed __int32 v65[8]; // [rsp+0h] [rbp-398h] BYREF
  unsigned __int64 v66; // [rsp+20h] [rbp-378h]
  __int64 v67; // [rsp+28h] [rbp-370h]
  struct VIDMM_SEGMENT *v68; // [rsp+30h] [rbp-368h]
  unsigned __int8 v69[8]; // [rsp+38h] [rbp-360h]
  unsigned int v70; // [rsp+50h] [rbp-348h]
  int v71; // [rsp+54h] [rbp-344h]
  struct VIDMM_ALLOC *v72; // [rsp+58h] [rbp-340h]
  unsigned __int64 *v73; // [rsp+60h] [rbp-338h]
  VIDMM_SEGMENT *v74; // [rsp+68h] [rbp-330h]
  union _LARGE_INTEGER v75; // [rsp+70h] [rbp-328h]
  unsigned int v76; // [rsp+78h] [rbp-320h]
  struct VIDMM_ALLOC *v77; // [rsp+80h] [rbp-318h]
  struct _D3DDDI_ALLOCATIONLIST *v78; // [rsp+88h] [rbp-310h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+90h] [rbp-308h]
  struct VIDMM_ALLOC *v80; // [rsp+98h] [rbp-300h]
  struct _D3DDDI_ALLOCATIONLIST *v81; // [rsp+A0h] [rbp-2F8h]
  unsigned int *v82; // [rsp+A8h] [rbp-2F0h]
  __int64 v83; // [rsp+B0h] [rbp-2E8h]
  struct _VIDMM_PRIMARIES_REFERENCES *v84; // [rsp+B8h] [rbp-2E0h]
  union _LARGE_INTEGER *v85; // [rsp+C0h] [rbp-2D8h]
  struct DXGALLOCATION **v86; // [rsp+C8h] [rbp-2D0h]
  __int64 v87; // [rsp+D0h] [rbp-2C8h]
  struct DXGPROCESS *Current; // [rsp+D8h] [rbp-2C0h]
  VIDMM_SEGMENT *v89; // [rsp+E0h] [rbp-2B8h]
  __int64 v90; // [rsp+E8h] [rbp-2B0h]
  char *v91; // [rsp+F0h] [rbp-2A8h]
  struct VIDMM_ALLOC **v92; // [rsp+F8h] [rbp-2A0h]
  unsigned __int64 *v93; // [rsp+100h] [rbp-298h]
  char *v94; // [rsp+108h] [rbp-290h]
  PRKPROCESS *v95; // [rsp+110h] [rbp-288h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-280h] BYREF
  _BYTE v97[512]; // [rsp+150h] [rbp-248h] BYREF

  v76 = a4;
  v81 = a3;
  v82 = a7;
  v85 = a8;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v73 = (unsigned __int64 *)&a9->QuadPart;
  v93 = (unsigned __int64 *)&a9->QuadPart;
  v92 = a10;
  v84 = a11;
  v86 = a12;
  v70 = 0;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v75 = a2[14];
  Current = DXGPROCESS::GetCurrent();
  v87 = *(_QWORD *)(a2[17].QuadPart + 16);
  if ( a9 )
    *a9 = a2[12];
  *a10 = 0LL;
  ++*((_DWORD *)this + 1798);
  v15 = v76;
  *((_DWORD *)this + 1799) += v76;
  v16 = *((_DWORD *)this + 1800);
  if ( v15 > v16 )
    v16 = v15;
  *((_DWORD *)this + 1800) = v16;
  a2[3].HighPart |= 4u;
  v17 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v65, 0);
  a2[19] = v17;
  *(_DWORD *)a11 = 0;
  v83 = 0LL;
  v80 = 0LL;
  v18 = 0;
  v70 = 0;
  v19 = 1;
  v20 = QuadPart;
  v21 = v75;
  v22 = v81;
  while ( 1 )
  {
    v78 = v22;
    if ( v18 >= v15 )
      break;
    if ( !v22->hAllocation )
    {
      ++*((_DWORD *)this + 1801);
      *v20 = 0LL;
      *(_OWORD *)v21.QuadPart = 0LL;
      *(_QWORD *)(v21.QuadPart + 16) = 0LL;
      goto LABEL_43;
    }
    v23 = v86[v18];
    if ( !v23 )
    {
      WdLogSingleEntry2(2LL, v22->hAllocation, v18);
      v39 = -1071775468;
      v71 = -1071775468;
LABEL_125:
      if ( !p_QuadPart && v18 )
      {
        do
        {
          if ( *--v20 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v20, a6);
          --v18;
        }
        while ( v18 );
      }
      return v39;
    }
    v24 = (struct VIDMM_ALLOC *)*((_QWORD *)v23 + 3);
    v72 = v24;
    v77 = v24;
    v25 = **(_QWORD **)v24;
    v26 = *(_DWORD **)(v25 + 536);
    v27 = *v26 >> 14;
    if ( (*v26 & 0x4000) != 0 )
    {
      v27 = (__int64)v80;
      if ( v80 || (v22->Value & 1) == 0 )
      {
        WdLogSingleEntry3(v19, v24, v80, v22->Value & 1);
        v42 = (struct VIDMM_SEGMENT *)(v78->Value & 1);
        *(_QWORD *)v69 = 0LL;
        v68 = v42;
        v67 = (__int64)v80;
        v66 = (unsigned __int64)v72;
        DxgkLogInternalTriageEvent((__int64)v80, 0x40000LL);
        v39 = -1071775482;
        v71 = -1071775482;
        p_QuadPart = v73;
        goto LABEL_125;
      }
      v80 = v24;
    }
    if ( *(_BYTE *)(v25 + 81) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v27);
        v44 = WdLogNewEntry5_WdTrace(v43);
        *(_QWORD *)(v44 + 24) = a2;
        *(_QWORD *)(v44 + 32) = v72;
      }
      v39 = -1071775482;
      v71 = -1071775482;
      p_QuadPart = v73;
      goto LABEL_125;
    }
    v91 = (char *)v24 + 8;
    if ( *((_QWORD *)v24 + 1) != v87 && (*((_DWORD *)Current + 106) & 0x100) == 0 )
    {
      WdLogSingleEntry4(2LL, v87, v24, v18, *((_QWORD *)v24 + 1));
      v39 = -1071775467;
      v71 = -1071775467;
      p_QuadPart = v73;
      goto LABEL_125;
    }
    if ( *(_WORD *)(*((_QWORD *)v24 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v45 = v72;
        WdLogSingleEntry2(1LL, a2, v72);
        *(_QWORD *)v69 = 0LL;
        v68 = 0LL;
        v67 = (__int64)v45;
        v66 = (unsigned __int64)a2;
        DxgkLogInternalTriageEvent(v46, 0x40000LL);
        v39 = -1071775466;
        v71 = -1071775466;
        p_QuadPart = v73;
        goto LABEL_125;
      }
      WdLogSingleEntry2(2LL, a2, v72);
      v24 = v72;
      v22 = v78;
      v19 = 1;
    }
    *v20 = v24;
    *(_QWORD *)v21.QuadPart = *(_QWORD *)(*((_QWORD *)v24 + 2) + 32LL);
    if ( (v22->Value & 1) != 0 && *((_BYTE *)v24 + 24) && *(int *)(*((_QWORD *)this + 3) + 2552LL) >= 4608 )
    {
      WdLogSingleEntry0(3LL);
      WdLogSingleEntry2(3LL, a2, v72);
      v39 = -1073741790;
      v71 = -1073741790;
      p_QuadPart = v73;
      goto LABEL_125;
    }
    v28 = (_DWORD *)(v21.QuadPart + 8);
    *(_DWORD *)(v21.QuadPart + 8) = v22->Value & 1 | *(_DWORD *)(v21.QuadPart + 8) & 0xFFFFFFFE;
    if ( (v22->Value & 1) != 0 )
      ++*((_DWORD *)this + 1802);
    if ( (*v28 & 1) != 0 && (**(_DWORD **)(v25 + 536) & 0x200000) != 0 )
      *((_DWORD *)v84 + 34) |= 1u;
    if ( (*v28 & 1) != 0
      && ((**(_DWORD **)(v25 + 536) >> 23) | ((unsigned __int16)**(_DWORD **)(v25 + 536) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v25 + 536) | (**(_DWORD **)(v25 + 536) >> 11)) >> 11)) & 0x100u) >= 0x100 )
    {
      v36 = v84;
      if ( *(_DWORD *)v84 >= 0x10u )
      {
        ++*((_DWORD *)this + 1808);
      }
      else
      {
        v94 = (char *)v24 + 104;
        _InterlockedIncrement((volatile signed __int32 *)v24 + 26);
        v37 = *(unsigned int *)v36;
        v24 = v77;
        v72 = v77;
        *((_QWORD *)v36 + v37 + 1) = v77;
        v21 = v75;
      }
      ++*(_DWORD *)v36;
    }
    v74 = *(VIDMM_SEGMENT **)(v25 + 120);
    v29 = v73;
    if ( v73 )
      goto LABEL_23;
    if ( !v74 || (*((_DWORD *)this + 1764) & 0x40) != 0 )
    {
      v24 = v77;
      v72 = v77;
      v21 = v75;
LABEL_23:
      ++*((_DWORD *)this + 1806);
      *v28 &= 0xFFFFFFC1;
      if ( v29 )
      {
        v30 = a2[17];
        if ( (*(_DWORD *)(v30.QuadPart + 32) & 0x20) != 0 )
        {
          v32 = *((_QWORD *)v24 + 18);
        }
        else
        {
          for ( i = (__int64 *)*((_QWORD *)v24 + 16); i != (__int64 *)((char *)v24 + 128); i = (__int64 *)*i )
          {
            if ( ((*((_DWORD *)i + 10) >> 4) & 0x3F) == *(_DWORD *)(v30.QuadPart + 8) )
            {
              v32 = i[9];
              goto LABEL_29;
            }
          }
          v32 = 0LL;
LABEL_29:
          v90 = v32;
        }
        *(_QWORD *)(v21.QuadPart + 16) = v32;
      }
      else
      {
        *(_QWORD *)(v21.QuadPart + 16) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) == 0
        && (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 4) == 0
        && (*(_BYTE *)(v25 + 82) || (*(_DWORD *)(v25 + 68) & 0x400) != 0) )
      {
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v25 + 296));
        v83 = v25;
        if ( !VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v25, 0LL)
          && !*(_QWORD *)(v25 + 120)
          && (**(_DWORD **)(v25 + 536) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v25 + 8)) >= 0 )
        {
          v49 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v50 = *(_QWORD *)(v25 + 88);
          if ( v50 )
          {
            v95 = *(PRKPROCESS **)(v50 + 8);
            KeStackAttachProcess(*v95, &ApcState);
            v49 = 1;
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      (union _LARGE_INTEGER **)this,
                      *(struct _VIDMM_LOCAL_ALLOC **)(v25 + 88),
                      (struct _VIDMM_GLOBAL_ALLOC *)v25,
                      0LL,
                      *(_QWORD *)(v25 + 8),
                      (enum _LOCK_OPERATION)v67,
                      0LL,
                      0) < 0 )
          {
            WdLogSingleEntry1(2LL, v25);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v25 + 8));
          }
          else
          {
            VidMmiAddProbeAndLockReference((struct _VIDMM_GLOBAL_ALLOC *)v25);
            *(_DWORD *)(v25 + 76) |= 2u;
          }
          if ( v49 )
            KeUnstackDetachProcess(&ApcState);
        }
        v83 = 0LL;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 296));
        v22 = v78;
        v19 = 1;
      }
      v33 = v72;
      goto LABEL_37;
    }
    ++*((_DWORD *)this + 1805);
    v47 = VIDMM_SEGMENT::DriverId(v74);
    *v48 ^= (*v48 ^ (2 * v47)) & 0x3E;
    v89 = v74;
    *(_QWORD *)(v75.QuadPart + 16) = *(_QWORD *)(v25 + 128) + *((_QWORD *)v74 + 3);
    v33 = v77;
LABEL_37:
    p_QuadPart = v73;
    if ( !v73 )
    {
      VIDMM_GLOBAL::AddDMAReferences(v33, a6);
      v22 = v78;
      v19 = 1;
    }
    v34 = v77;
    if ( !*((_DWORD *)v33 + 38)
      && (*((_BYTE *)v77 + 25) & 1) == 0
      && ((*((_BYTE *)this + 40936) & 0x10) == 0 || (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 0x10) == 0) )
    {
      WdLogSingleEntry1(v19, v77);
      *(_QWORD *)v69 = 0LL;
      v68 = 0LL;
      v67 = 0LL;
      v66 = (unsigned __int64)v34;
      DxgkLogInternalTriageEvent(v38, 0x40000LL);
      v39 = -1073741823;
      v71 = -1073741823;
      VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)v91 + 32LL));
      if ( !p_QuadPart )
        VIDMM_GLOBAL::RemoveDMAReferences(v34, a6);
      v18 = v70;
      v20 = QuadPart;
      goto LABEL_125;
    }
    v35 = (v22->Value >> 2) & 7;
    if ( v35 )
    {
      v40 = v35;
      WdLogSingleEntry2(v19, v77, v35);
      *(_QWORD *)v69 = 0LL;
      v68 = 0LL;
      v67 = v40;
      v66 = (unsigned __int64)v34;
      DxgkLogInternalTriageEvent(v41, 0x40000LL);
      v19 = 1;
    }
    v18 = v70;
    v20 = QuadPart;
    v21 = v75;
    v22 = v81;
    v15 = v76;
LABEL_43:
    QuadPart = ++v20;
    v81 = ++v22;
    v21.QuadPart += 24LL;
    v75 = v21;
    v70 = ++v18;
  }
  *v92 = v80;
  if ( a2[8].QuadPart )
  {
    v74 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 120);
    if ( !v74 || (*((_DWORD *)this + 1764) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1806);
      a2[3].HighPart &= ~4u;
      *v82 = 0;
      v52 = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1805);
      if ( (*((_DWORD *)v74 + 20) & 0x1000) != 0 )
        v51 = 0;
      else
        v51 = *((_DWORD *)v74 + 4) + 1;
      *v82 = v51;
      v52 = *(_QWORD *)(a2[7].QuadPart + 128) + *((_QWORD *)v74 + 3);
    }
    v85->QuadPart = v52;
    v53 = a2[8];
    if ( a6 + *(_DWORD *)(v53.QuadPart + 156) == 0x7FFFFFFF )
    {
      v56 = *(int *)(v53.QuadPart + 156);
      g_DxgMmsBugcheckExportIndex = v19;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        270LL,
        41LL,
        (union _LARGE_INTEGER)v53.QuadPart,
        v56,
        0LL);
      v19 = 1;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v53.QuadPart + 156), a6);
  }
  else
  {
    *v82 = 0;
    *v85 = a2[11];
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], a6);
  if ( a6 > 1 )
    a2[3].HighPart |= 2u;
  v54 = v70;
  if ( !p_QuadPart )
    a2[18].LowPart = v70;
  a2[2].LowPart = a6;
  if ( (a2[3].HighPart & 4) == 0
    || (v57 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL), _InterlockedOr(v65, 0), v54 = v70, a2[19].QuadPart != v57) )
  {
    v19 = 0;
  }
  if ( v19 )
    ++*((_DWORD *)this + 1807);
  if ( (qword_1C0076010 & 4) != 0 )
  {
    v58 = a2[14];
    v59 = a2[13];
    v60 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v54; j = (unsigned int)(j + 128) )
    {
      v62 = 128LL;
      if ( v54 - (unsigned int)j < 0x80 )
        v62 = v54 - (unsigned int)j;
      v63 = 0LL;
      if ( (_DWORD)v62 )
      {
        v64 = (int *)v97;
        do
        {
          *v64 = *(_DWORD *)(v58.QuadPart + 24LL * (unsigned int)(v63 + j) + 8) & 1;
          v63 = (unsigned int)(v63 + 1);
          ++v64;
        }
        while ( (unsigned int)v63 < (unsigned int)v62 );
      }
      if ( (byte_1C00769C1 & 0x10) != 0 )
      {
        LODWORD(v67) = v62;
        McTemplateK0ppqPR2TR2_EtwWriteTransfer(v59.QuadPart + 8 * j, v62, v63, v60, a2, v67, v59.QuadPart + 8 * j, v97);
      }
    }
  }
  return 0LL;
}
