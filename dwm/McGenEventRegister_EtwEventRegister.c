__int64 __fastcall McGenEventRegister_EtwEventRegister(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*a4 )
    return EtwEventRegister(a1, McGenControlCallbackV2);
  return result;
}
