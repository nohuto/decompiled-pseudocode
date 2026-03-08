/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x140690658
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E46E0 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpBuildNotificationPacket @ 0x14068ECF4 (EtwpBuildNotificationPacket.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1406934E8 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x140694C98 (EtwpGetSchematizedFilterSize.c)
 */

bool __fastcall EtwpCalculateUpdateNotification(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        char a6,
        int a7,
        _QWORD *a8)
{
  unsigned __int8 v9; // al
  char v10; // cl
  __int16 v11; // r14
  _OWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm0
  int SchematizedFilterSize; // eax
  _BYTE Source2[120]; // [rsp+28h] [rbp-59h] BYREF

  if ( a5 )
  {
    if ( a6 )
      v9 = *(_BYTE *)(a1 + 103);
    else
      v9 = *(_BYTE *)(a1 + 101);
    v10 = 0;
  }
  else if ( a6 )
  {
    v9 = *(_BYTE *)(a1 + 102);
    v10 = *(_BYTE *)(a1 + 100);
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 100);
    v10 = *(_BYTE *)(a1 + 102);
  }
  v11 = *(_WORD *)(a1 + 98) & 8;
  if ( v11 )
  {
    if ( v9 || a7 != 1 )
      goto LABEL_12;
    if ( a3 )
      goto LABEL_14;
    return 0;
  }
  if ( (a2 & a3) == 0 && (v9 & a2) == 0 )
    return 0;
  if ( a4 == v9 && a5 != 2 && !v10 && !*(_BYTE *)(a1 + 101) && !*(_BYTE *)(a1 + 103) )
  {
LABEL_12:
    *a8 = 0LL;
    return 1;
  }
LABEL_14:
  memset(Source2, 0, sizeof(Source2));
  v13 = (_OWORD *)*a8;
  v14 = *(_QWORD *)(a1 + 32);
  LOBYTE(v15) = *(_BYTE *)(a1 + 100);
  *(_OWORD *)Source2 = *(_OWORD *)*a8;
  *(_OWORD *)&Source2[16] = v13[1];
  *(_OWORD *)&Source2[32] = v13[2];
  *(_OWORD *)&Source2[48] = v13[3];
  *(_QWORD *)&Source2[64] = *((_QWORD *)v13 + 8);
  v16 = *(_OWORD *)(v14 + 40);
  *(_QWORD *)&Source2[4] = 0x100000078LL;
  *(_OWORD *)&Source2[40] = v16;
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(v14, v15);
  if ( SchematizedFilterSize )
    *(_DWORD *)&Source2[4] = SchematizedFilterSize + 136;
  EtwpComputeRegEntryEnableInfo(a1, &Source2[72]);
  if ( v11 )
  {
    *(_QWORD *)&Source2[104] = 0LL;
    *(_DWORD *)&Source2[112] = 0;
  }
  if ( v13 )
  {
    if ( *((_DWORD *)v13 + 1) != *(_DWORD *)&Source2[4] || RtlCompareMemory(v13, Source2, 0x78uLL) != 120 )
      *a8 = 0LL;
    if ( *a8 )
      return 1;
  }
  return (int)EtwpBuildNotificationPacket(*(_QWORD *)(a1 + 32), Source2, *(_BYTE *)(a1 + 100), a8) >= 0;
}
