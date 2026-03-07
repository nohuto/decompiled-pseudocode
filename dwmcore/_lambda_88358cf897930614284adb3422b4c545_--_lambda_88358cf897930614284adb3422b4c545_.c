__int64 *__fastcall lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = a2[1];
  a1[1] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a1;
}
