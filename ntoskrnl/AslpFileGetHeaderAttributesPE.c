/*
 * XREFs of AslpFileGetHeaderAttributesPE @ 0x140A55BD4
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407A11E8 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407A12F0 (AslFileMappingEnsure.c)
 *     AslpFileGetNtHeaderAttributes @ 0x140A55F28 (AslpFileGetNtHeaderAttributes.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesPE(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // edi
  int NtHeaderAttributes; // eax
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // esi
  int v11; // r14d
  int v12; // r15d
  int v13; // edx
  int v14; // ecx
  int v15; // r10d
  int v16; // r11d
  int v17; // esi
  int v18; // r14d
  int v19; // r15d
  __int64 v20; // rax
  _WORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v23; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v24; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+64h] [rbp-Ch] BYREF
  unsigned __int16 v28; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v29; // [rsp+C8h] [rbp+58h] BYREF

  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v22[0] = 0;
  v23 = 0;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 >= 0 )
  {
    v5 = 2;
    if ( *(_DWORD *)(a2 + 64) == 6 )
    {
      *(_DWORD *)(a1 + 664) |= 2u;
      *(_DWORD *)(a1 + 696) |= 2u;
      NtHeaderAttributes = AslpFileGetNtHeaderAttributes(
                             (unsigned int)&v24,
                             (unsigned int)&v25,
                             (unsigned int)&v26,
                             (unsigned int)&v27,
                             (__int64)&v28,
                             (__int64)&v29,
                             (__int64)v22,
                             (__int64)&v23,
                             a2);
      v7 = *(_DWORD *)(a1 + 600);
      v8 = *(_DWORD *)(a1 + 632);
      v9 = *(_DWORD *)(a1 + 728);
      v10 = *(_DWORD *)(a1 + 56);
      v11 = *(_DWORD *)(a1 + 952);
      v12 = *(_DWORD *)(a1 + 984);
      v13 = *(_DWORD *)(a1 + 1080);
      if ( NtHeaderAttributes < 0 )
      {
        v15 = v8 | 2;
        v16 = v9 | 2;
        *(_DWORD *)(a1 + 600) = v7 | 2;
        v17 = v10 | 2;
        v18 = v11 | 2;
        v19 = v12 | 2;
        v14 = 2;
      }
      else
      {
        *(_QWORD *)(a1 + 592) = v24;
        *(_QWORD *)(a1 + 624) = v25;
        v14 = 1;
        *(_QWORD *)(a1 + 720) = v26;
        v15 = v8 | 1;
        *(_QWORD *)(a1 + 48) = v27;
        v16 = v9 | 1;
        v17 = v10 | 1;
        *(_QWORD *)(a1 + 944) = v28;
        v18 = v11 | 1;
        v19 = v12 | 1;
        *(_QWORD *)(a1 + 976) = v29;
        *(_QWORD *)(a1 + 1008) = v22[0];
        v20 = v23;
        *(_DWORD *)(a1 + 576) = 2;
        *(_DWORD *)(a1 + 608) = 2;
        *(_DWORD *)(a1 + 704) = 2;
        *(_DWORD *)(a1 + 32) = 2;
        *(_QWORD *)(a1 + 936) = 2LL;
        *(_QWORD *)(a1 + 968) = 2LL;
        *(_QWORD *)(a1 + 1000) = 2LL;
        *(_QWORD *)(a1 + 1064) = 2LL;
        v5 = 1;
        *(_QWORD *)(a1 + 1072) = v20;
        *(_QWORD *)(a1 + 584) = 4LL;
        *(_DWORD *)(a1 + 600) = v7 | 1;
        *(_QWORD *)(a1 + 616) = 4LL;
        *(_QWORD *)(a1 + 712) = 4LL;
        *(_QWORD *)(a1 + 40) = 4LL;
        *(_DWORD *)(a1 + 928) = 1;
        *(_DWORD *)(a1 + 960) = 1;
        *(_DWORD *)(a1 + 992) = 1;
        *(_DWORD *)(a1 + 1056) = 1;
      }
      *(_DWORD *)(a1 + 632) = v15;
      *(_DWORD *)(a1 + 984) = v19;
      *(_DWORD *)(a1 + 952) = v18;
      *(_DWORD *)(a1 + 56) = v17;
      *(_DWORD *)(a1 + 728) = v16;
      *(_DWORD *)(a1 + 1016) |= v5;
      *(_DWORD *)(a1 + 1080) = v14 | v13;
    }
    else
    {
      *(_DWORD *)(a1 + 600) |= 2u;
      *(_DWORD *)(a1 + 632) |= 2u;
      *(_DWORD *)(a1 + 728) |= 2u;
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_DWORD *)(a1 + 1016) |= 2u;
      *(_DWORD *)(a1 + 952) |= 2u;
      *(_DWORD *)(a1 + 984) |= 2u;
      *(_DWORD *)(a1 + 1080) |= 2u;
    }
    return 0;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v4;
}
