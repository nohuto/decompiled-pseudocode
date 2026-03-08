/*
 * XREFs of HvlpGetEncryptedDataFromSecureKernel @ 0x140545AC0
 * Callers:
 *     HvlGetEncryptedData @ 0x140545650 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x140547D58 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x14054800C (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x140548E28 (VslGetSecurePageList.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromSecureKernel(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  unsigned __int8 v9; // bl
  _DWORD *v10; // rdi
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0;
  v9 = HvlpAllSkPages != 0 ? 1 : 16;
  if ( (HvlpFlags & 2) != 0 )
    v9 |= HvlpAllPages != 0 ? 2 : 8;
  v10 = a5;
  *a5 = 0;
  if ( BYTE3(HvlpCrashdumpIterationState) != v9 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    LOBYTE(HvlpCrashdumpIterationState) = 0;
  }
  if ( !(_BYTE)HvlpCrashdumpIterationState )
  {
    result = HvlpStartSecurePageListIteration(1LL, v9, a2, a4, a3, v13);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)&xmmword_140C5F060 + 1) = v13[0];
    LOBYTE(HvlpCrashdumpIterationState) = 1;
    BYTE3(HvlpCrashdumpIterationState) = v9;
  }
  LOBYTE(a5) = 0;
  result = VslGetSecurePageList(0LL, a1, &v12, &a5);
  if ( (int)result >= 0 )
  {
    *v10 = v12 << 12;
    return 0LL;
  }
  else if ( (_DWORD)result == -2147483622 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    return 3221226021LL;
  }
  return result;
}
