/*
 * XREFs of SymCryptParallelSha256Append @ 0x1403ED420
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     SymCryptParallelSha256AppendBlocks_xmm @ 0x1403ED51C (SymCryptParallelSha256AppendBlocks_xmm.c)
 *     SymCryptParallelSha256AppendBlocks_ymm @ 0x1403EDEC8 (SymCryptParallelSha256AppendBlocks_ymm.c)
 *     SymCryptParallelSha256AppendBytes_serial @ 0x1403EE91C (SymCryptParallelSha256AppendBytes_serial.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall SymCryptParallelSha256Append(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[8]; // [rsp+20h] [rbp-61h] BYREF
  _QWORD v15[8]; // [rsp+60h] [rbp-21h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  v8 = ((_DWORD)a2 + 3) & 0xFFFFFFFC;
  if ( a2 < 2 )
    return SymCryptParallelSha256AppendBytes_serial(a1, a2, a3, v8);
  v10 = 0LL;
  do
  {
    v11 = *(_QWORD **)(a1 + 8 * v10);
    v15[v10] = *v11 + 96LL;
    v12 = v11[4];
    v14[v10] = v12;
    v11[4] = a3 + v12;
    v13 = *(_QWORD *)(a1 + 8 * v10++);
    *(_QWORD *)(v13 + 40) -= a3;
  }
  while ( v10 < a2 );
  while ( v10 < (unsigned int)v8 )
  {
    v15[v10] = v15[0];
    v14[v10++] = v14[0];
  }
  if ( (_DWORD)v8 == 8 )
    return SymCryptParallelSha256AppendBlocks_ymm(v15, v14, a3, a4);
  else
    return SymCryptParallelSha256AppendBlocks_xmm(v15, v14, a3, a4);
}
