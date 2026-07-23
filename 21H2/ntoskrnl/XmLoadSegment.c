/*
 * XREFs of XmLoadSegment @ 0x1404E5920
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403970E8 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmGetOffsetAddress @ 0x1403C93AC (XmGetOffsetAddress.c)
 *     longjmp @ 0x1403D07E0 (longjmp.c)
 */

__int64 __fastcall XmLoadSegment(__int64 a1)
{
  int v2; // esi
  __int64 result; // rax
  int v4; // ebx
  int v5; // edx
  __int64 v6; // rcx
  int *OffsetAddress; // rax
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
    OffsetAddress = XmGetOffsetAddress(v6, v4 + v5);
    XmSetDestinationValue(a1, (unsigned __int16 *)OffsetAddress);
    *(_WORD *)(a1 + 2LL * (unsigned int)(v2 - 6) + 56) = *(_WORD *)(a1 + 104);
    result = 1LL;
    v8 = v9 + 6LL;
    *(_DWORD *)(a1 + 120) = v4;
    *(_QWORD *)(a1 + 88) = a1 + 4 * v8;
  }
  return result;
}
