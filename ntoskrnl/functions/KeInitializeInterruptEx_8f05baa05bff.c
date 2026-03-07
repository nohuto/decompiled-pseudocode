__int64 (__fastcall *__fastcall KeInitializeInterruptEx(
        _DWORD *a1,
        __int64 (__fastcall *a2)(),
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9,
        char a10,
        int a11,
        char a12,
        int a13,
        int a14,
        char a15,
        __int64 a16))(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16)
{
  __int64 v20; // rax
  __int64 (__fastcall *result)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rax

  memset(a1, 0, 0x120uLL);
  *a1 = 18874390;
  *((_QWORD *)a1 + 6) = a4;
  if ( !a2 )
  {
    a2 = KiInterruptMessageDispatch;
    a1[10] = a5;
    *((_QWORD *)a1 + 4) = a3;
  }
  *((_QWORD *)a1 + 3) = a2;
  if ( a6 )
  {
    v20 = a6;
  }
  else
  {
    v20 = (__int64)(a1 + 14);
    *((_QWORD *)a1 + 7) = 0LL;
  }
  *((_QWORD *)a1 + 9) = v20;
  a1[22] = a8;
  a1[27] = a11;
  *((_BYTE *)a1 + 100) = a12;
  *((_BYTE *)a1 + 92) = a9;
  *((_BYTE *)a1 + 93) = a10;
  if ( !a10 )
  {
    *(_WORD *)a7 = 1;
    *(_QWORD *)(a7 + 16) = a7 + 8;
    *(_QWORD *)(a7 + 8) = a7 + 8;
    *(_BYTE *)(a7 + 2) = 6;
    *(_DWORD *)(a7 + 4) = 1;
    *((_QWORD *)a1 + 16) = a7;
  }
  a1[24] = a13;
  *((_BYTE *)a1 + 101) = a15;
  *((_QWORD *)a1 + 20) = a16;
  a1[26] = 0;
  switch ( a6 )
  {
    case -1LL:
      result = KiInterruptDispatchNoLock;
      break;
    case -3LL:
      result = KiInterruptDispatchNoLockNoEtw;
      break;
    case -4LL:
      result = KiInterruptDispatchNoEOI;
      break;
    default:
      result = KiInterruptDispatch;
      if ( a6 == -2 )
        result = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))&KiSpuriousDispatchNoEOI;
      break;
  }
  *((_QWORD *)a1 + 10) = result;
  *((_BYTE *)a1 + 95) = 0;
  return result;
}
