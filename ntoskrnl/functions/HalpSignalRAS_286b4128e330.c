__int64 __fastcall HalpSignalRAS(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( *(_DWORD *)(a1 + 96) != 12 || **(_QWORD **)(a1 + 64) == -1LL )
    return 3221226021LL;
  if ( !*(_QWORD *)(a1 + 80) )
    *(_QWORD *)(a1 + 80) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 184), *(unsigned int *)(a1 + 72), 0x204u);
  v2 = *(_DWORD **)(a1 + 80);
  if ( !v2 )
    return 3221225701LL;
  v4 = *(_QWORD *)(a1 + 192);
  v5 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(a1 + 72) == 4 )
    *v2 = v5 | v4 & *v2;
  else
    *(_QWORD *)v2 = v5 | v4 & *(_QWORD *)v2;
  return 0LL;
}
