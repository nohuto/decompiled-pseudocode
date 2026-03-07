__int64 __fastcall PopIdleCsStateChanged(int a1)
{
  char v1; // bl
  unsigned int ModernStandbyTransitionReason; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = a1;
  PopAcquirePolicyLock(a1);
  byte_140C3C9D1 = v1;
  ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0);
  if ( v1 )
  {
    qword_140C3C9D8 = qword_140CF7888;
    if ( !qword_140CF7888 )
      qword_140C3C9D8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( ModernStandbyTransitionReason >= 0x1000000 || (ModernStandbyTransitionReason & 0xFFFFFF) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140C3C9B0 = 0;
    qword_140C3C9D8 = 0LL;
  }
  return PopReleasePolicyLock(v4, v3, v5);
}
