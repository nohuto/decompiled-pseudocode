/*
 * XREFs of XmPushStack @ 0x140396D68
 * Callers:
 *     XmCallOp @ 0x1403967B0 (XmCallOp.c)
 *     XmPushOp @ 0x140396950 (XmPushOp.c)
 *     XmPushaOp @ 0x1403C40A0 (XmPushaOp.c)
 *     XmEnterOp @ 0x1404E6440 (XmEnterOp.c)
 *     XmIntOp @ 0x1404E6510 (XmIntOp.c)
 * Callees:
 *     XmStoreResult @ 0x140396DC0 (XmStoreResult.c)
 *     x86BiosTranslateAddress @ 0x140397B50 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D0670 (longjmp.c)
 */

__int64 __fastcall XmPushStack(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  __int64 v5; // rdx

  v2 = *(_DWORD *)(a1 + 120);
  v5 = (unsigned int)(*(_DWORD *)(a1 + 40) - v2 - 1);
  if ( (unsigned int)v5 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - v2 )
    longjmp((_JBTYPE *)(a1 + 160), 15);
  *(_DWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 88) = x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 60), v5);
  return XmStoreResult(a1, a2);
}
