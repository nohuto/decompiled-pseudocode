__int64 __fastcall ViFilterGenericCompletionRoutine(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(a1 + 64) + 32LL), (PVOID)a2, 0x20u);
  return 0LL;
}
