__int64 __fastcall MmCreateSectionEx(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        volatile void *Address,
        ULONGLONG ullMultiplicand)
{
  __int64 result; // rax
  int v13; // esi
  _KPROCESS *Process; // r15
  char PreviousMode; // r12
  char v16; // bp
  void *v17; // r14
  int v18; // ebx
  int SessionId; // eax
  int v20; // edx
  unsigned int Section; // ebx
  __int128 v22; // [rsp+70h] [rbp-58h] BYREF
  int v23; // [rsp+80h] [rbp-48h]
  char v24; // [rsp+84h] [rbp-44h]

  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand, (__int64)&v22);
  if ( (int)result >= 0 )
  {
    v13 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v16 = BYTE1(Process[2].Header.WaitListHead.Flink);
      v17 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
    }
    else
    {
      v17 = 0LL;
      v16 = (v23 & 8) != 0 ? BYTE12(v22) : 0;
      v13 = (v23 & 8) != 0 ? 0x10 : 0;
    }
    v18 = v13 | 2;
    if ( !a7 )
      v18 = v13;
    SessionId = MmGetSessionIdEx((__int64)Process);
    v20 = v18 | 4;
    if ( (a8 & 2) == 0 )
      v20 = v18;
    Section = MiCreateSection(
                a1,
                a2,
                a3,
                a4,
                a5,
                v20,
                (__int64)v17,
                v16,
                a6,
                a7,
                PreviousMode,
                SessionId,
                (__int64)&v22);
    if ( v17 )
      ObfDereferenceObject(v17);
    return Section;
  }
  return result;
}
