__int64 __fastcall IcAddApicInstance(int a1)
{
  unsigned int v2; // eax
  char v3; // bl
  __int64 result; // rax
  unsigned int v5; // ebp
  unsigned int v6; // esi
  _DWORD *Pool2; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  v2 = (*(__int64 (**)(void))(PmHalDispatchTable + 64))();
  v3 = v2;
  if ( !v2 )
    return 3221226021LL;
  v5 = HIBYTE(v2);
  v6 = HIWORD(v2);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 200 * (HIBYTE(v2) - 1) + 232, 1232102209LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[4] = a1;
  Pool2[6] = v5;
  Pool2[5] = a1 + (unsigned __int8)v6;
  if ( !(_BYTE)v6 && !v3 )
    Pool2[7] = 0x80000000;
  v9 = (_QWORD *)qword_1C006E5D8;
  if ( *(__int64 **)qword_1C006E5D8 != &IcListHead )
    __fastfail(3u);
  v8[1] = qword_1C006E5D8;
  *v8 = &IcListHead;
  *v9 = v8;
  result = 0LL;
  qword_1C006E5D8 = (__int64)v8;
  return result;
}
