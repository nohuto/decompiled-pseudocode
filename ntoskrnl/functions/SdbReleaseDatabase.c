void __fastcall SdbReleaseDatabase(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  _QWORD **v4; // r8

  AslLogCallPrintf(3, (unsigned int)"SdbReleaseDatabase", 118, (unsigned int)"Enter.");
  if ( *((_DWORD *)P + 442) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(P[222] + 1776LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(P[222] + 1776LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        135,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    goto LABEL_8;
  }
  if ( *((int *)P + 444) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport(P);
    v2 = (void *)P[1];
    if ( v2 )
      SdbCloseDatabaseRead(v2);
    v3 = (void *)P[2];
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    while ( 1 )
    {
      v4 = (_QWORD **)P[72];
      if ( !v4 )
        break;
      if ( v4[1] == v4 )
      {
        P[72] = 0LL;
      }
      else
      {
        P[72] = *v4;
        *v4[1] = *v4;
        (*v4)[1] = v4[1];
      }
      ExFreePoolWithTag(v4, 0x74705041u);
    }
LABEL_8:
    ExFreePoolWithTag(P, 0x74705041u);
    return;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbReleaseDatabase",
    149,
    (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
