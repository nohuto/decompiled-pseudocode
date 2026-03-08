/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x140A55198
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407A11E8 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x140303F60 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403ABF40 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x140A51A4C (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksum @ 0x140A550AC (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x140A556A4 (AslpFileGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  int Checksum; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  _OWORD v9[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h]
  unsigned int v11; // [rsp+88h] [rbp+18h] BYREF

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( !*(_DWORD *)(a2 + 84) )
  {
    Checksum = AslFileMappingEnsureMappedAs(a2);
    if ( (int)(Checksum + 0x80000000) >= 0 && Checksum != -1073741554 )
      goto LABEL_5;
    v5 = (_QWORD *)(a2 + 8);
    if ( Checksum == -1073741554 )
    {
      *(_QWORD *)&v9[0] = *v5;
      Checksum = RtlFileMapMapView((__int64)v9, 0);
      if ( Checksum < 0 )
      {
LABEL_5:
        AslLogCallPrintf(1LL);
        goto LABEL_12;
      }
      v5 = v9;
    }
    v11 = 0;
    Checksum = AslpFileGetChecksum(&v11, (__int64)v5);
    if ( Checksum >= 0 )
    {
      v6 = v11;
      *(_DWORD *)(a1 + 88) |= 1u;
      v11 = 0;
      *(_QWORD *)(a1 + 80) = v6;
      *(_DWORD *)(a1 + 64) = 2;
      *(_QWORD *)(a1 + 72) = 4LL;
      Checksum = AslpFileGetCrcChecksum(&v11, v5);
      if ( Checksum >= 0 )
      {
        v7 = v11;
        *(_DWORD *)(a1 + 856) |= 1u;
        *(_QWORD *)(a1 + 848) = v7;
        Checksum = 0;
        *(_DWORD *)(a1 + 832) = 2;
        *(_QWORD *)(a1 + 840) = 4LL;
        goto LABEL_12;
      }
    }
    goto LABEL_5;
  }
  AslLogCallPrintf(1LL);
  *(_DWORD *)(a1 + 88) |= 2u;
  Checksum = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
LABEL_12:
  RtlFileMapFree((__int64)v9);
  return (unsigned int)Checksum;
}
