void __fastcall MiInitializeNewImageSectionProtos(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  unsigned int v4; // esi
  unsigned int v6; // ecx
  __int64 *v7; // r14
  int v8; // r15d
  unsigned __int64 v9; // r12
  signed __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int16 v14; // ax
  int v15; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h]
  unsigned __int8 v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+98h] [rbp+10h]
  unsigned int v20; // [rsp+A0h] [rbp+18h]
  unsigned int v21; // [rsp+A8h] [rbp+20h]

  if ( !a2 )
    return;
  v19 = a2;
  v2 = *(_QWORD *)(a1 + 136);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 172);
  v17 = v2;
  v20 = v4;
  do
  {
    if ( (*((_BYTE *)v3 + 10) & 4) != 0 )
      goto LABEL_22;
    MmUnmapLockedPages((PVOID)v3[3], (PMDL)v3);
    v7 = v3 + 6;
    v8 = *((_DWORD *)v3 + 10) >> 12;
    v9 = 0LL;
    v21 = *((_DWORD *)v3 + 4);
    v6 = v21;
    v18 = 17;
    v10 = v2 + 8LL * v21;
    if ( !v8 )
      goto LABEL_22;
    v11 = 0LL;
    do
    {
      v16 = *v7;
      v12 = 48 * v16 - 0x220000000000LL;
      if ( v6 < v4 )
      {
        if ( (v10 & 0xFFFFFFFFFFFFF000uLL) != v9 )
        {
          if ( v9 )
            MiUnlockProtoPoolPage(v11, v18);
          v11 = MiLockProtoPoolPageForce(v10, (__int64)&v18);
          v9 = v10 & 0xFFFFFFFFFFFFF000uLL;
        }
        v13 = MiLockLeafPage(v10, 0LL);
        v14 = MI_READ_PTE_LOCK_FREE(v10);
        if ( v13 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (v14 & 0x400) != 0 )
        {
          v15 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v15);
            while ( *(__int64 *)(v12 + 24) < 0 );
          }
          MiInitializeTransitionPfn(v16, (__int64 *)v10, -1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
            MiReferenceControlAreaPfn(a1, 0LL, 1u);
          goto LABEL_17;
        }
        MiReturnPfnReferenceCount(v12);
        *v7 = -1LL;
LABEL_17:
        v4 = v20;
        goto LABEL_18;
      }
      MiReturnPfnReferenceCount(48 * v16 - 0x220000000000LL);
      *v7 = -1LL;
LABEL_18:
      v10 += 8LL;
      v6 = v21 + 1;
      ++v7;
      ++v21;
      --v8;
    }
    while ( v8 );
    v16 = v11;
    v3 = v19;
    if ( v9 )
      MiUnlockProtoPoolPage(v16, v18);
    v2 = v17;
LABEL_22:
    v3 = (__int64 *)*v3;
    v19 = v3;
  }
  while ( v3 );
}
