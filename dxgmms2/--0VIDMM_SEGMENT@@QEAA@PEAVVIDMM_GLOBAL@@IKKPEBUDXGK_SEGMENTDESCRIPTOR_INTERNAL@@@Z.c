VIDMM_SEGMENT *__fastcall VIDMM_SEGMENT::VIDMM_SEGMENT(
        VIDMM_SEGMENT *this,
        struct VIDMM_GLOBAL *a2,
        int a3,
        int a4,
        unsigned int a5,
        const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  VIDMM_SEGMENT *result; // rax
  int v13; // eax

  *((_DWORD *)this + 5) = a4;
  *(_QWORD *)this = &VIDMM_SEGMENT::`vftable';
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a5;
  *((_QWORD *)this + 3) = *((_QWORD *)a6 + 1);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = *(_DWORD *)a6;
  *((_DWORD *)this + 21) = *((_DWORD *)a6 + 14);
  *((_DWORD *)this + 22) = *((_DWORD *)a6 + 23);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = *((_QWORD *)a6 + 4);
  *((_QWORD *)this + 19) = 0LL;
  v7 = *((_QWORD *)a6 + 3);
  *((_DWORD *)this + 92) = -1;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 119) = 2;
  *((_QWORD *)this + 26) = v7;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 23) = (char *)this + 176;
  *((_QWORD *)this + 22) = (char *)this + 176;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_QWORD *)this + 38) = (char *)this + 296;
  *((_QWORD *)this + 37) = (char *)this + 296;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_BYTE *)this + 372) = 1;
  *((_DWORD *)this + 95) = a3;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_WORD *)this + 224) = 1;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_WORD *)this + 236) = 0;
  *((_BYTE *)this + 474) = 1;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *(_OWORD *)((char *)this + 312) = 0LL;
  *(_OWORD *)((char *)this + 328) = 0LL;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_OWORD *)this + 26) = 0LL;
  *((_OWORD *)this + 27) = 0LL;
  v8 = *((_QWORD *)a6 + 2);
  v9 = dword_1C00762B8[a5];
  if ( (_DWORD)v9 && v8 >= v9 )
    v8 = dword_1C00762B8[a5];
  *((_QWORD *)this + 8) = v8;
  *((_QWORD *)this + 7) = v8;
  if ( (*(_DWORD *)a6 & 0x10000) == 0 )
  {
    v10 = 0x10000000LL;
    if ( v8 < 0x10000000 )
      v10 = v8;
    *((_QWORD *)this + 7) = v10;
  }
  *((_DWORD *)this + 94) = (*(_DWORD *)a6 & 0x800) != 0 ? 0x10000 : 4096;
  if ( (*(_DWORD *)a6 & 0x80000) != 0 )
  {
    *((_DWORD *)this + 119) = 0;
  }
  else
  {
    v13 = *((_DWORD *)this + 119);
    if ( (*(_DWORD *)a6 & 0x100000) != 0 )
      v13 = 1;
    *((_DWORD *)this + 119) = v13;
  }
  v11 = (*((_DWORD *)this + 20) & 0x2000) == 0;
  *((_QWORD *)this + 4) = *((_QWORD *)a6 + 5);
  if ( !v11 )
    *((_DWORD *)this + 10) = *((_DWORD *)a6 + 12);
  *((_DWORD *)this + 23) = -1;
  result = this;
  *((_DWORD *)this + 24) = -1;
  return result;
}
