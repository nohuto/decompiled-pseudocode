__int64 __fastcall GreReinitializeStockFonts(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 result; // rax

  v3 = a1;
  if ( qword_1C02D58F0 && (int)qword_1C02D58F0() >= 0 && qword_1C02D58F8 )
    qword_1C02D58F8(v3);
  result = SGDGetSessionState(a1);
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)(result + 24) + 1284LL) = 1;
  return result;
}
