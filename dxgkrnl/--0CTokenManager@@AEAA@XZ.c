/*
 * XREFs of ??0CTokenManager@@AEAA@XZ @ 0x1C0017034
 * Callers:
 *     CreateTokenManagerSessionGlobal @ 0x1C0016FC4 (CreateTokenManagerSessionGlobal.c)
 * Callees:
 *     <none>
 */

CTokenManager *__fastcall CTokenManager::CTokenManager(CTokenManager *this)
{
  *(_QWORD *)this = &CTokenManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 14) = 1LL;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 160) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_QWORD *)this + 44) = (char *)this + 344;
  *((_QWORD *)this + 43) = (char *)this + 344;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 21) = (char *)this + 168;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  *((_QWORD *)this + 37) = (char *)this + 288;
  *((_QWORD *)this + 36) = (char *)this + 288;
  *((_QWORD *)this + 39) = (char *)this + 304;
  *((_QWORD *)this + 38) = (char *)this + 304;
  *((_QWORD *)this + 42) = (char *)this + 328;
  *((_QWORD *)this + 41) = (char *)this + 328;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 200),
    CTokenManager::TokenQueueTableEntry::Compare,
    CTokenManager::TokenQueueTableEntry::Allocate,
    CTokenManager::TokenQueueTableEntry::Free,
    0LL);
  return this;
}
