/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAI0@Z @ 0x180325A00
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_50d47402265d04ef4954bf0807805341___lambda_a3c8e308188640b6b3d4061a76232d7c___ @ 0x18031E3AC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18031E3AC.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+18h] BYREF
  __int64 v8; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v10; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _DWORD *);
  v7 = a2;
  v2 = 0LL;
  for ( *v10 = 0; (unsigned int)v2 < v7; v2 = (unsigned int)(v2 + 1) )
    *(_DWORD *)(v8 + 4 * v2) = 0;
  v3 = *(_QWORD *)(a1 + 64);
  va_copy((va_list)v5, va1);
  v6[0] = a1;
  va_copy((va_list)&v5[1], va);
  v6[1] = (__int64)&v7;
  va_copy((va_list)&v6[2], va);
  va_copy((va_list)&v6[3], va1);
  v6[4] = (__int64)v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_50d47402265d04ef4954bf0807805341___lambda_a3c8e308188640b6b3d4061a76232d7c___(
           (unsigned int *)(a1 + 80),
           v3,
           v6,
           (__int64)v5);
}
