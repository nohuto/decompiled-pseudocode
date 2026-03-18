/*
 * XREFs of XmMoveGeneral @ 0x1403A2980
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403A2FA8 (XmSetSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 *     XmGetRegisterAddress @ 0x1403A343C (XmGetRegisterAddress.c)
 *     XmSetDataType @ 0x1403A346C (XmSetDataType.c)
 */

__int64 __fastcall XmMoveGeneral(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 RegisterAddress; // r9
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  XmSetDataType();
  result = XmEvaluateAddressSpecifier(a1, &v6);
  if ( result )
  {
    v3 = v6;
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      *(_QWORD *)(a1 + 88) = XmGetRegisterAddress(a1, v6);
    }
    else
    {
      *(_QWORD *)(a1 + 88) = result;
      RegisterAddress = XmGetRegisterAddress(a1, v3);
    }
    XmSetSourceValue(a1, RegisterAddress, v4, RegisterAddress);
    return 1LL;
  }
  return result;
}
