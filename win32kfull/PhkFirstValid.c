__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a2;
  LockRefactorStagingAssertAny(gDomainHookLock);
  v4 = *(_QWORD *)(a1 + 8 * v3 + 928);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v3 + 48)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
