__int64 __fastcall VfProbeAndCaptureUnicodeStringBuffer(unsigned __int16 *a1, int a2)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  void *Pool2; // rax
  void *v8; // rdi

  v3 = *a1;
  if ( (v3 & 1) != 0 )
    return 3221225485LL;
  if ( (_WORD)v3 )
  {
    v5 = *((_QWORD *)a1 + 1);
    if ( v5 + v3 > 0x7FFFFFFF0000LL || v5 + v3 < v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v6 = 256LL;
    if ( a2 != 1 )
      v6 = 64LL;
    Pool2 = (void *)ExAllocatePool2(v6, *a1, 0x43536656u);
    v8 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    *((_QWORD *)a1 + 1) = v8;
  }
  else
  {
    *((_QWORD *)a1 + 1) = MmBadPointer;
  }
  a1[1] = *a1;
  return 0LL;
}
