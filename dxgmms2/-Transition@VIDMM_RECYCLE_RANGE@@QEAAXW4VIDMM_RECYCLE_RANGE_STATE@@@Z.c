int __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+28h] [rbp-10h]

  LODWORD(v4) = WdLogSingleEntry3(4LL, a1, *(int *)(a1 + 64), a2);
  if ( (byte_1C00769C2 & 2) != 0 )
  {
    v13 = a2;
    v12 = *(_DWORD *)(a1 + 64);
    LODWORD(v4) = McTemplateK0pqq_EtwWriteTransfer(v5, &EventRecycleRangeTransition, v6, a1, v12, v13);
  }
  v7 = *(_QWORD *)(a1 + 72);
  v8 = *(_QWORD **)(v7 + 136);
  if ( v8 )
  {
    v9 = *v8 + 144LL * v8[1];
    *(_DWORD *)v9 = 2;
    *(_QWORD *)(v9 + 8) = a1;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v9 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v7 + 136) + 8LL);
    v10 = *(_QWORD *)(v7 + 136);
    v4 = *(_QWORD *)(v10 + 48);
    if ( *(_QWORD *)(v10 + 8) == v4 )
    {
      *(_QWORD *)(v10 + 8) = 0LL;
      v4 = *(_QWORD *)(v7 + 136);
      *(_BYTE *)(v4 + 16) = 1;
    }
  }
  *(_DWORD *)(a1 + 64) = a2;
  return v4;
}
