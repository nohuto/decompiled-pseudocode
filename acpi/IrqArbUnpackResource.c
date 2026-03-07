__int64 __fastcall IrqArbUnpackResource(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 != 2 )
    return 3221225485LL;
  *a2 = *(unsigned int *)(a1 + 8);
  result = 0LL;
  *a3 = 1LL;
  return result;
}
