/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x1403C0554
 * Callers:
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     SepTokenInitialization @ 0x140B1F300 (SepTokenInitialization.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // si
  int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  char v13; // bl
  struct _KTHREAD *v14; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v17; // edx
  int v18; // r9d

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v6 = SepMandatoryObjectTypePolicyCount;
  v7 = 0LL;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_7;
  v8 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v8 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 += 3;
    if ( (unsigned int)v7 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_5;
  }
  v3 = 1;
LABEL_5:
  if ( (unsigned int)v7 < 0x20 )
  {
    if ( v3 )
    {
      v9 = (unsigned int)v7;
      goto LABEL_8;
    }
LABEL_7:
    v9 = (unsigned int)v7;
    v10 = 3 * v7;
    SepMandatoryObjectTypePolicy[2 * v10 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v10 + 2] = 0;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v10] = a1;
    SepMandatoryObjectTypePolicyCount = v6 + 1;
LABEL_8:
    v11 = 3 * v9;
    SepMandatoryObjectTypePolicy[2 * v11 + 2] |= 1u;
    SepMandatoryObjectTypePolicy[2 * v11 + 3] = a2;
    if ( (a2 & 1) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x100u;
    if ( (a2 & 2) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x200u;
    if ( (a2 & 4) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x400u;
    v12 = 0;
    goto LABEL_15;
  }
  v12 = -1073741823;
LABEL_15:
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(&SepMandatoryObjectTypePolicyLock);
  v14 = KeGetCurrentThread();
  if ( (unsigned __int64)&SepMandatoryObjectTypePolicyLock - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&v14[1].Process;
  v17 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&SepMandatoryObjectTypePolicyLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v17;
    p_Process += 96LL;
    if ( v17 >= 6 )
      goto LABEL_30;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v18 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v14->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v18 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v14, (__int64)&SepMandatoryObjectTypePolicyLock, v18);
    goto LABEL_28;
  }
LABEL_30:
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock, SessionId, 0LL);
  _enable();
LABEL_28:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
