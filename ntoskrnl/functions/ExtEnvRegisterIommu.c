__int64 __fastcall ExtEnvRegisterIommu(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ecx
  unsigned int v6; // ebx
  _QWORD *v7; // rdx
  bool v8; // bp
  unsigned int v9; // ecx
  unsigned __int16 Length; // r15
  unsigned int v11; // r14d
  void *MemoryInternal; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  _OWORD *v18; // rax
  const void *v19; // rdx
  int v20; // eax
  __int64 *v21; // rax
  _QWORD *v23; // rax
  size_t SizeInWords; // [rsp+38h] [rbp-110h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+60h] [rbp-E8h] BYREF

  DestinationString = 0LL;
  if ( *(_DWORD *)a1 == 1
    && *(_DWORD *)(a1 + 4) == 104
    && (v5 = *(_DWORD *)(a1 + 20), (v5 & 0xFFFC0000) == 0)
    && (v6 = 0, *(_DWORD *)(a1 + 72))
    && (v7 = *(_QWORD **)(a1 + 56), v7[1])
    && ((v5 & 2) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL))
    && ((v5 & 0x40) == 0 || v7[15] && v7[16] && v7[17])
    && ((v5 & 0xA0) == 0
     || (v23 = *(_QWORD **)(a1 + 64), v23[1])
     && v23[2]
     && v23[3]
     && v23[4]
     && v23[5]
     && ((v5 & 0x20) == 0 || v23[7] && v23[8] && v23[10] && v23[11] && v23[12])) )
  {
    v8 = 0;
    if ( !*(_DWORD *)(a1 + 16) )
      v8 = *(_QWORD *)(a1 + 8) != 0LL;
    LODWORD(SizeInWords) = 75;
    HalpExtBuildResourceIdString(
      1413894989,
      0,
      0x4300u,
      *(_WORD *)(a1 + 72),
      1u,
      0,
      *(_DWORD *)(a1 + 96),
      SizeInWords,
      SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v9 = 560;
    if ( !v8 )
      v9 = (*(_DWORD *)(a1 + 16) + 567) & 0xFFFFFFF8;
    Length = DestinationString.Length;
    v11 = (v9 + DestinationString.Length + 9) & 0xFFFFFFF8;
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v11, 1u);
    v13 = (__int64)MemoryInternal;
    if ( MemoryInternal )
    {
      memset(MemoryInternal, 0, v11);
      v14 = (v13 + 567) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v8 )
      {
        *(_QWORD *)(v13 + 16) = *(_QWORD *)(a1 + 8);
      }
      else
      {
        *(_QWORD *)(v13 + 16) = v14;
        v14 = (*(unsigned int *)(a1 + 16) + 7LL + v14) & 0xFFFFFFFFFFFFFFF8uLL;
      }
      *(_QWORD *)(v13 + 544) = v14;
      *(_BYTE *)(v13 + 40) = 12;
      v15 = *(_QWORD *)(a1 + 56);
      *(_OWORD *)(v13 + 56) = *(_OWORD *)v15;
      *(_OWORD *)(v13 + 72) = *(_OWORD *)(v15 + 16);
      *(_OWORD *)(v13 + 88) = *(_OWORD *)(v15 + 32);
      *(_OWORD *)(v13 + 104) = *(_OWORD *)(v15 + 48);
      *(_OWORD *)(v13 + 120) = *(_OWORD *)(v15 + 64);
      *(_OWORD *)(v13 + 136) = *(_OWORD *)(v15 + 80);
      *(_OWORD *)(v13 + 152) = *(_OWORD *)(v15 + 96);
      *(_OWORD *)(v13 + 168) = *(_OWORD *)(v15 + 112);
      *(_OWORD *)(v13 + 184) = *(_OWORD *)(v15 + 128);
      *(_QWORD *)(v13 + 200) = *(_QWORD *)(v15 + 144);
      v16 = *(_OWORD **)(a1 + 64);
      if ( v16 )
      {
        *(_OWORD *)(v13 + 208) = *v16;
        *(_OWORD *)(v13 + 224) = v16[1];
        *(_OWORD *)(v13 + 240) = v16[2];
        *(_OWORD *)(v13 + 256) = v16[3];
        *(_OWORD *)(v13 + 272) = v16[4];
        *(_OWORD *)(v13 + 288) = v16[5];
        *(_OWORD *)(v13 + 304) = v16[6];
        v17 = v16[7];
        v18 = v16 + 8;
        *(_OWORD *)(v13 + 320) = v17;
        *(_OWORD *)(v13 + 336) = *v18;
        *(_OWORD *)(v13 + 352) = v18[1];
        *(_OWORD *)(v13 + 368) = v18[2];
        *(_QWORD *)(v13 + 384) = *((_QWORD *)v18 + 6);
      }
      *(_DWORD *)(v13 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(v13 + 488) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v13 + 44) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v13 + 52) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(v13 + 48) = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(v13 + 492) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(v13 + 496) = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(v13 + 500) = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(v13 + 504) = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(v13 + 528) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(v13 + 456) = *(_DWORD *)(a1 + 92);
      *(_QWORD *)(v13 + 408) = v13 + 400;
      *(_QWORD *)(v13 + 400) = v13 + 400;
      *(_QWORD *)(v13 + 440) = *(_QWORD *)(v13 + 272);
      *(_QWORD *)(v13 + 448) = *(_QWORD *)(v13 + 264);
      *(_QWORD *)(v13 + 424) = 0LL;
      *(_QWORD *)(v13 + 416) = 0LL;
      *(_DWORD *)(v13 + 432) = 0;
      if ( *(_DWORD *)(a1 + 16) )
      {
        v19 = *(const void **)(a1 + 8);
        if ( v19 )
          memmove(*(void **)(v13 + 16), v19, *(unsigned int *)(a1 + 16));
      }
      v20 = *(_DWORD *)(a1 + 96);
      *(_WORD *)(v13 + 536) = 0;
      *(_WORD *)(v13 + 538) = Length + 2;
      *(_DWORD *)(v13 + 532) = v20;
      RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 536), &DestinationString);
      v21 = (__int64 *)qword_140C61938;
      if ( *(ULONG_PTR **)qword_140C61938 != &HalpIommuList )
        __fastfail(3u);
      ++HalpIommuCount;
      *(_QWORD *)v13 = &HalpIommuList;
      *(_QWORD *)(v13 + 8) = v21;
      *v21 = v13;
      qword_140C61938 = v13;
      if ( a3 )
        *a3 = *(_QWORD *)(v13 + 16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
