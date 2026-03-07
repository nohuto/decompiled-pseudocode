__int64 __fastcall ExpPartitionCreatePoolDelayed(__int64 a1, unsigned __int16 *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  char *v7; // rcx
  unsigned __int16 *v8; // rax
  __int64 v9; // rax

  v5 = (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *a2) + 8LL * a3) >> 1) & 0x7FLL;
  v6 = KeNodeBlock[v5];
  v7 = (char *)&KiNodeInit + 304 * v5;
  v8 = 0LL;
  if ( (char *)v6 != v7 )
    v8 = (unsigned __int16 *)v6;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *v8) + 8LL * a3);
  if ( (v9 & 1) != 0 )
    v9 = 0LL;
  return ExpPartitionCreatePoolInternal(a1, (2 * *(_DWORD *)(v9 + 716)) >> 1, *(_DWORD *)(v9 + 720), a2, a3);
}
