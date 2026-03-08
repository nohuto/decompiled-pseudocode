/*
 * XREFs of RtlCreateRetpolineStubsFunctionTable @ 0x1405AFD28
 * Callers:
 *     MiInitializeRetpoline @ 0x140B39F78 (MiInitializeRetpoline.c)
 * Callees:
 *     RtlCalculateUnwindInfoSizeForRetpoline @ 0x1405AFB94 (RtlCalculateUnwindInfoSizeForRetpoline.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1405AFE24 (RtlpGetRetpolineStubsFunctionTable.c)
 */

__int64 __fastcall RtlCreateRetpolineStubsFunctionTable(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rbp
  _DWORD *RetpolineStubsFunctionTable; // r14
  __int64 result; // rax
  unsigned int v7; // ebx
  int v8; // esi
  _DWORD *v9; // r15
  __int64 v10; // r12
  int v11; // ecx
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]

  v13 = HIDWORD(a1);
  v3 = PsNtosImageBase;
  v12 = 0;
  RetpolineStubsFunctionTable = (_DWORD *)RtlpGetRetpolineStubsFunctionTable(
                                            PsNtosImageBase,
                                            PsNtosImageBase,
                                            (_DWORD)a2,
                                            a3,
                                            (__int64)&v12);
  if ( !RetpolineStubsFunctionTable )
    return 3221226021LL;
  v7 = v12;
  if ( v12 > 0x32 )
    return 2147483653LL;
  v8 = (_DWORD)a2 + *a2;
  if ( v12 )
  {
    v9 = &unk_140E01AD4;
    v10 = v12;
    do
    {
      v11 = v3 + RetpolineStubsFunctionTable[1];
      *(v9 - 1) = v3 + *RetpolineStubsFunctionTable - (_DWORD)a2;
      *v9 = v11 - (_DWORD)a2;
      v9[1] = v8 - (_DWORD)a2;
      v9 += 3;
      v8 += RtlCalculateUnwindInfoSizeForRetpoline(v3, (__int64)RetpolineStubsFunctionTable, 0LL);
      RetpolineStubsFunctionTable += 3;
      --v10;
    }
    while ( v10 );
  }
  RtlRetpolineStubsFunctionTableSize = 12 * v7;
  dword_140C02510 = 12 * v7;
  result = 0LL;
  qword_140C02508 = (__int64)&RtlRetpolineStubsFunctionTable;
  return result;
}
