/*
 * XREFs of ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C022D8EC
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C022F058 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall QHelper::GetPendingMouseMovePoint(__int64 a1, __int64 a2)
{
  __int64 Queue; // rdi
  int v4; // eax
  int v5; // ecx

  Queue = CInputDest::GetQueue(a2, 2);
  if ( Queue && qword_1C02D7280 && (unsigned int)qword_1C02D7280() )
  {
    v4 = *(_DWORD *)(Queue + 200);
    *(_QWORD *)a1 = *(_QWORD *)(Queue + 192);
    *(_DWORD *)(a1 + 8) = v4;
  }
  else
  {
    v5 = *((_DWORD *)gpsi + 1241);
    *(_DWORD *)a1 = *((_DWORD *)gpsi + 1240);
    *(_DWORD *)(a1 + 4) = v5;
    *(_DWORD *)(a1 + 8) = 18;
  }
  return a1;
}
