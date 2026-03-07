__int64 __fastcall CPropertyChangeResource::SetAnimatedProperty(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  char *v4; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 Element; // rax
  _QWORD *v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // rax
  __int64 i; // r8
  __int64 v18; // rcx

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  v7 = 0;
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    v8 = *((_QWORD *)this + 2);
    v9 = *(_QWORD *)(v8 + 496);
    if ( v9 == *(_QWORD *)(v8 + 504) )
    {
      v16 = v9 + 1;
      v9 = 1LL;
      if ( v16 )
        v9 = v16;
    }
    v10 = *((_QWORD *)this + 5);
    Element = 0LL;
    if ( v10 )
      Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v10, *(unsigned int *)a2);
    v12 = (_QWORD *)((Element + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)Element >> 64));
    if ( v12 )
    {
      for ( i = 0LL;
            (unsigned int)i < *(_DWORD *)(((Element + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)Element >> 64))
                                        + 0x18);
            *(_QWORD *)(v18 + 296) = v9 )
      {
        v18 = *(_QWORD *)(*v12 + 8 * i);
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 448LL) |= 2u;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 32LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
        0LL,
        8LL);
    }
    (*(void (__fastcall **)(CPropertyChangeResource *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
    v13 = CPropertyChangeResource::NotifyPropertyChanged(this, a2, a3);
    v7 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x66u, 0LL);
  }
  return v7;
}
