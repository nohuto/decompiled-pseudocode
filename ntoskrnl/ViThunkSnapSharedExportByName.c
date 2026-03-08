/*
 * XREFs of ViThunkSnapSharedExportByName @ 0x140ABA164
 * Callers:
 *     ViThunkSnapSharedExports @ 0x140ABA0B4 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x1403D3BD0 (_stricmp.c)
 */

__int64 __fastcall ViThunkSnapSharedExportByName(__int64 a1, const char **a2, __int64 a3)
{
  unsigned int v3; // ebx
  const char **v5; // r13
  __int64 v7; // rax
  int v8; // edx
  unsigned int *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  const char *v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // rdi
  char v16; // [rsp+60h] [rbp+18h] BYREF

  *(_DWORD *)(a3 + 8) = -1;
  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  v5 = a2;
  *(_QWORD *)(a3 + 16) = 0LL;
  LOBYTE(a2) = 1;
  v7 = RtlImageDirectoryEntryToData(a1, (int)a2, 1, (int)&v16);
  LOBYTE(v8) = 1;
  v9 = (unsigned int *)v7;
  v10 = RtlImageDirectoryEntryToData(a1, v8, 12, (int)&v16);
  v11 = v10;
  if ( v9 && v10 )
  {
    while ( v9[3] && *v9 )
    {
      v12 = (const char *)(a1 + v9[3]);
      if ( !stricmp(v12, "ntoskrnl.exe") || !stricmp(v12, "hal.dll") )
      {
        v13 = (__int64 *)(a1 + *v9);
        v14 = a1 + v9[4];
        while ( *v13 )
        {
          if ( *v13 >= 0 && !stricmp((const char *)(*v13 + a1 + 2), *v5) )
          {
            *(_QWORD *)a3 = v14;
            v3 = 1;
            *(_QWORD *)(a3 + 16) = v5;
            *(_DWORD *)(a3 + 8) = (unsigned __int64)(v14 - v11) >> 3;
            return v3;
          }
          ++v13;
          v14 += 8LL;
        }
      }
      v9 += 5;
    }
  }
  return v3;
}
