__int64 __fastcall SendShape(_DWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  *a1 = 6;
  return SendMessageTo(0LL, (__int64)a1, a2, a4);
}
