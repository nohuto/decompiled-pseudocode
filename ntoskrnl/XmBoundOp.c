/*
 * XREFs of XmBoundOp @ 0x140531FE0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetOffsetAddress @ 0x14039F39C (XmGetOffsetAddress.c)
 *     XmSetSourceValue @ 0x1403B41A0 (XmSetSourceValue.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmBoundOp(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int16 *OffsetAddress; // rax
  int v4; // ebx
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  int v7; // ecx
  __int16 *v8; // rax
  __int64 result; // rax
  int v10; // r8d

  v1 = *(_DWORD *)(a1 + 108);
  OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(a1, v1);
  XmSetSourceValue(a1, OffsetAddress);
  v4 = *(_DWORD *)(a1 + 108);
  v6 = (unsigned __int16 *)XmGetOffsetAddress(v5, v1 + *(_DWORD *)(a1 + 120) + 1);
  XmSetSourceValue(a1, v6);
  v7 = *(_DWORD *)(a1 + 108);
  v8 = *(__int16 **)(a1 + 88);
  if ( *(_DWORD *)(a1 + 120) == 3 )
  {
    result = *(unsigned int *)v8;
    if ( (int)result >= v4 && (int)result <= v7 + 4 )
      return result;
LABEL_7:
    longjmp((_JBTYPE *)(a1 + 160), 13);
  }
  v10 = *v8;
  if ( *v8 < (__int16)v4 )
    goto LABEL_7;
  result = (unsigned int)(__int16)v7;
  if ( v10 > (int)result + (__int16)(*(_WORD *)(a1 + 120) + 1) )
    goto LABEL_7;
  return result;
}
