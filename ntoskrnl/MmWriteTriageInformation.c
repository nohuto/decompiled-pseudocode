/*
 * XREFs of MmWriteTriageInformation @ 0x14062E4BC
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x14054DAD0 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140303E90 (RtlGetNtProductType.c)
 *     ExVerifySuite @ 0x1403A1420 (ExVerifySuite.c)
 */

__int64 __fastcall MmWriteTriageInformation(_OWORD *a1, __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-50h]
  __int128 v6; // [rsp+30h] [rbp-40h]
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-20h]
  __int128 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+80h] [rbp+10h] BYREF

  v10 = 0;
  v3 = VerifierTriageActionTaken;
  *(_QWORD *)&v5 = 0x5000000001LL;
  DWORD2(v5) = MmSpecialPoolTag;
  RtlGetNtProductType(&v10, a2);
  if ( v10 != 1 || ExVerifySuite(EmbeddedNT) || ExVerifySuite(EmbeddedRestricted) || ExVerifySuite(SecurityAppliance) )
    v3 |= 0x80000000;
  LODWORD(v6) = MmVerifierData;
  HIDWORD(v5) = v3;
  DWORD1(v6) = ((unsigned int)MiFlags >> 1) & 1;
  *((_QWORD *)&v6 + 1) = qword_140C695B0;
  *(_QWORD *)&v7 = qword_140C65108;
  *((_QWORD *)&v7 + 1) = qword_140C695B8;
  *(_QWORD *)&v8 = qword_140C695A8;
  *((_QWORD *)&v8 + 1) = qword_140C6F568;
  *(_QWORD *)&v9 = qword_140C6F0C0;
  result = qword_140C6F0C8;
  *a1 = v5;
  *((_QWORD *)&v9 + 1) = result;
  a1[1] = v6;
  a1[2] = v7;
  a1[3] = v8;
  a1[4] = v9;
  return result;
}
