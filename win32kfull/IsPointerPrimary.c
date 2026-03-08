/*
 * XREFs of IsPointerPrimary @ 0x1C01C7C44
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 * Callees:
 *     <none>
 */

int __fastcall IsPointerPrimary(__int64 a1, unsigned __int16 a2)
{
  __int64 v4; // rax
  unsigned __int64 ThreadPointerData; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax

  v4 = SGDGetUserSessionState(a1);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        *(CTouchProcessor **)(v4 + 3424),
                        (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1128),
                        a2,
                        0LL,
                        0LL,
                        0LL);
  v7 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v8 = SGDGetUserSessionState(v6);
    LODWORD(ThreadPointerData) = CTouchProcessor::IsPointerPrimary(*(CTouchProcessor **)(v8 + 3424), v7);
  }
  return ThreadPointerData;
}
