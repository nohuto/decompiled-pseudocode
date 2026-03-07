void __fastcall HalInitializeBios(int a1, _QWORD *a2)
{
  char *v3; // rcx
  char *v5; // rax
  __int64 Pool2; // rax
  struct _MDL *v7; // rdi
  __int64 *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v14; // rdx
  _QWORD **v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  char *v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // r15
  void *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  unsigned int v26; // eax
  unsigned __int64 v27; // r8
  void *v28; // rax

  v3 = (char *)a2[27];
  if ( !v3 || (v5 = strupr(v3), !strstr(v5, "NOVGA")) )
  {
    if ( a1 != -1 )
    {
      Pool2 = ExAllocatePool2(64LL, 2096LL, 1181507912LL);
      v7 = (struct _MDL *)Pool2;
      if ( !Pool2 )
        return;
      *(_QWORD *)Pool2 = 0LL;
      v8 = (__int64 *)(Pool2 + 48);
      *(_QWORD *)(Pool2 + 32) = 0LL;
      v9 = 0;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_WORD *)(Pool2 + 8) = 2096;
      v10 = 0LL;
      *(_DWORD *)(Pool2 + 40) = 0x100000;
      *(_WORD *)(Pool2 + 10) = 2050;
      do
      {
        v11 = v10;
        if ( v9 - 160 <= 0x1F )
          v11 = 240LL;
        ++v9;
        ++v10;
        *v8++ = v11;
      }
      while ( v9 < 0x100 );
      v12 = a2[45];
      if ( (v12 & 1) != 0 )
      {
        if ( v12 == 1 )
          goto LABEL_20;
        i = v12 ^ ((unsigned __int64)(a2 + 44) | 1);
      }
      else
      {
        i = a2[45];
      }
      while ( i )
      {
        v14 = *(_QWORD *)(i + 32);
        if ( v14 < 0x100 )
        {
          v24 = *(int *)(i + 24);
          if ( (unsigned int)v24 > 0x23 || (v25 = 0xBC0400040LL, !_bittest64(&v25, v24)) )
          {
            v26 = *(_QWORD *)(i + 32);
            v27 = *(_QWORD *)(i + 40) + v14 - 1;
            v14 = (unsigned int)v14;
            if ( v27 > 0xFF )
              v27 = 255LL;
            if ( (unsigned int)v14 <= v27 )
            {
              do
              {
                ++v26;
                *((_QWORD *)&v7[1].Next + v14) = 240LL;
                v14 = v26;
              }
              while ( v26 <= v27 );
            }
          }
        }
        v15 = *(_QWORD ***)(i + 8);
        v16 = i;
        if ( v15 )
        {
          v17 = *v15;
          for ( i = *(_QWORD *)(i + 8); v17; v17 = (_QWORD *)*v17 )
            i = (unsigned __int64)v17;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v16 )
              break;
            v16 = i;
          }
        }
      }
LABEL_20:
      HalpIoMemoryBase = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( HalpIoMemoryBase )
      {
        v19 = (char *)MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
        if ( v19 )
        {
          v20 = HalpMmAllocCtxAlloc(v18, 0x2000LL);
          if ( v20 )
          {
            HalpFrameBufferBase = (__int64)(v19 - 655360);
            x86BiosInitializeBiosEx(v21, HalpIoMemoryBase, v19 - 655360, v20);
            v22 = (void *)MmMapIoSpaceEx(0LL, 2048LL, 4u);
            if ( v22 )
            {
              v23 = (void *)x86BiosTranslateAddress(0LL, 0LL);
              memmove(v23, v22, 0x800uLL);
              MmUnmapIoSpace(v22, 0x800uLL);
              HalpVideoBiosPresent = 1;
              qword_140C019F8 = (__int64)HalpBiosDisplayReset;
              goto LABEL_25;
            }
          }
          MmUnmapIoSpace(v19, 0x20000uLL);
          HalpFrameBufferBase = 0LL;
        }
        if ( HalpIoMemoryBase )
        {
          MmUnmapLockedPages(HalpIoMemoryBase, v7);
          HalpIoMemoryBase = 0LL;
        }
      }
LABEL_25:
      ExFreePoolWithTag(v7, 0);
      return;
    }
    if ( (*(_BYTE *)(a2[30] + 2656LL) & 4) == 0 )
    {
      HalpIoMemoryBase = 0LL;
      HalpFrameBufferBase = 0LL;
      qword_140C019F8 = (__int64)HalpBiosDisplayReset;
      HalpVideoBiosPresent = 1;
      x86BiosInitializeBiosEx(v3, 0LL, 0LL, 0x20000LL);
      v28 = (void *)x86BiosTranslateAddress(0LL, 0LL);
      memmove(v28, 0LL, 0x800uLL);
    }
  }
}
