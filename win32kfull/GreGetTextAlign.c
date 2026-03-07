__int64 __fastcall GreGetTextAlign(HDC a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  result = v3[0];
  if ( v3[0] )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 276LL);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return v2;
  }
  return result;
}
