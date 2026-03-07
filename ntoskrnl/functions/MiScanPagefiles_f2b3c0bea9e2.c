char __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v1; // eax
  union _SLIST_HEADER **v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ecx
  __int64 i; // r8
  __int64 v9; // rcx

  v1 = *(_DWORD *)(a1 + 17048);
  if ( v1 )
  {
    v3 = (union _SLIST_HEADER **)(a1 + 17056);
    v4 = v1;
    do
    {
      MiFreePageFileHashPfns(*v3++);
      --v4;
    }
    while ( v4 );
  }
  v5 = MiSufficientAvailablePages(a1, 1056LL);
  if ( !v5 )
  {
    v6 = *(_DWORD *)(a1 + 17048);
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 17824) && !*(_QWORD *)(a1 + 1024) )
      {
        v5 = *(_DWORD *)(a1 + 1032);
        if ( v5 >= 0x1E )
        {
          v7 = 0;
          for ( i = a1 + 17056;
                (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL);
                i += 8LL )
          {
            if ( ++v7 >= v6 )
            {
              if ( *(_BYTE *)(a1 + 715) )
              {
                v9 = *(_QWORD *)(a1 + 200);
                *(_DWORD *)(a1 + 1032) = 0;
                *(_BYTE *)(a1 + 715) = 0;
                LOBYTE(v5) = PsReferencePartitionSafe(v9);
                if ( (_BYTE)v5 )
                {
                  *(_QWORD *)(a1 + 1000) = 0LL;
                  *(_QWORD *)(a1 + 1016) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 1024) = a1;
                  LOBYTE(v5) = ExQueueWorkItemToPartition((_QWORD *)(a1 + 1000), 2, 0xFFFFFFFF, *(_QWORD *)(a1 + 200));
                }
              }
              return v5;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1032) = ++v5;
        }
      }
    }
  }
  return v5;
}
