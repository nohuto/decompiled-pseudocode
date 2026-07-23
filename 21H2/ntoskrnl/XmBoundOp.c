/*
 * XREFs of XmBoundOp @ 0x1404E6E10
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 *     XmGetOffsetAddress @ 0x1403C93AC (XmGetOffsetAddress.c)
 *     longjmp @ 0x1403D07E0 (longjmp.c)
 */

__int64 __fastcall XmBoundOp(__int64 a1)
{
  unsigned int v1; // edi
  int *OffsetAddress; // rax
  int v4; // ebx
  __int64 v5; // rcx
  int *v6; // rax
  int v7; // ecx
  __int16 *v8; // rax
  __int64 result; // rax
  bool v10; // cc
  int v11; // r8d

  v1 = *(_DWORD *)(a1 + 108);
  OffsetAddress = XmGetOffsetAddress(a1, v1);
  XmSetSourceValue(a1, (unsigned __int16 *)OffsetAddress);
  v4 = *(_DWORD *)(a1 + 108);
  v6 = XmGetOffsetAddress(v5, v1 + *(_DWORD *)(a1 + 120) + 1);
  XmSetSourceValue(a1, (unsigned __int16 *)v6);
  v7 = *(_DWORD *)(a1 + 108);
  v8 = *(__int16 **)(a1 + 88);
  if ( *(_DWORD *)(a1 + 120) == 3 )
  {
    result = *(unsigned int *)v8;
    if ( (int)result < v4 )
      goto LABEL_7;
    v10 = (int)result <= v7 + 4;
  }
  else
  {
    v11 = *v8;
    if ( *v8 < (__int16)v4 )
      goto LABEL_7;
    result = (unsigned int)(__int16)v7;
    v10 = v11 <= (int)result + (__int16)(*(_WORD *)(a1 + 120) + 1);
  }
  if ( !v10 )
LABEL_7:
    longjmp((_JBTYPE *)(a1 + 160), 13);
  return result;
}
