void __fastcall DXGSYNCOBJECT::FreeHostHandle(DXGSYNCOBJECT *this, int a2)
{
  struct _KTHREAD **v4; // rdi
  void **v5; // rbx
  _DWORD *v6; // rcx
  void **v7; // rax
  void **v8; // rdx

  if ( (*((_BYTE *)this + 204) & 1) != 0 )
  {
    v4 = (struct _KTHREAD **)((char *)this + 32);
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v5 = (void **)((char *)this + 104);
    v6 = *v5;
    if ( *v5 != v5 )
    {
      while ( 1 )
      {
        v7 = *(void ***)v6;
        if ( v6[4] == a2 )
          break;
        v6 = *(_DWORD **)v6;
        if ( v7 == v5 )
          goto LABEL_6;
      }
      if ( v7[1] != v6 || (v8 = (void **)*((_QWORD *)v6 + 1), *v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
      operator delete(v6);
    }
LABEL_6:
    DXGFASTMUTEX::Release(v4);
  }
  else
  {
    *((_DWORD *)this + 24) = 0;
  }
}
