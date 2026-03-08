/*
 * XREFs of XmPushStack @ 0x1403B4270
 * Callers:
 *     XmPushaOp @ 0x14039BBF0 (XmPushaOp.c)
 *     XmCallOp @ 0x1403B37F0 (XmCallOp.c)
 *     XmPushOp @ 0x1403B3D10 (XmPushOp.c)
 *     XmEnterOp @ 0x140531850 (XmEnterOp.c)
 *     XmIntOp @ 0x140531920 (XmIntOp.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 *     x86BiosTranslateAddress @ 0x1403B9030 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
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
