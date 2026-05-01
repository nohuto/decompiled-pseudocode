/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x1803DB4B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_::operator() @ 0x1803CA698 (_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_--operator().c)
 *     _lambda_990521e561bc13f238039e7a89bd70b9_::operator() @ 0x1803DB0DC (_lambda_990521e561bc13f238039e7a89bd70b9_--operator().c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  unsigned int i; // ecx
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r15
  bool v8; // zf
  unsigned __int32 v9; // r14d
  signed __int32 v10; // eax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  unsigned int **v13[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v14[6]; // [rsp+38h] [rbp-30h] BYREF
  signed __int32 v15; // [rsp+A0h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  _DWORD *v19; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _DWORD *);
  v16 = a2;
  *v19 = 0;
  for ( i = 0; i < v16; *(_QWORD *)(v5 + 48) = 0LL )
  {
    v4 = 56LL * i++;
    v5 = v17 + v4;
    *(_OWORD *)v5 = 0LL;
    *(_OWORD *)(v5 + 16) = 0LL;
    *(_OWORD *)(v5 + 32) = 0LL;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 32);
  va_copy((va_list)v13, va1);
  va_copy((va_list)&v13[1], va);
  if ( v6 >= 0 )
  {
    v8 = *(_BYTE *)(a1 + 56) == 0;
    v14[0] = &v12;
    v9 = *(_DWORD *)(a1 + 40);
    v14[1] = &v16;
    va_copy((va_list)&v14[2], va);
    va_copy((va_list)&v14[3], va1);
    v12 = a1;
    if ( v8 )
    {
      while ( 1 )
      {
        v6 = lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_::operator()((__int64)v14, v9, &v15);
        if ( v6 < 0 )
          break;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v15, v9);
        v8 = v9 == v10;
        v9 = v10;
        if ( v8 )
          break;
        lambda_990521e561bc13f238039e7a89bd70b9_::operator()(v13);
      }
    }
    else
    {
      v6 = lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_::operator()((__int64)v14, v9, (_DWORD *)(a1 + 40));
    }
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v7 + 88) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        lambda_990521e561bc13f238039e7a89bd70b9_::operator()(v13);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
