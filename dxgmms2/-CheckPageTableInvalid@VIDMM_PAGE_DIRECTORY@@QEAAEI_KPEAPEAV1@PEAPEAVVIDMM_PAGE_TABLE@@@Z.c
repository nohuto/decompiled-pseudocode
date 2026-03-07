unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(
        VIDMM_PAGE_DIRECTORY *this,
        unsigned int a2,
        __int64 a3,
        struct VIDMM_PAGE_DIRECTORY **a4,
        struct VIDMM_PAGE_TABLE **a5)
{
  __int64 v5; // rbx
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct VIDMM_PAGE_TABLE *v10; // rcx
  struct VIDMM_PAGE_DIRECTORY *v11; // rdx

  v5 = *((_QWORD *)this + 5);
  v7 = a2;
  v8 = 2LL * a2;
  if ( (*(_BYTE *)(v5 + 8 * v8) & 1) == 0 || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7) + 4LL) )
    return 0;
  --*((_DWORD *)this + 1);
  *(_QWORD *)(v5 + 8 * v8) = 0LL;
  *(_QWORD *)(v5 + 8 * v8 + 8) = 0LL;
  v9 = *((_QWORD *)this + 6);
  if ( (*(_DWORD *)this & 0x20) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 8 * v7) + 40LL) = *a5;
    v10 = *(struct VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v7);
    *a5 = v10;
    *((_QWORD *)v10 + 1) = a3;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 8 * v7) + 32LL) = *a4;
    v11 = *(struct VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 6) + 8 * v7);
    *a4 = v11;
    *((_QWORD *)v11 + 1) = a3;
  }
  *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7) = 0LL;
  return 1;
}
