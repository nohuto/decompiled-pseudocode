/*
 * XREFs of MiAddPhysicalPagesToCrashDump @ 0x14062D30C
 * Callers:
 *     MmGetDumpRange @ 0x14062DF70 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MiGetPagesRemainingInResidentPage @ 0x14064CC94 (MiGetPagesRemainingInResidentPage.c)
 */

_DWORD *__fastcall MiAddPhysicalPagesToCrashDump(void (__fastcall **a1)(_QWORD, __int64, __int64, __int64))
{
  _DWORD *result; // rax
  unsigned int v2; // ebx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 PagesRemainingInResidentPage; // rbp
  unsigned __int64 v8; // rdx
  bool v9; // zf
  char v10; // cl
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  result = MmPhysicalMemoryBlock;
  v2 = 0;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    while ( 1 )
    {
      v4 = 0LL;
      v5 = *(_QWORD *)&result[4 * v2 + 4];
      if ( *(_QWORD *)&result[4 * v2 + 6] )
        break;
LABEL_17:
      if ( ++v2 >= *result )
        return result;
    }
    while ( 1 )
    {
      v6 = 48 * v5 - 0x220000000000LL;
      PagesRemainingInResidentPage = 1LL;
      v8 = *(_QWORD *)(v6 + 40);
      if ( (v8 & 0x10000000000LL) != 0 )
        break;
      if ( (*(_BYTE *)(v6 + 34) & 0xC0) == 0x40 )
      {
        v10 = *(_BYTE *)(v6 + 34) & 7;
        if ( v10 == 6 )
        {
          if ( ((v8 >> 60) & 7) == 1
            || (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 && (v8 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
          {
            goto LABEL_16;
          }
LABEL_15:
          (*a1)(a1, v5, PagesRemainingInResidentPage, 2LL);
          goto LABEL_16;
        }
        if ( (unsigned __int8)(v10 - 2) <= 1u )
        {
          v9 = (*(_DWORD *)(v6 + 16) & 0x400LL) == 0;
LABEL_14:
          if ( v9 )
            goto LABEL_15;
        }
      }
LABEL_16:
      result = MmPhysicalMemoryBlock;
      v4 += PagesRemainingInResidentPage;
      v5 += PagesRemainingInResidentPage;
      if ( v4 >= *((_QWORD *)MmPhysicalMemoryBlock + 2 * v2 + 3) )
        goto LABEL_17;
    }
    v11 = 0;
    v12 = 0;
    PagesRemainingInResidentPage = MiGetPagesRemainingInResidentPage(48 * v5 - 0x220000000000LL, &v11, &v12);
    if ( v11 != 6 )
      goto LABEL_16;
    v9 = v12 == 1;
    goto LABEL_14;
  }
  return result;
}
