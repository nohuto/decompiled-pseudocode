_DWORD *__fastcall PopPepTriggerComponentActiveActivity(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  if ( a2 )
  {
    result = *(_DWORD **)(a2 + 80);
    *(_DWORD *)(a2 + 4) |= 1u;
    *result = 4;
  }
  return result;
}
