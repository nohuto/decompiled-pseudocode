/*
 * XREFs of HalpReadExtendedMcaRegistersIntel @ 0x140504248
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14050135C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpReadExtendedMcaRegistersIntel(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // ebx^2
  __int64 result; // rax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  __int64 *v10; // r14

  v5 = BYTE2(a1);
  result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a3, 378LL, 0LL);
  if ( (result & 4) != 0 )
  {
    result = 24LL;
    v8 = v5;
    if ( v8 > 0x18 )
      v8 = 24;
    *(_DWORD *)(a4 + 64) = v8;
    if ( v8 > 8 )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a3, 392LL, 0LL);
      v9 = 0;
      if ( result )
      {
        v10 = (__int64 *)(a4 + 72);
        do
        {
          result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(a3, v9 + 384, 0LL);
          ++v9;
          *v10++ = result;
        }
        while ( v9 < v8 );
      }
    }
  }
  return result;
}
