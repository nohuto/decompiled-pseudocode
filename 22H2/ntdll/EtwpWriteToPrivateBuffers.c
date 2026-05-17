/*
 * XREFs of EtwpWriteToPrivateBuffers @ 0x18005064C
 * Callers:
 *     EtwpEventWriteFull @ 0x180050388 (EtwpEventWriteFull.c)
 *     EtwEventWriteString @ 0x1801105C0 (EtwEventWriteString.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x180051178 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009D900 (NtQueryInformationToken.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlResetStackOverflow @ 0x1800DE694 (RtlResetStackOverflow.c)
 *     EtwpCheckForEnoughStackSpace @ 0x180110C54 (EtwpCheckForEnoughStackSpace.c)
 *     EtwpDemuxUmTraceHandle @ 0x180110CC0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x180110E28 (EtwpGetStackExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpWriteToPrivateBuffers(
        __int64 a1,
        _OWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        _GUID *a6,
        _OWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  _OWORD *v11; // r9
  __int64 v12; // r8
  _OWORD *v13; // rdi
  unsigned int v14; // r12d
  unsigned int v15; // r10d
  __int64 v16; // r11
  int v17; // eax
  _WORD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // ebx
  unsigned int v25; // edi
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // ebx
  __int64 v29; // rsi
  unsigned int v30; // r8d
  __int16 v31; // r9
  unsigned int v32; // r10d
  char v33; // al
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r15
  _GUID ActivityId; // xmm0
  unsigned int v38; // r8d
  void *v39; // rcx
  unsigned __int16 *v40; // rax
  unsigned int v41; // edx
  unsigned __int16 v42; // si
  unsigned __int16 *v43; // rdi
  __int64 v44; // rbx
  unsigned __int16 *v45; // rcx
  unsigned __int16 *v46; // rbx
  __int64 v47; // rcx
  unsigned __int16 v48; // ax
  char *v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // r12
  size_t v52; // rdx
  unsigned __int64 *v53; // r9
  char v54; // al
  unsigned __int64 v55; // rax
  struct _TEB *v56; // rcx
  size_t v57; // rbx
  char *v58; // r13
  void *v60; // rsp
  int v61; // eax
  _WORD *v62; // rbx
  unsigned __int16 v63; // di
  _DWORD *v64; // rdx
  void *v65; // rbx
  char v66; // [rsp+0h] [rbp-810h] BYREF
  size_t *p_Size; // [rsp+800h] [rbp-10h]
  unsigned __int16 v68; // [rsp+810h] [rbp+0h]
  int v69; // [rsp+814h] [rbp+4h]
  char v70; // [rsp+818h] [rbp+8h]
  char v71; // [rsp+819h] [rbp+9h]
  unsigned __int16 v72; // [rsp+81Ch] [rbp+Ch] BYREF
  unsigned __int16 v73; // [rsp+820h] [rbp+10h]
  int v74; // [rsp+824h] [rbp+14h]
  size_t Size; // [rsp+828h] [rbp+18h] BYREF
  __int64 v76; // [rsp+830h] [rbp+20h]
  int v77; // [rsp+838h] [rbp+28h]
  unsigned int v78; // [rsp+83Ch] [rbp+2Ch]
  int v79; // [rsp+840h] [rbp+30h]
  int v80; // [rsp+844h] [rbp+34h]
  unsigned __int16 *v81; // [rsp+848h] [rbp+38h] BYREF
  unsigned int v82; // [rsp+850h] [rbp+40h] BYREF
  void *v83; // [rsp+858h] [rbp+48h] BYREF
  __int64 v84; // [rsp+860h] [rbp+50h]
  __int64 v85; // [rsp+868h] [rbp+58h]
  __int64 v86; // [rsp+870h] [rbp+60h]
  unsigned __int64 v87; // [rsp+878h] [rbp+68h] BYREF
  int v88; // [rsp+880h] [rbp+70h]
  unsigned int v89; // [rsp+884h] [rbp+74h]
  __int64 v90; // [rsp+890h] [rbp+80h]
  void *Src; // [rsp+8A0h] [rbp+90h]
  void *v92; // [rsp+8A8h] [rbp+98h]
  _OWORD *v93; // [rsp+8B0h] [rbp+A0h]
  char v94[16]; // [rsp+8D0h] [rbp+C0h] BYREF
  char v95[80]; // [rsp+8E0h] [rbp+D0h] BYREF

  v11 = a2;
  v12 = a1;
  v76 = a1;
  v13 = a7;
  v93 = a7;
  v81 = (unsigned __int16 *)a7;
  v84 = a1;
  v85 = a9;
  v90 = a10;
  v14 = 0;
  v83 = 0LL;
  v72 = 0;
  v73 = 0;
  Src = 0LL;
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 > 0x80 )
    return 87LL;
  if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
  {
    if ( (unsigned __int8)EtwpCheckForEnoughStackSpace(4LL, a2, a1, a2) )
    {
      v60 = alloca(2064LL);
      v83 = &v66;
      EtwpGetStackExtendedHeaderItem(&v83, &v72);
    }
    v11 = a2;
    v12 = v76;
  }
  v15 = 0;
  v78 = 0;
  v16 = 0LL;
  v86 = 0LL;
  v17 = a4;
  v74 = a4;
  while ( 1 )
  {
    v84 = 0LL;
    v81 = 0LL;
    v18 = 0LL;
    v69 = 80;
    v70 = 0;
    v71 = 0;
    LOWORD(v79) = 0;
    LODWORD(Size) = 0;
    v68 = 0;
    v77 = 0;
    v92 = 0LL;
    v19 = 3 * v16;
    if ( !_bittest(&v17, v15) )
    {
      v20 = *((_QWORD *)v11 + 1);
      if ( *(_BYTE *)(v12 + 24 * v16 + 148) )
        break;
    }
LABEL_6:
    v78 = ++v15;
    v86 = ++v16;
    if ( v15 >= 4 )
      return v14;
    v12 = v76;
    v11 = a2;
    v13 = v93;
  }
  v21 = *(_BYTE *)(v12 + 24 * v16 + 149);
  if ( *((_BYTE *)v11 + 4) > v21 && v21
    || ((*(_BYTE *)(v12 + 24 * v16 + 144) & 0x40) == 0 || v20)
    && ((v20 & *(_QWORD *)(v12 + 24 * v16 + 136)) == 0
     || (v20 & *(_QWORD *)(v12 + 24 * v16 + 128)) != *(_QWORD *)(v12 + 24 * v16 + 128)) )
  {
LABEL_60:
    v17 = v74;
    goto LABEL_6;
  }
  v22 = *(unsigned __int8 *)(v12 + 24 * v16 + 150);
  v89 = v22;
  v82 = v22;
  if ( !EtwpLoggerArray )
    goto LABEL_79;
  if ( (unsigned int)v22 < 0x40 )
  {
LABEL_15:
    v23 = 2LL * v82;
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v82 + 8), 1u);
    if ( (*(_QWORD *)(EtwpLoggerArray + 8 * v23) & 1) == 0 )
    {
      v84 = *(_QWORD *)(EtwpLoggerArray + 8 * v23);
      v14 = 0;
      v80 = 0;
      goto LABEL_17;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v23 + 8));
LABEL_79:
    v14 = 4201;
    goto LABEL_60;
  }
  v14 = EtwpDemuxUmTraceHandle((unsigned int)v22, &v82);
  v80 = v14;
  if ( !v14 )
  {
    v15 = v78;
    v16 = v86;
    goto LABEL_15;
  }
LABEL_17:
  if ( v14 )
  {
LABEL_59:
    v16 = v86;
    v15 = v78;
    goto LABEL_60;
  }
  v24 = v13 != 0LL ? 104 : 80;
  v25 = v24;
  v26 = v76;
  if ( (*(_BYTE *)(v76 + 8 * v19 + 144) & 1) != 0 )
  {
    p_Size = &Size;
    if ( (int)NtQueryInformationToken(-6LL, 1LL, v94) >= 0 )
    {
      v61 = Size - 16;
      LODWORD(Size) = v61;
      LOWORD(v61) = (v61 + 15) & 0xFFF8;
      v79 = v61;
      v70 = 1;
      v25 = v24 + (unsigned __int16)v61;
    }
    v26 = v76;
  }
  v27 = *(_DWORD *)(v26 + 8 * v19 + 144);
  if ( (v27 & 4) != 0 && v83 )
  {
    v71 = 1;
    v25 += v72;
    v26 = v76;
  }
  v88 = v27 & 2;
  v28 = v25 + 16;
  if ( (v27 & 2) == 0 )
    v28 = v25;
  v29 = v90 + 32LL * *(unsigned int *)(v90 + 128);
  v30 = 0;
  if ( a8 )
  {
    v31 = *(_WORD *)(v26 + 98) & 0x4000;
    while ( 1 )
    {
      v32 = v28;
      v33 = v31 ? *(_BYTE *)(v85 + 16LL * v30 + 12) : 0;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
          v68 += *(_WORD *)(v85 + 16LL * v30 + 8);
          ++v77;
        }
        else if ( v33 == 2 )
        {
          Src = *(void **)(v85 + 16LL * v30);
          v73 = *(_WORD *)(v85 + 16LL * v30 + 8);
          v28 += (v73 + 15) & 0xFFFFFFF8;
        }
      }
      else
      {
        v28 += *(_DWORD *)(v85 + 16LL * v30 + 8);
      }
      if ( v28 < v32 )
        break;
      if ( ++v30 >= a8 )
        goto LABEL_30;
    }
    v14 = 534;
    v80 = 534;
  }
LABEL_30:
  if ( v77 )
    v28 += (v68 + 15) & 0xFFFFFFF8;
  if ( v14 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v22 + 8));
    return v14;
  }
  *(_DWORD *)(v29 + 24) = v28;
  v34 = v84;
  v35 = EtwpReserveTraceBuffer(
          v84,
          v28,
          NtCurrentTeb()->CurrentIdealProcessor.Reserved,
          (unsigned int)&v87,
          (__int64)&v81);
  v36 = v35;
  if ( v35 )
  {
    *(_QWORD *)v29 = v34;
    *(_QWORD *)(v29 + 8) = v35;
    *(_QWORD *)(v29 + 16) = v81;
    ++*(_DWORD *)(v90 + 128);
    *(_DWORD *)v35 = v28 | *(_DWORD *)(v34 + 44);
    *(_WORD *)(v35 + 4) = a5;
    *(_WORD *)(v35 + 6) = a3;
    *(_OWORD *)(v35 + 24) = *(_OWORD *)(v76 + 32);
    *(_OWORD *)(v35 + 40) = *a2;
    if ( a6 )
      ActivityId = *a6;
    else
      ActivityId = NtCurrentTeb()->ActivityId;
    *(_GUID *)(v35 + 64) = ActivityId;
    if ( a7 )
    {
      v18 = (_WORD *)(v35 + 80);
      *(_DWORD *)(v35 + 80) = 65560;
      *(_DWORD *)(v35 + 84) = 0x100000;
      *(_OWORD *)(v35 + 88) = *a7;
      *(_WORD *)(v35 + 4) |= 1u;
      v38 = 104;
      v69 = 104;
    }
    else
    {
      v38 = v69;
    }
    if ( v70 == 1 )
    {
      v62 = (_WORD *)(v35 + v38);
      v63 = v79;
      *v62 = v79;
      v62[1] = 2;
      v62[3] = Size;
      v62[2] = 0;
      memmove(v62 + 4, v95, (unsigned int)Size);
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = v63 + v69;
      v69 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v62;
    }
    if ( v88 )
    {
      v64 = (_DWORD *)(v36 + v38);
      *v64 = 196624;
      v64[1] = 0x40000;
      v64[2] = NtCurrentPeb()->SessionId;
      *(_WORD *)(v36 + 4) |= 1u;
      v38 += 16;
      v69 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v64;
    }
    if ( v71 == 1 )
    {
      v65 = (void *)(v36 + v38);
      memmove(v65, v83, v72);
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = v72 + v69;
      v69 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v65;
    }
    v39 = Src;
    if ( Src )
    {
      v40 = (unsigned __int16 *)(v36 + v38);
      v81 = v40;
      v41 = v73;
      v42 = (v73 + 15) & 0xFFF8;
      *v40 = v42;
      *(_DWORD *)(v40 + 1) = 12;
      v40[3] = v41;
      v43 = v40 + 4;
      v44 = v41;
      memmove(v40 + 4, v39, v41);
      memset((char *)v43 + v44, 0, (unsigned __int16)(v42 - v73 - 8));
      *(_WORD *)(v36 + 4) |= 1u;
      v45 = v81;
      v38 = *v81 + v69;
      v69 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v45;
    }
    if ( v77 )
    {
      v46 = (unsigned __int16 *)(v36 + v38);
      v47 = v68;
      v48 = (v68 + 15) & 0xFFF8;
      *v46 = v48;
      *(_DWORD *)(v46 + 1) = 11;
      v46[3] = v47;
      v92 = v46 + 4;
      memset((char *)v46 + v47 + 8, 0, (unsigned __int16)(v48 - v47 - 8));
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = *v46 + v69;
      v69 = v38;
      if ( v18 )
        v18[2] |= 1u;
    }
    if ( a8 )
    {
      v49 = (char *)(v85 + 12);
      v50 = a8;
      v51 = v76;
      do
      {
        v52 = *((unsigned int *)v49 - 1);
        v53 = *(unsigned __int64 **)(v49 - 12);
        v54 = 0;
        if ( (*(_WORD *)(v51 + 98) & 0x4000) != 0 )
          v54 = *v49;
        if ( v54 )
        {
          if ( v54 == 1 )
          {
            v57 = *((unsigned int *)v49 - 1);
            v58 = (char *)v92;
            memmove(v92, *(const void **)(v49 - 12), v57);
            v92 = &v58[v57];
          }
          else if ( v54 == 3 && (_DWORD)v52 == 8 )
          {
            v87 = *v53;
          }
        }
        else
        {
          v69 = v52 + v38;
          memmove((void *)(v36 + v38), v53, v52);
        }
        v49 += 16;
        --v50;
        v38 = v69;
      }
      while ( v50 );
      v14 = v80;
    }
    v55 = v87;
    *(_QWORD *)(v36 + 16) = v87;
    if ( *(_DWORD *)(v84 + 16) != 3 )
      v55 = __rdtsc();
    *(_QWORD *)(v36 + 56) = v55;
    v56 = NtCurrentTeb();
    *(_DWORD *)(v36 + 8) = v56->ClientId.UniqueThread;
    *(_DWORD *)(v36 + 12) = v56->ClientId.UniqueProcess;
    goto LABEL_59;
  }
  if ( v28 <= 0xFFF8 )
    v14 = *(_DWORD *)(v34 + 212) < v28 ? 234 : 8;
  else
    v14 = 534;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v89 + 8));
  return v14;
}
