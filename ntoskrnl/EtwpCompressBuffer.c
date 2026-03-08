/*
 * XREFs of EtwpCompressBuffer @ 0x1405FFD70
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x1406000F4 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     RtlCompressBuffer @ 0x1402F8450 (RtlCompressBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x1402FAD84 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetNextEventOffsetType @ 0x14039D3D8 (EtwpGetNextEventOffsetType.c)
 *     EtwpRotateCompressionTarget @ 0x1406006D8 (EtwpRotateCompressionTarget.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140600744 (EtwpRotateCompressionTargetIfNeeded.c)
 */

__int64 __fastcall EtwpCompressBuffer(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  ULONG v5; // edi
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r8
  __int64 CompressedBufferSize; // r9
  NTSTATUS v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edi
  ULONG i; // r13d
  int NextEventOffsetType; // r10d
  ULONG v18; // eax
  __int64 v19; // rax
  ULONG v21; // eax
  unsigned int v22; // [rsp+40h] [rbp-48h]
  ULONG FinalCompressedSize; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h] BYREF
  int v25; // [rsp+A8h] [rbp+20h]

  FinalCompressedSize = 0;
  v24 = 0;
  if ( *(_DWORD *)(a2 + 8) <= *(_DWORD *)a2 )
    v4 = *(_DWORD *)(a2 + 8);
  else
    v4 = *(_DWORD *)(a2 + 4);
  v5 = v4 - 72;
  v6 = 72;
  if ( v4 == 72 )
  {
LABEL_5:
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  EtwpRotateCompressionTargetIfNeeded();
  while ( 1 )
  {
    v19 = *(_QWORD *)(a1 + 1152);
    if ( !v19 )
    {
      ++*(_DWORD *)(a1 + 252);
      return 3221225495LL;
    }
    v8 = *(unsigned int *)(v19 + 8);
    v9 = *(_QWORD *)(a1 + 1152);
    v10 = (unsigned int)v8;
    v11 = v8 + 72;
    CompressedBufferSize = (unsigned int)(*(_DWORD *)(a1 + 4) - *(_DWORD *)(v9 + 8) - 72);
    v22 = *(_DWORD *)(a1 + 4) - *(_DWORD *)(v9 + 8) - 72;
    if ( *(_DWORD *)(v9 + 8) == 72 || v5 < *(_DWORD *)(a1 + 1172) * (int)CompressedBufferSize )
    {
      v13 = RtlCompressBuffer(
              3u,
              (PUCHAR)(a2 + v6),
              v5,
              (PUCHAR)(v11 + v9),
              CompressedBufferSize,
              0,
              &FinalCompressedSize,
              *(PVOID *)(a1 + 1160));
      v7 = (unsigned int)v13;
      if ( v13 >= 0 )
      {
        *(_OWORD *)(v10 + v9) = *(_OWORD *)a2;
        *(_OWORD *)(v10 + v9 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v10 + v9 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v10 + v9 + 48) = *(_OWORD *)(a2 + 48);
        *(_QWORD *)(v10 + v9 + 64) = *(_QWORD *)(a2 + 64);
        v21 = FinalCompressedSize;
        *(_QWORD *)(v10 + v9 + 24) = 0LL;
        *(_DWORD *)(v10 + v9) = v21 + 72;
        *(_DWORD *)(v10 + v9 + 8) = v5 + 72;
        *(_DWORD *)(v10 + v9 + 4) = v5 + 72;
        *(_DWORD *)(v10 + v9 + 12) = 0;
        *(_DWORD *)(v10 + v9 + 44) = 3;
        *(_DWORD *)(*(_QWORD *)(a1 + 1152) + 8LL) += 72;
        *(_DWORD *)(*(_QWORD *)(a1 + 1152) + 8LL) += FinalCompressedSize;
        return (unsigned int)v7;
      }
      CompressedBufferSize = v22;
    }
    LOBYTE(v14) = 1;
    v25 = 1;
    if ( *(_DWORD *)(a1 + 1176) )
      break;
LABEL_27:
    v5 = v4 - v6;
    EtwpRotateCompressionTarget(a1, v7, v11, CompressedBufferSize);
  }
  while ( 1 )
  {
    v15 = v6 + (v5 >> v14);
    for ( i = 0; ; i += v24 )
    {
      NextEventOffsetType = EtwpGetNextEventOffsetType((unsigned int *)a2, v6 + i, &v24);
      if ( !NextEventOffsetType )
        break;
      v7 = v24;
      if ( v24 + v6 + i > v15 )
        break;
    }
    if ( i )
    {
      if ( RtlCompressBuffer(
             3u,
             (PUCHAR)(a2 + v6),
             i,
             (PUCHAR)(v10 + v9 + 72),
             CompressedBufferSize,
             0,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 1160)) >= 0 )
      {
        v6 += i;
        *(_OWORD *)(v10 + v9) = *(_OWORD *)a2;
        *(_OWORD *)(v10 + v9 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v10 + v9 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v10 + v9 + 48) = *(_OWORD *)(a2 + 48);
        *(_QWORD *)(v10 + v9 + 64) = *(_QWORD *)(a2 + 64);
        v18 = FinalCompressedSize;
        *(_QWORD *)(v10 + v9 + 24) = 0LL;
        *(_DWORD *)(v10 + v9) = v18 + 72;
        *(_DWORD *)(v10 + v9 + 8) = i + 72;
        *(_DWORD *)(v10 + v9 + 4) = i + 72;
        *(_DWORD *)(v10 + v9 + 12) = 0;
        *(_DWORD *)(v10 + v9 + 44) = 3;
        *(_DWORD *)(*(_QWORD *)(a1 + 1152) + 8LL) += 72;
        *(_DWORD *)(*(_QWORD *)(a1 + 1152) + 8LL) += FinalCompressedSize;
        goto LABEL_27;
      }
      v14 = ++v25;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1152) + 8LL) != 72 )
      goto LABEL_27;
    if ( !NextEventOffsetType )
      break;
    EtwpUpdateEventsLostCount(a1);
    v6 += v24;
    if ( v6 == v4 )
      goto LABEL_5;
    if ( v6 > v4 )
      goto LABEL_30;
    v14 = v25;
LABEL_24:
    v5 = v4 - v6;
    if ( v14 > *(_DWORD *)(a1 + 1176) )
      goto LABEL_27;
  }
  ++*(_DWORD *)(a1 + 252);
LABEL_30:
  LODWORD(v7) = -1073741566;
  return (unsigned int)v7;
}
