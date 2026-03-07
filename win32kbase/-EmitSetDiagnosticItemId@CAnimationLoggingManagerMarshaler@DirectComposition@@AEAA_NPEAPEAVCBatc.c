char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetDiagnosticItemId(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  char v6; // di
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm1
  struct DirectComposition::CWeakReferenceBase *v12; // rdx
  char updated; // al
  size_t v14; // r8
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 Src; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]

  v2 = *((_DWORD *)this + 48);
  v4 = *((_DWORD *)this + 44);
  v6 = 1;
  if ( v2 < v4 )
  {
    v8 = *((unsigned int *)this + 48);
    do
    {
      v9 = *((_QWORD *)this + 19);
      v10 = *((_QWORD *)this + 23) * v8;
      v11 = *(_OWORD *)(v10 + v9);
      Src = v11;
      v12 = (struct DirectComposition::CWeakReferenceBase *)v11;
      v17 = *(_QWORD *)(v10 + v9 + 16);
      if ( (_QWORD)v11 && *(_QWORD *)(v11 + 16) )
      {
        v15[0] = this;
        v15[1] = &Src;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_050ea75d8595f0edb25d7def78c25e14___(
                    this,
                    a2,
                    v15);
        v12 = (struct DirectComposition::CWeakReferenceBase *)Src;
        v6 = updated;
      }
      else
      {
        v6 = 1;
      }
      if ( v12 )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          *((DirectComposition::CApplicationChannel **)*a2 + 1),
          v12);
        v14 = *((_QWORD *)this + 23);
        *(_QWORD *)&Src = 0LL;
        memmove((void *)(*((_QWORD *)this + 19) + v14 * v2), &Src, v14);
      }
      if ( !v6 )
        break;
      ++*((_DWORD *)this + 48);
      ++v2;
      ++v8;
    }
    while ( v2 < v4 );
  }
  if ( *((_DWORD *)this + 48) == v4 )
  {
    v6 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 152),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 48) = 0;
  }
  return v6;
}
