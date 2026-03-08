/*
 * XREFs of PfTAllocateBuffers @ 0x140844D98
 * Callers:
 *     PfTStart @ 0x140844B00 (PfTStart.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfTLbInitialize @ 0x1407E5A08 (PfTLbInitialize.c)
 *     PfTGetFreeBuffer @ 0x1407E68E0 (PfTGetFreeBuffer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfTAllocateBuffers(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // esi
  size_t v5; // rbp
  unsigned int v9; // r15d
  _QWORD *Pool2; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx

  v4 = 0;
  v5 = a2;
  *(_DWORD *)a1 = (16 * a2) | *(_DWORD *)a1 & 0xF;
  v9 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, v5, a4);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      if ( (*(_DWORD *)a1 & 0xF) != 0 )
      {
        memset(Pool2, 0, v5);
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        *((_DWORD *)Pool2 + 8) = 2048;
      }
      else
      {
        PfTLbInitialize(Pool2, v5, 0);
      }
      *Pool2 = *(_QWORD *)(a1 + 16);
      ++*(_WORD *)(a1 + 10);
      ++v9;
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = Pool2;
      if ( v9 >= a3 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v11 = PfTGetFreeBuffer(a1);
    v12 = a1 + 24;
    v13 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
      __fastfail(3u);
    *v11 = v13;
    v11[1] = v12;
    *(_QWORD *)(v13 + 8) = v11;
    *(_QWORD *)v12 = v11;
  }
  return v4;
}
