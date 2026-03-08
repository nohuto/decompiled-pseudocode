/*
 * XREFs of CmpConstructAndCacheName @ 0x1407929C4
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmCallbackGetKeyObjectID @ 0x1408A6D60 (CmCallbackGetKeyObjectID.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructAndCacheName(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  int v5; // ebx
  bool v7; // cf
  signed __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 296);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( !v3 )
  {
    v5 = CmpConstructNameWithStatus(a1, &v8);
    if ( v5 < 0 )
      goto LABEL_7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), v8, 0LL) != 0;
    v3 = *(_QWORD *)(a1 + 296);
    v8 &= -(__int64)v7;
    if ( (v3 & 1) != 0 )
      v3 &= ~1uLL;
  }
  if ( a2 )
    *a2 = v3;
  v5 = 0;
LABEL_7:
  if ( v8 )
    CmpFreeTransientPoolWithTag((void *)v8, 0x624E4D43u);
  return (unsigned int)v5;
}
