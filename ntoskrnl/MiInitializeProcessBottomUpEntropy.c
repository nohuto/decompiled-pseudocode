/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x140728C14
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1407291A8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v5; // rsi
  char v6; // r15
  unsigned __int64 v7; // r14
  int v8; // ecx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]

  v1 = *(_DWORD *)(a1 + 2512);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 1680);
  v18 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 2LL;
  if ( (v1 & 0x40) == 0 )
  {
    v8 = ExGenRandom(1);
    v5 = (unsigned __int8)v8;
    if ( !(_DWORD)InitializationPhase )
      *(_DWORD *)(a1 + 2512) |= 0x20u;
    if ( *(_QWORD *)(a1 + 1496) > 0x100000000uLL && (*(_DWORD *)(a1 + 2512) & 0x20) != 0 )
    {
      v9 = *(_QWORD *)&v8 & 0xFFFFFFLL;
      v5 = 0x10000LL;
      v6 = 1;
      if ( v9 > 0x10000 )
        v5 = v9;
    }
  }
  if ( !v5 )
    v5 = 1LL;
  v17 = v5;
  if ( v6 )
  {
    v10 = v5 + (ExGenRandom(1) & 0xFFFFFF) + 0x1000000;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2512), 0xFFFFFFDF);
    v10 = v17;
  }
  v16 = v10;
  if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
  {
    v7 = 3LL;
    v18 = (ExGenRandom(1) & 0xFFFFFF) + 0x10000;
  }
  *(_QWORD *)(v3 + 264) = v7;
  result = 0LL;
  do
  {
    v12 = 9 * result;
    v13 = *(&v16 + result);
    v14 = *(_QWORD *)(a1 + 1496) - 1LL;
    if ( v2 == 2 )
      v14 = 0x7FFFFFFEFFFFLL;
    v15 = v13 & 0xFFFFFFFFFFFFLL;
    ++v2;
    *(_QWORD *)(v3 + 8 * v12 + 112) = v15;
    *(_QWORD *)(v3 + 8 * v12 + 104) = v15 << 16;
    result = v2;
    *(_QWORD *)(v3 + 8 * v12 + 88) = v14 >> 16;
  }
  while ( v2 < v7 );
  return result;
}
