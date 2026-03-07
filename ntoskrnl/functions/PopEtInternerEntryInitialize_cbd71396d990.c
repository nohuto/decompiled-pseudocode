__int64 __fastcall PopEtInternerEntryInitialize(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( *a3 == 88LL )
  {
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3[1] + 8LL);
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a3[1] + 40LL);
    *(_QWORD *)(a2 + 72) = *(_QWORD *)(a3[1] + 72LL);
    *(_WORD *)(a2 + 86) = *(_WORD *)(a3[1] + 80LL);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(a3[1] + 104LL);
    *(_WORD *)(a2 + 80) = *(_WORD *)(a3[1] + 112LL) >> 1;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3[1] + 136LL);
    *(_WORD *)(a2 + 82) = *(_WORD *)(a3[1] + 144LL) >> 1;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a3[1] + 168LL);
    result = a3[1];
    *(_WORD *)(a2 + 84) = *(_WORD *)(result + 176) >> 1;
  }
  return result;
}
