/*
 * XREFs of XmGroup45General @ 0x140398BB0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetOffsetAddress @ 0x14039F39C (XmGetOffsetAddress.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     XmSetDataType @ 0x1403B41C8 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmGroup45General(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  __int64 OffsetAddress; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  XmSetDataType(a1);
  result = XmEvaluateAddressSpecifier(a1, &v8);
  v3 = result;
  if ( result )
  {
    v4 = v8;
    if ( *(_BYTE *)(a1 + 81) == 18 )
    {
      v4 = v8 & 1;
      v8 = v4;
    }
    *(_DWORD *)(a1 + 124) += v4;
    if ( *(_DWORD *)(a1 + 124) == 36 )
    {
      XmSetSourceValue(a1, v3);
    }
    else
    {
      XmSetDestinationValue(a1, v3);
      if ( ((v8 - 3) & 0xFFFFFFFD) == 0 )
      {
        if ( *(_BYTE *)(a1 + 142) )
          longjmp((_JBTYPE *)(a1 + 160), 11);
        v5 = *(_DWORD *)(a1 + 120);
        v6 = *(_DWORD *)(a1 + 128) + 1;
        *(_DWORD *)(a1 + 120) = 1;
        OffsetAddress = XmGetOffsetAddress(a1, (unsigned int)(v5 + v6));
        XmSetSourceValue(a1, OffsetAddress);
        *(_WORD *)(a1 + 82) = *(_WORD *)(a1 + 108);
        *(_DWORD *)(a1 + 120) = v5;
      }
    }
    return 1LL;
  }
  return result;
}
