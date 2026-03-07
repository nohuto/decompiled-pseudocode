bool __fastcall CTokenQueue::ReleaseTokensToFrame(CTokenQueue *this, struct CCompositionFrame *a2)
{
  bool v2; // si
  CTokenQueue *v5; // rdi
  CTokenQueue **v6; // rax
  _QWORD *v7; // r14
  struct CCompositionFrame **v8; // rcx
  CTokenQueue **v9; // rax
  int v10; // ecx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(CTokenQueue **)this != this )
  {
    v5 = (CTokenQueue *)*((_QWORD *)this + 1);
    if ( *(CTokenQueue **)v5 != this )
      goto LABEL_22;
    v6 = (CTokenQueue **)*((_QWORD *)v5 + 1);
    if ( *v6 != v5 )
      goto LABEL_22;
    for ( *((_QWORD *)this + 1) = v6; ; *((_QWORD *)this + 1) = v6 )
    {
      *v6 = this;
      if ( v5 == this )
        return v2;
      v7 = (_QWORD *)((char *)v5 - 8);
      v12 = 0;
      if ( *((_QWORD *)this + 2) )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)v7[4], 0);
        if ( *((_QWORD **)this + 2) == v7 )
          *((_QWORD *)this + 2) = 0LL;
      }
      if ( (*(int (__fastcall **)(_QWORD *, struct CCompositionFrame *, char *))(*v7 + 32LL))(
             (_QWORD *)v5 - 1,
             a2,
             &v12) < 0 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 56LL))((_QWORD *)v5 - 1);
        (*(void (__fastcall **)(__int64, __int64))*v7)((__int64)v5 - 8, 1LL);
      }
      else
      {
        if ( !v12 )
        {
          v9 = (CTokenQueue **)*((_QWORD *)this + 1);
          v10 = *((_DWORD *)v7 + 6);
          if ( *v9 == this )
          {
            *(_QWORD *)v5 = this;
            *((_QWORD *)v5 + 1) = v9;
            *v9 = v5;
            v2 = v10 == 2;
            *((_QWORD *)this + 1) = v5;
            return v2;
          }
LABEL_22:
          __fastfail(3u);
        }
        v8 = (struct CCompositionFrame **)*((_QWORD *)a2 + 20);
        if ( *v8 != (struct CCompositionFrame *)((char *)a2 + 152) )
          goto LABEL_22;
        *(_QWORD *)v5 = (char *)a2 + 152;
        *((_QWORD *)v5 + 1) = v8;
        *v8 = v5;
        *((_QWORD *)a2 + 20) = v5;
      }
      v5 = (CTokenQueue *)*((_QWORD *)this + 1);
      if ( *(CTokenQueue **)v5 != this )
        goto LABEL_22;
      v6 = (CTokenQueue **)*((_QWORD *)v5 + 1);
      if ( *v6 != v5 )
        goto LABEL_22;
    }
  }
  ++*((_DWORD *)this + 6);
  return v2;
}
