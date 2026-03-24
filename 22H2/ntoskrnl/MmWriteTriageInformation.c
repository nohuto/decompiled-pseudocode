/*
 * XREFs of MmWriteTriageInformation @ 0x140538CFC
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x140501A40 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14031B310 (RtlGetNtProductType.c)
 *     ExVerifySuite @ 0x1403AA560 (ExVerifySuite.c)
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
  *((_QWORD *)&v6 + 1) = qword_140C4EF30;
  *(_QWORD *)&v7 = qword_140C4C8C8;
  *((_QWORD *)&v7 + 1) = qword_140C4EF38;
  *(_QWORD *)&v8 = qword_140C4EF28;
  *((_QWORD *)&v8 + 1) = qword_140C52AA8;
  *(_QWORD *)&v9 = qword_140C525C0;
  result = qword_140C525C8;
  *a1 = v5;
  *((_QWORD *)&v9 + 1) = result;
  a1[1] = v6;
  a1[2] = v7;
  a1[3] = v8;
  a1[4] = v9;
  return result;
}
