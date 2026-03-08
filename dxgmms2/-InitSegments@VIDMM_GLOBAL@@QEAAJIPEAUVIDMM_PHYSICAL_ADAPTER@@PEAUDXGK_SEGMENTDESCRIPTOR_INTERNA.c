/*
 * XREFs of ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C00BC900
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00BB7F0 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C00144CC (RtlStringCbPrintfW.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C001929C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C00BD27C (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C00BD504 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00FF9E8 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitSegments(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PHYSICAL_ADAPTER *a3,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a4)
{
  unsigned int v4; // r11d
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // si
  __int64 v7; // r15
  VIDMM_GLOBAL *v8; // r12
  unsigned int v10; // r13d
  int v11; // r15d
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v12; // r14
  unsigned __int64 v13; // rdi
  bool v14; // zf
  BOOL v15; // ecx
  char v16; // al
  unsigned int v17; // edi
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  VIDMM_SEGMENT *v22; // rsi
  __int64 v23; // rcx
  NTSTATUS v24; // edi
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rcx
  VIDMM_SEGMENT *v30; // rax
  VIDMM_SEGMENT *v31; // rsi
  __int64 *v32; // r12
  __int64 v33; // rdi
  __int64 v34; // r15
  __int64 v35; // rcx
  char v36; // al
  char v37; // cl
  VIDMM_SEGMENT *v38; // rax
  VIDMM_SEGMENT *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r10
  unsigned __int64 *v45; // r8
  unsigned __int64 v46; // rax
  const void *v47; // rax
  unsigned int v48; // r13d
  __int64 v49; // rsi
  __int64 v50; // r14
  __int64 v51; // rcx
  __int64 v52; // r15
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  int v56; // eax
  int v57; // eax
  char v58; // al
  char v59; // cl
  PPCW_INSTANCE *v60; // rsi
  int v61; // eax
  wchar_t *v62; // rax
  __int64 v63; // rcx
  WCHAR *v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 result; // rax
  int v68; // eax
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  bool v71; // al
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v73; // [rsp+28h] [rbp-D8h]
  char v75; // [rsp+54h] [rbp-ACh]
  unsigned int v77; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v79; // [rsp+78h] [rbp-88h]
  unsigned __int64 v80; // [rsp+80h] [rbp-80h]
  struct _PCW_DATA v81; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v82[14]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v83; // [rsp+110h] [rbp+10h] BYREF
  __int64 v84; // [rsp+120h] [rbp+20h]

  v4 = *((_DWORD *)a3 + 7);
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = this;
  v77 = v4;
  v75 = 0;
  v80 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  if ( !*((_DWORD *)a3 + 8) )
    goto LABEL_70;
  v10 = v4;
  v11 = -v4;
  v79 = -v4;
  while ( 1 )
  {
    v12 = a4;
    v13 = v5;
    v14 = (*((_BYTE *)a3 + 444) & 0xA) == 0;
    v81.Data = (char *)a4 + 104;
    if ( !v14 && v10 == *((unsigned __int16 *)a3 + 18) )
    {
      memset(v82, 0, 0x68uLL);
      v15 = Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() != 0;
      v16 = *((_BYTE *)a3 + 444) & 1;
      if ( v15 )
      {
        if ( !v16 )
        {
          v17 = a2;
          if ( (*((_BYTE *)a3 + 444) & 4) != 0 )
            v18 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 3) + 2808LL) + 344LL * a2 + 16) & 0x100 | 0x11800u) >> 4;
          else
            v18 = 4496;
          goto LABEL_15;
        }
        v17 = a2;
      }
      else
      {
        v17 = a2;
        if ( !v16 )
        {
          v19 = 16;
          goto LABEL_14;
        }
      }
      v19 = *(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)v8 + 2), v17) & 0x10;
LABEL_14:
      v18 = v19 | 0x1180;
LABEL_15:
      v82[2] = qword_1C0076288;
      v20 = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)(v6 << 10)) & 0x400;
      if ( *((_QWORD *)&v83 + 1) )
        v21 = v20 | 0x100004;
      else
        v21 = v20 | 0x80004;
      LODWORD(v82[0]) = v21;
      v22 = (VIDMM_SEGMENT *)operator new(504LL, 0x36306956u, 64LL);
      if ( v22 )
      {
        VIDMM_SEGMENT::VIDMM_SEGMENT(v22, v8, v17, v10, v11 + v10, (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v82);
        *(_QWORD *)v22 = &VIDMM_SYSMEM_SEGMENT::`vftable';
      }
      else
      {
        v22 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * v10) = v22;
      if ( !*(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * v10) )
      {
        _InterlockedAdd(&dword_1C007683C, 1u);
        WdLogSingleEntry1(6LL, v10);
        goto LABEL_23;
      }
      goto LABEL_63;
    }
    v25 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 >= 0x400000u || (v25 & 2) != 0 )
      goto LABEL_28;
    if ( (v25 & 0x80u) != 0 )
    {
      if ( (*(_DWORD *)a4 & 0x300) == 0x300 )
        goto LABEL_28;
    }
    else if ( (v25 & 0x300) != 0 )
    {
      goto LABEL_28;
    }
    if ( (v25 & 0x2000) != 0 && (v25 & 5) != 0 )
    {
LABEL_28:
      WdLogSingleEntry1(1LL, v10);
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
      return (unsigned int)-1073741811;
    }
    v27 = *((_QWORD *)a4 + 2);
    if ( (v27 & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(3LL, 4096LL);
      *((_QWORD *)v12 + 2) &= 0xFFFFFFFFFFFFF000uLL;
      v27 = *((_QWORD *)v12 + 2);
    }
    v28 = *(_DWORD *)v12;
    v29 = v13 + v27;
    if ( (*(_DWORD *)v12 & 0x400) == 0 )
      v29 = v13;
    v80 = v29;
    if ( (v28 & 1) != 0 )
    {
      v30 = (VIDMM_SEGMENT *)operator new(536LL, 0x36306956u, 64LL);
      v31 = v30;
      if ( v30 )
      {
        VIDMM_SEGMENT::VIDMM_SEGMENT(v30, v8, a2, v10, v11 + v10, v12);
        *((_QWORD *)v31 + 63) = 0LL;
        *((_QWORD *)v31 + 64) = 0LL;
        *((_QWORD *)v31 + 66) = 0LL;
        *((_QWORD *)v31 + 65) = 0LL;
        *(_QWORD *)v31 = &VIDMM_APERTURE_SEGMENT::`vftable';
      }
      else
      {
        v31 = 0LL;
      }
      v32 = (__int64 *)((char *)v8 + 3712);
      v33 = v10;
      v34 = 8LL * v10;
      *(_QWORD *)(v34 + *v32) = v31;
      v35 = *(_QWORD *)(v34 + *v32);
      if ( !v35 )
      {
        _InterlockedAdd(&dword_1C007683C, 1u);
        goto LABEL_67;
      }
      if ( (*(_DWORD *)(v35 + 80) & 0x10) != 0 )
        *((_BYTE *)this + 7089) = 1;
      else
        *((_BYTE *)this + 7090) = 1;
      v36 = v75;
      if ( (*(_DWORD *)v12 & 0x400) != 0 )
        v36 = 1;
      v75 = v36;
    }
    else
    {
      *((_BYTE *)a3 + 444) |= 0x20u;
      if ( (*(_DWORD *)v12 & 0x10000) == 0 || *((_DWORD *)v12 + 21) )
        v37 = 0;
      else
        v37 = 16;
      *((_BYTE *)a3 + 445) = v37 | *((_BYTE *)a3 + 445) & 0xEF;
      v38 = (VIDMM_SEGMENT *)operator new(520LL, 0x36306956u, 64LL);
      v39 = v38;
      if ( v38 )
      {
        VIDMM_SEGMENT::VIDMM_SEGMENT(v38, v8, a2, v10, v11 + v10, v12);
        *((_QWORD *)v39 + 63) = 0LL;
        *((_DWORD *)v39 + 128) = 0;
        *(_QWORD *)v39 = &VIDMM_MEMORY_SEGMENT::`vftable';
      }
      else
      {
        v39 = 0LL;
      }
      v32 = (__int64 *)((char *)v8 + 3712);
      v33 = v10;
      v34 = 8LL * v10;
      *(_QWORD *)(v34 + *v32) = v39;
      if ( !*(_QWORD *)(v34 + *v32) )
      {
        _InterlockedAdd(&dword_1C0076818, 1u);
LABEL_67:
        WdLogSingleEntry1(6LL, v33);
LABEL_23:
        DxgkLogInternalTriageEvent(v23, 262145LL);
        return (unsigned int)-1073741801;
      }
      if ( (*(_DWORD *)v12 & 0x800) != 0 )
        *((_BYTE *)a3 + 445) |= 8u;
    }
    if ( (*(_DWORD *)v12 & 0x10000) != 0 )
    {
      v40 = *(int *)(*(_QWORD *)(v34 + *v32) + 476LL);
      if ( (_DWORD)v40 == 2 || !*((_QWORD *)a3 + v40) )
      {
        v24 = VIDMM_SEGMENT::SetVprRange(
                *(VIDMM_SEGMENT **)(v34 + *v32),
                *((_QWORD *)v12 + 8),
                *((_QWORD *)v12 + 9),
                *((_DWORD *)v12 + 20),
                *((_DWORD *)v12 + 21),
                *((unsigned int *)v12 + 22));
        if ( v24 < 0 )
          return (unsigned int)v24;
      }
      else
      {
        *(_DWORD *)v12 &= ~0x10000u;
      }
    }
    v41 = *v32;
    v8 = this;
    v42 = *(_QWORD *)(v34 + v41);
    v11 = v79;
    *((_QWORD *)&v83 + *(int *)(v42 + 476)) += *(_QWORD *)(v42 + 56);
LABEL_63:
    ++v10;
    if ( v11 + v10 >= *((_DWORD *)a3 + 8) )
      break;
    v5 = v80;
    v6 = v75;
    a4 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v81.Data;
  }
  v7 = *(_QWORD *)&DestinationString.Length;
  v4 = v77;
LABEL_70:
  v43 = 0LL;
  v44 = 2LL;
  do
  {
    v45 = (unsigned __int64 *)((char *)&v83 + v43);
    v46 = *(_QWORD *)((char *)&v83 + v43 + a3 - (struct VIDMM_PHYSICAL_ADAPTER *)&v83);
    if ( v46 && *v45 <= v46 )
      v47 = (const void *)(v46 - *v45);
    else
      v47 = 0LL;
    *(const void **)((char *)&v81.Data + v43) = v47;
    v43 += 8LL;
    --v44;
  }
  while ( v44 );
  v48 = 0;
  if ( *((_DWORD *)a3 + 8) )
  {
    while ( 2 )
    {
      v49 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * (v4 + v48));
      v50 = *(int *)(v49 + 476);
      if ( (_DWORD)v50 == 2 || (v51 = *((_QWORD *)a3 + v50)) == 0 )
      {
        v51 = *(_QWORD *)(v49 + 64);
        v52 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * (v4 + v48));
      }
      else
      {
        v52 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * (v4 + v48));
        if ( (*(_DWORD *)(v49 + 80) & 0x1000) == 0 )
        {
          v53 = *((_QWORD *)&v81.Data + v50);
          v54 = *(_QWORD *)(v49 + 56);
          v55 = *(_QWORD *)(v49 + 64) - v54;
          if ( v55 >= v53 )
            v55 = *((_QWORD *)&v81.Data + v50);
          *((_QWORD *)&v81.Data + v50) = v53 - v55;
          v51 = v54 + v55;
        }
      }
      *(_QWORD *)(v49 + 48) = v51;
      v56 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD))(*(_QWORD *)v49 + 8LL))(
              v49,
              NotifyAllocationReclaimed,
              0LL);
      v24 = v56;
      if ( v56 < 0 )
      {
        _InterlockedAdd(dword_1C0076840, 1u);
        WdLogSingleEntry1(6LL, v56);
        DxgkLogInternalTriageEvent(v66, 262145LL);
        return (unsigned int)v24;
      }
      if ( (_DWORD)v50 )
      {
        if ( (_DWORD)v50 == 1 )
        {
          *((_BYTE *)a3 + 445) |= 0x20u;
          goto LABEL_93;
        }
        if ( (_DWORD)v50 != 2 )
          goto LABEL_93;
      }
      else
      {
        if ( (*(_DWORD *)(v52 + 80) & 4) == 0 )
          *((_BYTE *)a3 + 446) |= 1u;
        if ( (*(_DWORD *)(v52 + 80) & 0x1001) == 0 )
        {
          *((_BYTE *)a3 + 445) |= 0x40u;
LABEL_93:
          if ( (*(_DWORD *)(v52 + 80) & 0x1001) == 0 )
            *((_QWORD *)a3 + 3 * v50 + 64) += *(_QWORD *)(v49 + 48) - *(_QWORD *)(v49 + 72);
        }
      }
      v57 = *(_DWORD *)(v52 + 80);
      v7 = *(_QWORD *)&DestinationString.Length;
      if ( (v57 & 0x1001) != 0 )
      {
        *((_BYTE *)a3 + 445) |= 0x80u;
        *((_BYTE *)a3 + 24 * v50 + 520) |= 1u;
      }
      else if ( (v57 & 0x40) == 0 )
      {
        v7 = *(_QWORD *)(v49 + 48) + *(_QWORD *)&DestinationString.Length;
        *(_QWORD *)&DestinationString.Length = v7;
      }
      v8 = this;
      ++v48;
      v4 = v77;
      if ( v48 >= *((_DWORD *)a3 + 8) )
        break;
      continue;
    }
  }
  v58 = *((_BYTE *)a3 + 445);
  if ( (v58 & 0x40) != 0 && v58 < 0 )
    *((_BYTE *)a3 + 446) |= 2u;
  v59 = *((_BYTE *)a3 + 520) | 2;
  *((_BYTE *)a3 + 520) = v59;
  if ( (v58 & 0x20) != 0 )
  {
    v60 = (PPCW_INSTANCE *)((char *)a3 + 552);
    *((_DWORD *)a3 + 126) = dword_1C00764CC;
    VIDMM_GLOBAL::InitializeSegmentGroupState(this, a2, (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a3 + 552), 0LL);
    v61 = dword_1C00764D0;
    *((_BYTE *)a3 + 544) |= 3u;
    *((_DWORD *)a3 + 132) = v61;
    DestinationString = 0LL;
    v62 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
    v63 = *((_QWORD *)this + 3);
    LODWORD(v73) = a2;
    v64 = v62;
    LODWORD(Data) = *(_DWORD *)(v63 + 404);
    v24 = RtlStringCbPrintfW(v62, 0x208uLL, L"luid_0x%08X_0x%08X_phys_%u", *(unsigned int *)(v63 + 408), Data, v73);
    if ( v24 < 0 )
    {
      WdLogSingleEntry0(1LL);
      goto LABEL_109;
    }
    RtlInitUnicodeString(&DestinationString, v64);
    v81.Data = v60;
    v81.Size = 344;
    v24 = PcwCreateInstance(v60 + 42, GpuPerformanceCounterSetLocalAdapterMemory, &DestinationString, 1u, &v81);
    if ( v24 < 0 )
    {
      WdLogSingleEntry0(1LL);
LABEL_109:
      DxgkLogInternalTriageEvent(v65, 0x40000LL);
    }
    operator delete(v64);
    if ( v24 < 0 )
      return (unsigned int)v24;
  }
  else
  {
    v68 = dword_1C00764D0;
    *((_BYTE *)a3 + 544) &= ~2u;
    *((_BYTE *)a3 + 520) = v59 | 1;
    *((_DWORD *)a3 + 126) = v68;
  }
  v69 = *((_QWORD *)this + 3);
  v70 = v80;
  *((_QWORD *)this + 893) = v80;
  if ( (*(_DWORD *)(v69 + 436) & 8) != 0 )
    v71 = v70 != 0;
  else
    v71 = v70 >= qword_1C0076280;
  *((_BYTE *)this + 7153) = v71;
  result = 0LL;
  *((_QWORD *)this + 5594) = v7;
  return result;
}
