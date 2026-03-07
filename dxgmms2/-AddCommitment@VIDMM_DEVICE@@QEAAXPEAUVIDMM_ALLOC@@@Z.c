void __fastcall VIDMM_DEVICE::AddCommitment(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v4; // rsi
  DXGPROCESS **v5; // r14
  unsigned int *v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rcx

  v4 = **a2;
  v5 = (DXGPROCESS **)(*a2)[1];
  v6 = *(unsigned int **)(v4 + 120);
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = this;
  }
  v8 = a2 + 7;
  v9 = *((_QWORD *)this + 5) + 56LL * v6[5];
  ++*(_DWORD *)v9;
  *(_QWORD *)(v9 + 8) += *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v9 + 48) = this;
  v10 = *(__int64 **)(v9 + 40);
  if ( *v10 != v9 + 32 )
    __fastfail(3u);
  a2[8] = v10;
  *v8 = v9 + 32;
  *v10 = (__int64)v8;
  *(_QWORD *)(v9 + 40) = v8;
  VIDMM_PROCESS::AddCommitment(
    v5,
    (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v9,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL),
    (struct VIDMM_SEGMENT *)v6,
    *(_DWORD *)v9 == 1,
    (struct _VIDMM_GLOBAL_ALLOC *)v4);
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 2;
  ++*(_DWORD *)(v4 + 144);
  *((_DWORD *)a2 + 7) |= 0x10u;
}
