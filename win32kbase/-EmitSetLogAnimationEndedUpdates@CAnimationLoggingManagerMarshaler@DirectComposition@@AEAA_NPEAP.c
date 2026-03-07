char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogAnimationEndedUpdates(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebp
  char v6; // di
  __int64 v8; // r14
  __int64 v9; // rax
  char *v10; // rax
  size_t v11; // r8
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 36);
  v4 = *((_DWORD *)this + 32);
  v6 = 1;
  if ( (unsigned int)v2 < v4 )
  {
    v13[0] = this;
    v13[1] = &Src;
    v8 = v2;
    do
    {
      v9 = *((_QWORD *)this + 13);
      v14 = 0LL;
      Src = *(_OWORD *)(*((_QWORD *)this + 17) * v8 + v9);
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v14) )
      {
        v10 = (char *)v14;
        *(_DWORD *)v14 = 24;
        *(_OWORD *)(v10 + 4) = 0LL;
        *((_DWORD *)v10 + 5) = 0;
        *((_DWORD *)v10 + 1) = 13;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
        lambda_11de8ce1c68e57a9e4c3213d43d7ad85_::operator()(v13);
        v6 = 1;
      }
      else
      {
        v6 = 0;
      }
      if ( (_QWORD)Src )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          *((DirectComposition::CApplicationChannel **)*a2 + 1),
          (struct DirectComposition::CWeakReferenceBase *)Src);
        v11 = *((_QWORD *)this + 17);
        *(_QWORD *)&Src = 0LL;
        memmove((void *)(*((_QWORD *)this + 13) + v11 * (unsigned int)v2), &Src, v11);
      }
      if ( !v6 )
        break;
      ++*((_DWORD *)this + 36);
      LODWORD(v2) = v2 + 1;
      ++v8;
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( *((_DWORD *)this + 36) == v4 )
  {
    v6 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 104),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 36) = 0;
  }
  return v6;
}
