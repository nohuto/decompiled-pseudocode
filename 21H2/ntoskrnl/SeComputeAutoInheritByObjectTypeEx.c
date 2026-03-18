/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x1402A4A60
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x1402469E0 (SeComputeAutoInheritByObjectType.c)
 *     ObpAssignSecurity @ 0x140669694 (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  char v6; // r12
  int v11; // esi
  int v12; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ebx
  __int16 v20; // ax
  __int64 v21; // rcx
  __int64 AceByType; // rax
  __int64 v23; // rax
  __int16 v24; // ax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+80h] [rbp+28h]

  v6 = 0;
  v11 = 0;
  v12 = 0;
  if ( a5 )
  {
    if ( *a5 != 8 )
      return 3221225485LL;
    a5[1] = -1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v14 = 0;
  if ( SepMandatoryObjectTypePolicyCount )
  {
    v15 = SepMandatoryObjectTypePolicy;
    while ( a1 != *v15 )
    {
      ++v14;
      v15 += 3;
      if ( v14 >= SepMandatoryObjectTypePolicyCount )
      {
        v18 = 0;
        goto LABEL_11;
      }
    }
    v16 = 3LL * v14;
    v17 = SepMandatoryObjectTypePolicy[2 * v16 + 2];
    if ( (v17 & 1) != 0 )
    {
      v11 = SepMandatoryObjectTypePolicy[2 * v16 + 4];
      v12 = SepMandatoryObjectTypePolicy[2 * v16 + 3];
    }
    if ( (v17 & 2) != 0 )
    {
      v18 = SepMandatoryObjectTypePolicy[2 * v16 + 5];
      v6 = 1;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = 0;
  }
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegion();
  if ( v12 && a2 )
  {
    v20 = *(_WORD *)(a2 + 2);
    if ( (v20 & 0x10) != 0 )
    {
      if ( v20 >= 0 )
      {
        v21 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v23 = *(unsigned int *)(a2 + 12);
        v21 = (_DWORD)v23 ? v23 + a2 : 0LL;
      }
    }
    else
    {
      v21 = 0LL;
    }
    AceByType = RtlFindAceByType(v21, 17LL);
    if ( AceByType )
    {
      *(_DWORD *)(AceByType + 4) |= v12;
      v11 = 0;
    }
  }
  if ( v6 )
  {
    if ( a2 )
    {
      v28 = 0;
      while ( 1 )
      {
        v24 = *(_WORD *)(a2 + 2);
        if ( (v24 & 0x10) != 0 )
        {
          if ( v24 >= 0 )
          {
            v25 = *(_QWORD *)(a2 + 24);
          }
          else
          {
            v26 = *(unsigned int *)(a2 + 12);
            v25 = (_DWORD)v26 ? v26 + a2 : 0LL;
          }
        }
        else
        {
          v25 = 0LL;
        }
        v27 = RtlFindAceByType(v25, 17LL);
        if ( v27 )
        {
          if ( (*(_BYTE *)(v27 + 1) & 8) == 0 )
            break;
        }
        ++v28;
        if ( !v27 )
          goto LABEL_54;
      }
      *(_DWORD *)(v27 + 4) &= v18;
    }
    else
    {
LABEL_54:
      if ( a5 )
      {
        a5[1] = v18;
        v11 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    if ( !a2 || (*(_BYTE *)(a2 + 2) & 4) == 0 )
    {
      if ( _bittest16((const signed __int16 *)(a3 + 2), 0xAu) )
        v11 |= 1u;
      if ( !a2 )
        goto LABEL_28;
    }
    if ( (*(_BYTE *)(a2 + 2) & 0x10) == 0 )
    {
LABEL_28:
      if ( (*(_WORD *)(a3 + 2) & 0x800) != 0 )
        v11 |= 2u;
    }
  }
  *a4 = v11;
  return 0LL;
}
