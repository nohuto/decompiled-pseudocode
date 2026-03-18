/*
 * XREFs of RtlFindExportedRoutineByName @ 0x140757F00
 * Callers:
 *     HalpMcResolveMicrocodeOperation @ 0x14051F13C (HalpMcResolveMicrocodeOperation.c)
 *     MiCompactServiceTable @ 0x1406CCD8C (MiCompactServiceTable.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     MiUnloadApproved @ 0x1407623F0 (MiUnloadApproved.c)
 *     MmCallDllInitialize @ 0x14082ED84 (MmCallDllInitialize.c)
 *     KsepResolveShimHooks @ 0x140964124 (KsepResolveShimHooks.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     PspInitializeSystemDlls @ 0x140B24D94 (PspInitializeSystemDlls.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall RtlFindExportedRoutineByName(__int64 a1, char *a2)
{
  char *v2; // r15
  _DWORD *v4; // rax
  _DWORD *v5; // r9
  unsigned __int64 v6; // r8
  int v7; // r10d
  __int64 v8; // rbp
  __int64 v9; // rdi
  int v10; // eax
  char *v11; // rcx
  int v12; // edx
  __int64 v13; // rsi
  char v14; // r11
  int v15; // ecx
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v17 = 0;
  v4 = (_DWORD *)RtlImageDirectoryEntryToData(a1, (int)a2, 0, (int)&v17);
  v5 = v4;
  v6 = 0LL;
  if ( !v4 )
    return v6;
  v7 = 0;
  v8 = a1 + (unsigned int)v4[8];
  v9 = a1 + (unsigned int)v4[9];
  v10 = v4[6] - 1;
  if ( v10 < 0 )
    return v6;
  while ( 1 )
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
    if ( v15 >= 0 )
      break;
    if ( !v12 )
      return v6;
    v10 = v12 - 1;
LABEL_10:
    if ( v10 < v7 )
      return v6;
  }
  if ( v15 > 0 )
  {
    v7 = v12 + 1;
    goto LABEL_10;
  }
  if ( v10 >= v7 && (unsigned int)*(unsigned __int16 *)(v9 + 2LL * v12) < v5[5] )
  {
    v6 = a1 + *(unsigned int *)(a1 + (unsigned int)v5[7] + 4LL * *(unsigned __int16 *)(v9 + 2LL * v12));
    if ( v6 > (unsigned __int64)v5 && v6 < (unsigned __int64)v5 + v17 )
      return 0LL;
  }
  return v6;
}
