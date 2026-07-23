/*
 * XREFs of SymCryptParallelHashProcess_serial @ 0x1403EFA6C
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EF244 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptWipe @ 0x1403EF7A4 (SymCryptWipe.c)
 *     _guard_dispatch_icall_nop @ 0x1403F9D60 (_guard_dispatch_icall_nop.c)
 *     SymCryptFatal @ 0x140515168 (SymCryptFatal.c)
 */

unsigned __int64 __fastcall SymCryptParallelHashProcess_serial(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // r10
  __int64 v10; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rdx

  v7 = *((unsigned int *)a1 + 2);
  v10 = *a1;
  v12 = 56 * a3;
  if ( a7 < 56 * a3 + v7 )
    SymCryptFatal(1886597747LL);
  v13 = 0LL;
  result = v12 + (unsigned int)v7;
  if ( result <= 0x40 )
  {
    if ( (result & 1) != 0 )
      *(_BYTE *)(--result + a6) = 0;
    if ( (result & 2) != 0 )
    {
      result -= 2LL;
      *(_WORD *)(result + a6) = 0;
    }
    if ( (result & 4) != 0 )
    {
      result -= 4LL;
      *(_DWORD *)(result + a6) = 0;
    }
    if ( (result & 8) != 0 )
    {
      result -= 8LL;
      *(_QWORD *)(result + a6) = 0LL;
    }
    if ( (result & 0x10) != 0 )
    {
      result -= 16LL;
      *(_QWORD *)(result + a6) = 0LL;
      *(_QWORD *)(result + a6 + 8) = 0LL;
    }
    v15 = result;
    if ( (result & 0x20) != 0 )
    {
      result -= 32LL;
      *(_QWORD *)(result + a6) = 0LL;
      *(_QWORD *)(result + a6 + 8) = 0LL;
      *(_QWORD *)(v15 + a6 - 16) = 0LL;
      *(_QWORD *)(a6 + v15 - 8) = 0LL;
    }
    if ( (result & 0x40) != 0 )
    {
      *(_QWORD *)(result + a6 - 64) = 0LL;
      *(_QWORD *)(result + a6 - 56) = 0LL;
      *(_QWORD *)(result + a6 - 48) = 0LL;
      *(_QWORD *)(result + a6 - 40) = 0LL;
      *(_QWORD *)(result + a6 - 32) = 0LL;
      *(_QWORD *)(result + a6 - 24) = 0LL;
      *(_QWORD *)(result + a6 - 16) = 0LL;
      *(_QWORD *)(result + a6 - 8) = 0LL;
    }
  }
  else
  {
    result = SymCryptWipe(a6, v12 + (unsigned int)v7);
  }
  if ( a5 )
  {
    v16 = (_QWORD *)(a4 + 24);
    do
    {
      v17 = *(v16 - 3);
      if ( v17 >= a3 )
        SymCryptFatal(1886597737LL);
      if ( *((_DWORD *)v16 - 4) == 1 )
      {
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(v10 + 8))(
                   a2 + v17 * *(unsigned int *)(v10 + 32),
                   *(v16 - 1),
                   *v16);
      }
      else
      {
        if ( *((_DWORD *)v16 - 4) != 2 )
          SymCryptFatal(1886597743LL);
        if ( *v16 != *(_DWORD *)(v10 + 36) )
          SymCryptFatal(1886597746LL);
        result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v10 + 16))(
                   a2 + v17 * *(unsigned int *)(v10 + 32),
                   *(v16 - 1));
      }
      v16 += 5;
      ++v13;
    }
    while ( v13 < a5 );
  }
  return result;
}
