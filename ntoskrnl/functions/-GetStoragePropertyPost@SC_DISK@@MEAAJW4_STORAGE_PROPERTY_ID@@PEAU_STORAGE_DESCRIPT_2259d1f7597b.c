__int64 __fastcall SC_DISK::GetStoragePropertyPost(
        struct _UNICODE_STRING *this,
        int a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  unsigned int v3; // r9d
  ULONG Buffer_high; // ecx
  ULONG Size; // eax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  ULONG Version; // ecx

  v3 = 0;
  if ( a2 > 14 )
  {
    v6 = a2 - 21;
    if ( v6 )
    {
      v7 = v6 - 36;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 7 )
            return (unsigned int)SC_DISK::GetFruIdDescPost(
                                   this,
                                   (struct _STORAGE_FRU_ID_DESCRIPTOR *)a3,
                                   (unsigned __int8)a3);
        }
        else
        {
          Version = a3[4].Version;
          if ( Version < a3->Version || Version > a3->Size - 1 )
            a3[4].Version = 0;
        }
      }
    }
  }
  else if ( a2 == 6 )
  {
    Buffer_high = HIDWORD(this[14].Buffer);
    if ( a3[2].Version != Buffer_high )
      return (unsigned int)-1073739509;
    Size = a3[2].Size;
    if ( Size < Buffer_high || Size % Buffer_high )
      return (unsigned int)-1073739509;
  }
  return v3;
}
