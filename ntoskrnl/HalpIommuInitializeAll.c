/*
 * XREFs of HalpIommuInitializeAll @ 0x140A8DA7C
 * Callers:
 *     HalpIommuInitSystem @ 0x140A86E10 (HalpIommuInitSystem.c)
 *     HalpInterruptReinitialize @ 0x140A923CC (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpInterruptIsRemappingRequired @ 0x14028EDCC (HalpInterruptIsRemappingRequired.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     HalpGetIrtEntryCount @ 0x1403031BC (HalpGetIrtEntryCount.c)
 *     HalpMmAllocateMemory @ 0x14037A380 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403A489C (HalpIommuPopulateExceptionList.c)
 *     HalpIommuConfigureInterrupt @ 0x1403A4968 (HalpIommuConfigureInterrupt.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x1403A4AA4 (HalpIommuUpdatePageWalkCapability.c)
 *     HalpIommuUpdatePageTableLevel @ 0x1403A4AE8 (HalpIommuUpdatePageTableLevel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HviGetHardwareFeatures @ 0x140612F60 (HviGetHardwareFeatures.c)
 *     HalpIommuConstructReservedPageTables @ 0x140A8786C (HalpIommuConstructReservedPageTables.c)
 */

__int64 __fastcall HalpIommuInitializeAll(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  ULONG_PTR *v8; // r14
  _QWORD *v9; // rbx
  __int64 result; // rax
  ULONG_PTR *v11; // rdi
  __int64 v12; // r12
  int v13; // eax
  int v14; // ebx
  char v15; // al
  __int64 *v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // rdx
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // ebx
  __int64 Memory; // rax
  __int128 v23; // [rsp+30h] [rbp-40h] BYREF
  __int128 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h]
  __int128 v26; // [rsp+58h] [rbp-18h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !a1 && (int)HalpIommuPopulateExceptionList() < 0 )
    return 3221225473LL;
  if ( !HalpHvIommu )
  {
    if ( (ULONG_PTR *)HalpIommuList == &HalpIommuList && IommuRemappingPolicy )
      return 3221225659LL;
    v6 = 0;
    v7 = 0x10000LL;
LABEL_6:
    v8 = (ULONG_PTR *)HalpIommuList;
    while ( 1 )
    {
      if ( v8 == &HalpIommuList )
      {
        if ( ++v6 >= 3 )
        {
          HalpIommuUpdatePageWalkCapability();
          HalpIommuUpdatePageTableLevel();
          if ( HalpIommuMaxPageTableDepth )
          {
            v15 = 12;
            v16 = DmarCommonPageTableBits;
            HalpIommuDomainMaxInputBitWidth = 12;
            v17 = (unsigned int)HalpIommuMaxPageTableDepth;
            do
            {
              v15 += *(_BYTE *)v16;
              v16 = (__int64 *)((char *)v16 + 4);
              --v17;
            }
            while ( v17 );
            goto LABEL_23;
          }
          return 0LL;
        }
        goto LABEL_6;
      }
      v11 = v8;
      v12 = (__int64)v8;
      v8 = (ULONG_PTR *)*v8;
      v13 = *((_DWORD *)v11 + 122);
      if ( (v13 & 0x40) == 0 && IommuRemappingPolicy )
        return 3221225659LL;
      v14 = (v11[61] & 0x20) != 0;
      if ( (v13 & 0x100) != 0 )
      {
        if ( !v6 && !a1 )
        {
          v21 = *((_DWORD *)v11 + 114);
          if ( v21 > 0x10000 )
            v21 = 0x10000;
          Memory = HalpMmAllocateMemory(4 * ((v21 + 32) >> 5));
          *((_DWORD *)v11 + 118) = v21;
          v11[60] = Memory;
          RtlClearAllBits((PRTL_BITMAP)(v11 + 59));
          v11[58] = 0LL;
        }
        v14 = (HalpIommuPolicy == 3) + 1;
      }
      else if ( (v13 & 0x20) == 0 && !IommuRemappingPolicy )
      {
        goto LABEL_10;
      }
      if ( !v6 )
        break;
      v9 = v11 + 2;
      if ( v6 < 2 )
        goto LABEL_9;
      if ( v11[38] )
      {
        if ( a1 )
        {
          if ( (v11[49] & 2) != 0 )
          {
            LOBYTE(v7) = 1;
            result = ((__int64 (__fastcall *)(_QWORD, __int64, ULONG_PTR, _QWORD))v11[35])(
                       *v9,
                       v7,
                       v11[64],
                       *((unsigned int *)v11 + 130));
            if ( (int)result < 0 )
              return result;
          }
          ((void (__fastcall *)(_QWORD, __int64))v11[36])(*v9, v7);
        }
        else
        {
          *((_QWORD *)&v23 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
          *(_QWORD *)&v23 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
          if ( !HalpInterruptIsRemappingRequired() || (v20 = 6, (v11[61] & 0x10) != 0) )
            v20 = 1073741822;
          HalpIommuConfigureInterrupt(v12, v20, &v23);
        }
      }
LABEL_10:
      v7 = 0x10000LL;
    }
    if ( !a1 )
    {
      v18 = (_DWORD *)v11[69];
      if ( v18 )
      {
        v19 = *((_DWORD *)v11 + 122);
        if ( (v19 & 0x100) != 0
          && ((int)HalpIommuConstructReservedPageTables(a2, v18, (unsigned int)((unsigned __int16)v19 >> 13) + 1) < 0
           || ((int (__fastcall *)(ULONG_PTR, _QWORD, ULONG_PTR))v11[44])(v11[2], *(unsigned int *)v11[69], v11[69] + 8) < 0) )
        {
          return 3221225473LL;
        }
      }
    }
    *(_QWORD *)&v24 = 0LL;
    HIDWORD(v25) = 0;
    *((_QWORD *)&v24 + 1) = __PAIR64__(IommuRemappingPolicy, v14);
    LODWORD(v25) = HalpGetIrtEntryCount();
    v9 = v11 + 2;
    if ( ((int (__fastcall *)(ULONG_PTR, __int128 *))v11[7])(v11[2], &v24) < 0 )
      return 3221225473LL;
LABEL_9:
    LOBYTE(a3) = a1;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v11[8])(*v9, v6, a3);
    if ( (int)result < 0 )
      return result;
    goto LABEL_10;
  }
  if ( HalpHvCpuManager )
  {
    HviGetHardwareFeatures((__int64)&v26, a2, a3, a4);
    v15 = BYTE4(v26);
    if ( BYTE4(v26) )
LABEL_23:
      HalpIommuDomainMaxInputBitWidth = v15;
  }
  return 0LL;
}
