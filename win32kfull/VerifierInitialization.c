__int64 __fastcall VerifierInitialization(Gre::Base *a1)
{
  unsigned int v1; // ebx
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  NTSTATUS IsVerifierEnabled; // ecx
  ULONG v6; // edx
  __int64 result; // rax
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  VerifierFlags = 0;
  v2 = Gre::Base::Globals(a1);
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
  IsVerifierEnabled = MmIsVerifierEnabled(&VerifierFlags);
  if ( (int)(IsVerifierEnabled + 0x80000000) < 0 || IsVerifierEnabled == -1073741820 )
  {
    v6 = VerifierFlags;
    if ( (VerifierFlags & 0xF) == 0 || (VerifierFlags & 0x400000) != 0 )
      goto LABEL_4;
    if ( !*((_DWORD *)v2 + 752) )
    {
      v1 = 1;
      *(_DWORD *)(v4 + 23596) = 1;
      v6 = VerifierFlags & 0xFFFFFFF7;
      goto LABEL_4;
    }
    *(_QWORD *)(v4 + 23584) = MEMORY[0xFFFFF78000000014];
    if ( MmAddVerifierThunks(&off_1C030CDC0, 0xF0u) >= 0 )
      v1 = 1;
  }
  v6 = VerifierFlags;
LABEL_4:
  result = v1;
  *(_DWORD *)(v4 + 23592) = v1 != 0 ? v6 & 0xFFFFFFF7 : 0;
  return result;
}
