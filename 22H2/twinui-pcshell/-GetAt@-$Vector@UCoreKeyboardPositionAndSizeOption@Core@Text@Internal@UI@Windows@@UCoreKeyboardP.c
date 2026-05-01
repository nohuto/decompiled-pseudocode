/*
 * XREFs of ?GetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x18005B660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v11; // xmm0_8
  int v12; // esi

  v3 = a2;
  *(_OWORD *)a3 = 0LL;
  v4 = a1 + 72;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    v7 = *(_DWORD *)(a1 + 80);
    if ( v7 >= 0 )
      *(_DWORD *)(a1 + 80) = v7 + 1;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
  {
    v12 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 56);
    v9 = *(_OWORD *)(56 * v3 + v8 + 16);
    v10 = *(_OWORD *)(56 * v3 + v8 + 32);
    v11 = *(_QWORD *)(56 * v3 + v8 + 48);
    *(_OWORD *)a3 = *(_OWORD *)(56 * v3 + v8);
    *(_OWORD *)(a3 + 16) = v9;
    *(_OWORD *)(a3 + 32) = v10;
    *(_QWORD *)(a3 + 48) = v11;
    v12 = 0;
  }
  if ( v4 )
  {
    if ( *(_DWORD *)v4 == 1 )
      --*(_DWORD *)(v4 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v4 + 8));
  }
  if ( v12 < 0 )
    return (unsigned int)v12;
  else
    return 0LL;
}
