__int64 __fastcall KeRestoreSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = a2;
    v3 = a2 & 0x100;
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      a2 = KeEnabledSupervisorXStateFeatures;
      if ( KeEnabledSupervisorXStateFeatures )
        result = RtlXRestoreS(a1 - 512, v2 & KeEnabledSupervisorXStateFeatures);
    }
    if ( (_DWORD)KiIptMsrMask )
    {
      if ( v3 )
        return KiRestoreIptState(
                 a1 + MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + 64,
                 a2,
                 v2);
    }
  }
  return result;
}
