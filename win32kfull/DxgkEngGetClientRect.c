__int64 __fastcall DxgkEngGetClientRect(HDC a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v4, a1);
  result = (__int64)v4[0];
  if ( v4[0] )
  {
    *a2 = *(_OWORD *)(v4[0] + 129);
    DCOBJA::~DCOBJA(v4);
    return 1LL;
  }
  return result;
}
