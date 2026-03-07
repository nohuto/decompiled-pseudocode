__int64 __fastcall NtSetCachedSigningLevel2(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r12
  size_t v7; // rbx
  __int16 v8; // si
  UNICODE_STRING *Pool2; // r15
  char v10; // r13
  char PreviousMode; // r14
  int v12; // ebx
  __int128 v13; // xmm0
  __int64 v14; // rbx
  int v15; // eax
  _KPROCESS *Process; // rcx
  char v17; // bl
  size_t v18; // r12
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG v22; // edx
  __int64 v23; // rdx
  PVOID P; // [rsp+60h] [rbp-68h]
  PCUNICODE_STRING SourceString[2]; // [rsp+68h] [rbp-60h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-50h]
  __int64 v28; // [rsp+88h] [rbp-40h]
  char v29; // [rsp+D8h] [rbp+10h]

  v29 = a2;
  v6 = a4;
  v7 = (size_t)a3;
  v8 = a1;
  Pool2 = 0LL;
  v10 = 0;
  SourceString[0] = 0LL;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a1 & 0x2000) != 0 )
  {
    if ( !qword_140C376A8 )
    {
LABEL_3:
      v12 = -1073741822;
      goto LABEL_76;
    }
    if ( !a6 || !a5 )
    {
      v12 = -1073741811;
      goto LABEL_76;
    }
    if ( PreviousMode == 1 )
    {
      if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) != 1 )
      {
LABEL_8:
        v12 = -1073741790;
        goto LABEL_76;
      }
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v13 = *(_OWORD *)(a6 + 8);
      *(_OWORD *)Src = v13;
      v14 = v13;
      if ( (_QWORD)v13 )
      {
        if ( ((__int64)Src[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (char *)Src[1] + (unsigned __int64)v13 > (void *)0x7FFFFFFF0000LL
          || (char *)Src[1] + (unsigned __int64)v13 < Src[1] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v28 = v13;
      if ( !Src[1] || !(_QWORD)v13 )
      {
        v12 = -1073741811;
        goto LABEL_76;
      }
      if ( (unsigned __int64)v13 > 0xFFFF )
      {
        v12 = -1073741811;
        goto LABEL_76;
      }
      P = (PVOID)ExAllocatePool2(259LL, v13, 1668499779LL);
      if ( !P )
      {
        v12 = -1073741670;
        goto LABEL_76;
      }
      memmove(P, Src[1], v13);
    }
    else
    {
      v14 = *(_QWORD *)(a6 + 8);
      P = *(PVOID *)(a6 + 16);
    }
    LOBYTE(a1) = PreviousMode;
    v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64, PVOID))qword_140C376A8)(a1, a5, v14, P);
LABEL_28:
    v12 = v15;
    goto LABEL_76;
  }
  if ( !qword_140C375C8 )
    goto LABEL_3;
  if ( (a2 & 0x30) != 0 )
  {
LABEL_32:
    v12 = -1073741584;
    goto LABEL_76;
  }
  if ( a4 - 1 > 0xFFF )
    goto LABEL_75;
  if ( (a1 & 6) == 0 && (_BYTE)a2 )
    goto LABEL_32;
  if ( (a1 & 3) == 3 )
  {
LABEL_37:
    v12 = -1073741585;
    goto LABEL_76;
  }
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 2) != 0 )
      goto LABEL_37;
    v8 = a1 | 1;
    if ( (a1 & 4) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 1 )
        goto LABEL_8;
      v10 = (__int64)Process[2].Header.WaitListHead.Flink & 0xF;
      v17 = BYTE1(Process[2].Header.WaitListHead.Flink) & 0xF;
      if ( !qword_140C37600
        || (LOBYTE(a2) = (__int64)Process[2].Header.WaitListHead.Flink & 0xF,
            LOBYTE(Process) = BYTE1(Process[2].Header.WaitListHead.Flink) & 0xF,
            !(unsigned int)qword_140C37600(Process, a2)) )
      {
        v10 = v17;
      }
      v7 = (size_t)a3;
    }
  }
  else if ( (a1 & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (a1 & 2) == 0 )
      goto LABEL_37;
    v10 = 8;
  }
  v18 = 8 * v6;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, v18, 1668499779LL);
  SourceString[1] = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_76;
  }
  if ( PreviousMode == 1 )
  {
    if ( v18 )
    {
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v18 + v7 > 0x7FFFFFFF0000LL || v18 + v7 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v19 = a6;
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v19 = a6;
  }
  memmove(Pool2, a3, v18);
  if ( !v19 )
    goto LABEL_70;
  if ( *(_DWORD *)v19 < 0x18u )
  {
    v12 = -1073741580;
    goto LABEL_76;
  }
  if ( !*(_WORD *)(v19 + 8)
    || (v12 = SepCaptureUnicodeStringArray(v19 + 8, 1u, PreviousMode, (ULONGLONG *)SourceString), v12 >= 0)
    && (v12 = RtlUnicodeStringValidateEx(SourceString[0], v22), v12 >= 0) )
  {
LABEL_70:
    v23 = a4;
    if ( (v8 & 6) == 0 )
    {
LABEL_74:
      LOBYTE(v21) = v10;
      LOBYTE(v20) = v29;
      LOBYTE(v23) = PreviousMode;
      v15 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, UNICODE_STRING *, unsigned int, __int64, PCUNICODE_STRING))qword_140C375C8)(
              v8 & 0x807,
              v23,
              v20,
              v21,
              Pool2,
              a4,
              a5,
              SourceString[0]);
      goto LABEL_28;
    }
    if ( a4 == 1 )
    {
      if ( a5 != *(_QWORD *)&Pool2->Length )
      {
        v12 = -1073741581;
        goto LABEL_76;
      }
      goto LABEL_74;
    }
LABEL_75:
    v12 = -1073741582;
  }
LABEL_76:
  if ( PreviousMode == 1 && SourceString[0] )
    ExFreePoolWithTag((PVOID)SourceString[0], 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x63734943u);
  if ( P && PreviousMode == 1 )
    ExFreePoolWithTag(P, 0x63734943u);
  return (unsigned int)v12;
}
