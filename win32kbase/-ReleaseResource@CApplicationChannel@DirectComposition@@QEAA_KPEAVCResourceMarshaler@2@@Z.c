unsigned __int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  __int64 v2; // rdi
  struct DirectComposition::CResourceMarshaler *v3; // rbx
  unsigned __int64 result; // rax
  int v6; // eax
  char IsDerivedResourceType; // al
  __int64 v8; // rcx
  struct DirectComposition::CResourceMarshaler *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rdx
  size_t v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 i; // rax
  __int64 Src; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = a2;
  if ( !a2 )
    return v2;
  v2 = --*((_QWORD *)a2 + 3);
  if ( v2 == 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 8LL))(a2) )
      return v2;
    DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(
      v3,
      (DirectComposition::CApplicationChannel *)((char *)this + 480));
    return 1LL;
  }
  else
  {
    if ( v2 )
      return v2;
    if ( *((_QWORD *)a2 + 6) )
    {
      v19 = *((_QWORD *)this + 64);
      Src = *((_QWORD *)a2 + 6);
      memmove(
        (void *)(*((_QWORD *)this + 60)
               + v19
               * ((unsigned __int64)(unsigned int)(*((_DWORD *)this + 131) + *((_DWORD *)this + 130))
                % *((_QWORD *)this + 63))),
        &Src,
        v19);
      ++*((_DWORD *)this + 131);
      --*((_DWORD *)this + 132);
      *((_QWORD *)v3 + 6) = 0LL;
    }
    if ( (*((_DWORD *)v3 + 4) & 4) != 0 )
    {
      v18 = DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject((PRTL_GENERIC_TABLE)((char *)this + 264));
      *((_DWORD *)v3 + 4) &= ~4u;
      *(_QWORD *)(v18 + 16) = 0LL;
    }
    if ( *((_QWORD *)v3 + 5) )
      DirectComposition::CApplicationChannel::UnbindAllAnimations(this, v3);
    v6 = *((_DWORD *)v3 + 4);
    if ( (v6 & 1) != 0 )
    {
      if ( (v6 & 2) != 0 )
      {
        IsDerivedResourceType = DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                  *((unsigned int *)v3 + 9),
                                  170LL);
        v8 = 416LL;
        if ( IsDerivedResourceType )
          v8 = 424LL;
        v9 = *(struct DirectComposition::CResourceMarshaler **)((char *)this + v8);
        v10 = (_QWORD *)((char *)this + v8);
        if ( v9 )
        {
          while ( v9 != v3 )
          {
            v10 = (_QWORD *)((char *)v9 + 8);
            v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v9 + 1);
            if ( !v9 )
              goto LABEL_22;
          }
          *v10 = *((_QWORD *)v3 + 1);
          *((_QWORD *)v3 + 1) = 0LL;
        }
LABEL_22:
        *((_DWORD *)v3 + 4) &= ~2u;
      }
    }
    else if ( *((int *)this + 6) <= 2 )
    {
      DirectComposition::CApplicationChannel::FindAndDequeue(
        v3,
        (struct DirectComposition::CResourceMarshaler **)this + 51);
    }
    v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v3 + 80LL))(v3);
    if ( v11 )
    {
      v20 = *(_QWORD *)(v11 + 80);
      if ( v20 )
      {
        v21 = *(_DWORD *)(v20 + 24);
        if ( (v21 & 1) != 0 && (v21 & 2) == 0 )
        {
          v25 = (_QWORD *)((char *)this + 440);
          for ( i = *((_QWORD *)this + 55); i != v20; i = *(_QWORD *)(i + 8) )
            v25 = (_QWORD *)(i + 8);
          *v25 = *(_QWORD *)(v20 + 8);
          *(_QWORD *)(v20 + 8) = 0LL;
          DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v20);
        }
      }
    }
    v12 = *((_DWORD *)v3 + 8);
    v13 = (unsigned int)(v12 - 1);
    if ( v12 && v13 < *((_QWORD *)this + 17) )
    {
      v14 = *((_QWORD *)this + 18);
      Src = 0LL;
      memmove((void *)(*((_QWORD *)this + 14) + v13 * v14), &Src, v14);
      --*((_QWORD *)this + 19);
    }
    v15 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned __int64))(*(_QWORD *)v3 + 104LL))(
            v3,
            v13);
    if ( v15 )
    {
      v22 = (_QWORD *)(v15 + 384);
      v23 = *v22;
      if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v24 = (_QWORD *)v22[1], (_QWORD *)*v24 != v22) )
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      v22[1] = v22;
      *v22 = v22;
    }
    v16 = *((_QWORD *)this + 59);
    if ( !v16 )
    {
      *((_QWORD *)this + 59) = v3;
      *((_QWORD *)this + 58) = v3;
      do
      {
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v3 + 192LL))(
          v3,
          this);
        *((_QWORD *)this + 58) = *((_QWORD *)v3 + 1);
        if ( (*((_DWORD *)v3 + 4) & 1) != 0 )
        {
          *((_QWORD *)v3 + 1) = *((_QWORD *)this + 54);
          *((_QWORD *)this + 54) = v3;
        }
        else
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v3 + 16LL))(v3) )
            DirectComposition::CConnection::ReleaseShellResourceAccess(
              *((DirectComposition::CConnection **)this + 5),
              1u);
          v17 = *(_QWORD *)v3;
          *((_QWORD *)v3 + 1) = 0LL;
          (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(v17 + 72))(v3, 1LL);
        }
        v3 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 58);
      }
      while ( v3 );
      *((_QWORD *)this + 59) = 0LL;
      return v2;
    }
    *(_QWORD *)(v16 + 8) = v3;
    result = 0LL;
    *((_QWORD *)this + 59) = v3;
  }
  return result;
}
