void __fastcall lambda_326ebf4bf0c0cd31d169d31c796367ee_::_lambda_invoker_cdecl_(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 i; // rbx
  _QWORD *j; // r14

  v1 = 0;
  v2 = 12736LL;
  do
  {
    for ( i = *(_QWORD *)(SGDGetUserSessionState(a1) + v2); i; i = *(_QWORD *)(i + 48) )
    {
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)i, 0LL, 1u);
      for ( j = *(_QWORD **)(i + 56); j != (_QWORD *)(i + 56); j = (_QWORD *)*j )
        NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)i, (struct tagCHILDHOTKEY *const)(j - 4), 1u);
    }
    ++v1;
    v2 += 8LL;
  }
  while ( v1 < 0x80 );
}
