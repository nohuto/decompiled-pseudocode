/*
 * XREFs of ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1C0212840
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

DISPLAY_SOURCE *__fastcall DISPLAY_SOURCE::DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax

  *((_BYTE *)this + 960) = 1;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = -1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_BYTE *)this + 704) = 0;
  *(_QWORD *)((char *)this + 708) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 190) = 0;
  *((_WORD *)this + 382) = 0;
  *((_BYTE *)this + 766) = 0;
  *((_DWORD *)this + 204) = 0;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_BYTE *)this + 944) = 0;
  *((_DWORD *)this + 272) = -1;
  *(_QWORD *)((char *)this + 1092) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_DWORD *)this + 278) = 0;
  *((_BYTE *)this + 1116) = 0;
  *((_DWORD *)this + 280) = -1;
  *((_DWORD *)this + 283) = -1;
  *((_DWORD *)this + 284) = -1;
  *((_WORD *)this + 570) = 0;
  *((_BYTE *)this + 3720) = 0;
  *((_QWORD *)this + 470) = 0LL;
  *((_BYTE *)this + 3768) = 0;
  *((_DWORD *)this + 943) = -1;
  *((_DWORD *)this + 944) = -1;
  *((_DWORD *)this + 945) = 0;
  *((_QWORD *)this + 474) = 0LL;
  *((_QWORD *)this + 475) = 0LL;
  *((_QWORD *)this + 476) = 0LL;
  *((_DWORD *)this + 954) = 0;
  *((_DWORD *)this + 955) = -1;
  *((_DWORD *)this + 956) = 1;
  *((_DWORD *)this + 998) = 0;
  memset((char *)this + 628, 0, 0x4CuLL);
  *((_QWORD *)this + 96) = 0LL;
  *(_QWORD *)((char *)this + 716) = 0LL;
  *(_OWORD *)((char *)this + 964) = 0LL;
  *(_OWORD *)((char *)this + 980) = 0LL;
  *(_QWORD *)((char *)this + 996) = 0LL;
  *((_DWORD *)this + 251) = 0;
  memset((char *)this + 1008, 0, 0x50uLL);
  *(_QWORD *)((char *)this + 1124) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *(_OWORD *)((char *)this + 776) = 0LL;
  *(_OWORD *)((char *)this + 792) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  memset((char *)this + 824, 0, 0x50uLL);
  memset((char *)this + 1144, 0, 0x690uLL);
  memset((char *)this + 2824, 0, 0x50uLL);
  *((_QWORD *)this + 363) = 0LL;
  *((_WORD *)this + 1456) = 0;
  memset((char *)this + 2920, 0, 0x320uLL);
  v2 = 10LL;
  *(_OWORD *)((char *)this + 3724) = 0LL;
  *(_OWORD *)((char *)this + 3740) = 0LL;
  *((_DWORD *)this + 939) = 0;
  v3 = (_DWORD *)((char *)this + 1148);
  do
  {
    *(v3 - 1) = -1;
    *v3 = -1;
    v3 += 42;
    --v2;
  }
  while ( v2 );
  *((_DWORD *)this + 706) = -1;
  *((_DWORD *)this + 707) = -1;
  *((_DWORD *)this + 185) = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 119);
  KeInitializeEvent((PRKEVENT)((char *)this + 904), NotificationEvent, 0);
  memset((char *)this + 3832, 0, 0xA0uLL);
  return this;
}
