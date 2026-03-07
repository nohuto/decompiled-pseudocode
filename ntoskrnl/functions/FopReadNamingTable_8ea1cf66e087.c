__int64 __fastcall FopReadNamingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int NameRecord; // ebx
  __int16 v7; // bp
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 Memory; // rdi
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int16 v16; // [rsp+30h] [rbp-48h]

  v16 = 0;
  v15 = 0LL;
  NameRecord = FioFwReadBytesAtOffset(a1, a2, 6u, &v15);
  if ( NameRecord >= 0 )
  {
    LOWORD(v15) = __ROR2__(v15, 8);
    v7 = __ROR2__(WORD2(v15), 8);
    WORD1(v15) = __ROR2__(WORD1(v15), 8);
    v8 = 18LL;
    v9 = WORD1(v15);
    if ( WORD1(v15) )
    {
      v10 = 12 * WORD1(v15) + 18;
      if ( v10 < 0x12 )
        return (unsigned int)-1073741675;
      v8 = v10;
      NameRecord = 0;
    }
    Memory = BgpFwAllocateMemory(v8);
    if ( Memory )
    {
      v12 = a2 + 6;
      *(_DWORD *)Memory = v15;
      *(_WORD *)(Memory + 4) = v7;
      v13 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          NameRecord = FopReadNameRecord(a1, v12, Memory + 12LL * v13 + 6);
          if ( NameRecord < 0 )
            break;
          ++v13;
          v12 += 12;
          if ( v13 >= v9 )
            goto LABEL_9;
        }
        BgpFwFreeMemory(Memory);
      }
      else
      {
LABEL_9:
        *a3 = Memory;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)NameRecord;
}
