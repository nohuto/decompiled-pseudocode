/*
 * XREFs of SymCryptParallelHashProcess_serial @ 0x1403F0C60
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1403EFFF0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     _guard_dispatch_icall_nop @ 0x140411B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SymCryptParallelHashProcess_serial(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  unsigned int v8; // ebx
  __int64 v9; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *i; // rdi
  unsigned __int64 v16; // rdx

  v8 = 0;
  v9 = *a1;
  v12 = 56 * a3 + *((unsigned int *)a1 + 2);
  if ( a7 >= v12 )
  {
    if ( v12 <= 0x40 )
    {
      if ( (v12 & 1) != 0 )
        *(_BYTE *)(--v12 + a6) = 0;
      if ( (v12 & 2) != 0 )
      {
        v12 -= 2LL;
        *(_WORD *)(v12 + a6) = 0;
      }
      if ( (v12 & 4) != 0 )
      {
        v12 -= 4LL;
        *(_DWORD *)(v12 + a6) = 0;
      }
      if ( (v12 & 8) != 0 )
      {
        v12 -= 8LL;
        *(_QWORD *)(v12 + a6) = 0LL;
      }
      if ( (v12 & 0x10) != 0 )
      {
        v12 -= 16LL;
        *(_QWORD *)(v12 + a6) = 0LL;
        *(_QWORD *)(v12 + a6 + 8) = 0LL;
      }
      v13 = v12;
      if ( (v12 & 0x20) != 0 )
      {
        v12 -= 32LL;
        *(_QWORD *)(v12 + a6) = 0LL;
        *(_QWORD *)(v12 + a6 + 8) = 0LL;
        *(_QWORD *)(v13 + a6 - 16) = 0LL;
        *(_QWORD *)(v13 + a6 - 8) = 0LL;
      }
      if ( (v12 & 0x40) != 0 )
      {
        *(_QWORD *)(v12 + a6 - 64) = 0LL;
        *(_QWORD *)(v12 + a6 - 56) = 0LL;
        *(_QWORD *)(v12 + a6 - 48) = 0LL;
        *(_QWORD *)(v12 + a6 - 40) = 0LL;
        *(_QWORD *)(v12 + a6 - 32) = 0LL;
        *(_QWORD *)(v12 + a6 - 24) = 0LL;
        *(_QWORD *)(v12 + a6 - 16) = 0LL;
        *(_QWORD *)(v12 + a6 - 8) = 0LL;
      }
    }
    else
    {
      SymCryptWipe(a6, v12);
    }
    v14 = 0LL;
    if ( a5 )
    {
      for ( i = (_QWORD *)(a4 + 24); ; i += 5 )
      {
        v16 = *(i - 3);
        if ( v16 >= a3 )
          break;
        if ( *((_DWORD *)i - 4) == 1 )
        {
          (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(v9 + 8))(
            a2 + v16 * *(unsigned int *)(v9 + 32),
            *(i - 1),
            *i);
        }
        else
        {
          if ( *((_DWORD *)i - 4) != 2 || *i != *(_DWORD *)(v9 + 36) )
            return 32782;
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(v9 + 16))(a2 + v16 * *(unsigned int *)(v9 + 32), *(i - 1));
        }
        if ( ++v14 >= a5 )
          return v8;
      }
      return 32782;
    }
  }
  else
  {
    return 32781;
  }
  return v8;
}
