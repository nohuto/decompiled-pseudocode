/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0013A40
 * Callers:
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x1C0013A10 (-Release@CTokenManager@@UEAAJXZ.c)
 *     CreateTokenManagerSessionGlobal @ 0x1C0016FC4 (CreateTokenManagerSessionGlobal.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C00172B0 (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *P)
{
  CTokenManager::~CTokenManager(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
