void __fastcall MagpDestroyLensContext(struct _MAG_THREAD_CONTEXT **a1, __int64 a2, struct tagWND *a3)
{
  struct _MAG_THREAD_CONTEXT *i; // rdi
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  struct _MAG_LENS_CONTEXT *v5; // rbx
  __int64 v6; // rcx
  struct _MAG_LENS_CONTEXT **v7; // rax
  int v8; // eax
  _QWORD *v9; // rdi
  void *v10; // rax
  void *v11; // rcx
  void *v12; // rcx

  for ( i = *a1; i != (struct _MAG_THREAD_CONTEXT *)a1; i = *(struct _MAG_THREAD_CONTEXT **)i )
  {
    if ( a2 == *((_QWORD *)i + 2) )
    {
      if ( i )
      {
        LensContext = MagpFindLensContext(i, a3);
        v5 = LensContext;
        if ( LensContext )
        {
          v6 = *(_QWORD *)LensContext;
          if ( *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)LensContext + 8LL) != LensContext
            || (v7 = (struct _MAG_LENS_CONTEXT **)*((_QWORD *)LensContext + 1), *v7 != v5) )
          {
            __fastfail(3u);
          }
          *v7 = (struct _MAG_LENS_CONTEXT *)v6;
          *(_QWORD *)(v6 + 8) = v7;
          v8 = *((_DWORD *)v5 + 4);
          if ( (v8 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *((_DWORD *)v5 + 4) &= ~0x40u;
            v8 = *((_DWORD *)v5 + 4);
          }
          v9 = (_QWORD *)((char *)v5 + 24);
          if ( (v8 & 0x20) == 0 )
          {
            v10 = (void *)ReferenceDwmApiPort();
            DwmAsyncMagnDestroy(v10);
          }
          if ( (unsigned __int64)(*v9 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
            HMAssignmentUnlock(v9);
          v11 = (void *)*((_QWORD *)v5 + 29);
          if ( v11 )
            Win32FreePool(v11);
          v12 = (void *)*((_QWORD *)v5 + 32);
          if ( v12 )
            Win32FreePool(v12);
          Win32FreePool(v5);
        }
      }
      return;
    }
  }
}
