void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 i; // r9
  __int64 v12; // rcx

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 64);
  v3 = *((_BYTE *)this + 121) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 14) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 16) && *((_DWORD *)this + 24) )
    CAnimation::UpdateAnimateValues(v2);
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CAnimation::EndAnimation(this);
  if ( *((_BYTE *)this + 121) && *((_DWORD *)this + 24) )
  {
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 9) + 16LL * v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      ++v7;
    }
    while ( v7 < *((_DWORD *)this + 24) );
    *((_DWORD *)this + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 72, 16LL);
  }
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    v9 = *(unsigned int *)(v6 + 88);
    v10 = 0LL;
    for ( i = *(_QWORD *)(v6 + 64); (unsigned int)v10 < (unsigned int)v9; v10 = (unsigned int)(v10 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v10) )
        break;
    }
    if ( (unsigned int)v10 < (unsigned int)v9 )
    {
      while ( (unsigned int)v10 < (int)v9 - 1 )
      {
        *(_QWORD *)(i + 8 * v10) = *(_QWORD *)(i + 8LL * (unsigned int)(v10 + 1));
        v10 = (unsigned int)(v10 + 1);
        v9 = *(unsigned int *)(v6 + 88);
      }
      *(_DWORD *)(v6 + 88) = v9 - 1;
    }
    v12 = *((_QWORD *)this + 18);
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v9, v6, i);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  CBaseAnimation::~CBaseAnimation(this);
}
