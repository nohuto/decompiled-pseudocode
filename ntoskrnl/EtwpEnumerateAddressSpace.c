/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1407EC24C
 * Callers:
 *     EtwTraceProcess @ 0x1407E93B4 (EtwTraceProcess.c)
 *     EtwpProcessEnumCallback @ 0x14080DD60 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     KeAreAllApcsDisabled @ 0x14034C170 (KeAreAllApcsDisabled.c)
 *     EtwpTraceImageUnload @ 0x14035E3D0 (EtwpTraceImageUnload.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpTraceImageRundown @ 0x140801B68 (EtwpTraceImageRundown.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnumerateAddressSpace(PRKPROCESS PROCESS, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 *v4; // r12
  __int64 v5; // r15
  struct _KPROCESS *v6; // r9
  int v7; // ecx
  int v8; // edi
  char v9; // cl
  unsigned __int16 *Pool2; // r14
  unsigned __int16 v11; // r13
  __m128i *v12; // rax
  __m128i *i; // rsi
  __int64 v14; // rax
  int v15; // edx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r11d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  char *v23; // r8
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // [rsp+54h] [rbp-174h] BYREF
  __int16 v33; // [rsp+58h] [rbp-170h]
  __int16 v34; // [rsp+5Ch] [rbp-16Ch]
  __int16 v35; // [rsp+60h] [rbp-168h]
  int v36; // [rsp+64h] [rbp-164h]
  int v37; // [rsp+68h] [rbp-160h]
  int v38; // [rsp+6Ch] [rbp-15Ch]
  int v39; // [rsp+70h] [rbp-158h]
  int v40; // [rsp+74h] [rbp-154h]
  int v41; // [rsp+78h] [rbp-150h]
  int v42; // [rsp+7Ch] [rbp-14Ch]
  int v43; // [rsp+80h] [rbp-148h]
  int v44; // [rsp+84h] [rbp-144h]
  int v45; // [rsp+88h] [rbp-140h]
  int v46; // [rsp+8Ch] [rbp-13Ch]
  int v47; // [rsp+90h] [rbp-138h]
  PRKPROCESS v48; // [rsp+98h] [rbp-130h]
  __int64 v49; // [rsp+A0h] [rbp-128h]
  int v50; // [rsp+A8h] [rbp-120h]
  int v51; // [rsp+ACh] [rbp-11Ch]
  int v52; // [rsp+B0h] [rbp-118h]
  int v53; // [rsp+B4h] [rbp-114h]
  __int64 v54; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-108h]
  __int64 v56; // [rsp+C8h] [rbp-100h]
  unsigned __int16 *v57; // [rsp+D0h] [rbp-F8h]
  __int64 v58; // [rsp+D8h] [rbp-F0h]
  __int64 v59; // [rsp+E0h] [rbp-E8h]
  __int64 v60; // [rsp+E8h] [rbp-E0h]
  __m128i *v61; // [rsp+F0h] [rbp-D8h]
  __int64 v62; // [rsp+F8h] [rbp-D0h]
  __int64 v63; // [rsp+100h] [rbp-C8h]
  __int64 v64; // [rsp+108h] [rbp-C0h]
  PRKPROCESS v65; // [rsp+110h] [rbp-B8h]
  __int64 v66; // [rsp+118h] [rbp-B0h]
  __int64 *v67; // [rsp+120h] [rbp-A8h]
  __int32 *v68; // [rsp+128h] [rbp-A0h]
  unsigned __int64 *v69; // [rsp+130h] [rbp-98h]
  PVOID P; // [rsp+138h] [rbp-90h]
  __int128 v71; // [rsp+170h] [rbp-58h] BYREF
  __m128i *v72; // [rsp+180h] [rbp-48h] BYREF
  unsigned int v73; // [rsp+188h] [rbp-40h]
  int v74; // [rsp+18Ch] [rbp-3Ch]

  v5 = a2;
  v6 = PROCESS;
  v48 = PROCESS;
  v65 = PROCESS;
  v66 = a2;
  v32 = 0;
  v71 = 0LL;
  v54 = 0LL;
  if ( !a3 || (v3 = *a3, v7 = 1, (*a3 & 4) == 0) )
    v7 = 0;
  if ( !a3 || (v3 = a3[1], LOBYTE(v3) = 1, (a3[1] & 0x8000) == 0) )
    LOBYTE(v3) = 0;
  v8 = v7 | 4;
  if ( !(_BYTE)v3 )
    v8 = v7;
  v36 = v8;
  if ( a2 )
  {
    if ( a3 )
    {
      v3 = *a3;
      if ( (*a3 & 0x8000) != 0 )
        v8 |= 2u;
    }
    v36 = v8;
  }
  if ( !v8 )
  {
    Pool2 = 0LL;
    goto LABEL_42;
  }
  if ( a2 )
  {
    v49 = *(_QWORD *)(a2 + 32);
    v58 = v49;
    v9 = *(_BYTE *)(a2 + 64);
    Pool2 = *(unsigned __int16 **)(a2 + 16);
    LOWORD(a2) = 5124 - (v9 != 0);
    v40 = a2;
    v33 = a2;
    LOWORD(v4) = 1064 - (v9 != 0);
    LOWORD(v3) = 641 - (v9 != 0);
  }
  else
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 0x2000LL, 1718773072LL);
    LODWORD(v4) = 1062;
    v3 = 611;
    v49 = 0LL;
    v58 = 0LL;
    v40 = 0;
    v33 = 0;
    v6 = v48;
  }
  v35 = v3;
  v43 = v3;
  v34 = (__int16)v4;
  v37 = (int)v4;
  v57 = Pool2;
  if ( Pool2 || (v8 &= ~1u, (v36 = v8) != 0) )
  {
    v56 = 0LL;
    v44 = 0;
    v55 = 0LL;
    v45 = 0;
    v60 = 0LL;
    v11 = 0;
    v39 = 0;
    v12 = (__m128i *)MmEnumerateAddressSpaceAndReferenceImages(v6, v8);
    P = v12;
    if ( v12 )
    {
      for ( i = v12; ; i += 3 )
      {
        v61 = i;
        if ( !i->m128i_i64[0] )
        {
          ExFreePoolWithTag(P, 0);
          goto LABEL_42;
        }
        v14 = i->m128i_i64[0] & 3;
        i->m128i_i64[0] &= 0xFFFFFFFFFFFFFFFCuLL;
        v15 = 0;
        v42 = 0;
        v53 = 0;
        if ( !v14 )
          break;
        if ( v14 != 2 )
        {
          v11 = (unsigned __int16)v4;
          v26 = 0x8000;
          v39 = 0x8000;
          v15 = 3;
          v24 = 44;
          v32 = 44;
          v25 = 1;
          goto LABEL_38;
        }
        v11 = v43;
        v26 = 536903680;
        v39 = 536903680;
        if ( v5 )
        {
          v24 = 32;
          v32 = 32;
        }
        else
        {
          v32 = 24;
          i[1].m128i_i32[1] = 0x8000;
          v24 = v32;
        }
LABEL_57:
        if ( v5 )
        {
          v30 = 5249026;
          if ( v15 )
            v30 = v15 | 0x501800;
          *(_QWORD *)&v71 = i;
          *((_QWORD *)&v71 + 1) = v24;
          EtwpLogKernelEvent((__int64)&v71, *(_QWORD *)(v49 + 1096), *(_DWORD *)v49, 1u, v11, v30);
        }
        else
        {
          v31 = 5249282;
          if ( v15 )
            v31 = v15 | 0x501900;
          v72 = i;
          v73 = v24;
          v74 = 0;
          EtwTraceKernelEvent((__int64)&v72, 1u, v26, v11, v31);
        }
LABEL_39:
        ;
      }
      v4 = &i->m128i_i64[1];
      if ( (v8 & 2) != 0 )
      {
        v38 = 1;
        v27 = *v4;
        v56 = ((unsigned __int64)*v4 >> 1) & 0x1F;
        v44 = v56;
        v60 = i[2].m128i_i64[0];
        *v4 = v27 & 0xFFFFFFFFFFFFFFC0uLL;
        LODWORD(v27) = v27 & 1;
        v55 = (unsigned int)v27;
        v45 = v27;
      }
      else
      {
        v38 = 0;
      }
      v67 = &i->m128i_i64[1];
      v16 = *v4;
      v63 = ((unsigned __int64)*v4 >> 6) & 0xF;
      v51 = v63;
      v64 = (v16 >> 10) & 7;
      v52 = (v16 >> 10) & 7;
      *v4 = v16 & 0xFFFFFFFFFFFFE03FuLL;
      v54 = 0LL;
      if ( KeAreAllApcsDisabled() )
        __int2c();
      if ( !FltMgrCallbacks
        || (v47 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64 *))(FltMgrCallbacks + 24))(
                    i->m128i_i64[0],
                    1024LL,
                    Pool2,
                    &v54),
            v47 < 0) )
      {
        v47 = ObQueryNameStringMode((char *)i->m128i_i64[0], (__int64)Pool2, 0x2000u, &v32, 0);
      }
      v41 = 0;
      v68 = &i[2].m128i_i32[2];
      v50 = i[2].m128i_i32[2];
      v46 = v50;
      v69 = (unsigned __int64 *)&i[1];
      v62 = i[1].m128i_i64[0];
      v59 = v62;
      v17 = RtlImageNtHeader(*v4);
      if ( v17 )
      {
        v18 = *(_DWORD *)(v17 + 88);
        v46 = v18;
        v19 = *(_DWORD *)(v17 + 8);
        v41 = v19;
        v20 = *(_QWORD *)(v17 + 48);
        v59 = v20;
      }
      else
      {
        v19 = v41;
        v18 = v50;
        v20 = v62;
      }
      v21 = v63;
      v22 = v64;
      if ( v47 >= 0 )
      {
        if ( v5 )
          EtwpTraceImageRundown(
            v49,
            (unsigned __int16)v40,
            (_DWORD)Pool2,
            v48[1].Header.WaitListHead.Flink,
            (__int64)i,
            v63,
            v64);
        else
          EtwpTraceImageUnload(Pool2, (__int64)v48, *v4, i[1].m128i_i64[1], v18, v19, v63, v64, v20, 0);
      }
      if ( v54 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(FltMgrCallbacks + 32))(v54, v21, v22);
      v23 = (char *)i->m128i_i64[0];
      if ( v38 )
      {
        v28 = *i;
        v29 = i[1];
        *i = 0LL;
        i[1] = 0LL;
        i[2] = 0LL;
        *v68 = (__int32)v48[1].Header.WaitListHead.Flink;
        *v4 = *(_QWORD *)(v28.m128i_i64[0] + 24);
        i->m128i_i64[0] = _mm_srli_si128(v28, 8).m128i_u64[0];
        i[1].m128i_i64[1] = _mm_srli_si128(v29, 8).m128i_u64[0];
        i[2].m128i_i64[0] = v60;
        *v69 = *v69 & 0xFF40FFFFFFFFFFFFuLL | ((v56 & 0x1F | (32 * (v55 & 1))) << 48) | 0x40000000000000LL;
        LOWORD(v4) = v37;
        v11 = v37;
        v39 = 0x8000;
        v42 = 3;
        v32 = 44;
      }
      else
      {
        LOWORD(v4) = v37;
      }
      ObfDereferenceObject(v23);
      v24 = v32;
      v25 = v38;
      v15 = v42;
      v26 = v39;
LABEL_38:
      if ( !v25 )
        goto LABEL_39;
      goto LABEL_57;
    }
  }
LABEL_42:
  if ( !v5 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
