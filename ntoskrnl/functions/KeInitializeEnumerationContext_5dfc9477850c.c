__int64 __fastcall KeInitializeEnumerationContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 16) = 0;
  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = a2;
  return result;
}
