char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitSetTrackerBindingMode(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128i v8; // xmm1
  __int128 v9; // xmm0
  int v10; // ebp
  __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // rax
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __m128i v16; // [rsp+30h] [rbp-28h]
  void *v17; // [rsp+60h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v17 = 0LL;
  v4 = 0;
  if ( !*((_QWORD *)this + 12) )
  {
LABEL_8:
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this, (*a2)[1]);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 9);
    v7 = *((_QWORD *)this + 13) * v5;
    v8 = *(__m128i *)(v7 + v6 + 16);
    v9 = *(_OWORD *)(v7 + v6);
    v10 = _mm_cvtsi128_si32(v8);
    v11 = HIDWORD(*(_QWORD *)(v7 + v6 + 16));
    Src = v9;
    v16 = v8;
    if ( v10 != (_DWORD)v11 )
      break;
LABEL_7:
    v5 = ++v4;
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 12) )
      goto LABEL_8;
  }
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v17) )
  {
    v12 = (char *)v17;
    v16.m128i_i32[1] = v10;
    *(_DWORD *)v17 = 24;
    *(_OWORD *)(v12 + 4) = 0LL;
    *((_DWORD *)v12 + 5) = 0;
    *((_DWORD *)v12 + 1) = 219;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
    v13 = *((_QWORD *)&Src + 1);
    *((_DWORD *)v12 + 3) = *(_DWORD *)(Src + 32);
    *((_DWORD *)v12 + 4) = *(_DWORD *)(v13 + 32);
    *((_DWORD *)v12 + 5) = v10;
    memmove((void *)(*((_QWORD *)this + 9) + v5 * *((_QWORD *)this + 13)), &Src, *((_QWORD *)this + 13));
    goto LABEL_7;
  }
  return 0;
}
