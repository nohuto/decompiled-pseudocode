/*
 * XREFs of HalpQueryIdPdo @ 0x1408223AC
 * Callers:
 *     HalpDispatchPnp @ 0x140821D00 (HalpDispatchPnp.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpQueryIdPdo(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // r9
  int v5; // edx
  __int64 result; // rax
  const wchar_t *v7; // rdi
  size_t v8; // rbx
  _WORD *Pool2; // rax
  _WORD *v10; // rsi

  v3 = *(_QWORD *)(a1 + 64);
  if ( a2 && (v5 = a2 - 1) != 0 )
  {
    if ( v5 != 2 )
      return 3221225659LL;
    v7 = L"0";
    v8 = 4LL;
  }
  else
  {
    switch ( *(_DWORD *)(v3 + 32) )
    {
      case 0x81:
        v7 = L"ACPI_HAL\\PNP0C08";
        v8 = 52LL;
        break;
      case 0x83:
        v7 = L"ACPI_HAL\\UEFI";
        v8 = 28LL;
        break;
      case 0x84:
        v7 = L"ACPI_HAL\\PRM";
        v8 = 26LL;
        break;
      default:
        return 3221225659LL;
    }
  }
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v8 + 2, 1886150984LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, v7, v8);
  result = 0LL;
  v10[v8 >> 1] = 0;
  *a3 = v10;
  return result;
}
