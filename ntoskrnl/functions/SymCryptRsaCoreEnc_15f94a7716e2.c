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
