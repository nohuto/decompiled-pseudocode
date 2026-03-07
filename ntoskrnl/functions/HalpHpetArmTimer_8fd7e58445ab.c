__int64 __fastcall HalpHpetArmTimer(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v4; // rax

  if ( a3 < 0x80000000 )
  {
    v4 = HalpHpetBaseAddress;
    *(_DWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 8) = a2;
    return HalpHpetSetMatchValue(a1, *(unsigned int *)(v4 + 240), 0LL);
  }
  else
  {
    HalSetTimerProblem(a1, 4, 0);
    return 3221225485LL;
  }
}
