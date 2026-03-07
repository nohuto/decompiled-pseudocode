void __fastcall IopLiveDumpFreeIoSpaceRanges(PVOID *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  char *v6; // r10
  __int64 v7; // r11
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  __int64 Pool2; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+28h] BYREF

  v14 = 0LL;
  v15 = 0;
  v8 = 0LL;
  v11 = 0LL;
  v12 = a2;
  v9 = 0LL;
  *(_QWORD *)&v8 = 0x100000001LL;
  v10 = 0x40000000LL;
  Pool2 = ExAllocatePool2(64LL, 8LL * a2, 1886217292LL);
  if ( Pool2 )
  {
    v4 = 0;
    if ( a2 )
    {
      v5 = 0LL;
      while ( (int)IopLiveDumpUnpackMemoryRun(*(_QWORD *)((char *)*a1 + v5), &v14, &v15) >= 0 )
      {
        ++v4;
        *(_QWORD *)&v6[v7] = (v14 << 12) | ((v15 >> 18) - 1);
        v5 = v7 + 8;
        if ( v4 >= a2 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      MmFreeMemoryRanges(&v8);
      v6 = (char *)Pool2;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x706D644Cu);
  }
  if ( *a1 )
    ExFreePoolWithTag(*a1, 0x706D644Cu);
}
