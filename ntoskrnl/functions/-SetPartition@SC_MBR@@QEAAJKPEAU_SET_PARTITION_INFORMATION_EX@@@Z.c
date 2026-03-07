__int64 __fastcall SC_MBR::SetPartition(SC_DISK **this, int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  int v3; // r14d
  char *v4; // rbp
  int v8; // ebx
  int v9; // eax
  struct SC_DISK_LAYOUT *v10; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  char *v13; // rdx
  unsigned int v14; // eax
  int v15; // r9d
  struct SC_DISK_LAYOUT *v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v3 = 0;
  v4 = 0LL;
  if ( a2 )
  {
    v9 = SC_MBR::ReadPartitionTable(this, &v17, (unsigned __int8)a3);
    v10 = v17;
    v8 = v9;
    if ( v9 >= 0 )
    {
      v11 = *((_DWORD *)v17 + 1);
      v12 = 0;
      if ( v11 )
      {
        v13 = (char *)v17 + 48;
        do
        {
          v14 = (unsigned __int8)v13[32];
          v4 = v13;
          if ( (unsigned __int8)v14 > 0xFu || (v15 = 32801, !_bittest(&v15, v14)) )
          {
            if ( ++v3 == a2 )
              break;
          }
          ++v12;
          v13 += 144;
        }
        while ( v12 < v11 );
      }
      if ( v12 < v11 )
      {
        v4[32] = a3->Mbr.PartitionType;
        v4[28] = 1;
        v8 = SC_DISK::ResetPartitionCache(*this);
        if ( v8 >= 0 )
          v8 = SC_MBR::WritePartitionTable((SC_MBR *)this, v10);
      }
      else
      {
        v8 = -1073741811;
      }
    }
    if ( v10 )
      SC_ENV::Free(v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
