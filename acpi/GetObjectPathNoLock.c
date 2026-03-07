char *__fastcall GetObjectPathNoLock(__int64 a1)
{
  char *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  char *Pool2; // rax
  __int64 ObjectPathNoLock; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  char *v13; // rcx
  char *v14; // rax

  v1 = 0LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = -1LL;
    if ( !v3 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 8LL, 1381258079LL);
      v1 = Pool2;
      if ( !Pool2 )
        return v1;
      *Pool2 = 92;
      goto LABEL_19;
    }
    ObjectPathNoLock = GetObjectPathNoLock(v3);
    v7 = (char *)ObjectPathNoLock;
    if ( ObjectPathNoLock )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_BYTE *)(ObjectPathNoLock + v8) );
      v9 = (char *)ExAllocatePool2(64LL, v8 + 9, 1381258079LL);
      v1 = v9;
      if ( v9 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v7[v10] );
        RtlStringCchCopyA(v9, v10 + 1, v7);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( v7[v11] );
          RtlStringCchCatA(v1, v11 + 9, ".");
        }
        v12 = -1LL;
        do
          ++v12;
        while ( v7[v12] );
        RtlStringCchCatNA(v1, v12 + 9, (STRSAFE_PCNZCH)(a1 + 40), 4uLL);
      }
      ExFreePoolWithTag(v7, 0x5254535Fu);
      if ( v1 )
      {
        do
LABEL_19:
          ++v4;
        while ( v1[v4] );
        if ( (int)v4 - 1LL >= 0 )
        {
          v13 = &v1[(int)v4 - 1];
          do
          {
            if ( *v13 != 95 )
              break;
            *v13-- = 0;
          }
          while ( v13 - v1 >= 0 );
        }
      }
    }
  }
  else
  {
    v14 = (char *)ExAllocatePool2(64LL, 1LL, 1381258079LL);
    v1 = v14;
    if ( v14 )
      *v14 = 0;
  }
  return v1;
}
