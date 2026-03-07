__int64 __fastcall ExpCovReadRequestBuffer(int *a1, UNICODE_STRING *a2, _OWORD *a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // r10d
  int v7; // r10d
  unsigned __int16 v8; // cx
  wchar_t *Buffer; // rdi
  wchar_t *v10; // rax
  unsigned int v11; // r14d
  wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  UNICODE_STRING StringIn; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  v6 = *a1;
  *a4 = *a1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1
        && (StringIn = *(UNICODE_STRING *)(a1 + 2), (v8 = _mm_cvtsi128_si32((__m128i)StringIn)) != 0)
        && (v8 & 1) == 0 )
      {
        Buffer = StringIn.Buffer;
        if ( ((__int64)StringIn.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = (wchar_t *)((char *)StringIn.Buffer + v8);
        if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < StringIn.Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        v11 = v8;
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, v8, 1920364355LL);
        v13 = Pool2;
        StringIn.Buffer = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Buffer, v11);
          v5 = RtlDuplicateUnicodeString(1u, &StringIn, a2);
          ExFreePoolWithTag(v13, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *a3 = *(_OWORD *)(a1 + 2);
    }
  }
  return v5;
}
