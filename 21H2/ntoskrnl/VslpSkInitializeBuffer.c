/*
 * XREFs of VslpSkInitializeBuffer @ 0x140890A38
 * Callers:
 *     VslpFlushBufferArrayEntryCallback @ 0x1404FDDB0 (VslpFlushBufferArrayEntryCallback.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall VslpSkInitializeBuffer(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  void *result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v9[5]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  result = memset(v9, 0, 0x48uLL);
  LODWORD(v9[0]) = a2;
  *(_OWORD *)a1 = v9[0];
  *((_QWORD *)&v9[1] + 1) = v4;
  v7 = v9[2];
  *(_OWORD *)(a1 + 16) = v9[1];
  LODWORD(v9[3]) = 72;
  v8 = v9[3];
  *(_OWORD *)(a1 + 32) = v7;
  *(_QWORD *)&v7 = *(_QWORD *)&v9[4];
  *(_OWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 64) = v7;
  return result;
}
