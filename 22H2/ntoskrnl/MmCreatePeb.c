/*
 * XREFs of MmCreatePeb @ 0x1406121F8
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14025C088 (KeQueryGroupMaskProcess.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     KeQueryGroupAffinity @ 0x140322B10 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage @ 0x1403F746C (Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage.c)
 *     memset @ 0x140413800 (memset.c)
 *     MmMapViewOfSection @ 0x1406128D0 (MmMapViewOfSection.c)
 *     MiInitializeWowPeb @ 0x140670754 (MiInitializeWowPeb.c)
 *     MiCreatePebOrTeb @ 0x1406C4EC4 (MiCreatePebOrTeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  _DWORD *v9; // r9
  int v10; // ebx
  void *v12; // rbx
  __int16 v13; // r14
  PIMAGE_NT_HEADERS v14; // rdi
  unsigned __int16 Characteristics; // r15
  _WORD *v16; // rax
  _WORD *v17; // rbx
  int Subsystem; // r12d
  int MajorSubsystemVersion; // r13d
  unsigned int Win32VersionValue; // edx
  __int64 v21; // rbx
  bool v22; // zf
  _QWORD *v23; // rax
  char v24; // di
  char v25; // di
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // edi
  USHORT v29; // [rsp+54h] [rbp-174h]
  __int64 v31; // [rsp+60h] [rbp-168h] BYREF
  __int64 v32; // [rsp+68h] [rbp-160h] BYREF
  _IMAGE_NT_HEADERS64 *v33; // [rsp+70h] [rbp-158h]
  __int64 v34; // [rsp+78h] [rbp-150h] BYREF
  __int64 v35; // [rsp+80h] [rbp-148h] BYREF
  __int64 v36; // [rsp+88h] [rbp-140h] BYREF
  _OWORD v37[10]; // [rsp+90h] [rbp-138h] BYREF
  ULONG Size; // [rsp+130h] [rbp-98h] BYREF
  _WORD *v39; // [rsp+138h] [rbp-90h]
  void *v40; // [rsp+140h] [rbp-88h]
  _QWORD *v41; // [rsp+148h] [rbp-80h]
  _BYTE v42[48]; // [rsp+150h] [rbp-78h] BYREF

  v41 = a3;
  v36 = 0LL;
  v33 = 0LL;
  memset(v42, 0, sizeof(v42));
  memset(v37, 0, sizeof(v37));
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  *(_OWORD *)a4 = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess((__int64)a1));
  v29 = v7;
  *(_WORD *)(a4 + 8) = v7;
  KiStackAttachProcess(v8, 0LL, (__int64)v42, v9);
  if ( InitNlsSectionPointer
    && (v10 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v34, 0LL, 0LL, &v31, &v32, 1, 5242880, 2), v10 < 0)
    || (v35 = 0LL,
        v31 = 0LL,
        v32 = 0LL,
        v10 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v35, 0LL, 0LL, &v31, &v32, 1, 5242880, 2),
        v10 < 0)
    || (v10 = MiCreatePebOrTeb(0LL, 0LL, &v36), v10 < 0) )
  {
    KiUnstackDetachProcess((__int64)v42, 0);
    return (unsigned int)v10;
  }
  else
  {
    v12 = (void *)a1[164];
    v40 = v12;
    *(_QWORD *)((char *)v37 + 12) = 10LL;
    WORD4(v37[1]) = NtBuildNumber;
    DWORD1(v37[1]) = 2;
    v13 = CmNtCSDVersion;
    WORD5(v37[1]) = CmNtCSDVersion;
    *(_QWORD *)&v37[2] = qword_140CFB1B8;
    *((_QWORD *)&v37[2] + 1) = qword_140CFB1B0;
    *(_QWORD *)&v37[3] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    DWORD2(v37[3]) = NtGlobalFlag2;
    *(_QWORD *)&v37[4] = qword_140C4DE20;
    *((_QWORD *)&v37[4] + 1) = (unsigned int)dword_140CFB198;
    *(_QWORD *)&v37[5] = qword_140CFB1A8;
    *((_QWORD *)&v37[5] + 1) = qword_140CFB1A0;
    LOBYTE(v37[6]) = *(_BYTE *)a2;
    BYTE1(v37[6]) = *(_BYTE *)(a2 + 3);
    *((_QWORD *)&v37[6] + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v37[7] = v12;
    if ( v34 )
    {
      *((_QWORD *)&v37[8] + 1) = v34 + (unsigned int)InitUnicodeCaseTableDataOffset;
      if ( InitUnicodeCaseTableDataOffset )
      {
        *((_QWORD *)&v37[7] + 1) = v34 + (unsigned int)InitAnsiCodePageDataOffset;
        *(_QWORD *)&v37[8] = v34 + (unsigned int)InitOemCodePageDataOffset;
      }
      else
      {
        *((_QWORD *)&v37[7] + 1) = 0LL;
        *(_QWORD *)&v37[8] = 0LL;
      }
    }
    else
    {
      *((_QWORD *)&v37[7] + 1) = 0LL;
      v37[8] = 0LL;
    }
    if ( a1[171] )
      HIDWORD(v37[3]) = MmGetSessionId((__int64)a1);
    else
      HIDWORD(v37[3]) = 0;
    *(_QWORD *)&v37[9] = v35;
    DWORD2(v37[9]) = 0;
    Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage();
    v14 = RtlImageNtHeader(v12);
    v33 = v14;
    Characteristics = v14->FileHeader.Characteristics;
    v16 = RtlImageDirectoryEntryToData(v12, 1u, 0xAu, &Size);
    v17 = v16;
    v39 = v16;
    if ( v16 )
    {
      if ( ((unsigned __int8)v16 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = v33;
      v17 = v39;
      v13 = WORD5(v37[1]);
    }
    Subsystem = v14->OptionalHeader.Subsystem;
    LODWORD(v37[0]) = Subsystem;
    MajorSubsystemVersion = v14->OptionalHeader.MajorSubsystemVersion;
    DWORD1(v37[0]) = MajorSubsystemVersion;
    DWORD2(v37[0]) = v14->OptionalHeader.MinorSubsystemVersion;
    Win32VersionValue = v14->OptionalHeader.Win32VersionValue;
    if ( Win32VersionValue )
    {
      if ( v17 )
      {
        if ( v17[38] )
          v13 = v17[38];
        WORD5(v37[1]) = v13;
      }
      HIDWORD(v37[0]) = (unsigned __int8)Win32VersionValue;
      LODWORD(v37[1]) = BYTE1(Win32VersionValue);
      WORD4(v37[1]) = HIWORD(Win32VersionValue);
      DWORD1(v37[1]) = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
    }
    if ( v17 )
    {
      v21 = *((_QWORD *)v17 + 8);
      *(_QWORD *)a4 = v21;
      v22 = (v21 & KeQueryGroupAffinity(v29)) == v21;
      v23 = (_QWORD *)a4;
      if ( !v22 )
        *(_QWORD *)a4 = 0LL;
    }
    else
    {
      v23 = (_QWORD *)a4;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v24 = _InterlockedExchangeAdd(&dword_140C4DE1C, 1u) + 1;
      do
      {
        v25 = v24 & 0x3F;
        v26 = 1LL << v25;
        *v23 = 1LL << v25;
        v24 = v25 + 1;
        v22 = (KeQueryGroupAffinity(v29) & v26) == 0;
        v23 = (_QWORD *)a4;
      }
      while ( v22 );
      v14 = v33;
      v13 = WORD5(v37[1]);
      MajorSubsystemVersion = DWORD1(v37[0]);
      Subsystem = v37[0];
    }
    v27 = v36;
    *(_QWORD *)(v36 + 280) = *(_QWORD *)((char *)v37 + 12);
    *(_WORD *)(v27 + 288) = WORD4(v37[1]);
    *(_DWORD *)(v27 + 292) = DWORD1(v37[1]);
    *(_WORD *)(v27 + 290) = v13;
    *(_OWORD *)(v27 + 200) = v37[2];
    *(_DWORD *)(v27 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v27 + 188) = NtGlobalFlag;
    *(_DWORD *)(v27 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v27 + 192) = qword_140C4DE20;
    *(_QWORD *)(v27 + 792) = (unsigned int)dword_140CFB198;
    *(_QWORD *)(v27 + 216) = qword_140CFB1A8;
    *(_QWORD *)(v27 + 224) = qword_140CFB1A0;
    *(_DWORD *)(v27 + 704) = HIDWORD(v37[3]);
    *(_DWORD *)(v27 + 296) = Subsystem;
    *(_DWORD *)(v27 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v27 + 304) = DWORD2(v37[0]);
    *(_BYTE *)v27 = v37[6];
    *(_BYTE *)(v27 + 3) = BYTE1(v37[6]);
    *(_QWORD *)(v27 + 8) = *((_QWORD *)&v37[6] + 1);
    *(_QWORD *)(v27 + 16) = v40;
    *(_QWORD *)(v27 + 160) = *((_QWORD *)&v37[7] + 1);
    *(_OWORD *)(v27 + 168) = v37[8];
    *(_QWORD *)(v27 + 1976) = *(_QWORD *)&v37[9];
    *(_DWORD *)(v27 + 1984) = 0;
    if ( a1[176] && (v28 = MiInitializeWowPeb(v37, v14, a1, a4), v28 < 0) )
    {
      KiUnstackDetachProcess((__int64)v42, 0);
      return (unsigned int)v28;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v42, 0);
      *v41 = v27;
      return 0LL;
    }
  }
}
