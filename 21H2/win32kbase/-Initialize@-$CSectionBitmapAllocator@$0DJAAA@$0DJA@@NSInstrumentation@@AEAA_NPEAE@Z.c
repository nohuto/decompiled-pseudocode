/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00A06A4
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00A062C (-Create@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     ??R_lambda_708b72b517c297332c9e46f575701bcb_@@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x1C00A04E8 (--R_lambda_708b72b517c297332c9e46f575701bcb_@@QEBAPEAU_RTL_BITMAP@@I@Z.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::Initialize(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  ULONG v5; // eax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  struct _RTL_BITMAP *v10; // rax
  unsigned __int64 v11; // rcx
  char result; // al
  __int64 v13; // rdx
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v4 = __rdtsc();
  Seed = v4;
  a1[2] = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  v5 = RtlRandomEx(&Seed);
  v6 = (v5 | a1[2]) == 0LL;
  a1[2] |= v5;
  v7 = a1[2];
  if ( v6 )
  {
    a1[2] = 1LL;
    v7 = 1LL;
  }
  a1[3] ^= v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
  *a1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  v10 = _lambda_708b72b517c297332c9e46f575701bcb_::operator()(v9, 0xE4u);
  if ( !v10 )
    return 0;
  v11 = (unsigned __int64)v10 ^ a1[2];
  result = 1;
  v13 = a2 ^ a1[2];
  a1[3] = v11;
  a1[1] = v13;
  return result;
}
