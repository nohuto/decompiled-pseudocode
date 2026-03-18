/*
 * XREFs of SdbpCheckAllAttributes @ 0x140841610
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1408414E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A11A00 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1407ECF5C (SdbReadDWORDTag.c)
 *     SdbpCheckAttribute @ 0x140841858 (SdbpCheckAttribute.c)
 *     AslFileAllocAndGetAttributes @ 0x14084192C (AslFileAllocAndGetAttributes.c)
 *     SdbReadQWORDTag @ 0x140842904 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int Attributes; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  _DWORD *v10; // rbp
  unsigned int v11; // r13d
  int *v12; // r12
  __int16 v13; // bx
  unsigned int FirstTag; // eax
  char *v15; // rdi
  __int64 v16; // rbp
  int v17; // eax
  __int64 *p_QWORDTag; // r15
  int v20; // ecx
  unsigned int v21; // r14d
  __int64 StringTagPtr; // rax
  __int64 v23; // rcx
  void (__fastcall *v24)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  int DWORDTag; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-64h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-60h] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  unsigned __int16 v33; // [rsp+C0h] [rbp+28h]

  Attributes = 0;
  DWORDTag = 0;
  v7 = a4;
  QWORDTag = 0LL;
  v8 = a3;
  *a1 = 0;
  v9 = 1;
  v26 = 1;
  if ( !a5 )
    return Attributes;
  if ( *(_DWORD *)(a5 + 80) )
  {
    if ( !*(_QWORD *)(a5 + 32) )
      return Attributes;
  }
  else if ( !*(_QWORD *)(a5 + 8) )
  {
    return Attributes;
  }
  P = AslAlloc((__int64)a1, 0x440uLL);
  v10 = P;
  if ( !P )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = (int *)&unk_140C0C8E4;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v33 = v13;
    FirstTag = SdbFindFirstTag(v8, v7, v13);
    if ( !FirstTag )
      goto LABEL_7;
    p_QWORDTag = 0LL;
    v20 = v13 & 0xF000;
    v21 = 0;
    switch ( v20 )
    {
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_QWORDTag = &QWORDTag;
        v21 = 8;
        break;
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0);
        p_QWORDTag = (__int64 *)&DWORDTag;
        v21 = 4;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
        v23 = -1LL;
        p_QWORDTag = (__int64 *)StringTagPtr;
        do
          ++v23;
        while ( *(_WORD *)(StringTagPtr + 2 * v23) );
        v21 = 2 * v23 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(v10, a5, 1LL << *v12);
    if ( (Attributes & 0x80000000) != 0 )
      break;
    if ( (v10[8 * *v12 + 6] & 1) == 0 )
      goto LABEL_9;
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v26, v33, (_DWORD)p_QWORDTag, v21, (__int64)&v10[8 * *v12]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1LL);
      goto LABEL_10;
    }
    v9 = v26;
    v24 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 1488);
    if ( v24 )
      v24(v33, p_QWORDTag, v21, v26);
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
    if ( v11 >= 0x22 )
      goto LABEL_8;
  }
  AslLogCallPrintf(1LL);
LABEL_10:
  v15 = (char *)(v10 + 4);
  v16 = 34LL;
  do
  {
    v17 = *((_DWORD *)v15 + 2);
    if ( (v17 & 1) != 0 && *((_DWORD *)v15 - 4) == 4 && (v17 & 4) != 0 && *(_QWORD *)v15 )
      ExFreePoolWithTag(*(PVOID *)v15, 0x74705041u);
    v15 += 32;
    --v16;
  }
  while ( v16 );
  memset(P, 0, 0x440uLL);
  ExFreePoolWithTag(P, 0x74705041u);
  return Attributes;
}
