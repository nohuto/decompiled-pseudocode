void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(
        DirectComposition::CApplicationChannel *this,
        bool *a2)
{
  _QWORD *i; // rdi
  unsigned __int64 v5; // rdi
  size_t *v6; // rsi
  unsigned __int64 v7; // rdx
  size_t v8; // r8
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  size_t v14; // rcx
  struct DirectComposition::CResourceMarshaler *v15; // r14
  __int64 v16; // rax
  size_t v17; // r8
  DirectComposition::CResourceMarshaler *v18; // rax
  struct DirectComposition::CResourceMarshaler *v19; // rdi
  struct DirectComposition::CResourceMarshaler *v20; // rdi
  unsigned __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 Src; // [rsp+58h] [rbp+10h] BYREF

  for ( i = (_QWORD *)((char *)this + 248);
        (_QWORD *)*i != i;
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          (struct DirectComposition::CResourceMarshaler *)(*i - 384LL)) )
  {
    ;
  }
  v5 = 0LL;
  v6 = (size_t *)((char *)this + 88);
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 10);
    if ( v5 >= v7 )
      break;
    v8 = *v6;
    v9 = (_QWORD *)(*((_QWORD *)this + 7) + v5 * *v6);
    while ( 1 )
    {
      v10 = v5++;
      if ( *v9 )
        break;
      v9 = (_QWORD *)((char *)v9 + v8);
      if ( v5 >= v7 )
        goto LABEL_17;
    }
    v11 = *((_QWORD *)this + 7);
    v21 = v5;
    if ( !*(_QWORD *)(v8 * v10 + v11) )
      break;
    v12 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 && v12 < v7 )
    {
      _mm_lfence();
      v13 = *((_QWORD *)this + 7);
      v14 = *v6 * (unsigned int)v12;
      v15 = *(struct DirectComposition::CResourceMarshaler **)(v14 + v13);
      if ( v15 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 168LL))(*(_QWORD *)(v14 + v13));
        if ( v16 )
        {
          v20 = *(struct DirectComposition::CResourceMarshaler **)(v16 + 192);
          if ( v20 )
          {
            if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 104LL))(*(_QWORD *)(v16 + 192)) )
              DirectComposition::CApplicationChannel::ReleaseResource(this, v20);
          }
        }
        v5 = v21;
        if ( (_DWORD)v21 )
        {
          if ( v12 < *((_QWORD *)this + 10) )
          {
            v17 = *v6;
            Src = 0LL;
            memmove((void *)(*((_QWORD *)this + 7) + v12 * v17), &Src, v17);
            --*((_QWORD *)this + 12);
          }
        }
        DirectComposition::CApplicationChannel::ReleaseResource(this, v15);
      }
      else
      {
        v5 = v21;
      }
    }
  }
LABEL_17:
  v21 = 0LL;
  while ( 1 )
  {
    v18 = (DirectComposition::CResourceMarshaler *)DirectComposition::CLinearObjectTableBase::EnumerateObjects(
                                                     (DirectComposition::CApplicationChannel *)((char *)this + 112),
                                                     &v21);
    v19 = v18;
    if ( !v18 )
      break;
    DirectComposition::CResourceMarshaler::AddRef(v18);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v19 + 192LL))(
      v19,
      this);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v19);
  }
  if ( a2 )
    *a2 = *((_DWORD *)this + 131) != 0;
}
