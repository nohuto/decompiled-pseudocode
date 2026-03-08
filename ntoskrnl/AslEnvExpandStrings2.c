/*
 * XREFs of AslEnvExpandStrings2 @ 0x140A54280
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     AslEnvExpandStrings @ 0x140A540A8 (AslEnvExpandStrings.c)
 *     AslpEnvResolveVars @ 0x140A54B80 (AslpEnvResolveVars.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslEnvExpandStrings2(
        __int64 a1,
        const wchar_t *a2,
        _WORD *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  wchar_t *v10; // rsi
  void *v11; // rdi
  int v12; // ebx
  _QWORD *v13; // r15
  __int16 v14; // r13
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v8 = -1LL;
  LODWORD(v20) = 0;
  v9 = -1LL;
  v10 = (wchar_t *)a2;
  v11 = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = a7;
  if ( (unsigned int)AslpEnvResolveVars(a2, a6, a7, (__int64)&v20) != -1073741789 )
  {
    v16 = -1073741595;
LABEL_9:
    AslLogCallPrintf(1LL);
    return v16;
  }
  if ( v12 != (_DWORD)v20 )
  {
    v11 = AslAlloc(v15, 2LL * (unsigned int)v20);
    if ( !v11 )
    {
      v16 = -1073741801;
      goto LABEL_9;
    }
    v17 = -1LL;
    do
      ++v17;
    while ( v10[v17] );
    v16 = AslpEnvResolveVars(v10, a6, v14, (__int64)&v20);
    if ( (v16 & 0x80000000) != 0 )
    {
      AslLogCallPrintf(1LL);
LABEL_23:
      ExFreePoolWithTag(v11, 0x74705041u);
      return v16;
    }
    v10 = (wchar_t *)v11;
  }
  do
    ++v8;
  while ( v10[v8] );
  v16 = AslEnvExpandStrings(a1, v10, v8, a3, v21, v13);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741789 )
    AslLogCallPrintf(1LL);
  if ( v11 )
    goto LABEL_23;
  return v16;
}
