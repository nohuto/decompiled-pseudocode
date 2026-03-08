/*
 * XREFs of ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0036034
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqUR4_EtwWriteTransfer @ 0x1C0038D08 (McTemplateK0pqqqqUR4_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProcessHistoryBuffer(struct _VIDSCH_DMA_PACKET *a1, __m128i **a2)
{
  struct _VIDSCH_DMA_PACKET *v2; // r11
  _QWORD *v3; // r13
  __m128i *v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax
  __int8 *v10; // rsi
  unsigned int v11; // ecx
  unsigned __int64 v12; // rbx
  __int64 v13; // r10
  unsigned int v14; // edx
  __int32 v15; // r8d
  int v16; // eax
  unsigned int v17; // r13d
  unsigned __int64 v18; // r14
  int v19; // r15d
  unsigned int v20; // ecx
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  int v26; // r8d
  int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rbx
  __int64 v30; // rbx
  _QWORD *v31; // [rsp+50h] [rbp-39h]
  __m128i v32; // [rsp+58h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  __m128i *v34; // [rsp+80h] [rbp-9h] BYREF
  int v35; // [rsp+88h] [rbp-1h]
  int v36; // [rsp+8Ch] [rbp+3h]
  __int64 v37; // [rsp+90h] [rbp+7h]
  __int64 v38; // [rsp+98h] [rbp+Fh]
  unsigned int v39; // [rsp+A0h] [rbp+17h]
  int v40; // [rsp+A4h] [rbp+1Bh]
  unsigned int v42; // [rsp+100h] [rbp+77h]
  int v43; // [rsp+108h] [rbp+7Fh]
  int v44; // [rsp+108h] [rbp+7Fh]

  v2 = a1;
  if ( (qword_1C0076010 & 0x461C8ED7) != 0
    && (qword_1C0076018 & 0xFFFFFFFFB9E37128uLL) == 0
    && (qword_1C0076010 & 0x4000) != 0 )
  {
    v3 = (_QWORD *)*((_QWORD *)a1 + 6);
    v4 = *a2;
    v31 = v3;
    v5 = v3[12];
    v43 = *((_DWORD *)a2 + 2);
    v6 = *(_QWORD *)(v5 + 24);
    v7 = *(unsigned __int16 *)(v5 + 4);
    v8 = *(_QWORD *)(v6 + 632);
    v9 = v8 + 8 * v7;
    if ( (unsigned int)v7 < *(_DWORD *)(v6 + 704) )
      v8 += 8 * v7;
    else
      v9 = *(_QWORD *)(v6 + 632);
    v10 = &v4->m128i_i8[*((unsigned int *)a2 + 2)];
    v32 = *v4;
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(*v4, 8));
    v12 = (unsigned __int64)v4[1].m128i_u64 + v11;
    if ( v12 < (unsigned __int64)v4 || v12 > (unsigned __int64)v10 )
    {
      v30 = v11;
      WdLogSingleEntry1(1LL, v11);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid history buffer private data size. PrivateDataSize=%d",
        v30,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v13 = *(_QWORD *)(v6 + 8);
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 2808LL)
                                  + 344LL * *(unsigned __int16 *)(*(_QWORD *)v9 + 6LL)
                                  + 40)
                      + 4LL * *(unsigned __int16 *)(*(_QWORD *)v8 + 8LL));
      v42 = v14;
      if ( v14 )
      {
        v15 = (__int32)*v4;
        v16 = 8;
        v17 = 8064;
        if ( v14 <= 0x20 )
        {
          v16 = 4;
          v17 = 16128;
        }
        v44 = v16;
        v18 = HIDWORD(v32.m128i_i64[0]);
        while ( 1 )
        {
          v19 = v18;
          if ( v17 < (unsigned int)v18 )
            v19 = v17;
          v20 = v19 * v16;
          v21 = (unsigned int)(v19 * v16);
          if ( v21 > (unsigned __int64)&v10[-v12] )
            break;
          if ( byte_1C00769C1 < 0 )
          {
            McTemplateK0pqqqqUR4_EtwWriteTransfer(
              (unsigned int)&DxgkControlGuid_Context,
              v14,
              v15,
              v31[7],
              v15,
              *((_DWORD *)v2 + 24),
              v14,
              v20,
              v12);
            v14 = v42;
            v15 = v32.m128i_i32[0];
            v2 = a1;
          }
          v12 += v21;
          LODWORD(v18) = v18 - v19;
          if ( !(_DWORD)v18 )
            return;
          v16 = v44;
        }
        WdLogSingleEntry3(1LL, v12, v10, v20);
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, unsigned __int64, __int8 *, unsigned __int64, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Attempting to read memory outside the bounds of the history buffer. TimestampsStart=%I64X, TimestampsEnd=%I64X"
           ", BytesAccessed=%d",
          v12,
          v10,
          v21,
          0LL,
          0LL);
      }
      else
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 1256), &LockHandle);
        v22 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1248LL);
        if ( v22 )
        {
          v36 = 0;
          v40 = 0;
          while ( 1 )
          {
            v23 = *(_QWORD *)(v6 + 8);
            v24 = v3[8];
            v35 = v43;
            v34 = v4;
            v37 = v22;
            v38 = 64512LL;
            v39 = 0;
            v25 = ((__int64 (__fastcall *)(__int64, __int64, __m128i **))DxgCoreInterface[47])(v23, v24, &v34);
            if ( v25 < 0 )
              break;
            if ( HIDWORD(v38) )
            {
              if ( v39 == 32 )
              {
                v27 = 4;
              }
              else
              {
                if ( v39 != 64 )
                {
                  WdLogSingleEntry1(1LL, v39);
                  ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Driver returned invalid precision in formatting DDI. Precision=%d",
                    v39,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_37;
                }
                v27 = 8;
              }
              v28 = HIDWORD(v38) * v27;
              if ( v28 > 0xFC00 )
              {
                WdLogSingleEntry3(1LL, HIDWORD(v38), v39, 64512LL);
                ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, _QWORD, _QWORD, __int64, _QWORD, _QWORD))DxgCoreInterface[86])(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Driver reporting more timestamps than will fit in formatting buffer. NumTimestamps=%d, Precision=%d, BufferSize=%d",
                  HIDWORD(v38),
                  v39,
                  64512LL,
                  0LL,
                  0LL);
                goto LABEL_37;
              }
              if ( byte_1C00769C1 < 0 )
                McTemplateK0pqqqqUR4_EtwWriteTransfer(
                  (unsigned int)&DxgkControlGuid_Context,
                  v28,
                  v26,
                  v3[7],
                  v32.m128i_i8[0],
                  *((_DWORD *)a1 + 24),
                  v39,
                  v28,
                  v22);
            }
            if ( !v40 )
              goto LABEL_37;
          }
          v29 = v25;
          WdLogSingleEntry1(1LL, v25);
          ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Call to formatting DDI failed. Status=%d",
            v29,
            0LL,
            0LL,
            0LL,
            0LL);
        }
LABEL_37:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
}
