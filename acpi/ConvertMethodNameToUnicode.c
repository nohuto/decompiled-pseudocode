/*
 * XREFs of ConvertMethodNameToUnicode @ 0x1C0059798
 * Callers:
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 * Callees:
 *     RtlStringCchLengthA @ 0x1C00091CC (RtlStringCchLengthA.c)
 */

__int64 __fastcall ConvertMethodNameToUnicode(const char *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const char *v4; // rdi
  unsigned __int16 v5; // si
  __int64 v6; // r15
  __int64 Pool2; // rax
  __int64 v8; // rdx
  __int16 v9; // cx
  size_t v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 0LL;
  v4 = a1;
  if ( a1 && *a1 )
  {
    v5 = 512;
    if ( RtlStringCchLengthA(a1, 0x200uLL, &v11) >= 0 )
      v5 = v11;
    v6 = v5;
    Pool2 = ExAllocatePool2(64LL, 2LL * v5 + 2, 1399874369LL);
    *(_QWORD *)(a2 + 8) = Pool2;
    if ( Pool2 )
    {
      *(_WORD *)a2 = 2 * v5;
      *(_WORD *)(a2 + 2) = 2 * v5 + 2;
      if ( v5 )
      {
        v8 = 0LL;
        do
        {
          v9 = *v4++;
          *(_WORD *)(v8 + *(_QWORD *)(a2 + 8)) = v9;
          v8 += 2LL;
          --v6;
        }
        while ( v6 );
      }
      *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v5) = 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
