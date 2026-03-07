__int64 __fastcall CRedirectedGDISurface::GetSurfaceData(
        CRedirectedGDISurface *this,
        enum _RedirectGDISurfaceRedirStyle *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        struct _LUID *a7,
        void **a8,
        enum DXGI_FORMAT *a9)
{
  __int64 v9; // rcx
  unsigned int v13; // ebx
  void *v15; // rax
  struct _LUID v16; // rax
  signed int LastError; // eax
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h]
  __int128 v20; // [rsp+40h] [rbp-10h]

  v9 = *((_QWORD *)this + 3);
  v18 = 0LL;
  v13 = 0;
  v19 = 0LL;
  v20 = 0LL;
  if ( (unsigned int)DwmGetSurfaceData(v9, &v18) )
  {
    *a3 = DWORD1(v18);
    *a4 = DWORD2(v18);
    *a5 = v19;
    if ( (_DWORD)v18 )
    {
      if ( (_DWORD)v18 == 1 )
      {
        v15 = (void *)*((_QWORD *)&v20 + 1);
        *(_DWORD *)a2 = 1;
        *a6 = v15;
        v16 = (struct _LUID)v20;
LABEL_8:
        *a7 = v16;
        *a8 = 0LL;
        return v13;
      }
      if ( (_DWORD)v18 == 2 )
      {
        *(_DWORD *)a2 = 2;
        *a9 = DXGI_FORMAT_B8G8R8A8_UNORM;
        *a6 = 0LL;
        *a7 = (struct _LUID)v20;
        *a8 = (void *)*((_QWORD *)&v20 + 1);
        return v13;
      }
    }
    *(_DWORD *)a2 = 0;
    *a6 = 0LL;
    v16 = g_luidZero;
    goto LABEL_8;
  }
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *(_DWORD *)a2 = 0;
  *a6 = 0LL;
  *a7 = g_luidZero;
  *a8 = 0LL;
  LastError = GetLastError();
  if ( LastError > 0 )
    return (unsigned __int16)LastError | 0x80070000;
  else
    return (unsigned int)LastError;
}
