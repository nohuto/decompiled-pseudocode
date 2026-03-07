__int64 __fastcall FindNodeOrParent_0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v6 + 32);
    if ( !v8 )
      break;
    if ( v8 != 1 )
      goto LABEL_10;
    v9 = *(_QWORD *)(v6 + 16);
    if ( !v9 )
    {
      v7 = 3;
      goto LABEL_10;
    }
LABEL_5:
    v6 = v9;
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( v9 )
    goto LABEL_5;
  v7 = 2;
LABEL_10:
  *a3 = v6;
  return v7;
}
