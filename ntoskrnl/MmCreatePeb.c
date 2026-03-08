/*
 * XREFs of MmCreatePeb @ 0x140706A60
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryGroupAffinity @ 0x140296080 (KeQueryGroupAffinity.c)
 *     KeQueryGroupMaskProcess @ 0x1402961A4 (KeQueryGroupMaskProcess.c)
 *     MmGetSessionId @ 0x140299600 (MmGetSessionId.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmMapViewOfSection @ 0x14069EC70 (MmMapViewOfSection.c)
 *     MiCreatePebOrTeb @ 0x1406A35BC (MiCreatePebOrTeb.c)
 *     MiInitializeWowPeb @ 0x140795138 (MiInitializeWowPeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v12; // rsi
  int v13; // r15d
  __int16 v14; // r14
  char v15; // bl
  __int64 v16; // rdi
  __int16 v17; // r12
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  int v22; // edx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rbx
  int v28; // edi
  char v29; // di
  char v30; // di
  __int64 v31; // rbx
  USHORT v32; // [rsp+58h] [rbp-160h]
  __int64 v34; // [rsp+68h] [rbp-150h]
  _QWORD v35[18]; // [rsp+70h] [rbp-148h] BYREF
  __int64 v36; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+110h] [rbp-A8h] BYREF
  char v39; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+120h] [rbp-98h] BYREF
  __int64 v41; // [rsp+128h] [rbp-90h]
  __int64 v42; // [rsp+130h] [rbp-88h]
  __int64 v43; // [rsp+138h] [rbp-80h]
  _QWORD *v44; // [rsp+140h] [rbp-78h]
  $115DCDF994C6370D29323EAB0E0C9502 v45; // [rsp+148h] [rbp-70h] BYREF

  v44 = a3;
  v6 = a1;
  v42 = a1;
  v38 = 0LL;
  memset(&v45, 0, sizeof(v45));
  memset(v35, 0, sizeof(v35));
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess(v6));
  v32 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0, (__int64)&v45);
  v37 = 0LL;
  v36 = 0LL;
  v40 = 0LL;
  v10 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, v6, &v37, 0LL, 0, (__int64)&v36, &v40, 1, 5242880, 2);
  if ( v10 < 0 || (v10 = MiCreatePebOrTeb(0LL, v9, &v38), v10 < 0) )
  {
    KiUnstackDetachProcess(&v45);
    return (unsigned int)v10;
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v12 = *(_QWORD *)(v6 + 1312);
    v43 = v12;
    v13 = 10;
    *(_QWORD *)((char *)&v35[1] + 4) = 10LL;
    LOWORD(v35[3]) = NtBuildNumber;
    HIDWORD(v35[2]) = 2;
    v14 = CmNtCSDVersion;
    WORD1(v35[3]) = CmNtCSDVersion;
    v35[4] = qword_140D1D208;
    v35[5] = qword_140D1D200;
    v35[6] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    LODWORD(v35[7]) = NtGlobalFlag2;
    v35[8] = qword_140C65690;
    v35[9] = (unsigned int)dword_140D1D1E8;
    v35[10] = qword_140D1D1F8;
    v35[11] = qword_140D1D1F0;
    LOBYTE(v35[12]) = *(_BYTE *)a2;
    BYTE1(v35[12]) = *(_BYTE *)(a2 + 3);
    v35[13] = *(_QWORD *)(a2 + 8);
    v35[14] = v12;
    LOWORD(v35[15]) = CurrentServerSiloGlobals[66].Blink;
    WORD1(v35[15]) = CurrentServerSiloGlobals[70].Blink;
    if ( CurrentServerSiloGlobals[77].Flink )
      WORD2(v35[15]) = 1701;
    else
      WORD2(v35[15]) = 0;
    if ( *(_QWORD *)(v6 + 1368) )
      HIDWORD(v35[7]) = MmGetSessionId(v6);
    else
      HIDWORD(v35[7]) = 0;
    v35[16] = v37;
    LODWORD(v35[17]) = 0;
    v15 = 0;
    if ( (*(_BYTE *)(v6 + 992) & 1) != 0 )
    {
      v21 = 3;
      LODWORD(v35[0]) = 3;
      v17 = 34;
      *(_QWORD *)((char *)v35 + 4) = 10LL;
      v16 = 0LL;
      v34 = 0LL;
      v24 = (__int64 *)a4;
    }
    else
    {
      v16 = RtlImageNtHeader(v12);
      v34 = v16;
      v17 = *(_WORD *)(v16 + 22);
      LOBYTE(v18) = 1;
      v19 = RtlImageDirectoryEntryToData(v12, v18, 10, (int)&v39);
      v20 = v19;
      v41 = v19;
      if ( v19 )
      {
        if ( (v19 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = v41;
        v14 = WORD1(v35[3]);
        v15 = 0;
      }
      v21 = *(unsigned __int16 *)(v16 + 92);
      LODWORD(v35[0]) = v21;
      v13 = *(unsigned __int16 *)(v16 + 72);
      HIDWORD(v35[0]) = v13;
      LODWORD(v35[1]) = *(unsigned __int16 *)(v16 + 74);
      v22 = *(_DWORD *)(v16 + 76);
      if ( v22 )
      {
        if ( v20 )
        {
          if ( *(_WORD *)(v20 + 76) )
            v14 = *(_WORD *)(v20 + 76);
          WORD1(v35[3]) = v14;
        }
        HIDWORD(v35[1]) = (unsigned __int8)v22;
        LODWORD(v35[2]) = BYTE1(v22);
        LOWORD(v35[3]) = HIWORD(v22);
        HIDWORD(v35[2]) = (v22 ^ 0xBFFFFFFF) >> 30;
      }
      if ( v20 )
      {
        v23 = *(_QWORD *)(v20 + 64);
        v24 = (__int64 *)a4;
        *(_QWORD *)a4 = v23;
        v15 = 1;
      }
      else
      {
        v24 = (__int64 *)a4;
      }
    }
    if ( v15 )
    {
      v25 = *v24;
      if ( (v25 & KeQueryGroupAffinity(v32)) != v25 )
        *(_QWORD *)a4 = 0LL;
    }
    if ( (v17 & 0x4000) != 0 )
    {
      v29 = _InterlockedExchangeAdd(&dword_140C6568C, 1u) + 1;
      do
      {
        v30 = v29 & 0x3F;
        v31 = 1LL << v30;
        *(_QWORD *)a4 = 1LL << v30;
        v29 = v30 + 1;
      }
      while ( (KeQueryGroupAffinity(v32) & v31) == 0 );
      v16 = v34;
      v14 = WORD1(v35[3]);
      v13 = HIDWORD(v35[0]);
      v21 = v35[0];
      v6 = v42;
    }
    v26 = v38;
    *(_QWORD *)(v38 + 280) = *(_QWORD *)((char *)&v35[1] + 4);
    *(_WORD *)(v26 + 288) = v35[3];
    *(_DWORD *)(v26 + 292) = HIDWORD(v35[2]);
    *(_WORD *)(v26 + 290) = v14;
    *(_QWORD *)(v26 + 200) = v35[4];
    *(_QWORD *)(v26 + 208) = v35[5];
    *(_DWORD *)(v26 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v26 + 188) = NtGlobalFlag;
    *(_DWORD *)(v26 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v26 + 192) = qword_140C65690;
    *(_QWORD *)(v26 + 792) = (unsigned int)dword_140D1D1E8;
    *(_QWORD *)(v26 + 216) = qword_140D1D1F8;
    *(_QWORD *)(v26 + 224) = qword_140D1D1F0;
    *(_DWORD *)(v26 + 704) = HIDWORD(v35[7]);
    *(_DWORD *)(v26 + 296) = v21;
    *(_DWORD *)(v26 + 300) = v13;
    *(_DWORD *)(v26 + 304) = v35[1];
    *(_BYTE *)v26 = v35[12];
    *(_BYTE *)(v26 + 3) = BYTE1(v35[12]);
    *(_QWORD *)(v26 + 8) = v35[13];
    *(_QWORD *)(v26 + 16) = v43;
    *(_DWORD *)(v26 + 844) = v35[15];
    *(_WORD *)(v26 + 848) = WORD2(v35[15]);
    *(_QWORD *)(v26 + 1976) = v35[16];
    *(_DWORD *)(v26 + 1984) = 0;
    if ( *(_QWORD *)(v6 + 1408) && (v28 = MiInitializeWowPeb(v35, v16, v6, a4), v28 < 0) )
    {
      KiUnstackDetachProcess(&v45);
      return (unsigned int)v28;
    }
    else
    {
      KiUnstackDetachProcess(&v45);
      *v44 = v26;
      return 0LL;
    }
  }
}
