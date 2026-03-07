void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // r13
  unsigned int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  DC *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  char *v17; // r8
  int v18; // eax
  int v19; // r10d
  int v20; // r9d
  __m128i v21; // xmm0
  int v22; // r8d
  __int64 v23; // rax
  struct _ENTRY *EntryFromObject; // rax
  bool v25; // cc
  char *v26; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+70h] [rbp+18h]

  v5 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8008LL);
  v6 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)v5 > 0x10000u )
    {
      v4 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v5 + 16),
                                  (unsigned __int16)*(_DWORD *)this,
                                  1)
           + 13);
      if ( (_DWORD)v4 == HIWORD(v6) )
        v6 = (unsigned __int16)v6;
    }
    else
    {
      v6 = (unsigned __int16)*(_DWORD *)this;
    }
  }
  v7 = *(_QWORD *)(v5 + 16);
  v8 = *(_DWORD *)(v7 + 2056);
  v9 = v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16);
  LODWORD(v26) = v9;
  if ( v6 >= v9 )
  {
    v12 = 0LL;
  }
  else
  {
    if ( v6 >= v8 )
    {
      v4 = ((v6 - v8) >> 16) + 1;
      v10 = *(_QWORD *)(v7 + 8 * v4 + 8);
      v11 = v6 + -65536 * ((v6 - v8) >> 16) - v8;
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 8);
      v11 = v6;
    }
    v12 = 0LL;
    if ( (unsigned int)v11 < *(_DWORD *)(v10 + 20) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
      if ( v4 )
      {
        v4 = 3LL * (unsigned int)v11;
        v12 = *(_QWORD *)v10 + 24LL * (unsigned int)v11;
      }
      v9 = (unsigned int)v26;
    }
  }
  if ( v6 >= 0x10000 )
  {
    v25 = *(_DWORD *)v5 <= 0x10000u;
    v4 = (unsigned __int16)v6;
    v27 = (unsigned __int16)v6;
    if ( v25 )
    {
      v6 = (unsigned __int16)v6;
    }
    else
    {
      v4 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v7,
                                  (unsigned __int16)v6,
                                  1)
           + 13);
      v9 = (unsigned int)v26;
      if ( (_DWORD)v4 == HIWORD(v6) )
        v6 = v27;
    }
  }
  if ( v6 >= v9
    || (v6 >= v8
      ? (v4 = ((v6 - v8) >> 16) + 1, v13 = *(_QWORD *)(v7 + 8 * v4 + 8), v6 += -65536 * ((v6 - v8) >> 16) - v8)
      : (v13 = *(_QWORD *)(v7 + 8)),
        v6 >= *(_DWORD *)(v13 + 20)) )
  {
    v14 = 0LL;
  }
  else
  {
    v4 = 2LL * (unsigned __int8)v6;
    v14 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                 + 16LL * (unsigned __int8)v6
                 + 8);
  }
  if ( v14 != this )
    v12 = 0LL;
  if ( (*(_BYTE *)(v12 + 15) & 4) != 0 )
  {
    if ( !a2
      || (v26 = (char *)a2 + 24,
          v15 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v26),
          v16 = *((_QWORD *)this + 122),
          v26 = v17,
          *(_DWORD *)(v16 + 116) = v15,
          (unsigned int)RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v26) == 1) )
    {
      *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = xmmword_1C028B2B0;
    }
    else
    {
      v18 = *((_DWORD *)this + 259);
      v19 = *((_DWORD *)this + 258);
      v4 = *((_QWORD *)this + 122);
      v20 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)a2 + 56), 4)) - v18;
      v21 = _mm_srli_si128(*(__m128i *)((char *)a2 + 56), 12);
      v22 = _mm_srli_si128(*(__m128i *)((char *)a2 + 56), 8).m128i_u32[0] - v19;
      *(_DWORD *)(v4 + 120) = *(_OWORD *)((char *)a2 + 56) - v19;
      *(_DWORD *)(v4 + 124) = v20;
      *(_DWORD *)(v4 + 128) = v22;
      *(_DWORD *)(v4 + 132) = _mm_cvtsi128_si32(v21) - v18;
    }
    v23 = SGDGetSessionState(v4);
    EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(*(_QWORD *)(v23 + 24) + 8008LL), this);
    *((_BYTE *)EntryFromObject + 15) &= ~4u;
  }
}
