__int64 __fastcall VrpAllocateDiffHiveEntry(unsigned __int16 *a1, const void **a2)
{
  __int64 Pool2; // rbx
  __int64 v5; // rbp
  WCHAR *v6; // rdi
  WCHAR *v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // eax
  WCHAR v11; // [rsp+40h] [rbp+8h]

  Pool2 = ExAllocatePool2(256LL, *a1 + *(unsigned __int16 *)a2 + 68LL, 1734693462LL);
  if ( Pool2 )
  {
    v5 = 314159LL;
    v6 = (WCHAR *)*((_QWORD *)a1 + 1);
    v7 = &v6[(unsigned __int64)*a1 >> 1];
    while ( v6 < v7 )
    {
      v11 = RtlUpcaseUnicodeChar(*v6++);
      v5 = HIBYTE(v11) + 37 * ((unsigned __int8)v11 + 37 * v5);
    }
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 8) = v5;
    *(_QWORD *)(Pool2 + 16) = 1LL;
    KeInitializeWaitChain((_QWORD *)(Pool2 + 48));
    v8 = *a1;
    *(_WORD *)(Pool2 + 64) = v8;
    memmove((void *)(Pool2 + 68), *((const void **)a1 + 1), v8);
    v9 = *(unsigned __int16 *)a2;
    *(_WORD *)(Pool2 + 66) = v9;
    memmove((void *)(Pool2 + 2 * (((unsigned __int64)*(unsigned __int16 *)(Pool2 + 64) >> 1) + 34)), a2[1], v9);
  }
  return Pool2;
}
