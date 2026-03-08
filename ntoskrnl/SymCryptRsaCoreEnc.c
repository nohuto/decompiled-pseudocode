/*
 * XREFs of SymCryptRsaCoreEnc @ 0x1403F4594
 * Callers:
 *     SymCryptRsaPkcs1Verify @ 0x1403F4830 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptIntBitsizeOfValue @ 0x1403F3750 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x1403F37C8 (SymCryptIntCreate.c)
 *     SymCryptIntSetValueUint64 @ 0x1403F394C (SymCryptIntSetValueUint64.c)
 *     SymCryptIntWipe @ 0x1403F3A3C (SymCryptIntWipe.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementGetValue @ 0x1403F3B04 (SymCryptModElementGetValue.c)
 *     SymCryptModElementSetValue @ 0x1403F3B80 (SymCryptModElementSetValue.c)
 *     SymCryptModExp @ 0x1403F3CF4 (SymCryptModExp.c)
 *     SymCryptSizeofModElementFromModulus @ 0x1403F3F08 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403F476C (SymCryptRsaCoreVerifyInput.c)
 */

__int64 __fastcall SymCryptRsaCoreEnc(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int Value; // ebx
  __int64 v14; // rbx
  void *v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rdi
  int v18; // eax
  __int64 v20; // [rsp+40h] [rbp-108h]

  Value = SymCryptRsaCoreVerifyInput(a1, a2, a3, a4, a7, a8);
  if ( !Value )
  {
    v14 = (unsigned int)SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 112));
    v15 = (void *)SymCryptModElementCreate();
    v16 = a9 - v14;
    v20 = v14 + a8;
    Value = SymCryptModElementSetValue(a2, a3, a4, *(_DWORD **)(a1 + 112), v15, v14 + a8, a9 - v14);
    if ( !Value )
    {
      v17 = SymCryptIntCreate();
      if ( v17 )
      {
        SymCryptIntSetValueUint64();
        v18 = SymCryptIntBitsizeOfValue();
        SymCryptModExp(*(_QWORD *)(a1 + 112), (int)v15, v17, v18, 1, (__int64)v15, v20, v16);
        Value = SymCryptModElementGetValue(*(_QWORD *)(a1 + 112), (int)v15, a6, a7, a4, v20, v16);
        SymCryptIntWipe(v17);
      }
      else
      {
        return 32778;
      }
    }
  }
  return Value;
}
