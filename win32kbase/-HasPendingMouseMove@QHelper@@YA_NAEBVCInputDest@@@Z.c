/*
 * XREFs of ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C022E1AC
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C022F058 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

char __fastcall QHelper::HasPendingMouseMove(QHelper *this, const struct CInputDest *a2)
{
  __int64 Queue; // rax
  char v3; // cl

  Queue = CInputDest::GetQueue((__int64)this, 2);
  v3 = 0;
  if ( Queue )
    return (*(_DWORD *)(Queue + 396) & 0x20) != 0;
  return v3;
}
