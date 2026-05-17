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
  int v4; // ebp
  __int64 v5; // r12
  int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // eax
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  char v24; // al
  int v25; // r8d
  int v26; // r9d
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a3;
  v5 = a2;
  LOWORD(a3) = 14;
  LOBYTE(a2) = 1;
  v7 = 0;
  v8 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v3 + 48), a2, a3, (unsigned int)&v29, (__int64)&v30);
  v10 = v30;
  if ( v8 < 0 )
    v10 = 0LL;
  v30 = v10;
  if ( !v10 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return (unsigned int)-1073741701;
  v12 = *(_DWORD *)(v3 + 104) | 0x400000;
  *(_DWORD *)(v3 + 104) = v12;
  if ( (*(_BYTE *)(v10 + 16) & 1) == 0
    || (v22 = *(_QWORD *)(v3 + 48),
        *(_DWORD *)(v3 + 104) = v12 | 0x1000000,
        v23 = LdrpCorValidateImage(v22),
        (v7 = v23, v23 >= 0)
     && ((*(_DWORD *)(a1 + 32) & 0x200000) == 0 || (v7 = LdrpCorFixupImage(*(_QWORD *)(v3 + 48)), v7 >= 0))) )
  {
LABEL_4:
    if ( (*(_WORD *)(v5 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(*(_QWORD *)(v3 + 176) + 32LL) >= 0 || *(char *)(v5 + 94) < 0 )
      {
        if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (v4 == 1073741827 || v4 == 1073741878) )
        {
          v13 = *(_QWORD *)(v3 + 48);
          v15 = 2147353476LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId((unsigned int)(v4 - 1073741827), v9) )
            v16 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v16 = 2147353476LL;
          v17 = 2147353477LL;
          if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v16 = (unsigned int)RtlGetCurrentServiceSessionId(v16, v14)
                ? (__int64)NtCurrentPeb()->SharedData + 555
                : 2147353477LL;
            if ( (*(_BYTE *)v16 & 0x20) != 0 )
            {
              LOBYTE(v26) = -1;
              LOBYTE(v25) = -1;
              LdrpLogEtwEvent(5264, v13, v25, v26, 0LL, 0LL);
            }
          }
          if ( v4 == 1073741827
            && (v18 = LdrpRelocateImage(*(_QWORD *)(v3 + 48), *(_QWORD *)(a1 + 160), v5, v3 + 72), v7 = v18, v18 < 0) )
          {
            LdrpLogError((unsigned int)v18, 5264LL, 0LL, v3 + 72);
          }
          else
          {
            v19 = *(_QWORD *)(v3 + 48);
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v14) )
              v15 = (__int64)NtCurrentPeb()->SharedData + 554;
            if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v20) )
                v17 = (__int64)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v17 & 0x20) != 0 )
              {
                LOBYTE(v28) = -1;
                LOBYTE(v27) = -1;
                LdrpLogEtwEvent(5265, v19, v27, v28, 0LL, 0LL);
              }
            }
          }
        }
      }
      else
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrmap.c",
            930,
            (unsigned int)"LdrpCompleteMapModule",
            0,
            (__int64)"Could not validate the crypto signature for DLL %wZ\n",
            v3 + 72);
          v24 = LdrpDebugFlags;
        }
        if ( (v24 & 0x10) != 0 )
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
