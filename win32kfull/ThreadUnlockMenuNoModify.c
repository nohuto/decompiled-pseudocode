__int64 __fastcall ThreadUnlockMenuNoModify(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
  *(_DWORD *)(v3 + 40) &= ~0x200u;
  return ThreadUnlock1(v3, a2, a3);
}
