void __fastcall ExpCallProcessing(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void (__fastcall *v5)(__int64, __int64, __int64, _QWORD, _QWORD); // rax

  if ( a5 )
  {
    if ( a1 )
      v5 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))a5;
    else
      v5 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(a5 + 8);
    if ( v5 )
      v5(a2, a3, a4, *(_QWORD *)(a5 + 16), *(_QWORD *)(a5 + 24));
  }
}
