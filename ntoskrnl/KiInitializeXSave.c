/*
 * XREFs of KiInitializeXSave @ 0x140A8CAA0
 * Callers:
 *     KiSystemStartup @ 0x140A84010 (KiSystemStartup.c)
 * Callees:
 *     KiGetIptInfo @ 0x140397F50 (KiGetIptInfo.c)
 *     KiGetXSaveSupportedFeatures @ 0x140398050 (KiGetXSaveSupportedFeatures.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiIntersectFeaturesWithLoader @ 0x140A8CD54 (KiIntersectFeaturesWithLoader.c)
 *     KiParseLoadOptions @ 0x140A8CDAC (KiParseLoadOptions.c)
 *     KiUpdateXSaveSizeAndVolatileFeatures @ 0x140A8CE64 (KiUpdateXSaveSizeAndVolatileFeatures.c)
 *     KiIntersectFeaturesWithPolicy @ 0x140A8D294 (KiIntersectFeaturesWithPolicy.c)
 */

__int64 __fastcall KiInitializeXSave(__int64 a1, int a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rdx
  char v6; // al
  ULONG_PTR *v7; // rax
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  unsigned int v11; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1[106]; // [rsp+40h] [rbp-C0h] BYREF

  BugCheckParameter3[0] = 0LL;
  if ( !a2 )
    KiParseLoadOptions(*(_QWORD *)(a1 + 216));
  memset(BugCheckParameter1, 0, 0x348uLL);
  KiGetXSaveSupportedFeatures((__int64)BugCheckParameter1);
  KiGetIptInfo((_DWORD *)BugCheckParameter3 + 1, BugCheckParameter3);
  if ( a2 )
  {
    if ( (BugCheckParameter1[0] & MEMORY[0xFFFFF780000003D8]) != MEMORY[0xFFFFF780000003D8]
      || (BugCheckParameter1[67] & MEMORY[0xFFFFF780000005F0]) != MEMORY[0xFFFFF780000005F0]
      || (BugCheckParameter1[103] & MEMORY[0xFFFFF78000000710]) != MEMORY[0xFFFFF78000000710]
      || (BugCheckParameter1[2] & 0x100000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 1) != 0
      || (BugCheckParameter1[2] & 0x200000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 2) != 0
      || (BugCheckParameter1[2] & 0x400000000LL) == 0 && (MEMORY[0xFFFFF780000003EC] & 4) != 0 )
    {
      KeBugCheckEx(0x3Eu, (ULONG_PTR)BugCheckParameter1, 0xFFFFF780000003D8uLL, 1uLL, 0LL);
    }
    result = BugCheckParameter3[0] & (unsigned int)KiIptMsrMask;
    if ( (_DWORD)result != (_DWORD)KiIptMsrMask )
      KeBugCheckEx(
        0x3Eu,
        (unsigned int)KiIptSaveAreaLength,
        (unsigned int)KiIptMsrMask,
        HIDWORD(BugCheckParameter3[0]),
        LODWORD(BugCheckParameter3[0]));
  }
  else
  {
    KiIntersectFeaturesWithLoader(a1, BugCheckParameter1);
    KiIntersectFeaturesWithPolicy(a1, BugCheckParameter1);
    v5 = BugCheckParameter1[0];
    if ( KeTestRemovedFeatureMask )
    {
      v5 = ~KeTestRemovedFeatureMask & BugCheckParameter1[0];
      BugCheckParameter1[67] &= ~KeTestRemovedFeatureMask;
      BugCheckParameter1[0] = v5;
    }
    v6 = BYTE4(BugCheckParameter1[2]);
    if ( KeTestDisableXSave )
    {
      v5 = 0LL;
      BugCheckParameter1[67] = 0LL;
      v6 = BYTE4(BugCheckParameter1[2]) & 0xF8;
      BugCheckParameter1[0] = 0LL;
      HIDWORD(BugCheckParameter1[2]) &= 0xFFFFFFF8;
    }
    if ( (v5 & 0x40000) != 0 )
    {
      if ( (v6 & 2) != 0 && (v6 & 4) != 0 )
        v5 &= LODWORD(BugCheckParameter1[103]) | 0xFFFFFFFFFFFBFFFFuLL;
      else
        v5 &= ~0x40000uLL;
      BugCheckParameter1[0] = v5;
    }
    if ( (((unsigned __int8)(v5 >> 17) ^ (unsigned __int8)(v5 >> 18)) & 1) != 0 )
      BugCheckParameter1[0] = v5 & 0xFFFFFFFFFFF9FFFFuLL;
    KiUpdateXSaveSizeAndVolatileFeatures(BugCheckParameter1);
    v7 = BugCheckParameter1;
    v8 = 6LL;
    v9 = (_OWORD *)(MmWriteableSharedUserData + 984);
    do
    {
      *v9 = *(_OWORD *)v7;
      v9[1] = *((_OWORD *)v7 + 1);
      v9[2] = *((_OWORD *)v7 + 2);
      v9[3] = *((_OWORD *)v7 + 3);
      v9[4] = *((_OWORD *)v7 + 4);
      v9[5] = *((_OWORD *)v7 + 5);
      v9[6] = *((_OWORD *)v7 + 6);
      v9 += 8;
      v10 = *((_OWORD *)v7 + 7);
      v7 += 16;
      *(v9 - 1) = v10;
      --v8;
    }
    while ( v8 );
    *v9 = *(_OWORD *)v7;
    v9[1] = *((_OWORD *)v7 + 1);
    v9[2] = *((_OWORD *)v7 + 2);
    v9[3] = *((_OWORD *)v7 + 3);
    *((_QWORD *)v9 + 8) = v7[8];
    KeEnabledSupervisorXStateFeatures = BugCheckParameter1[67];
    if ( BugCheckParameter1[0] )
    {
      KeXStateLength = MEMORY[0xFFFFF78000000600];
      KiXSaveAreaLengthFull = MEMORY[0xFFFFF78000000600];
      KiXSaveAreaLength = MEMORY[0xFFFFF78000000718];
    }
    if ( (BugCheckParameter1[0] & 0x40000) != 0 )
    {
      v11 = (MEMORY[0xFFFFF78000000600] + 63) & 0xFFFFFFC0;
      LODWORD(KeDecoupledStateSaveAreaLength) = v11;
      if ( v11 > 0x3000 )
        KeBugCheckEx(0x131u, 5uLL, v11, 0x3000uLL, 0LL);
    }
    result = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(result + 2872) & 0x20) != 0 )
    {
      KiXSaveAreaLength += HIDWORD(BugCheckParameter3[0]);
      result = LODWORD(BugCheckParameter3[0]);
      KiXSaveAreaLengthFull += HIDWORD(BugCheckParameter3[0]);
      LODWORD(KiIptSaveAreaLength) = HIDWORD(BugCheckParameter3[0]);
      LODWORD(KiIptMsrMask) = BugCheckParameter3[0];
    }
  }
  return result;
}
