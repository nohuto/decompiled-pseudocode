__int64 __fastcall MiCreateSystemSection(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  char v15; // bl
  void *v16; // rdi
  int v17; // r15d
  int v18; // r13d
  __int64 v19; // r12
  int i; // eax
  unsigned int v21; // esi
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  signed __int64 *v24; // rdi
  struct _FILE_OBJECT *v25; // rbx
  _KPROCESS *Process; // rcx
  PACCESS_TOKEN v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // si
  __int64 v32; // [rsp+B8h] [rbp+20h] BYREF

  v32 = 0LL;
  if ( a12 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v15 = BYTE1(Process[2].Header.WaitListHead.Flink);
    v28 = PsReferencePrimaryToken(Process);
    v31 = a13;
    v16 = v28;
    if ( a13 )
    {
      LOBYTE(v29) = a13;
      LOBYTE(v30) = v15;
      if ( !(unsigned int)SeCompareSigningLevels(v30, v29) )
        v15 = v31 & 0xF | v15 & 0x30;
    }
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
  }
  v17 = a11;
  v18 = a7;
  v19 = a8;
  for ( i = MiCreateSection((unsigned int)&v32, a3, 0, a5, a6, a7, (__int64)v16, v15, a8, 0LL, 0, a11, 0LL);
        ;
        i = MiCreateSection((unsigned int)&v32, a3, 0, a5, a6, v18, (__int64)v16, v15, v19, 0LL, 0, v17, 0LL) )
  {
    v21 = i;
    if ( i >= 0 )
    {
      if ( v16 )
        ObfDereferenceObject(v16);
      v22 = v32;
      *a1 = v32;
      v23 = MiSectionControlArea(v22);
      if ( v23 )
      {
        v24 = (signed __int64 *)(v23 + 64);
        if ( *(_QWORD *)(v23 + 64) )
        {
          v25 = (struct _FILE_OBJECT *)MiReferenceControlAreaFileWithTag(v23, 0x63536D4Du);
          CcZeroEndOfLastPage(v25);
          ObFastDereferenceObjectDeferDelete(v24, (unsigned __int64)v25, 0x63536D4Du);
        }
      }
      return v21;
    }
    if ( i != -1073741740 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  if ( v16 )
    ObfDereferenceObject(v16);
  return v21;
}
