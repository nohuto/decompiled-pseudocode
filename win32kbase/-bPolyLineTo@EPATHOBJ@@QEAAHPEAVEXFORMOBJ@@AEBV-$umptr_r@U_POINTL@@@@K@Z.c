__int64 __fastcall EPATHOBJ::bPolyLineTo(__int64 a1, struct EXFORMOBJ *a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]

  if ( !*(_QWORD *)(a1 + 8) )
    return 0LL;
  v7 = *a3;
  v10 = 0;
  v8[0] = v7;
  v8[1] = a3[1];
  v8[2] = a3[2];
  v9 = *((_WORD *)a3 + 12);
  v11 = a4;
  result = EPATHOBJ::addpoints((EPATHOBJ *)a1, a2, (struct _PATHDATAL *)v8);
  if ( (_DWORD)result )
    *(_DWORD *)(a1 + 4) += a4;
  return result;
}
