_BYTE *__fastcall MiCreatePagefile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        UNICODE_STRING *a6,
        int a7,
        char a8)
{
  unsigned int v11; // r15d
  __int64 v12; // r12
  _BYTE *Pool; // rax
  _BYTE *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r8
  UNICODE_STRING *v17; // rcx
  __int64 v18; // rdx
  _WORD *v19; // rcx
  __int64 v20; // r9
  PVOID v21; // rax
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rdi
  _QWORD *ModWriterEntry; // rax
  _QWORD *v26; // rbx
  int v27; // ecx
  int v28; // eax
  ULONG_PTR v29; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v31; // rdi
  RTL_BITMAP *v32; // rdi
  PVOID v33; // rax
  __int64 v36; // [rsp+30h] [rbp-168h]
  _BYTE v37[288]; // [rsp+40h] [rbp-158h] BYREF

  memset(v37, 0, sizeof(v37));
  v11 = 2;
  v12 = (a8 & 2) != 0 ? 5 : 2;
  Pool = MiAllocatePool(64, 0x120uLL, 0x20206D4Du);
  v14 = v37;
  if ( Pool )
    v14 = Pool;
  *((_QWORD *)v14 + 1) = a5;
  *(_QWORD *)v14 = a4;
  *((_QWORD *)v14 + 2) = a4;
  v15 = a4 - v12;
  *((_QWORD *)v14 + 3) = v15;
  *((_QWORD *)v14 + 6) = v15;
  *((_QWORD *)v14 + 7) = a2;
  *((_QWORD *)v14 + 28) = a3;
  *((_DWORD *)v14 + 31) = dword_140D1D1DC;
  *((_DWORD *)v14 + 34) = 4 * dword_140D1D1DC;
  *((_QWORD *)v14 + 31) = a1;
  InitializeSListHead((PSLIST_HEADER)v14 + 5);
  v17 = (UNICODE_STRING *)(v14 + 96);
  *((_QWORD *)v14 + 30) = 0LL;
  if ( a6 )
    *v17 = *a6;
  else
    RtlInitUnicodeString(v17, 0LL);
  v18 = (unsigned int)a7;
  v19 = v14 + 204;
  if ( a7 < 0 )
  {
    v16 = 128LL;
    *v19 |= 0xB0u;
LABEL_12:
    v20 = 64LL;
    goto LABEL_13;
  }
  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 4) != 0 )
    {
      v16 = 2048LL;
      *v19 |= 0x8A0u;
      *((_QWORD *)v14 + 32) = 0LL;
      *((_QWORD *)v14 + 33) = 0LL;
    }
    else
    {
      if ( (a7 & 0x40000000) != 0 )
        *v19 |= 0x20u;
      if ( (a7 & 0x2000000) != 0 )
      {
        v16 = 128LL;
        *v19 |= 0x80u;
      }
    }
    goto LABEL_12;
  }
  v20 = 64LL;
  *v19 |= 0x60u;
LABEL_13:
  if ( (a7 & 0x1000000) != 0 )
    *v19 |= 0x400u;
  if ( (a8 & 1) != 0 )
    *v19 |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v14 + 50) = (a7 & 0x3C000000u) >> 26;
  if ( v14 == v37 )
    goto LABEL_46;
  v36 = (unsigned int)dword_140D1D1DC;
  if ( a7 < 0 )
  {
    v11 = 1;
  }
  else if ( (a8 & 4) != 0 )
  {
    v11 = KeNumberProcessors_0;
    if ( !(_DWORD)KeNumberProcessors_0 )
      goto LABEL_27;
  }
  v21 = MiAllocatePool(64, 8LL * v11, 0x20206D4Du);
  *((_QWORD *)v14 + 8) = v21;
  if ( !v21 )
    goto LABEL_46;
  v22 = 0;
  if ( v11 )
  {
    v23 = a1;
    v24 = 0LL;
    do
    {
      ModWriterEntry = MiAllocateModWriterEntry(v23, v36, 0);
      v26 = ModWriterEntry;
      if ( !ModWriterEntry )
        goto LABEL_46;
      memset(ModWriterEntry, 0, 0x108uLL);
      v23 = a1;
      ++v22;
      v26[24] = a1;
      v26[18] = v14;
      *(_QWORD *)(v24 + *((_QWORD *)v14 + 8)) = v26;
      v24 += 8LL;
      ++*((_DWORD *)v14 + 18);
    }
    while ( v22 < v11 );
  }
LABEL_27:
  v27 = 0;
  v28 = 0;
  if ( (a8 & 4) == 0 )
  {
    LOBYTE(v27) = (a8 & 2) == 0;
    v28 = v27;
  }
  if ( v28 )
  {
    v29 = MiReservePageHash(*((_DWORD *)v14 + 2));
    if ( !v29 )
      goto LABEL_46;
    *((_QWORD *)v14 + 27) = v29;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((unsigned int *)v14 + 2), v18, v16, v20);
  v31 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    *((_QWORD *)v14 + 14) = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v31 + 8), v12, *(_DWORD *)v14 - v12);
    v32 = (RTL_BITMAP *)(v31 + 24);
    RtlSetAllBits(v32);
    if ( (a8 & 2) == 0 )
      RtlClearBits(v32, v12, *(_DWORD *)v14 - v12);
    *((_DWORD *)v14 + 30) = v12;
    if ( (a8 & 2) != 0 )
      return v14;
    v33 = MiAllocatePool(64, 0x7000uLL, 0x6342694Du);
    *((_QWORD *)v14 + 24) = v33;
    if ( v33 )
    {
      MiInitializePagefileBitmapsCache((__int64)v14);
      return v14;
    }
  }
LABEL_46:
  MiDeletePagefile(v14);
  return 0LL;
}
