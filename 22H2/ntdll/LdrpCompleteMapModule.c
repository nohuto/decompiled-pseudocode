/*
 * XREFs of LdrpCompleteMapModule @ 0x1800148B4
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpLogError @ 0x1800616A8 (LdrpLogError.c)
 *     LdrpRelocateImage @ 0x1800834CC (LdrpRelocateImage.c)
 *     LdrpCorValidateImage @ 0x1800855B4 (LdrpCorValidateImage.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 *     LdrpCorFixupImage @ 0x1800CE6C8 (LdrpCorFixupImage.c)
 *     LdrpLogEtwEvent @ 0x1800CF110 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpCompleteMapModule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  char v20; // al
  int v21; // r8d
  int v22; // r9d
  char *v23; // rcx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v8 = RtlpImageDirectoryEntryToDataEx(*(PVOID *)(v3 + 48), (__int64)&v26);
  v9 = v26;
  if ( v8 < 0 )
    v9 = 0LL;
  v26 = v9;
  if ( !v9 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return (unsigned int)-1073741701;
  v11 = *(_DWORD *)(v3 + 104) | 0x400000;
  *(_DWORD *)(v3 + 104) = v11;
  if ( (*(_BYTE *)(v9 + 16) & 1) == 0
    || (v18 = *(_QWORD *)(v3 + 48),
        *(_DWORD *)(v3 + 104) = v11 | 0x1000000,
        v19 = LdrpCorValidateImage(v18),
        (v7 = v19, v19 >= 0)
     && ((*(_DWORD *)(a1 + 32) & 0x200000) == 0 || (v7 = LdrpCorFixupImage(*(_QWORD *)(v3 + 48)), v7 >= 0))) )
  {
LABEL_4:
    if ( (*(_WORD *)(a2 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(*(_QWORD *)(v3 + 176) + 32LL) >= 0 || *(char *)(a2 + 94) < 0 )
      {
        if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
        {
          v12 = *(_QWORD *)(v3 + 48);
          v13 = 2147353476LL;
          if ( RtlGetCurrentServiceSessionId() )
            v14 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v14 = 2147353476LL;
          v15 = 2147353477LL;
          if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v23 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
            if ( (*v23 & 0x20) != 0 )
            {
              LOBYTE(v22) = -1;
              LOBYTE(v21) = -1;
              LdrpLogEtwEvent(5264, v12, v21, v22, 0LL, 0LL);
            }
          }
          if ( a3 == 1073741827 && (v16 = LdrpRelocateImage(*(PVOID *)(v3 + 48)), v7 = v16, v16 < 0) )
          {
            LdrpLogError((unsigned int)v16, 5264LL, 0LL, v3 + 72);
          }
          else
          {
            v17 = *(_QWORD *)(v3 + 48);
            if ( RtlGetCurrentServiceSessionId() )
              v13 = (__int64)NtCurrentPeb()->SharedData + 554;
            if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v15 = (__int64)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v15 & 0x20) != 0 )
              {
                LOBYTE(v25) = -1;
                LOBYTE(v24) = -1;
                LdrpLogEtwEvent(5265, v17, v24, v25, 0LL, 0LL);
              }
            }
          }
        }
      }
      else
      {
        v20 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrmap.c",
            930,
            (unsigned int)"LdrpCompleteMapModule",
            0,
            (__int64)"Could not validate the crypto signature for DLL %wZ\n",
            v3 + 72);
          v20 = LdrpDebugFlags;
        }
        if ( (v20 & 0x10) != 0 )
          __debugbreak();
        return (unsigned int)-1073740760;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 104) &= ~4u;
    }
  }
  return (unsigned int)v7;
}
