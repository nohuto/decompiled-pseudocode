/*
 * XREFs of ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C002B854
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0009610 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqUR4_EtwWriteTransfer @ 0x1C002DFC4 (McTemplateK0pqqqqUR4_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProcessHistoryBuffer(struct _VIDSCH_DMA_PACKET *a1, __m128i **a2)
{
  __int64 v2; // r11
  __m128i *v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int8 *v10; // rsi
  unsigned int v11; // edi
  unsigned __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // r8
  unsigned int v15; // r13d
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // r12d
  unsigned __int64 v19; // rdi
  int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  int v32; // ecx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __m128i v35; // [rsp+50h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-19h] BYREF
  __m128i *v37; // [rsp+78h] [rbp-1h] BYREF
  int v38; // [rsp+80h] [rbp+7h]
  int v39; // [rsp+84h] [rbp+Bh]
  __int64 v40; // [rsp+88h] [rbp+Fh]
  __int64 v41; // [rsp+90h] [rbp+17h]
  unsigned int v42; // [rsp+98h] [rbp+1Fh]
  int v43; // [rsp+9Ch] [rbp+23h]
  int v45; // [rsp+F0h] [rbp+77h]
  int v46; // [rsp+F0h] [rbp+77h]
  __int64 v47; // [rsp+F8h] [rbp+7Fh]

  if ( (qword_1C0050010 & 0x61C8ED7) != 0
    && (qword_1C0050018 & 0xFFFFFFFFF9E37128uLL) == 0
    && (qword_1C0050010 & 0x4000) != 0 )
  {
    v2 = *((_QWORD *)a1 + 6);
    v3 = *a2;
    v47 = v2;
    v4 = *(_QWORD *)(v2 + 96);
    v45 = *((_DWORD *)a2 + 2);
    v5 = *(_QWORD *)(v4 + 24);
    v6 = *(unsigned __int16 *)(v4 + 4);
    v7 = *(_QWORD *)(v5 + 624);
    v8 = v7 + 8 * v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 696) )
      v8 = *(_QWORD *)(v5 + 624);
    v9 = *(unsigned __int16 *)(*(_QWORD *)v8 + 6LL);
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 696) )
      v7 += 8 * v6;
    v10 = &v3->m128i_i8[*((unsigned int *)a2 + 2)];
    v35 = *v3;
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(*v3, 8));
    v12 = (unsigned __int64)v3[1].m128i_u64 + v11;
    if ( v12 < (unsigned __int64)v3 || v12 > (unsigned __int64)v10 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(v6, a2, v9);
      v23[3] = v11;
LABEL_43:
      WdLogEvent5_WdAssertion(v23);
      return;
    }
    v13 = *(_QWORD *)(v5 + 8);
    v14 = 360 * v9;
    v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 2584LL) + v14 + 40)
                    + 4LL * *(unsigned __int16 *)(*(_QWORD *)v7 + 8LL));
    if ( v15 )
    {
      v16 = v3->m128i_i64[0];
      v17 = 8;
      if ( v15 <= 0x20 )
        v17 = 4;
      v18 = 8064;
      if ( v15 <= 0x20 )
        v18 = 16128;
      v46 = v17;
      v19 = HIDWORD(v35.m128i_i64[0]);
      while ( 1 )
      {
        v20 = v18;
        if ( v18 >= (unsigned int)v19 )
          v20 = v19;
        v21 = (unsigned int)(v17 * v20);
        v22 = (unsigned int)v21;
        if ( (unsigned int)v21 > (unsigned __int64)&v10[-v12] )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0pqqqqUR4_EtwWriteTransfer(
            (unsigned int)&DxgkControlGuid_Context,
            v16,
            v14,
            *(_QWORD *)(v2 + 56),
            v16,
            *((_DWORD *)a1 + 24),
            v15,
            v21,
            v12);
          v16 = v35.m128i_i64[0];
          v2 = v47;
        }
        v12 += v22;
        LODWORD(v19) = v19 - v20;
        if ( !(_DWORD)v19 )
          return;
        v17 = v46;
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21, v16, v14);
      v23[3] = v12;
      v23[4] = v10;
      v23[5] = v22;
      goto LABEL_43;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 1120), &LockHandle);
    v24 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1112LL);
    if ( v24 )
    {
      v39 = 0;
      v43 = 0;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v47 + 64);
        v26 = *(_QWORD *)(v5 + 8);
        v38 = v45;
        v37 = v3;
        v40 = v24;
        v41 = 64512LL;
        v42 = 0;
        v27 = ((__int64 (__fastcall *)(__int64, __int64, __m128i **))DxgCoreInterface[46])(v26, v25, &v37);
        v31 = v27;
        if ( v27 < 0 )
          break;
        if ( HIDWORD(v41) )
        {
          if ( v42 == 32 )
          {
            v32 = 4;
          }
          else
          {
            if ( v42 != 64 )
            {
              v34 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29, v42, v30);
              v34[3] = v42;
              goto LABEL_40;
            }
            v32 = 8;
          }
          v33 = (unsigned int)(HIDWORD(v41) * v32);
          if ( (unsigned int)v33 > 0xFC00 )
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdAssertion(v33, v42, v30);
            v34[3] = HIDWORD(v41);
            v34[4] = v42;
            v34[5] = 64512LL;
            goto LABEL_40;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0pqqqqUR4_EtwWriteTransfer(
              (unsigned int)&DxgkControlGuid_Context,
              v42,
              v30,
              *(_QWORD *)(v47 + 56),
              v35.m128i_i8[0],
              *((_DWORD *)a1 + 24),
              v42,
              v33,
              v24);
        }
        if ( !v43 )
          goto LABEL_41;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29, v28, v30);
      v34[3] = v31;
LABEL_40:
      WdLogEvent5_WdAssertion(v34);
    }
LABEL_41:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
