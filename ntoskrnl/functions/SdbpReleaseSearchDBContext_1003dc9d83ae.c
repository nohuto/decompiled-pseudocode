void __fastcall SdbpReleaseSearchDBContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _DWORD *v4; // r8
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      a1[3] = 0LL;
    }
    v3 = (void *)a1[8];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74705041u);
      a1[8] = 0LL;
    }
    v4 = (_DWORD *)a1[9];
    if ( v4 )
    {
      v8 = 0LL;
      if ( !*v4 )
        goto LABEL_28;
      do
      {
        v9 = (__int64)&v4[12 * v8 + 2];
        if ( v9 )
        {
          v10 = *(void **)(v9 + 16);
          if ( v10 )
          {
            AslHashFree(v10);
            *(_QWORD *)(v9 + 16) = 0LL;
          }
          v11 = *(void **)(v9 + 24);
          if ( v11 )
          {
            AslHashFree(v11);
            *(_QWORD *)(v9 + 24) = 0LL;
          }
          v12 = *(void **)(v9 + 40);
          if ( v12 )
          {
            ExFreePoolWithTag(v12, 0x74705041u);
            *(_OWORD *)(v9 + 32) = 0LL;
          }
        }
        v4 = (_DWORD *)a1[9];
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *v4 );
      if ( v4 )
LABEL_28:
        ExFreePoolWithTag(v4, 0x74705041u);
      a1[9] = 0LL;
    }
    v5 = (void *)a1[4];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x74705041u);
      a1[4] = 0LL;
    }
    v6 = (void *)a1[5];
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x74705041u);
      a1[5] = 0LL;
    }
    v7 = (void *)a1[6];
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x74705041u);
      a1[6] = 0LL;
    }
    if ( a1[11] )
    {
      SdbpFreeAppAttributes();
      a1[11] = 0LL;
    }
    if ( a1[12] )
    {
      SdbpFreeAppAttributes();
      a1[12] = 0LL;
    }
  }
}
