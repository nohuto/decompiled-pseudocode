void __fastcall CInteractionContextWrapper::ResetBufferedOutput(CInteractionContextWrapper *this)
{
  char *v2; // rbx
  void *v3; // rbp
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // ebp
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  unsigned int *v9; // rcx

  if ( *((_DWORD *)this + 138) )
  {
    v2 = (char *)this + 536;
    do
    {
      v3 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
      v4 = *(char **)v2;
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
        __fastfail(3u);
      *(_QWORD *)v2 = v5;
      *(_QWORD *)(v5 + 8) = v2;
      if ( v4 != v2 )
      {
        v3 = (void *)*((_QWORD *)v4 + 2);
        operator delete(v4);
        --*((_DWORD *)v2 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
      operator delete(v3);
    }
    while ( *((_DWORD *)this + 138) );
  }
  v6 = 0;
  v7 = (_QWORD *)((char *)this + 600);
  if ( *((int *)this + 152) > 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(unsigned int **)(v8 + *v7);
      if ( *((_BYTE *)v9 + 4) )
        NtDCompositionUpdatePointerCapture(0LL, *v9);
      operator delete(*(void **)(*v7 + v8));
      ++v6;
      *(_QWORD *)(v8 + *v7) = 0LL;
      v8 += 8LL;
    }
    while ( v6 < *((_DWORD *)this + 152) );
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((__int64)this + 600);
}
