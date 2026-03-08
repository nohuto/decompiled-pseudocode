/*
 * XREFs of SymCryptParallelSha256Append @ 0x1403EF490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptParallelSha256AppendBlocks_xmm @ 0x1403EF588 (SymCryptParallelSha256AppendBlocks_xmm.c)
 *     SymCryptParallelSha256AppendBytes_serial @ 0x1403EFF38 (SymCryptParallelSha256AppendBytes_serial.c)
 *     SymCryptParallelSha256AppendBlocks_ymm @ 0x1403F0FD4 (SymCryptParallelSha256AppendBlocks_ymm.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall SymCryptParallelSha256Append(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD v13[8]; // [rsp+20h] [rbp-61h] BYREF
  _QWORD v14[8]; // [rsp+60h] [rbp-21h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  v8 = ((_DWORD)a2 + 3) & 0xFFFFFFFC;
  if ( a2 < 2 )
    return SymCryptParallelSha256AppendBytes_serial(a1, a2, a3, v8);
  v10 = 0LL;
  do
  {
    v11 = *(_QWORD **)(a1 + 8 * v10);
    v14[v10] = *v11 + 96LL;
    v13[v10] = v11[4];
    v11[4] += a3;
    v12 = *(_QWORD *)(a1 + 8 * v10++);
    *(_QWORD *)(v12 + 40) -= a3;
  }
  while ( v10 < a2 );
  while ( v10 < (unsigned int)v8 )
  {
    v14[v10] = v14[0];
    v13[v10++] = v13[0];
  }
  if ( (_DWORD)v8 == 8 )
    return SymCryptParallelSha256AppendBlocks_ymm(v14, v13, a3, a4);
  else
    return SymCryptParallelSha256AppendBlocks_xmm(v14, v13, a3, a4);
}
