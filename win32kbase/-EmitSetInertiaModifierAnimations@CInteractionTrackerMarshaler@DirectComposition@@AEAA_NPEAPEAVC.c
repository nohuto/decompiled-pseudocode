char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaModifierAnimations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  size_t *v3; // rbx
  DirectComposition::CInteractionTrackerMarshaler *v4; // rsi
  int v5; // edi
  int InertiaModifierMarshalerFlag; // r14d
  int v7; // ebp
  unsigned int v8; // ebp
  __int64 v9; // rax
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = (size_t *)((char *)this + 296);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    InertiaModifierMarshalerFlag = DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                     this,
                                     (unsigned int)v5);
    if ( (InertiaModifierMarshalerFlag & *((_DWORD *)v4 + 4)) == 0 )
      break;
LABEL_9:
    ++v5;
    ++v3;
    if ( v5 >= 4 )
      return 1;
  }
  v7 = *(_DWORD *)v3;
  v11 = 0LL;
  v8 = v7 + 24;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v8, &v11) )
  {
    this = (DirectComposition::CInteractionTrackerMarshaler *)v11;
    *(_DWORD *)v11 = v8;
    *(_OWORD *)((char *)this + 4) = 0LL;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 1) = 207;
    *((_DWORD *)this + 2) = *((_DWORD *)v4 + 8);
    *((_DWORD *)this + 3) = v5;
    v9 = *(v3 - 8);
    if ( v9 )
      LODWORD(v9) = *(_DWORD *)(v9 + 32);
    *((_DWORD *)this + 4) = v9;
    *((_DWORD *)this + 5) = *(_DWORD *)v3;
    if ( *v3 )
      memmove((char *)this + 24, (const void *)*(v3 - 4), *v3);
    *((_DWORD *)v4 + 4) |= InertiaModifierMarshalerFlag;
    goto LABEL_9;
  }
  return 0;
}
