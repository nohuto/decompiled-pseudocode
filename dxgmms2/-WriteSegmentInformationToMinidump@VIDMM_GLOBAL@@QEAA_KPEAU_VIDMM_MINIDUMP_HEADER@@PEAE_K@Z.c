/*
 * XREFs of ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00EBD44
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00E4B54 (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     memmove @ 0x1C001A980 (memmove.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0032984 (-CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WriteSegmentInformationToMinidump(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 i; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ecx
  unsigned int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  void *Src[18]; // [rsp+20h] [rbp-79h] BYREF

  v4 = 0;
  v5 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); a3 += 128 )
  {
    Src[0] = 0LL;
    if ( a4 < 0x80 )
      break;
    memset(&Src[2], 0, 0x80uLL);
    v11 = *((_QWORD *)this + 464);
    LODWORD(Src[5]) = 0;
    Src[6] = 0LL;
    v12 = *(_QWORD *)(v11 + 8 * i);
    *(_OWORD *)&Src[2] = *(_OWORD *)(v12 + 24);
    Src[4] = *(void **)(v12 + 48);
    Src[7] = *(void **)(v12 + 208);
    LODWORD(Src[8]) = *(_DWORD *)(v12 + 80);
    if ( (int)VIDMM_SEGMENT::CheckForApertureGuardPageCorruption((VIDMM_SEGMENT *)v12, (unsigned int **)Src, 0) < 0 )
    {
      LODWORD(Src[9]) = 1;
      if ( Src[0] )
      {
        v13 = (__int64)Src[0] & 0xFFF;
        HIDWORD(Src[9]) = v13;
        v14 = (unsigned int)(4096 - v13) <= 0x40 ? 4096 - v13 : 64;
        memmove(&Src[10], Src[0], v14);
      }
      else
      {
        HIDWORD(Src[9]) = -1;
      }
    }
    else
    {
      Src[9] = 0LL;
    }
    v15 = *(_OWORD *)&Src[4];
    v5 += 128LL;
    *(_OWORD *)a3 = *(_OWORD *)&Src[2];
    a4 -= 128LL;
    ++v4;
    v16 = *(_OWORD *)&Src[6];
    i = (unsigned int)(i + 1);
    *((_OWORD *)a3 + 1) = v15;
    v17 = *(_OWORD *)&Src[8];
    *((_OWORD *)a3 + 2) = v16;
    v18 = *(_OWORD *)&Src[10];
    *((_OWORD *)a3 + 3) = v17;
    v19 = *(_OWORD *)&Src[12];
    *((_OWORD *)a3 + 4) = v18;
    v20 = *(_OWORD *)&Src[14];
    *((_OWORD *)a3 + 5) = v19;
    v21 = *(_OWORD *)&Src[16];
    *((_OWORD *)a3 + 6) = v20;
    *((_OWORD *)a3 + 7) = v21;
  }
  *((_DWORD *)a2 + 328) = v4;
  return v5;
}
