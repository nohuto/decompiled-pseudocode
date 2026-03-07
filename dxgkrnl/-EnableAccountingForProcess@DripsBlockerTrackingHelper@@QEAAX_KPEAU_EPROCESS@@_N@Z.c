void __fastcall DripsBlockerTrackingHelper::EnableAccountingForProcess(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  unsigned int v7; // esi
  DripsBlockerTrackingHelper *i; // rbx
  __int64 v9; // r14
  SIZE_T v10; // rax
  unsigned int j; // ebx
  SIZE_T Length; // [rsp+30h] [rbp-68h] BYREF
  _OWORD Source2[2]; // [rsp+38h] [rbp-60h] BYREF
  char v14; // [rsp+58h] [rbp-40h]

  Length = 0LL;
  v14 = 0;
  memset(Source2, 0, sizeof(Source2));
  DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(this, 0LL, a3, (char *)Source2, 0x21u, &Length);
  if ( Length )
  {
    v7 = 0;
    for ( i = this; ; i = (DripsBlockerTrackingHelper *)((char *)i + 4720) )
    {
      if ( *((_BYTE *)i + 104) )
      {
        if ( *(_QWORD *)i == a2 )
        {
          v9 = 4720LL * v7;
          v10 = RtlCompareMemory((char *)this + v9 + 8, Source2, Length);
          if ( v10 == Length )
            break;
        }
      }
      if ( ++v7 >= 0x40 )
        return;
    }
    for ( j = 0; j < *(_DWORD *)((char *)this + v9 + 44); ++j )
    {
      if ( *(_DWORD *)((char *)this + 72 * j + v9 + 144) )
        DripsBlockerTrackingHelper::EnableEntryAccounting(this, v7, j, a4);
    }
  }
}
