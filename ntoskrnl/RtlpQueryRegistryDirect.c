/*
 * XREFs of RtlpQueryRegistryDirect @ 0x14069E6E4
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x14069B8C4 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlpQueryRegistryDirect(unsigned int a1, unsigned int *a2, size_t a3, unsigned int *a4)
{
  unsigned __int16 v4; // bx
  void *v8; // rcx
  unsigned __int64 v10; // rax
  void *StringRoutine; // rax
  size_t v12; // rbp

  v4 = a3;
  if ( a1 - 1 > 1 && a1 != 7 )
  {
    if ( (unsigned int)a3 <= 4 )
    {
      if ( a4 == a2 || !(_DWORD)a3 )
        return 0LL;
      goto LABEL_6;
    }
    v10 = *a4;
    if ( (v10 & 0x80000000) == 0LL )
    {
      a3 = (unsigned int)a3;
      if ( v10 >= (unsigned __int64)(unsigned int)a3 + 8 )
      {
        *a4 = a3;
        v8 = a4 + 2;
        a4[1] = a1;
        goto LABEL_7;
      }
    }
    else if ( -(int)v10 >= (unsigned int)a3 )
    {
LABEL_6:
      a3 = (unsigned int)a3;
      v8 = a4;
LABEL_7:
      memmove(v8, a2, a3);
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( (unsigned int)a3 > 0xFFFE )
    v4 = -2;
  StringRoutine = (void *)*((_QWORD *)a4 + 1);
  if ( StringRoutine )
  {
    if ( v4 > *((_WORD *)a4 + 1) )
      return 3221225507LL;
    v12 = v4;
LABEL_17:
    memmove(StringRoutine, a2, v12);
    *(_WORD *)a4 = v4 - 2;
    return 0LL;
  }
  v12 = v4;
  StringRoutine = (void *)ExpAllocateStringRoutine(v4);
  *((_QWORD *)a4 + 1) = StringRoutine;
  if ( StringRoutine )
  {
    *((_WORD *)a4 + 1) = v4;
    goto LABEL_17;
  }
  return 3221225495LL;
}
