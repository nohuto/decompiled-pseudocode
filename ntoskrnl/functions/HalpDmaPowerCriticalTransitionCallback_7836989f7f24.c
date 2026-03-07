__int64 __fastcall HalpDmaPowerCriticalTransitionCallback(__int64 a1, __int64 a2, char a3)
{
  __int64 (__fastcall *v3)(_QWORD); // rax
  __int64 result; // rax

  if ( a3 )
  {
    v3 = *(__int64 (__fastcall **)(_QWORD))(a1 + 80);
    *(_BYTE *)(a1 + 216) = 1;
    return v3(*(_QWORD *)(a1 + 64));
  }
  else
  {
    *(_BYTE *)(a1 + 216) = 0;
  }
  return result;
}
