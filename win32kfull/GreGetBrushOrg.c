__int64 __fastcall GreGetBrushOrg(HDC a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  result = v4[0];
  if ( v4[0] )
  {
    *a2 = *(_QWORD *)(v4[0] + 124LL);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 1LL;
  }
  return result;
}
