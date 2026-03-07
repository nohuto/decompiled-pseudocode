__int64 __fastcall XilCoreCommand_AbortCommandRing(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 Ulong64; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 88LL);
  Ulong64 = XilRegister_ReadUlong64(v2, a1[1]);
  return XilRegister_WriteUlong64(v2, (_DWORD *)a1[1], Ulong64 | 4);
}
