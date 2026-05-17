/*
 * XREFs of RtlpConvertLCIDsToCultureNames @ 0x1800F0200
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800F1100 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpMultiSZCchLength @ 0x18003EF8C (LdrpMultiSZCchLength.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     wcsnlen @ 0x1800925F0 (wcsnlen.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF5A8 (RtlUnicodeStringToLcid.c)
 */

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, __int64 *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r14d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // r15
  _DWORD *v9; // r12
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned __int64 v12; // rbx
  unsigned int v14; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v15; // [rsp+24h] [rbp-DCh]
  int v16; // [rsp+28h] [rbp-D8h] BYREF
  void *Src; // [rsp+30h] [rbp-D0h]
  __int64 v18; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v21; // [rsp+60h] [rbp-A0h] BYREF

  v15 = 0;
  v3 = SourceString;
  v4 = 0;
  v5 = 0;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v14) < 0 )
    return 3221225485LL;
  v6 = 2 * v14;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v14 *= 2;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 680LL);
  v9 = (_DWORD *)Heap;
  while ( 1 )
  {
    if ( !*v3 || !v6 )
    {
LABEL_16:
      *v9 = 0;
      goto LABEL_17;
    }
    if ( v4 >= 4 )
      goto LABEL_20;
    v18 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)v6 >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    if ( (int)RtlUnicodeStringToLcid(&DestinationString.Length, &v20[v4]) < 0 )
      goto LABEL_20;
    v10 = v20[v4];
    Src = &v21;
    v16 = 11141120;
    if ( !RtlLCIDToCultureName(v10, (__int64)&v16) )
      goto LABEL_20;
    v11 = 0;
    if ( v4 )
      break;
LABEL_14:
    v15 += v16 + 2;
    if ( v15 >= 0x2A7u )
    {
      v5 = -1073741595;
      goto LABEL_21;
    }
    v12 = (unsigned __int16)v16;
    memmove(v9, Src, (unsigned __int16)v16 + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v18 + 2);
    v14 += -2 - v18;
    v9 = (_DWORD *)((char *)v9 + 2 * (v12 >> 1) + 2);
    v6 = v14;
    if ( !v3 )
      goto LABEL_16;
  }
  while ( v10 != v20[v11] )
  {
    if ( ++v11 >= v4 )
      goto LABEL_14;
  }
LABEL_20:
  v5 = -1073741811;
LABEL_21:
  if ( !Heap )
  {
LABEL_17:
    *a2 = Heap;
    return v5;
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v5;
}
