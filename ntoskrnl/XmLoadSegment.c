/*
 * XREFs of XmLoadSegment @ 0x140530BB0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetOffsetAddress @ 0x14039F39C (XmGetOffsetAddress.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmLoadSegment(__int64 a1)
{
  int v2; // esi
  __int64 result; // rax
  int v4; // ebx
  int v5; // edx
  __int64 v6; // rcx
  unsigned __int16 *OffsetAddress; // rax
  __int64 v8; // rdx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = *(unsigned __int8 *)(a1 + 81);
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  result = XmEvaluateAddressSpecifier(a1, (int *)&v9);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 142) )
      longjmp((_JBTYPE *)(a1 + 160), 11);
    XmSetSourceValue(a1, (unsigned __int16 *)result);
    v4 = *(_DWORD *)(a1 + 120);
    v5 = *(_DWORD *)(a1 + 128) + 1;
    *(_DWORD *)(a1 + 120) = 1;
    OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(v6, (unsigned int)(v4 + v5));
    XmSetDestinationValue(a1, OffsetAddress);
    *(_WORD *)(a1 + 2LL * (unsigned int)(v2 - 6) + 56) = *(_WORD *)(a1 + 104);
    result = 1LL;
    v8 = v9 + 6LL;
    *(_DWORD *)(a1 + 120) = v4;
    *(_QWORD *)(a1 + 88) = a1 + 4 * v8;
  }
  return result;
}
