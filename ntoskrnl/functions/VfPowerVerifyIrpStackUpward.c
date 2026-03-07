__int64 __fastcall VfPowerVerifyIrpStackUpward(const void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( *((_DWORD *)*a1 + 12) == -1073741637 && *(_DWORD *)(a3 + 96) != -1073741637 )
    return ViErrorReport1(0x21Au, *(const void **)(a4 + 40), *a1);
  return result;
}
