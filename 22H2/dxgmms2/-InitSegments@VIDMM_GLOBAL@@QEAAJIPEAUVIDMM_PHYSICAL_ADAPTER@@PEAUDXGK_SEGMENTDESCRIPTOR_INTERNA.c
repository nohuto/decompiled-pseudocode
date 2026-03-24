/*
 * XREFs of ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C00954F8
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0094AA8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C0001C0C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0010130 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C0095124 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C00959A8 (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00C7CA8 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitSegments(
        ADAPTER_RENDER **this,
        __int64 a2,
        struct VIDMM_PHYSICAL_ADAPTER *a3,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // r11d
  unsigned __int64 v6; // r12
  unsigned int v10; // esi
  int v11; // r12d
  char v12; // bl
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v13; // r15
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int i; // r15d
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  char v25; // cl
  int v26; // eax
  ADAPTER_RENDER *v27; // rax
  bool v28; // al
  unsigned __int64 *v29; // rcx
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  VIDMM_SEGMENT *v33; // rbx
  void **v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r10
  unsigned __int64 *v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  VIDMM_SEGMENT *v42; // rax
  VIDMM_SEGMENT *v43; // rbx
  __int64 v44; // r12
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // cl
  VIDMM_SEGMENT *v50; // rax
  VIDMM_SEGMENT *v51; // rbx
  int *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  PPCW_INSTANCE *v59; // rsi
  int v60; // eax
  wchar_t *v61; // rax
  ADAPTER_RENDER *v62; // r8
  WCHAR *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v69; // [rsp+28h] [rbp-D8h]
  unsigned int v70; // [rsp+30h] [rbp-D0h]
  char v71; // [rsp+34h] [rbp-CCh]
  unsigned int v72; // [rsp+38h] [rbp-C8h]
  int v73; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v74; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _PCW_DATA v76; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v77[2]; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v78; // [rsp+78h] [rbp-88h]
  _QWORD v79[14]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v80; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v81; // [rsp+100h] [rbp+0h]

  v5 = *((_DWORD *)a3 + 5);
  v6 = 0LL;
  v74 = 0LL;
  v78 = a5;
  v70 = a2;
  v72 = v5;
  v71 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( *((_DWORD *)a3 + 6) )
  {
    v10 = v5;
    v11 = -v5;
    v73 = -v5;
    while ( 1 )
    {
      v12 = *((_BYTE *)a3 + 436);
      v13 = a4;
      v14 = a4;
      v77[0] = (char *)a4 + 104;
      if ( (v12 & 3) != 0 && v10 == *((unsigned __int16 *)a3 + 14) )
      {
        memset(v79, 0, 0x68uLL);
        if ( (v12 & 1) != 0 )
          v30 = (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(this[2], v70) >> 4) & 1;
        else
          v30 = 1;
        v79[2] = qword_1C00501D8;
        v31 = 16 * (v30 | ((v71 & 1) << 6));
        if ( *((_QWORD *)&v80 + 1) )
          v32 = v31 | 0x101184;
        else
          v32 = v31 | 0x81184;
        LODWORD(v79[0]) = v32;
        v33 = (VIDMM_SEGMENT *)operator new[](0x1E8uLL, 0x36306956u, (POOL_TYPE)512);
        if ( v33 )
        {
          VIDMM_SEGMENT::VIDMM_SEGMENT(
            v33,
            (struct VIDMM_GLOBAL *)this,
            v70,
            v10,
            v11 + v10,
            (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v79);
          *(_QWORD *)v33 = &VIDMM_SYSMEM_SEGMENT::`vftable';
        }
        else
        {
          v33 = 0LL;
        }
        v34 = (void **)v10;
        *((_QWORD *)this[464] + v10) = v33;
        if ( !*((_QWORD *)this[464] + v10) )
        {
          _InterlockedAdd(&dword_1C005071C, 1u);
          goto LABEL_88;
        }
      }
      else
      {
        v15 = *(unsigned int *)a4;
        if ( (unsigned int)v15 >= 0x200000
          || (v15 & 2) != 0
          || (v15 & 0x80u) == 0LL && (v15 & 0x300) != 0
          || (*(_DWORD *)a4 & 0x300) == 0x300
          || (v15 & 0x2000) != 0 && (v15 & 5) != 0 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v15, a2, a3);
          *(_QWORD *)(v16 + 24) = v10;
          WdLogEvent5_WdAssertion(v16);
          LODWORD(v17) = -1073741811;
          return (unsigned int)v17;
        }
        v40 = *((_QWORD *)a4 + 2);
        if ( (v40 & 0xFFF) != 0 )
        {
          v48 = WdLogNewEntry5_WdWarning(v15, a2);
          *(_QWORD *)(v48 + 24) = 4096LL;
          WdLogEvent5_WdWarning(v48);
          *((_QWORD *)v13 + 2) &= 0xFFFFFFFFFFFFF000uLL;
          v40 = *((_QWORD *)v13 + 2);
          LODWORD(v15) = *(_DWORD *)v14;
        }
        v41 = v40 + *(_QWORD *)&DestinationString.Length;
        if ( (v15 & 0x400) == 0 )
          v41 = *(_QWORD *)&DestinationString.Length;
        *(_QWORD *)&DestinationString.Length = v41;
        if ( (v15 & 1) != 0 )
        {
          v42 = (VIDMM_SEGMENT *)operator new[](0x208uLL, 0x36306956u, (POOL_TYPE)512);
          v43 = v42;
          if ( v42 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v42, (struct VIDMM_GLOBAL *)this, v70, v10, v11 + v10, v13);
            *((_QWORD *)v43 + 61) = 0LL;
            *((_QWORD *)v43 + 62) = 0LL;
            *((_QWORD *)v43 + 64) = 0LL;
            *((_QWORD *)v43 + 63) = 0LL;
            *(_QWORD *)v43 = &VIDMM_APERTURE_SEGMENT::`vftable';
          }
          else
          {
            v43 = 0LL;
          }
          v44 = 8LL * v10;
          *(_QWORD *)((char *)this[464] + v44) = v43;
          v45 = *(_QWORD *)((char *)this[464] + v44);
          if ( !v45 )
          {
            _InterlockedAdd(&dword_1C005071C, 1u);
            v54 = WdLogNewEntry5_WdLowResource(1LL);
            *(_QWORD *)(v54 + 24) = v10;
            goto LABEL_90;
          }
          if ( (*(_DWORD *)(v45 + 80) & 0x10) != 0 )
            *((_BYTE *)this + 7081) = 1;
          a2 = *(unsigned int *)v13;
          v46 = v71;
          if ( (a2 & 0x400) != 0 )
            v46 = 1;
          v71 = v46;
        }
        else
        {
          *((_BYTE *)a3 + 436) |= 8u;
          if ( (*(_DWORD *)v13 & 0x10000) == 0 || *((_DWORD *)v13 + 21) )
            v49 = 0;
          else
            v49 = 4;
          *((_BYTE *)a3 + 437) = v49 | *((_BYTE *)a3 + 437) & 0xFB;
          v50 = (VIDMM_SEGMENT *)operator new[](0x1F8uLL, 0x36306956u, (POOL_TYPE)512);
          v51 = v50;
          if ( v50 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v50, (struct VIDMM_GLOBAL *)this, v70, v10, v11 + v10, v13);
            *((_QWORD *)v51 + 61) = 0LL;
            v34 = &VIDMM_MEMORY_SEGMENT::`vftable';
            *((_DWORD *)v51 + 124) = 0;
            *(_QWORD *)v51 = &VIDMM_MEMORY_SEGMENT::`vftable';
          }
          else
          {
            v51 = 0LL;
          }
          v44 = 8LL * v10;
          *(_QWORD *)((char *)this[464] + v44) = v51;
          if ( !*(_QWORD *)((char *)this[464] + v44) )
          {
            _InterlockedAdd(&dword_1C00506F8, 1u);
LABEL_88:
            v54 = WdLogNewEntry5_WdLowResource(v34);
            *(_QWORD *)(v54 + 24) = v10;
LABEL_90:
            WdLogEvent5_WdLowResource(v54);
            LODWORD(v17) = -1073741801;
            return (unsigned int)v17;
          }
          a2 = *(unsigned int *)v13;
          if ( (a2 & 0x800) != 0 )
          {
            *((_BYTE *)a3 + 437) |= 2u;
            a2 = *(unsigned int *)v13;
          }
          if ( (a2 & 0x40) == 0 )
            v74 += *(_QWORD *)(*(_QWORD *)((char *)this[464] + v44) + 48LL);
        }
        if ( (a2 & 0x10000) != 0 )
        {
          v52 = *(int **)((char *)this[464] + v44);
          v53 = v52[119];
          if ( (_DWORD)v53 == 2 || !*((_QWORD *)a3 + v53) )
          {
            LODWORD(v17) = VIDMM_SEGMENT::SetVprRange(
                             (VIDMM_SEGMENT *)v52,
                             *((_QWORD *)v13 + 8),
                             *((_QWORD *)v13 + 9),
                             *((_DWORD *)v13 + 20),
                             *((_DWORD *)v13 + 21),
                             *((unsigned int *)v13 + 22));
            if ( (int)v17 < 0 )
              return (unsigned int)v17;
          }
          else
          {
            *(_DWORD *)v13 &= ~0x10000u;
          }
        }
        v47 = *(_QWORD *)((char *)this[464] + v44);
        v11 = v73;
        *((_QWORD *)&v80 + *(int *)(v47 + 476)) += *(_QWORD *)(v47 + 56);
      }
      ++v10;
      if ( v11 + v10 >= *((_DWORD *)a3 + 6) )
        break;
      a4 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v77[0];
    }
    v6 = *(_QWORD *)&DestinationString.Length;
    v5 = v72;
  }
  v35 = 0LL;
  v36 = 2LL;
  do
  {
    v37 = (unsigned __int64 *)((char *)&v80 + v35 * 8);
    v38 = *(_QWORD *)((char *)&v80 + v35 * 8 + a3 - (struct VIDMM_PHYSICAL_ADAPTER *)&v80);
    if ( v38 && *v37 <= v38 )
      v39 = v38 - *v37;
    else
      v39 = 0LL;
    v77[v35++] = v39;
    --v36;
  }
  while ( v36 );
  for ( i = 0; i < *((_DWORD *)a3 + 6); ++i )
  {
    v20 = *((_QWORD *)this[464] + i + v5);
    v21 = *(int *)(v20 + 476);
    if ( (_DWORD)v21 != 2 && (v22 = *((_QWORD *)a3 + v21)) != 0 )
    {
      if ( (*(_DWORD *)(v20 + 80) & 0x1000) == 0 )
      {
        v55 = v77[v21];
        v56 = *(_QWORD *)(v20 + 56);
        v57 = *(_QWORD *)(v20 + 64) - v56;
        if ( v57 >= v55 )
          v57 = v77[v21];
        v77[v21] = v55 - v57;
        v22 = v56 + v57;
      }
    }
    else
    {
      v22 = *(_QWORD *)(v20 + 64);
    }
    *(_QWORD *)(v20 + 48) = v22;
    v23 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD))(*(_QWORD *)v20 + 8LL))(
            v20,
            NotifyAllocationReclaimed,
            0LL);
    v17 = v23;
    if ( v23 < 0 )
    {
      _InterlockedAdd(&dword_1C0050720, 1u);
      v58 = WdLogNewEntry5_WdLowResource(1LL);
      *(_QWORD *)(v58 + 24) = v17;
      WdLogEvent5_WdLowResource(v58);
      return (unsigned int)v17;
    }
    if ( (_DWORD)v21 )
    {
      if ( (_DWORD)v21 == 1 )
        *((_BYTE *)a3 + 437) |= 8u;
      if ( (_DWORD)v21 == 2 )
        goto LABEL_102;
    }
    else
    {
      v24 = *(_DWORD *)(v20 + 80);
      if ( (v24 & 4) == 0 )
      {
        *((_BYTE *)a3 + 437) |= 0x40u;
        v24 = *(_DWORD *)(v20 + 80);
      }
      if ( (v24 & 0x1001) == 0 )
        *((_BYTE *)a3 + 437) |= 0x10u;
    }
    if ( (*(_DWORD *)(v20 + 80) & 0x1001) == 0 )
    {
      *((_QWORD *)a3 + 3 * v21 + 63) += *(_QWORD *)(v20 + 48) - *(_QWORD *)(v20 + 72);
LABEL_102:
      if ( (*(_DWORD *)(v20 + 80) & 0x1001) == 0 )
        goto LABEL_24;
    }
    *((_BYTE *)a3 + 437) |= 0x20u;
    *((_BYTE *)a3 + 24 * v21 + 512) |= 1u;
LABEL_24:
    v5 = v72;
  }
  if ( (*((_BYTE *)a3 + 437) & 0x30) == 0x30 )
    *((_BYTE *)a3 + 437) |= 0x80u;
  v25 = *((_BYTE *)a3 + 512) | 2;
  *((_BYTE *)a3 + 512) = v25;
  if ( (*((_BYTE *)a3 + 437) & 8) != 0 )
  {
    v59 = (PPCW_INSTANCE *)((char *)a3 + 544);
    *((_DWORD *)a3 + 124) = dword_1C005041C;
    VIDMM_GLOBAL::InitializeSegmentGroupState(
      (VIDMM_GLOBAL *)this,
      v70,
      (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a3 + 544),
      0LL);
    v60 = dword_1C0050420;
    *((_BYTE *)a3 + 536) |= 3u;
    *((_DWORD *)a3 + 130) = v60;
    DestinationString = 0LL;
    v61 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    v62 = this[3];
    LODWORD(v69) = v70;
    v63 = v61;
    LODWORD(Data) = *((_DWORD *)v62 + 79);
    LODWORD(v17) = RtlStringCbPrintfW(
                     v61,
                     0x208uLL,
                     L"luid_0x%08X_0x%08X_phys_%u",
                     *((unsigned int *)v62 + 80),
                     Data,
                     v69);
    if ( (int)v17 < 0
      || (RtlInitUnicodeString(&DestinationString, v63),
          v76.Data = v59,
          v76.Size = 336,
          LODWORD(v17) = PcwCreateInstance(
                           v59 + 41,
                           GpuPerformanceCounterSetLocalAdapterMemory,
                           &DestinationString,
                           1u,
                           &v76),
          (int)v17 < 0) )
    {
      v67 = WdLogNewEntry5_WdAssertion(v65, v64, v66);
      WdLogEvent5_WdAssertion(v67);
    }
    operator delete(v63);
    if ( (int)v17 < 0 )
      return (unsigned int)v17;
  }
  else
  {
    v26 = dword_1C0050420;
    *((_BYTE *)a3 + 536) &= ~2u;
    *((_BYTE *)a3 + 512) = v25 | 1;
    *((_DWORD *)a3 + 124) = v26;
  }
  v27 = this[3];
  this[892] = (ADAPTER_RENDER *)v6;
  if ( (*((_DWORD *)v27 + 87) & 8) != 0 )
    v28 = v6 != 0;
  else
    v28 = v6 >= qword_1C00501D0;
  v29 = v78;
  *((_BYTE *)this + 7145) = v28;
  *v29 = v74;
  return 0LL;
}
