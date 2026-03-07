char __fastcall CmpDoLocalizeNextHive(_BYTE *a1, _QWORD *a2)
{
  char v2; // di
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EX_RUNDOWN_REF *NextActiveHive; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int locked; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v2 = 0;
  *a2 = 10000000LL * (unsigned int)dword_140C020C4;
  *a1 = 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
    return 1;
  for ( i = 0LL; ; i = NextActiveHive )
  {
    NextActiveHive = (struct _EX_RUNDOWN_REF *)CmpGetNextActiveHive(i);
    if ( !NextActiveHive )
      break;
    CmpLockRegistry(v5, v4, v7, v8);
    locked = HvHiveConvertLockedPagesToCowByPolicy(NextActiveHive);
    CmpUnlockRegistry(v11, v10, v12, v13);
    if ( locked < 0 )
    {
      ExReleaseRundownProtection_0(NextActiveHive + 205);
      v2 = 1;
      break;
    }
  }
  CmpReleaseShutdownRundown();
  return v2;
}
