__int64 __fastcall NtQuerySecurityPolicy(
        ULONGLONG a1,
        ULONGLONG a2,
        ULONGLONG a3,
        _DWORD *a4,
        volatile void *a5,
        unsigned __int64 Address)
{
  void *Pool2; // rsi
  char PreviousMode; // r14
  int v11; // ebx
  _DWORD *v12; // r15
  void *v13; // r12
  unsigned int v14; // eax
  SIZE_T Length; // [rsp+44h] [rbp-54h] BYREF
  int v17; // [rsp+4Ch] [rbp-4Ch] BYREF
  void *v18; // [rsp+50h] [rbp-48h]
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  PVOID v20; // [rsp+60h] [rbp-38h] BYREF
  PVOID v21[3]; // [rsp+68h] [rbp-30h] BYREF

  P = 0LL;
  v20 = 0LL;
  Pool2 = 0LL;
  v18 = 0LL;
  v21[0] = 0LL;
  LODWORD(Length) = 0;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = SepCaptureUnicodeStringArray(a1, 1u, PreviousMode, (ULONGLONG *)&P);
  if ( v11 >= 0 )
  {
    v11 = SepCaptureUnicodeStringArray(a2, 1u, PreviousMode, (ULONGLONG *)&v20);
    if ( v11 >= 0 )
    {
      v11 = SepCaptureUnicodeStringArray(a3, 1u, PreviousMode, (ULONGLONG *)v21);
      HIDWORD(Length) = v11;
      if ( v11 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(a4, 4uLL, 4u);
          v12 = (_DWORD *)Address;
          if ( (Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address + 4 > 0x7FFFFFFF0000LL || Address + 4 < Address )
            MEMORY[0x7FFFFFFF0000] = 0;
          LODWORD(Length) = *(_DWORD *)Address;
          if ( !(_DWORD)Length )
          {
            Length = 0xC000000D00000000uLL;
            v11 = -1073741811;
            goto LABEL_24;
          }
          ProbeForWrite((volatile void *)Address, 4uLL, 4u);
          v13 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, (unsigned int)Length, 1u);
            Pool2 = (void *)ExAllocatePool2(257LL, (unsigned int)Length, 538994003LL);
            v18 = Pool2;
            if ( !Pool2 )
            {
              v11 = -1073741670;
              goto LABEL_24;
            }
          }
        }
        else
        {
          v13 = (void *)a5;
          Pool2 = (void *)a5;
          v18 = (void *)a5;
          v12 = (_DWORD *)Address;
          LODWORD(Length) = *(_DWORD *)Address;
        }
        if ( qword_140C37650 )
        {
          if ( Pool2 && !(_DWORD)Length )
            v11 = -1073741811;
          else
            v11 = qword_140C37650(P, v20, v21[0], &v17, Pool2, &Length);
        }
        else
        {
          v11 = -1073741637;
        }
        HIDWORD(Length) = v11;
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          *a4 = v17;
          v14 = Length;
          *v12 = Length;
          if ( v13 )
          {
            if ( PreviousMode == 1 && v11 >= 0 )
              memmove(v13, Pool2, v14);
          }
        }
      }
    }
  }
LABEL_24:
  if ( PreviousMode == 1 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v21[0] )
      ExFreePoolWithTag(v21[0], 0);
  }
  if ( Pool2 && PreviousMode == 1 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
