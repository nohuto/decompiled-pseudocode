__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int Attributes; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  char *v10; // rbp
  unsigned int v11; // r13d
  int *v12; // r12
  unsigned __int16 v13; // bx
  unsigned int FirstTag; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int16 *p_QWORDTag; // r14
  int v18; // ecx
  unsigned int v19; // r15d
  __int64 StringTagPtr; // rax
  __int64 v21; // rcx
  void (__fastcall *v22)(_QWORD, __int16 *, _QWORD, _QWORD); // rax
  char *v23; // rdi
  __int64 v24; // rsi
  int v25; // eax
  int DWORDTag; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v34; // [rsp+B0h] [rbp+28h]

  Attributes = 0;
  DWORDTag = 0;
  v7 = a4;
  QWORDTag = 0LL;
  v8 = a3;
  *a1 = 0;
  v9 = 1;
  v28 = 1;
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
  v10 = (char *)AslAlloc(a1, 1088LL);
  if ( !v10 )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = (int *)&unk_140C0CA84;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v34 = v13;
    FirstTag = SdbFindFirstTag(v8, v7, v13);
    if ( !FirstTag )
      goto LABEL_7;
    p_QWORDTag = 0LL;
    v18 = v13 & 0xF000;
    v19 = 0;
    switch ( v18 )
    {
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_QWORDTag = (__int16 *)&QWORDTag;
        v19 = 8;
        break;
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0LL);
        p_QWORDTag = (__int16 *)&DWORDTag;
        v19 = 4;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v15);
        v21 = -1LL;
        p_QWORDTag = (__int16 *)StringTagPtr;
        do
          ++v21;
        while ( *(_WORD *)(StringTagPtr + 2 * v21) );
        v19 = 2 * v21 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes((__int64)v10, a5, (_DWORD *)(1LL << *v12), v16);
    if ( (Attributes & 0x80000000) != 0 )
      break;
    if ( (*(_DWORD *)&v10[32 * *v12 + 24] & 1) == 0 )
      goto LABEL_22;
    if ( !(unsigned int)SdbpCheckAttribute(&v28, v34, p_QWORDTag, v19, (__int64)&v10[32 * *v12]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1LL);
      goto LABEL_23;
    }
    v9 = v28;
    v22 = *(void (__fastcall **)(_QWORD, __int16 *, _QWORD, _QWORD))(a2 + 1752);
    if ( v22 )
      v22(v34, p_QWORDTag, v19, v28);
    if ( !v9 )
    {
LABEL_21:
      *a1 = v9;
LABEL_22:
      Attributes = 0;
      goto LABEL_23;
    }
    v8 = a3;
    v7 = a4;
LABEL_7:
    ++v11;
    v12 += 2;
    if ( v11 >= 0x26 )
      goto LABEL_21;
  }
  AslLogCallPrintf(1LL);
LABEL_23:
  v23 = v10 + 16;
  v24 = 34LL;
  do
  {
    v25 = *((_DWORD *)v23 + 2);
    if ( (v25 & 1) != 0 && *((_DWORD *)v23 - 4) == 4 && (v25 & 4) != 0 && *(_QWORD *)v23 )
      ExFreePoolWithTag(*(PVOID *)v23, 0x74705041u);
    v23 += 32;
    --v24;
  }
  while ( v24 );
  memset(v10, 0, 0x440uLL);
  ExFreePoolWithTag(v10, 0x74705041u);
  return Attributes;
}
