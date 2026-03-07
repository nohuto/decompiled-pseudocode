__int64 __fastcall EtwpGetGuidList(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v7; // edi
  unsigned int v10; // esi
  unsigned int v11; // ebx
  signed __int64 *NextGuidEntry; // r10
  __int64 v13; // rax
  signed __int64 v14; // rcx

  v7 = 0;
  v10 = 0;
  v11 = 0;
  NextGuidEntry = EtwpGetNextGuidEntry(a1, 0LL, a2);
  if ( NextGuidEntry )
  {
    while ( 1 )
    {
      v13 = v11;
      if ( a2 )
        goto LABEL_6;
      v14 = NextGuidEntry[5] - PrivateLoggerNotificationGuid;
      if ( !v14 )
        v14 = NextGuidEntry[6] - *((_QWORD *)&PrivateLoggerNotificationGuid + 1);
      if ( v14 )
      {
LABEL_6:
        if ( ++v11 > 0xFFFFFFF )
        {
          v10 = -2147483643;
          *a5 = v11;
          return v10;
        }
        if ( v11 <= a4 )
          *(_OWORD *)(a3 + 16 * v13) = *(_OWORD *)(NextGuidEntry + 5);
      }
      NextGuidEntry = EtwpGetNextGuidEntry(a1, NextGuidEntry, a2);
      if ( !NextGuidEntry )
      {
        v7 = v11;
        break;
      }
    }
  }
  *a5 = v7;
  if ( v11 > a4 )
    return (unsigned int)-1073741789;
  return v10;
}
