void __fastcall sub_140072394(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // r9

  v3 = *(_QWORD *)(a1 + 248);
  v5 = *(_QWORD *)(a1 + 272);
  v6 = v3;
  v7 = a1 + 240;
  if ( v5 )
    v6 = v7;
  while ( v3 != v6 )
  {
    v9 = *(_QWORD *)(v3 + 16);
    if ( *(_BYTE *)(v9 + 344) )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v9 + 200) + 40LL))(v9 + 200, a2, a3);
      sub_140003840(a2, a3);
      LOBYTE(v10) = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(v9 + 200) + 48LL))(v9 + 200, a2, a3, v10);
      sub_140003840(a2, a3);
      sub_140003990(a2, a3);
    }
    v3 = *(_QWORD *)(v3 + 8);
  }
}
