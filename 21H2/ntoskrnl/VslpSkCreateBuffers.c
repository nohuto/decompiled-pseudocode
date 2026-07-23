/*
 * XREFs of VslpSkCreateBuffers @ 0x140890974
 * Callers:
 *     VslpSkStartProfiling @ 0x140890B80 (VslpSkStartProfiling.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall VslpSkCreateBuffers(int a1, unsigned int a2)
{
  char *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int128 v8; // xmm1
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v12[5]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 )
  {
    v4 = (char *)VslpEventLog + 16 * *((unsigned int *)VslpEventLog + 2);
    v5 = 0;
    v6 = 0LL;
    do
    {
      memset(v12, 0, 0x48uLL);
      v7 = v5;
      *((_QWORD *)&v12[1] + 1) = v6;
      v8 = v12[1];
      ++v5;
      result = a1 * v7;
      ++v6;
      LODWORD(v12[0]) = a1;
      LODWORD(v12[3]) = 72;
      *(_OWORD *)&v4[result + 24] = v12[0];
      v10 = v12[2];
      *(_OWORD *)&v4[result + 40] = v8;
      v11 = v12[3];
      *(_OWORD *)&v4[result + 56] = v10;
      *(_QWORD *)&v10 = *(_QWORD *)&v12[4];
      *(_OWORD *)&v4[result + 72] = v11;
      *(_QWORD *)&v4[result + 88] = v10;
    }
    while ( v5 < a2 );
  }
  return result;
}
