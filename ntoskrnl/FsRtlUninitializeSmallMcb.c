/*
 * XREFs of FsRtlUninitializeSmallMcb @ 0x140B10540
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 */

__int64 __fastcall FsRtlUninitializeSmallMcb(__int64 a1)
{
  __int64 CompleteDev; // rax
  __int64 (__fastcall *v2)(); // rdx
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD, unsigned __int64); // r8
  __int64 v5; // r10
  __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  CompleteDev = FsRtlMdlReadCompleteDevEx(a1);
  if ( *(_QWORD *)(CompleteDev + 2048) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(CompleteDev + 624))(CompleteDev + 2048, 0LL);
  v2 = (__int64 (__fastcall *)())CompleteDev;
  v3 = *(_QWORD *)(CompleteDev + 1992);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64))(CompleteDev + 248);
  v5 = *(unsigned int *)(CompleteDev + 2020);
  v6 = *(_QWORD *)(CompleteDev + 2000);
  v7 = (unsigned __int64)&v12 ^ v3;
  do
  {
    v8 = *(_QWORD *)v2 ^ v7;
    *(_QWORD *)v2 = v8;
    v7 = __ROR8__(v8, 3);
    v2 = (__int64 (__fastcall *)())((char *)v2 + 8);
  }
  while ( (unsigned __int64)v2 < (unsigned __int64)FsRtlUninitializeSmallMcb );
  v9 = (unsigned __int64 *)&loc_140B105C6;
  do
  {
    v10 = *v9 ^ v7;
    *v9 = v10;
    v7 = __ROR8__(v10, 5);
    ++v9;
  }
  while ( (unsigned __int64)v9 < CompleteDev + v5 - 7 );
  return v4(v3, v6, v4, v7);
}
