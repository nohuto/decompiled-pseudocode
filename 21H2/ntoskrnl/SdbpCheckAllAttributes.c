/*
 * XREFs of SdbpCheckAllAttributes @ 0x1407B219C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140754680 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     SdbpCheckAttribute @ 0x1407B23DC (SdbpCheckAttribute.c)
 *     AslFileAllocAndGetAttributes @ 0x1407B2664 (AslFileAllocAndGetAttributes.c)
 *     SdbReadQWORDTag @ 0x1407B3BC0 (SdbReadQWORDTag.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int Attributes; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  char *v10; // rbp
  unsigned int v11; // r13d
  int *v12; // r12
  __int16 v13; // bx
  unsigned int FirstTag; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  __int64 *p_QWORDTag; // r14
  int v22; // ecx
  unsigned int v23; // r15d
  __int64 StringTagPtr; // rax
  __int64 v25; // rcx
  void (__fastcall *v26)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  BOOL v27; // eax
  int DWORDTag; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v35; // [rsp+B0h] [rbp+28h]

  Attributes = 0;
  DWORDTag = 0;
  v7 = a4;
  QWORDTag = 0LL;
  v8 = a3;
  *a1 = 0;
  v9 = 1;
  v29 = 1;
  if ( !a5 )
    return Attributes;
  if ( *(_DWORD *)(a5 + 80) )
  {
    v27 = *(_QWORD *)(a5 + 32) != 0LL;
    goto LABEL_34;
  }
  if ( !*(_QWORD *)(a5 + 8) )
  {
    v27 = 0;
LABEL_34:
    if ( !v27 )
      return Attributes;
  }
  v10 = (char *)AslAlloc((__int64)a1, 0x460uLL);
  if ( !v10 )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = (int *)&unk_140C12364;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v35 = v13;
    FirstTag = SdbFindFirstTag(v8, v7, v13);
    if ( !FirstTag )
      goto LABEL_7;
    p_QWORDTag = 0LL;
    v22 = v13 & 0xF000;
    v23 = 0;
    switch ( v22 )
    {
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_QWORDTag = &QWORDTag;
        v23 = 8;
        break;
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0LL, v16);
        p_QWORDTag = (__int64 *)&DWORDTag;
        v23 = 4;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v15, v16);
        v25 = -1LL;
        p_QWORDTag = (__int64 *)StringTagPtr;
        do
          ++v25;
        while ( *(_WORD *)(StringTagPtr + 2 * v25) );
        v23 = 2 * v25 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(v10, a5, 1LL << *v12);
    if ( (Attributes & 0x80000000) != 0 )
      break;
    if ( (*(_DWORD *)&v10[32 * *v12 + 24] & 1) == 0 )
      goto LABEL_9;
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v29, v35, (_DWORD)p_QWORDTag, v23, (__int64)&v10[32 * *v12]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1LL);
      goto LABEL_10;
    }
    v9 = v29;
    v26 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 1744);
    if ( v26 )
      v26(v35, p_QWORDTag, v23, v29);
    if ( !v9 )
    {
LABEL_8:
      *a1 = v9;
LABEL_9:
      Attributes = 0;
      goto LABEL_10;
    }
    v8 = a3;
    v7 = a4;
LABEL_7:
    ++v11;
    v12 += 2;
    if ( v11 >= 0x26 )
      goto LABEL_8;
  }
  AslLogCallPrintf(1LL);
LABEL_10:
  v17 = v10 + 16;
  v18 = 35LL;
  do
  {
    v19 = *((_DWORD *)v17 + 2);
    if ( (v19 & 1) != 0 && *((_DWORD *)v17 - 4) == 4 && (v19 & 4) != 0 && *(_QWORD *)v17 )
      ExFreePoolWithTag(*(PVOID *)v17, 0x74705041u);
    v17 += 32;
    --v18;
  }
  while ( v18 );
  memset(v10, 0, 0x460uLL);
  ExFreePoolWithTag(v10, 0x74705041u);
  return Attributes;
}
