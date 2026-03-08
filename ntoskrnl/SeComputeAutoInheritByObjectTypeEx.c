/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x14030FBF0
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x1402EA340 (SeComputeAutoInheritByObjectType.c)
 *     ObpAssignSecurity @ 0x14076AFF0 (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlFindAceByType @ 0x1403100D0 (RtlFindAceByType.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rdi
  char v6; // r13
  int v11; // esi
  int v12; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ebx
  _BYTE *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rcx
  __int64 AceByType; // rax
  __int64 v24; // rax
  __int16 v25; // ax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax

  v5 = a5;
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
    ExfReleasePushLockShared((signed __int64 *)&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegion();
  if ( v12 && a2 )
  {
    v21 = *(_WORD *)(a2 + 2);
    if ( (v21 & 0x10) != 0 )
    {
      if ( v21 >= 0 )
      {
        v22 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v24 = *(unsigned int *)(a2 + 12);
        v22 = (_DWORD)v24 ? v24 + a2 : 0LL;
      }
    }
    else
    {
      v22 = 0LL;
    }
    AceByType = RtlFindAceByType(v22, 17LL, 0LL);
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
      LODWORD(a5) = 0;
      while ( 1 )
      {
        v25 = *(_WORD *)(a2 + 2);
        if ( (v25 & 0x10) != 0 )
        {
          if ( v25 >= 0 )
          {
            v26 = *(_QWORD *)(a2 + 24);
          }
          else
          {
            v27 = *(unsigned int *)(a2 + 12);
            v26 = (_DWORD)v27 ? v27 + a2 : 0LL;
          }
        }
        else
        {
          v26 = 0LL;
        }
        v28 = RtlFindAceByType(v26, 17LL, &a5);
        if ( v28 )
        {
          if ( (*(_BYTE *)(v28 + 1) & 8) == 0 )
            break;
        }
        LODWORD(a5) = (_DWORD)a5 + 1;
        if ( !v28 )
          goto LABEL_55;
      }
      *(_DWORD *)(v28 + 4) &= v18;
    }
    else
    {
LABEL_55:
      if ( v5 )
      {
        v5[1] = v18;
        v11 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    v20 = (_BYTE *)(a2 + 2);
    if ( (!a2 || (*v20 & 4) == 0) && _bittest16((const signed __int16 *)(a3 + 2), 0xAu) )
      v11 |= 1u;
    if ( (!a2 || (*v20 & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v11 |= 2u;
  }
  *a4 = v11;
  return 0LL;
}
