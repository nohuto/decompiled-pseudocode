void __fastcall KeMarkHiberPhase(_QWORD *Address)
{
  __int64 v1; // rdi
  char *v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // r15
  void *v6; // r8
  _QWORD **v7; // r14
  __int64 v8; // rbp
  _QWORD *i; // rbx
  void *v10; // r8
  __int64 v11; // rbp
  _QWORD **v12; // r14
  _QWORD *j; // rbx
  unsigned int v14; // ecx
  void *v15; // r8
  void *v16; // r8
  _QWORD *v17; // rbp
  void *v18; // rdi
  ULONG_PTR v19; // rbx
  PVOID *k; // rbx

  v1 = Address[4];
  v2 = (char *)Address[1];
  if ( *(_DWORD *)(v1 + 36) )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      Address,
      ((((_DWORD)KeNumberProcessors_0 << 6) + 53695) & 0xFFFFF000) + 28672,
      0x6370654Bu);
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, Address, 0xC080uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v1, 0xBF00uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, v2, 0x68uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, &KiBootProcessorIdtSize, 0LL, 0x6370654Bu);
    v3 = 1;
    v4 = 8LL;
    do
    {
      v5 = *(_QWORD *)&v2[v4 + 28];
      if ( v3 == 1 || v3 == 2 || v3 - 3 <= 1 )
      {
        if ( KiKvaShadow )
        {
          PoSetHiberRange(0LL, 0x10000u, (PVOID)(v5 - 464), 0x200uLL, 0x6370654Bu);
          v6 = (void *)(*(_QWORD *)(v5 + 8) - 24544LL);
        }
        else
        {
          v6 = (void *)(v5 - 24576);
        }
        PoSetHiberRange(0LL, 0x10000u, v6, 0x6000uLL, 0x6370654Bu);
        if ( (_BYTE)KiKernelCetEnabled )
          PoSetHiberRange(
            0LL,
            0x10000u,
            (PVOID)(*(_QWORD *)(*(_QWORD *)(v1 + 37936) + v4) - 4088LL),
            0x1000uLL,
            0x7373654Bu);
      }
      ++v3;
      v4 += 8LL;
    }
    while ( v3 <= 4 );
  }
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 360), *(unsigned __int16 *)(v1 + 358), 0x7370654Bu);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 344), *(unsigned __int16 *)(v1 + 342), 0x7370654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 13216) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)KeKernelStackSize),
    (unsigned int)KeKernelStackSize,
    0x7473654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 33384) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - 24576),
    0x6000uLL,
    0x6573654Bu);
  v7 = (_QWORD **)(v1 + 13120);
  v8 = 2LL;
  do
  {
    for ( i = *v7; i; i = (_QWORD *)*i )
      PoSetHiberRange(0LL, 0x10000u, i - 1, 0x40uLL, 0x7064654Bu);
    v7 += 6;
    --v8;
  }
  while ( v8 );
  v10 = *(void **)(v1 + 13072);
  if ( v10 )
  {
    PoSetHiberRange(0LL, 0x10000u, v10, 0x10uLL, 0x7264654Bu);
    PoSetHiberRange(
      0LL,
      0x10000u,
      *(PVOID *)(*(_QWORD *)(v1 + 13072) + 8LL),
      8 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 13072) + 4LL) >> 5),
      0x7264654Bu);
    v11 = *(_QWORD *)(v1 + 13072);
    v12 = *(_QWORD ***)(v11 + 8);
    for ( j = v12; j; PoSetHiberRange(0LL, 0x10000u, j, 0x20uLL, 0x7264654Bu) )
    {
      j = (_QWORD *)*j;
      if ( ((unsigned __int8)j & 1) != 0 )
        break;
LABEL_38:
      if ( !j )
        goto LABEL_27;
    }
    for ( ++v12;
          (unsigned __int64)v12 < *(_QWORD *)(v11 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v11 + 4) >> 5);
          ++v12 )
    {
      j = *v12;
      if ( ((unsigned __int8)*v12 & 1) == 0 )
        goto LABEL_38;
    }
  }
LABEL_27:
  v14 = 1232;
  if ( (KeFeatureBits & 0x800000) != 0 )
    v14 = KeXStateLength + 815;
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 35264), v14, 0x7873654Bu);
  v15 = *(void **)(v1 + 1728);
  if ( v15 )
    PoSetHiberRange(
      0LL,
      0x10000u,
      v15,
      MEMORY[0xFFFFF78000000600]
    - (unsigned __int64)MEMORY[0xFFFFF780000003E8]
    + (unsigned int)KiIptSaveAreaLength
    + 64LL,
      0x7373654Bu);
  v16 = *(void **)(v1 + 33600);
  if ( v16 )
    PoSetHiberRange(0LL, 0x10000u, v16, 0x5B0uLL, 0x7349654Bu);
  if ( qword_140C41598 )
    PoSetHiberRange(0LL, 0x10000u, qword_140C41598, 16 * (unsigned int)(unsigned __int8)qword_140C41588, 0x7272744Du);
  if ( qword_140C415A0 )
    PoSetHiberRange(0LL, 0x10000u, qword_140C415A0, 0x58uLL, 0x7272744Du);
  v17 = *(_QWORD **)(v1 + 8);
  v18 = (void *)((v17[6] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  v19 = v17[7] - (_QWORD)v18;
  PoSetHiberRange(0LL, 0x10000u, v17, 0x910uLL, 0x6874654Bu);
  PoSetHiberRange(0LL, 0x10000u, v18, v19, 0x7473654Bu);
  for ( k = (PVOID *)KeBugCheckReasonCallbackListHead; k != &KeBugCheckReasonCallbackListHead; k = (PVOID *)*k )
    PoSetHiberRange(0LL, 0x10000u, k, 0x30uLL, 0x7473654Bu);
  if ( (_BYTE)KiKernelCetEnabled )
    PoSetHiberRange(
      0LL,
      0x10000u,
      (PVOID)((v17[132] & 0xFFFFFFFFFFFFF000uLL) + 4096),
      v17[131] - ((v17[132] & 0xFFFFFFFFFFFFF000uLL) + 4096) - 4096,
      0x7373654Bu);
  PoSetHiberRange(0LL, 0x10000u, ExLeapSecondData, 0x1000uLL, 0x706C7845u);
}
