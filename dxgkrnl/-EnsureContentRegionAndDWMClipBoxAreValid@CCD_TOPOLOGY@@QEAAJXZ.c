/*
 * XREFs of ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01C4704
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01C4274 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000B000 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C478C (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C4888 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(CCD_TOPOLOGY *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  int CloneGroupContentResolutionValid; // eax
  __int64 v5; // rsi
  int CloneGroupDWMClipBoxValid; // eax

  v2 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v2) )
    {
      CloneGroupContentResolutionValid = CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(this, v3);
      v5 = CloneGroupContentResolutionValid;
      if ( CloneGroupContentResolutionValid < 0 )
        break;
      CloneGroupDWMClipBoxValid = CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(this, v2);
      v5 = CloneGroupDWMClipBoxValid;
      if ( CloneGroupDWMClipBoxValid < 0 )
        break;
    }
    if ( ++v2 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  WdLogSingleEntry2(2LL, v2, v5);
  return (unsigned int)v5;
}
