__int64 __fastcall RawCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a2 + 184);
  if ( (unsigned __int8)(*(_BYTE *)v3 - 3) <= 1u )
  {
    v6 = *(_QWORD *)(v3 + 48);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 80) & 2) != 0 && *(int *)(a2 + 48) >= 0 )
        *(_QWORD *)(v6 + 104) += *(_QWORD *)(a2 + 56);
    }
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  RawEndOperation(a3, *(_QWORD *)(v3 + 48));
  if ( *(_BYTE *)v3 == 27 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
    --*(_DWORD *)(a3 + 120);
    if ( *(_DWORD *)(a3 + 116) || !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a3, 0, 0) )
      ExReleaseFastMutex((PFAST_MUTEX)(a3 + 232));
  }
  return 0LL;
}
