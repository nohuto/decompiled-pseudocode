__int64 __fastcall CToken::Initialize(__int64 a1, int a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = a2;
  Global = DXGGLOBAL::GetGlobal();
  result = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Global + 38069) + 32LL))(a1 + 80);
  if ( (int)result < 0 )
    *(_DWORD *)(a1 + 24) = 6;
  return result;
}
