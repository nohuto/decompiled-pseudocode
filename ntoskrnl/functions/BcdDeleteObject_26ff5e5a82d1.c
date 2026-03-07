__int64 __fastcall BcdDeleteObject(void *a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  LOBYTE(v2) = BiIsOfflineHandle((char)a1);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, 0LL) )
      BiSetFirmwareModifiedFromObject(a1);
    v5 = BiDeleteKey(a1);
    LOBYTE(v6) = v3;
    v7 = v5;
    BiReleaseBcdSyncMutant(v6);
    return v7;
  }
  return result;
}
