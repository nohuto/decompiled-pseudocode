/*
 * XREFs of XmGroup7General @ 0x140532E50
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B8BCC (XmEvaluateAddressSpecifier.c)
 *     XmSetDestinationValue @ 0x1403B8F08 (XmSetDestinationValue.c)
 *     longjmp @ 0x1403D7880 (longjmp.c)
 */

__int64 __fastcall XmGroup7General(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = 1;
  result = XmEvaluateAddressSpecifier(a1, &v3);
  if ( result )
  {
    if ( v3 != 4 )
      longjmp((_JBTYPE *)(a1 + 160), 12);
    XmSetDestinationValue(a1, (unsigned __int16 *)result);
    return 1LL;
  }
  return result;
}
