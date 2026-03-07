__int64 __fastcall IopNotifyAlreadyRegisteredFileSystems(
        __int64 **a1,
        __int64 (__fastcall *a2)(__int64 *, _QWORD),
        char a3)
{
  __int64 *v3; // rdi
  __int64 (__fastcall *i)(__int64 *, _QWORD); // rbp
  __int64 result; // rax
  __int64 *v8; // rcx

  v3 = *a1;
  for ( i = a2; v3 != (__int64 *)a1; result = i(v8, a2) )
  {
    result = *v3;
    if ( (__int64 **)*v3 == a1 && a3 )
      break;
    v8 = v3 - 10;
    LOBYTE(a2) = 1;
    v3 = (__int64 *)*v3;
  }
  return result;
}
