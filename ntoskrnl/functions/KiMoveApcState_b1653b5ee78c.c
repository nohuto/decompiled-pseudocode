__int64 ***__fastcall KiMoveApcState(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 *v4; // r9
  __int64 ***result; // rax
  __int64 **v6; // rcx
  _QWORD *v7; // rax

  *(_QWORD *)(a2 + 32) = a1[4];
  *(_BYTE *)(a2 + 40) = *((_BYTE *)a1 + 40);
  *(_BYTE *)(a2 + 41) = *((_BYTE *)a1 + 41);
  *(_BYTE *)(a2 + 42) = *((_BYTE *)a1 + 42);
  v3 = (__int64 *)*a1;
  if ( v3 == a1 )
  {
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    *(_BYTE *)(a2 + 41) = 0;
  }
  else
  {
    v7 = (_QWORD *)a1[1];
    *(_QWORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = v7;
    v3[1] = a2;
    *v7 = a2;
  }
  v4 = (__int64 *)a1[2];
  result = (__int64 ***)(a1 + 2);
  v6 = (__int64 **)(a2 + 16);
  if ( v4 == a1 + 2 )
  {
    *(_QWORD *)(a2 + 24) = a2 + 16;
    *v6 = (__int64 *)v6;
    *(_BYTE *)(a2 + 42) = 0;
  }
  else
  {
    result = (__int64 ***)a1[3];
    *v6 = v4;
    *(_QWORD *)(a2 + 24) = result;
    v4[1] = (__int64)v6;
    *result = v6;
  }
  return result;
}
