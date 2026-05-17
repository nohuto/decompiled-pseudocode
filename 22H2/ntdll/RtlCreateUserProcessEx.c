/*
 * XREFs of RtlCreateUserProcessEx @ 0x180088F40
 * Callers:
 *     RtlCreateUserProcess @ 0x1800E1830 (RtlCreateUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x180089000 (RtlpCreateUserProcess.c)
 *     RtlNormalizeProcessParams @ 0x1800892E0 (RtlNormalizeProcessParams.c)
 */

__int64 __fastcall RtlCreateUserProcessEx(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  int v7; // edi
  __int64 v8; // rax
  int v9; // edx
  int v10; // r9d
  int v11; // ecx
  int v12; // edx
  int v13; // r8d

  v7 = a1;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v8 = RtlNormalizeProcessParams(a2);
  if ( !v8 )
    return 3221225485LL;
  v9 = 0;
  if ( a3 )
    v9 = 4;
  else
    *(_QWORD *)(v8 + 72) = 0LL;
  v10 = *(_DWORD *)(v8 + 8);
  v11 = v9 | 0x80;
  if ( (v10 & 0x40000) == 0 )
    v11 = v9;
  v12 = v11 | 0x40;
  if ( (v10 & 0x400000) == 0 )
    v12 = v11;
  v13 = v12 | 0x40000;
  if ( (v10 & 0x800000) == 0 )
    v13 = v12;
  return RtlpCreateUserProcess(v7, v8, v13, 1, a4, a5);
}
