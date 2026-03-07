__int64 __fastcall PhkNextValid(__int64 a1)
{
  LockRefactorStagingAssertAny(gDomainHookLock);
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      goto LABEL_4;
    }
    if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 8LL * *(int *)(a1 + 48) + 48);
    if ( !a1 )
      return a1;
LABEL_4:
    if ( (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
