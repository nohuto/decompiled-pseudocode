__int64 __fastcall VfVolatileSetDifRuleClass(void *Src, size_t Size)
{
  size_t v2; // rsi
  __int64 v4; // r15
  int v5; // r12d
  char v6; // r14
  _DWORD *Pool2; // rdi
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r8
  int v15; // ebx
  unsigned __int8 inited; // al
  __int64 *v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // r8
  int v20; // ecx

  v2 = (unsigned int)Size;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( (_DWORD)InitSafeBootMode )
    return 3221228554LL;
  if ( (_DWORD)VfRuleClasses )
    return 3221228669LL;
  if ( (_DWORD)Size != 16 && (_DWORD)Size != 56 )
    return 3221225476LL;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 0x38uLL, 0x63536656u);
  if ( !Pool2 )
    return 3221225495LL;
  v9 = VfAllowedVolatileRCId;
  v10 = 12LL;
  v11 = &VfAllowedVolatileRC;
  do
  {
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 < 0x40u )
    {
      v4 = v12 >> 5;
      v5 = 1 << (v12 & 0x1F);
    }
    *((_DWORD *)&VfAllowedVolatileRC + v4) |= v5;
    v9 = (__int64 *)((char *)v9 + 4);
    --v10;
  }
  while ( v10 );
  memmove(Pool2, Src, v2);
  v13 = 2LL;
  v14 = 2LL;
  do
  {
    if ( (*(_DWORD *)v11 & *(_DWORD *)((_BYTE *)v11 + (char *)Pool2 - (char *)&VfAllowedVolatileRC)) != 0 )
      v6 = 1;
    v11 = (__int64 *)((char *)v11 + 4);
    --v14;
  }
  while ( v14 );
  if ( v6 )
  {
    inited = VfInitDifWithoutReboot();
    VfInitializedWithoutReboot = inited;
    if ( inited )
    {
      ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644u);
      if ( ViWdmThunksWithIatIndex )
      {
        v17 = &VfRuleClasses;
        do
        {
          *(_DWORD *)v17 = *(_DWORD *)((char *)v17 + (char *)Pool2 - (char *)&VfRuleClasses);
          v17 = (__int64 *)((char *)v17 + 4);
          --v13;
        }
        while ( v13 );
        VfUtilSetRuleClass();
        DifpPoolTagsSize = 0;
        DifpPoolTagsSizeBytes = 0;
        v18 = Pool2 + 4;
        v19 = 10LL;
        do
        {
          if ( *v18 )
          {
            v20 = DifpPoolTagsSize;
            *((_DWORD *)&DifpPoolTags + (unsigned int)DifpPoolTagsSize) = *v18;
            DifpPoolTagsSize = v20 + 1;
            DifpPoolTagsSizeBytes += 4;
          }
          ++v18;
          --v19;
        }
        while ( v19 );
        VfOptionFlags = Pool2[2];
        VfTriageContext = Pool2[3];
        MmVerifierData = VfRuleClasses;
        VfDifRunningWithoutReboot = 1;
        DifSetPluginRunningWithoutReboot(1);
        CarInit();
        v15 = DifRegisterKernelPlugin();
        if ( v15 >= 0 )
          goto LABEL_36;
      }
      else
      {
        v15 = -1073741801;
      }
    }
    else
    {
      v15 = -1073738632;
    }
  }
  else
  {
    v15 = -1073738626;
  }
  VfAllowedVolatileRC = 0LL;
  VfRuleClasses = 0LL;
  DifpPoolTags = 0LL;
  xmmword_140D17CC0 = 0LL;
  qword_140D17CD0 = 0LL;
  MmVerifierData = 0;
  if ( VfInitializedWithoutReboot )
  {
    VfClearDifWithoutReboot();
    VfInitializedWithoutReboot = 0;
  }
  VfDifRunningWithoutReboot = 0;
  DifSetPluginRunningWithoutReboot(0);
  if ( ViWdmThunksWithIatIndex )
  {
    ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
    ViWdmThunksWithIatIndex = 0LL;
  }
  CarCleanup();
LABEL_36:
  ExFreePoolWithTag(Pool2, 0x63536656u);
  return (unsigned int)v15;
}
