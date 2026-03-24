/*
 * XREFs of ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00B6444
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00AFC1C (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0018AC0 (memmove.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0028584 (-CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WriteSegmentInformationToMinidump(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r15
  struct _VIDMM_MINIDUMP_HEADER *v9; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ecx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  void *Src; // [rsp+20h] [rbp-79h] BYREF
  struct _VIDMM_MINIDUMP_HEADER *v23; // [rsp+28h] [rbp-71h]
  _OWORD v24[8]; // [rsp+30h] [rbp-69h] BYREF

  v4 = 0;
  v23 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v9 = a2;
  if ( *((_DWORD *)this + 926) )
  {
    do
    {
      Src = 0LL;
      if ( a4 < 0x80 )
        break;
      memset(v24, 0, sizeof(v24));
      v11 = *((_QWORD *)this + 464);
      DWORD2(v24[1]) = 0;
      *(_QWORD *)&v24[2] = 0LL;
      v12 = *(_QWORD *)(v11 + 8 * v6);
      v24[0] = *(_OWORD *)(v12 + 24);
      *(_QWORD *)&v24[1] = *(_QWORD *)(v12 + 48);
      *((_QWORD *)&v24[2] + 1) = *(_QWORD *)(v12 + 208);
      LODWORD(v24[3]) = *(_DWORD *)(v12 + 80);
      if ( (int)VIDMM_SEGMENT::CheckForApertureGuardPageCorruption((VIDMM_SEGMENT *)v12, (unsigned int **)&Src, 0LL) < 0 )
      {
        DWORD2(v24[3]) = 1;
        if ( Src )
        {
          v13 = 4096 - ((unsigned __int16)Src & 0xFFF);
          HIDWORD(v24[3]) = (unsigned __int16)Src & 0xFFF;
          if ( v13 > 0x40 )
            v13 = 64;
          memmove(&v24[4], Src, v13);
        }
        else
        {
          HIDWORD(v24[3]) = -1;
        }
      }
      else
      {
        *((_QWORD *)&v24[3] + 1) = 0LL;
      }
      v14 = v24[1];
      v5 += 128LL;
      *(_OWORD *)a3 = v24[0];
      a4 -= 128LL;
      ++v4;
      v15 = v24[2];
      v6 = (unsigned int)(v6 + 1);
      *((_OWORD *)a3 + 1) = v14;
      v16 = v24[3];
      *((_OWORD *)a3 + 2) = v15;
      v17 = v24[4];
      *((_OWORD *)a3 + 3) = v16;
      v18 = v24[5];
      *((_OWORD *)a3 + 4) = v17;
      v19 = v24[6];
      *((_OWORD *)a3 + 5) = v18;
      v20 = v24[7];
      *((_OWORD *)a3 + 6) = v19;
      *((_OWORD *)a3 + 7) = v20;
      a3 += 128;
    }
    while ( (unsigned int)v6 < *((_DWORD *)this + 926) );
    v9 = v23;
  }
  *((_DWORD *)v9 + 318) = v4;
  return v5;
}
