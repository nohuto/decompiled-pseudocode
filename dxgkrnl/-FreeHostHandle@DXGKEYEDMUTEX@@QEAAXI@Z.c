void __fastcall DXGKEYEDMUTEX::FreeHostHandle(DXGKEYEDMUTEX *this, int a2)
{
  struct _KTHREAD **v2; // rdi
  void **v5; // rbx
  _DWORD *v6; // rcx
  void **v7; // rax
  void **v8; // rdx

  v2 = (struct _KTHREAD **)((char *)this + 112);
  DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
  v5 = (void **)((char *)this + 40);
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
        goto LABEL_4;
    }
    if ( v7[1] != v6 || (v8 = (void **)*((_QWORD *)v6 + 1), *v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    operator delete(v6);
  }
LABEL_4:
  DXGFASTMUTEX::Release(v2);
}
