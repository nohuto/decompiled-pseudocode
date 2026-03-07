void __fastcall EditionMouseMoveShellResilience(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 672);
  if ( v2 && (*(_DWORD *)(v1 + 1272) & 0x40000) != 0 && (*(_DWORD *)(v2 + 200) & 0x80000) != 0 && *(_QWORD *)(v1 + 1424) )
  {
    if ( !*(_DWORD *)(v2 + 276) )
      *(_DWORD *)(v2 + 276) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(unsigned int)IsAdaptiveQueueDetachExempted(v1) )
      KeSetEvent(*(PRKEVENT *)(v1 + 1424), 1, 0);
  }
}
