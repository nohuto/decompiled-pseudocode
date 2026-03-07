char __fastcall HalpIommuGetNextFlushDevice(
        _QWORD *a1,
        _QWORD **a2,
        _QWORD *a3,
        _DWORD *a4,
        bool *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  _QWORD *i; // r10
  __int64 v10; // rdx
  int v11; // r9d
  char result; // al
  __int64 v13; // rax
  __int64 v14; // rdx

  for ( i = (_QWORD *)**a2; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
    {
      *a3 = 0LL;
      *a4 = 0;
      *a5 = 0;
      *a6 = 0LL;
      *a7 = 0LL;
      return 0;
    }
    v10 = i[5];
    v11 = *(_DWORD *)(v10 + 48);
    if ( (v11 & 1) != 0 )
      break;
  }
  v13 = *(_QWORD *)(v10 + 40);
  v14 = *(_QWORD *)(v10 + 96);
  *a3 = v13;
  *a2 = i;
  result = 1;
  *a4 = *(_DWORD *)(v14 + 60);
  *a5 = (v11 & 0x800) != 0;
  *a6 = v14 + 64;
  *a7 = i + 4;
  return result;
}
