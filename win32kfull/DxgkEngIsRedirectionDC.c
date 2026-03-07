__int64 __fastcall DxgkEngIsRedirectionDC(HDC a1)
{
  int v1; // ebx
  __int64 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  if ( !v3[0] )
    return 1LL;
  v1 = *((_DWORD *)v3[0] + 9);
  DCOBJA::~DCOBJA(v3);
  return v1 & 0x4000;
}
