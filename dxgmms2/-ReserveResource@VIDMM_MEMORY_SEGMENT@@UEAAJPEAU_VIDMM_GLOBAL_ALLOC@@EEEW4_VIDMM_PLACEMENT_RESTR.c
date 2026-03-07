__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        int a6,
        unsigned __int64 a7)
{
  int v10; // esi
  VIDMM_CPU_HOST_APERTURE *v11; // rcx
  int v12; // eax

  if ( !*(_BYTE *)(a2 + 80) || (*(_DWORD *)(a1 + 80) & 4) != 0 || *(_QWORD *)(a1 + 504) )
  {
    v10 = VIDMM_SEGMENT::ReserveResource(a1, a2, a3, a4, a5, a6, a7);
    if ( v10 >= 0 )
    {
      if ( *(_BYTE *)(a2 + 80) )
      {
        v11 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 504);
        if ( v11 )
        {
          v12 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v11, (struct _VIDMM_GLOBAL_ALLOC *)a2);
          v10 = v12;
          if ( v12 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v12);
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 24LL))(
              a1,
              a2,
              *(_QWORD *)(a2 + 184),
              *(_QWORD *)(a2 + 16),
              **(_QWORD **)(a2 + 512));
            *(_QWORD *)(a2 + 200) = 0LL;
            *(_QWORD *)(a2 + 184) = 0LL;
          }
        }
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    return 3221225473LL;
  }
}
