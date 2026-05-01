/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x1804C4670
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____XWinRT::IntVersionTag_::Do__lambda_8663c0cd64b41de8bba77ca429328de7___lambda_86af9a40b48fabf7cf6d00c0576551d4___ @ 0x1804C21C0 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1804C21C0.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+78h] [rbp+18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v11; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _DWORD *);
  v8 = a2;
  *v11 = 0;
  for ( i = 0; i < v8; *(_QWORD *)(v9 + 8 * v3) = 0LL )
    v3 = i++;
  v4 = *(_QWORD *)(a1 + 64);
  va_copy((va_list)v6, va1);
  v7[0] = a1;
  va_copy((va_list)&v6[1], va);
  v7[1] = (__int64)&v8;
  va_copy((va_list)&v7[2], va);
  va_copy((va_list)&v7[3], va1);
  v7[4] = (__int64)v6;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____XWinRT::IntVersionTag_::Do__lambda_8663c0cd64b41de8bba77ca429328de7___lambda_86af9a40b48fabf7cf6d00c0576551d4___(
           (unsigned int *)(a1 + 80),
           v4,
           v7,
           (__int64)v6);
}
