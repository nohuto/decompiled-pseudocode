__int64 __fastcall RtlpApplyFunctionPatch(_WORD *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax

  *((_BYTE *)a1 - 5) = -23;
  *((_DWORD *)a1 - 1) = a5 - a2;
  result = 4294965739LL;
  *a1 = -1557;
  return result;
}
