__int64 __fastcall BcdCreateObject(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 v8; // rcx
  char v9; // bp
  __int64 result; // rax
  __int64 v11; // rcx
  int Object; // ebx

  LOBYTE(v8) = BiIsOfflineHandle(a1);
  v9 = v8;
  result = BiAcquireBcdSyncMutant(v8);
  if ( (int)result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(*a4, 0LL) )
        BiSetFirmwareModified(a1, 1);
    }
    LOBYTE(v11) = v9;
    BiReleaseBcdSyncMutant(v11);
    return (unsigned int)Object;
  }
  return result;
}
