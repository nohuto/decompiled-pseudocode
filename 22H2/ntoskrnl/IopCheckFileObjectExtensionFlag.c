/*
 * XREFs of IopCheckFileObjectExtensionFlag @ 0x1403452C0
 * Callers:
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopCheckFileObjectExtensionFlag(__int64 a1, int a2)
{
  _DWORD *v2; // rax

  v2 = *(_DWORD **)(a1 + 208);
  return v2 && (*v2 & a2) != 0;
}
