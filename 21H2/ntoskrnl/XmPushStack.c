/*
 * XREFs of XmPushStack @ 0x1403A2E08
 * Callers:
 *     XmCallOp @ 0x1403A2850 (XmCallOp.c)
 *     XmPushOp @ 0x1403A29F0 (XmPushOp.c)
 *     XmPushaOp @ 0x1403D0EC0 (XmPushaOp.c)
 *     XmEnterOp @ 0x140536120 (XmEnterOp.c)
 *     XmIntOp @ 0x1405361F0 (XmIntOp.c)
 * Callees:
 *     XmStoreResult @ 0x1403A2E60 (XmStoreResult.c)
 *     x86BiosTranslateAddress @ 0x1403A3520 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
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
