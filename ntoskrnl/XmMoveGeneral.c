/*
 * XREFs of XmMoveGeneral @ 0x1403B3EA0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmGetRegisterAddress @ 0x1403B4124 (XmGetRegisterAddress.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmSetDataType @ 0x1403B41C8 (XmSetDataType.c)
 */

__int64 __fastcall XmMoveGeneral(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 RegisterAddress; // r9
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  XmSetDataType(a1);
  result = XmEvaluateAddressSpecifier(a1, &v5);
  if ( result )
  {
    v3 = v5;
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      *(_QWORD *)(a1 + 88) = XmGetRegisterAddress(a1, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 88) = result;
      RegisterAddress = XmGetRegisterAddress(a1, v3);
    }
    XmSetSourceValue(a1, RegisterAddress);
    return 1LL;
  }
  return result;
}
