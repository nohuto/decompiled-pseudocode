__int64 __fastcall MiCreateSectionCommon(
        unsigned __int64 a1,
        unsigned int a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address,
        ULONGLONG ullMultiplicand)
{
  void *v9; // r14
  BOOL v11; // edx
  int v12; // eax
  int v13; // eax
  char PreviousMode; // si
  __int64 result; // rax
  int v16; // r12d
  _KPROCESS *Process; // r15
  int SessionId; // r13d
  int Section; // r15d
  char *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  struct _FILE_OBJECT *v23; // rbx
  __int64 v24; // [rsp+70h] [rbp-68h]
  PVOID Object; // [rsp+78h] [rbp-60h] BYREF
  __int64 v26; // [rsp+80h] [rbp-58h] BYREF
  __int128 v27; // [rsp+88h] [rbp-50h] BYREF
  int v28; // [rsp+98h] [rbp-40h]
  char v29; // [rsp+9Ch] [rbp-3Ch]
  _QWORD *v30; // [rsp+E0h] [rbp+8h]
  char v33; // [rsp+108h] [rbp+30h]

  v30 = (_QWORD *)a1;
  v9 = 0LL;
  Object = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  LODWORD(v24) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  v11 = (a6 & 0x2100000) != 0 && (a6 & 0x1100000) != 0x1100000;
  if ( (a6 & 0x2080FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v12 = -871956480;
    if ( (a6 & 0x2100000) == 0 )
      v12 = -867762176;
    if ( (v12 & a6) != 0 )
      return 3221225716LL;
  }
  if ( (a6 & 0xC000000) == 0xC000000 )
    return 3221225716LL;
  if ( a6 < 0 )
  {
    if ( (a6 & 0x80000) != 0 || (a6 & 0x20000) != 0 )
      return 3221225716LL;
    v13 = 0;
  }
  else
  {
    if ( (a6 & 0xA0000) == 0xA0000 )
      return 3221225716LL;
    v13 = a6 & 0x20000;
  }
  if ( (a6 & 0x10000) != 0 && !v13 )
    return 3221225716LL;
  if ( (a5 & 0x701) != 0 )
    return 3221225541LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( a4 )
      v24 = *a4;
    goto LABEL_24;
  }
  if ( v11 )
    return 3221225716LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  if ( a4 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = *a4;
  }
LABEL_24:
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand, (__int64)&v27);
  if ( (int)result >= 0 )
  {
    v16 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PreviousMode == 1 )
    {
      v33 = BYTE1(Process[2].Header.WaitListHead.Flink);
      v9 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
    }
    else if ( (v28 & 8) != 0 )
    {
      v33 = BYTE12(v27);
      v16 = 16;
    }
    else
    {
      v33 = 0;
    }
    SessionId = MmGetSessionIdEx((__int64)Process);
    while ( 1 )
    {
      Section = MiCreateSection(
                  (unsigned int)&Object,
                  a3,
                  v24,
                  a5,
                  a6,
                  v16,
                  (__int64)v9,
                  v33,
                  a7,
                  0LL,
                  PreviousMode,
                  SessionId,
                  (__int64)&v27);
      if ( Section != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( Section < 0 )
    {
      return (unsigned int)Section;
    }
    else
    {
      v20 = (char *)Object;
      v21 = MiSectionControlArea((__int64)Object);
      v22 = v21;
      if ( v21 && *(_QWORD *)(v21 + 64) )
      {
        v23 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v21);
        CcZeroEndOfLastPage(v23);
        MiDereferenceControlAreaFile(v22, (__int64)v23);
      }
      result = ObInsertObjectEx(v20, 0LL, a2, 0, 0, 0LL, &v26);
      if ( (int)result >= 0 )
        *v30 = v26;
    }
  }
  return result;
}
