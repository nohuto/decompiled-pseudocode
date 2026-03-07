__int64 __fastcall HvlHalGetVpIndexFromApicId(ULONG a1, _DWORD *a2)
{
  __int64 result; // rax
  ULONG v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  result = HvlpGetVpIndexFromApicId(a1, &v4);
  *a2 = v4;
  return result;
}
