/*
 * XREFs of ?WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00F560C
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00E4B54 (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::WritePagingHistoryToMinidump(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  unsigned int v4; // r10d
  unsigned int v7; // ebx
  unsigned __int8 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0

  v4 = *((_DWORD *)this + 1972);
  v7 = 0;
  do
  {
    if ( !v4 )
    {
      if ( !*((_DWORD *)this + 1973) )
        break;
      v4 = *((_DWORD *)this + 1968);
    }
    --v4;
    if ( a4 < 0x168 )
      break;
    v8 = a3;
    v9 = 360LL * v4 + *((_QWORD *)this + 985);
    v10 = 2LL;
    do
    {
      v11 = *(_OWORD *)v9;
      v9 += 128LL;
      *(_OWORD *)v8 = v11;
      v8 += 128;
      *((_OWORD *)v8 - 7) = *(_OWORD *)(v9 - 112);
      *((_OWORD *)v8 - 6) = *(_OWORD *)(v9 - 96);
      *((_OWORD *)v8 - 5) = *(_OWORD *)(v9 - 80);
      *((_OWORD *)v8 - 4) = *(_OWORD *)(v9 - 64);
      *((_OWORD *)v8 - 3) = *(_OWORD *)(v9 - 48);
      *((_OWORD *)v8 - 2) = *(_OWORD *)(v9 - 32);
      *((_OWORD *)v8 - 1) = *(_OWORD *)(v9 - 16);
      --v10;
    }
    while ( v10 );
    a3 += 360;
    a4 -= 360LL;
    ++v7;
    *(_OWORD *)v8 = *(_OWORD *)v9;
    *((_OWORD *)v8 + 1) = *(_OWORD *)(v9 + 16);
    *((_OWORD *)v8 + 2) = *(_OWORD *)(v9 + 32);
    *((_OWORD *)v8 + 3) = *(_OWORD *)(v9 + 48);
    *((_OWORD *)v8 + 4) = *(_OWORD *)(v9 + 64);
    *((_OWORD *)v8 + 5) = *(_OWORD *)(v9 + 80);
    *((_QWORD *)v8 + 12) = *(_QWORD *)(v9 + 96);
  }
  while ( v4 != *((_DWORD *)this + 1972) );
  *((_DWORD *)a2 + 329) = v7;
  return 360LL * v7;
}
