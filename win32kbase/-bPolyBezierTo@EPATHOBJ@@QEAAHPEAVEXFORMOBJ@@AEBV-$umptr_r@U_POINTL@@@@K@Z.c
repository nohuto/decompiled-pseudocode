__int64 __fastcall EPATHOBJ::bPolyBezierTo(__int64 a1, struct EXFORMOBJ *a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // ecx
  _QWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]
  unsigned int v11; // [rsp+44h] [rbp-14h]

  if ( !*(_QWORD *)(a1 + 8) )
    return 0LL;
  v8[0] = *(_QWORD *)a3;
  v8[1] = *(_QWORD *)(a3 + 8);
  v8[2] = *(_QWORD *)(a3 + 16);
  v9 = *(_WORD *)(a3 + 24);
  v10 = 16;
  v11 = a4;
  v7 = EPATHOBJ::addpoints((EPATHOBJ *)a1, a2, (struct _PATHDATAL *)v8);
  if ( v7 )
    *(_DWORD *)(a1 + 4) += a4 / 3;
  return v7;
}
