__int64 __fastcall IrqArbScoreRequirement(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8) + 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) > 0xFFFE )
    v1 = 0xFFFF;
  result = v1 + 5;
  if ( *(_DWORD *)(a1 + 12) < 0x10u )
    return v1;
  return result;
}
