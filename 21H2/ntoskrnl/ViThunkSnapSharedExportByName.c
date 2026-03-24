/*
 * XREFs of ViThunkSnapSharedExportByName @ 0x1409C234C
 * Callers:
 *     ViThunkSnapSharedExports @ 0x1409C229C (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402532D0 (RtlImageDirectoryEntryToData.c)
 *     VfIsVerifierEnabled @ 0x1402D3DF0 (VfIsVerifierEnabled.c)
 *     _stricmp @ 0x1403D1DD0 (_stricmp.c)
 *     ViThunkFindAPIContextByName @ 0x1409D900C (ViThunkFindAPIContextByName.c)
 */

__int64 __fastcall ViThunkSnapSharedExportByName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r15
  __int64 v8; // rax
  unsigned int *v9; // rsi
  const char *v10; // rbp
  __int64 *v12; // r14
  __int64 v13; // rbp
  char v14; // si
  char *v15; // rcx
  int v16; // ecx
  char v17; // [rsp+60h] [rbp+18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v6 = a2;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  LOBYTE(a2) = 1;
  v8 = RtlImageDirectoryEntryToData(a1, a2, 1, (int)&v17);
  v9 = (unsigned int *)v8;
  if ( v8 && *(_DWORD *)(v8 + 12) )
  {
    do
    {
      if ( !*v9 )
        break;
      v10 = (const char *)(a1 + v9[3]);
      if ( !stricmp(v10, "ntoskrnl.exe") || !stricmp(v10, "hal.dll") )
      {
        v12 = (__int64 *)(a1 + *v9);
        v13 = a1 + v9[4];
        while ( *v12 )
        {
          if ( *v12 >= 0 && !stricmp((const char *)(*v12 + a1 + 2), *(const char **)v6) )
          {
            *(_QWORD *)a4 = v13;
            *(_QWORD *)(a4 + 8) = *(_QWORD *)(v6 + 8);
            v14 = BYTE4(VfRuleClasses);
            if ( (VfRuleClasses & 0x800000000LL) == 0
              || (unsigned int)VfIsVerifierEnabled()
              && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (v14 & 2) != 0 || (v14 & 4) != 0) )
            {
              *(_DWORD *)(a4 + 24) |= 1u;
            }
            else if ( XdvEnabled )
            {
              if ( VfDifAPIThunkContextHead )
              {
                *(_QWORD *)(a4 + 16) = *(_QWORD *)(v6 + 32);
                v15 = *(char **)v6;
                v18 = 0LL;
                ViThunkFindAPIContextByName(v15);
                if ( v18 )
                {
                  v16 = *(_DWORD *)(a4 + 24) | 1;
                  *(_DWORD *)(a4 + 24) = v16;
                  if ( (*(_DWORD *)(v6 + 24) & 4) != 0 )
                    *(_DWORD *)(a4 + 24) = v16 | 4;
                }
              }
            }
            return 1;
          }
          ++v12;
          v13 += 8LL;
        }
      }
      v9 += 5;
    }
    while ( v9[3] );
  }
  return v4;
}
