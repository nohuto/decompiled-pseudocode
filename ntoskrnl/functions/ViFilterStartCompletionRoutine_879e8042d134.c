__int64 __fastcall ViFilterStartCompletionRoutine(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v3 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 52) |= *(_DWORD *)(*(_QWORD *)(v3 + 8) + 52LL) & 0x5010F;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}
