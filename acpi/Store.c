__int64 __fastcall Store(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v5);
  if ( !(_DWORD)result )
  {
    MoveObjData(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
    return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
  }
  return result;
}
