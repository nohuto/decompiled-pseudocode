/*
 * XREFs of RtlFindExportedRoutineByName @ 0x140612560
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1406B6EC0 (MmGetSystemRoutineAddress.c)
 *     MiUnloadApproved @ 0x140771F1C (MiUnloadApproved.c)
 *     MiCompactServiceTable @ 0x14078A028 (MiCompactServiceTable.c)
 *     MmCallDllInitialize @ 0x1407AC490 (MmCallDllInitialize.c)
 *     KsepResolveShimHooks @ 0x1408C00A4 (KsepResolveShimHooks.c)
 *     PspInitializeSystemDlls @ 0x140A4B284 (PspInitializeSystemDlls.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402532D0 (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall RtlFindExportedRoutineByName(__int64 a1, char *a2)
{
  char *v2; // r15
  _DWORD *v4; // rax
  _DWORD *v5; // r9
  unsigned __int64 v6; // r8
  int v7; // r10d
  __int64 v8; // rbp
  __int64 v9; // rsi
  int v10; // ecx
  char *v11; // rax
  int v12; // edx
  __int64 v13; // rdi
  char v14; // r11
  int v15; // eax
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v17 = 0;
  v4 = (_DWORD *)RtlImageDirectoryEntryToData(a1, (int)a2, 0, (int)&v17);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = 0;
    v8 = a1 + (unsigned int)v4[8];
    v9 = a1 + (unsigned int)v4[9];
    v10 = v4[6] - 1;
    if ( v10 >= 0 )
    {
      do
      {
        v11 = v2;
        v12 = (v7 + v10) >> 1;
        v13 = a1 + *(unsigned int *)(v8 + 4LL * v12) - (_QWORD)v2;
        while ( 1 )
        {
          v14 = *v11;
          if ( *v11 != v11[v13] )
            break;
          ++v11;
          if ( !v14 )
          {
            v15 = 0;
            goto LABEL_7;
          }
        }
        v15 = (unsigned __int8)*v11 < (unsigned __int8)v11[v13] ? -1 : 1;
LABEL_7:
        if ( v15 < 0 )
        {
          if ( !v12 )
            return v6;
          v10 = v12 - 1;
        }
        else
        {
          if ( v15 <= 0 )
            break;
          v7 = v12 + 1;
        }
      }
      while ( v10 >= v7 );
      if ( v10 >= v7 && (unsigned int)*(unsigned __int16 *)(v9 + 2LL * v12) < v5[5] )
      {
        v6 = a1 + *(unsigned int *)(a1 + (unsigned int)v5[7] + 4LL * *(unsigned __int16 *)(v9 + 2LL * v12));
        if ( v6 > (unsigned __int64)v5 && v6 < (unsigned __int64)v5 + v17 )
          return 0LL;
      }
    }
  }
  return v6;
}
