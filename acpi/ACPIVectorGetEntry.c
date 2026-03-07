char __fastcall ACPIVectorGetEntry(_DWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  void *Pool2; // rax
  void *v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // rcx
  char v9; // dl
  char result; // al

  LOBYTE(v1) = GpeVectorFree;
  if ( GpeVectorFree )
  {
LABEL_10:
    result = 1;
    *a1 = (unsigned __int8)v1;
    GpeVectorFree = *((_BYTE *)GpeVectorTable + 16 * (unsigned __int8)v1);
    return result;
  }
  v1 = GpeVectorTableSize;
  v3 = (unsigned int)(GpeVectorTableSize + 4);
  if ( (unsigned int)v3 >= GpeVectorTableSize )
  {
    v4 = 16 * v3;
    if ( v4 <= 0xFFFFFFFF )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)v4, 1735418689LL);
      v6 = Pool2;
      if ( Pool2 )
      {
        if ( GpeVectorTable )
        {
          memmove(Pool2, GpeVectorTable, 16LL * v1);
          ExFreePoolWithTag(GpeVectorTable, 0);
        }
        GpeVectorTableSize += 4;
        v7 = 0;
        GpeVectorTable = v6;
        do
        {
          v8 = 2LL * (v7 + v1);
          v9 = v7++ + v1 + 1;
          *((_BYTE *)GpeVectorTable + 8 * v8) = v9;
        }
        while ( v7 < 4 );
        *((_BYTE *)GpeVectorTable + 16 * v7 + 16 * v1 - 16) = 0;
        GpeVectorFree = v1;
        goto LABEL_10;
      }
    }
  }
  return 0;
}
