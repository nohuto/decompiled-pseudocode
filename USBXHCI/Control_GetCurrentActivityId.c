__int64 __fastcall Control_GetCurrentActivityId(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 344);
  *a2 = *(_OWORD *)(result + 32);
  return result;
}
