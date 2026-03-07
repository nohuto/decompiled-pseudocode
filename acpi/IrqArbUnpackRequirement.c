__int64 __fastcall IrqArbUnpackRequirement(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v6; // rax

  if ( *(_BYTE *)(a1 + 1) != 2 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
  {
    *a3 = 4294967294LL;
    v6 = 4293918720LL;
  }
  else
  {
    *a3 = *(unsigned int *)(a1 + 12);
    v6 = *(unsigned int *)(a1 + 8);
  }
  *a2 = v6;
  *a4 = 1LL;
  *a5 = 1LL;
  return 0LL;
}
