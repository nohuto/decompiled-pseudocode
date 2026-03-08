/*
 * XREFs of XmGeneralRegister @ 0x140530900
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmGeneralRegister(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  XmEvaluateAddressSpecifier(a1, (int *)&v3);
  if ( !*(_BYTE *)(a1 + 142) )
    longjmp((_JBTYPE *)(a1 + 160), 10);
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * (v3 + 6LL)));
  result = 1LL;
  *(_QWORD *)(a1 + 88) = a1 + 4 * (v3 + 6LL);
  return result;
}
