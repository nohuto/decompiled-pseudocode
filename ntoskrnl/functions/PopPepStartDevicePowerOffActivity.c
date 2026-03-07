char __fastcall PopPepStartDevicePowerOffActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  *(_BYTE *)(a1 + 136) = 0;
  *(_DWORD *)a3 = 2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
  result = 1;
  *(_BYTE *)(a3 + 16) = 0;
  return result;
}
