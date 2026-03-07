__int64 __fastcall CTTMDEVICE::CTTMDEVICE(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_DWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 908) = 1;
  *(_WORD *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 48));
  return a1;
}
