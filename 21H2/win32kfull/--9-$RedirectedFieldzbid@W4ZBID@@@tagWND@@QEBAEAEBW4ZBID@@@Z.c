/*
 * XREFs of ??9?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z @ 0x1C006A1E4
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldzbid<enum ZBID>::operator!=(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 173) + 236LL) != *a2;
}
