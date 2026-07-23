/*
 * XREFs of SepGetLearningModeObjectInformation @ 0x140596A2C
 * Callers:
 *     SeLogAccessFailure @ 0x140238D50 (SeLogAccessFailure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SepGetCurrentLogLevel @ 0x140596A00 (SepGetCurrentLogLevel.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_OWORD *__fastcall SepGetLearningModeObjectInformation(_BYTE *a1)
{
  UNICODE_STRING *v1; // r14
  PVOID v2; // r13
  int CurrentLogLevel; // r8d
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _OWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *Teb; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _OWORD *PoolWithTag; // rdi
  UNICODE_STRING *v13; // rax
  UNICODE_STRING *v14; // rsi
  UNICODE_STRING *v15; // rax
  PVOID v16; // r15
  void *Src[2]; // [rsp+30h] [rbp-58h]
  void *v18[2]; // [rsp+40h] [rbp-48h]
  unsigned __int64 v20; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v2 = 0LL;
  CurrentLogLevel = SepGetCurrentLogLevel();
  *v4 = 0;
  result = *(_OWORD **)(v5 + 1448);
  if ( !result || *((_DWORD *)result + 2) != CurrentLogLevel )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
        Teb = 0LL;
      else
        Teb = CurrentThread->Teb;
      if ( !Teb )
        return 0LL;
      v9 = Teb[5];
      if ( !v9 )
        return 0LL;
      if ( (v9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v9 + 24 > 0x7FFFFFFF0000LL || v9 + 24 < v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( *(_DWORD *)v9 != -1395763957 )
        return 0LL;
      v20 = *(_QWORD *)(v9 + 8);
      v10 = *(_QWORD *)(v9 + 16);
      if ( (v20 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v20 + 16 > 0x7FFFFFFF0000LL || v20 + 16 < v20 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (v10 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v10 + 16 > 0x7FFFFFFF0000LL || v10 + 16 < v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
      *(_OWORD *)Src = *(_OWORD *)v20;
      *(_OWORD *)v18 = *(_OWORD *)v10;
      if ( WORD1(*(_OWORD *)v20) )
      {
        if ( ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = (unsigned __int64)Src[1] + WORD1(Src[0]);
        if ( v11 > 0x7FFFFFFF0000LL || (void *)v11 < Src[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( WORD1(v18[0]) )
      {
        if ( ((__int64)v18[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (char *)v18[1] + WORD1(v18[0]) > (void *)0x7FFFFFFF0000LL || (char *)v18[1] + WORD1(v18[0]) < v18[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x494F6553u);
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        PoolWithTag[2] = 0LL;
        *((_QWORD *)PoolWithTag + 6) = 0LL;
        v13 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x544F6553u);
        v14 = v13;
        if ( v13 )
        {
          *v13 = 0LL;
          v2 = ExAllocatePoolWithTag(PagedPool, WORD1(Src[0]), 0x544F6553u);
          if ( v2 )
          {
            v15 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4E4F6553u);
            v1 = v15;
            if ( v15 )
            {
              *v15 = 0LL;
              v16 = ExAllocatePoolWithTag(PagedPool, WORD1(v18[0]), 0x4E4F6553u);
              if ( v16 )
              {
                memmove(v2, Src[1], WORD1(Src[0]));
                RtlInitUnicodeString(v14, (PCWSTR)v2);
                memmove(v16, v18[1], WORD1(v18[0]));
                RtlInitUnicodeString(v1, (PCWSTR)v16);
                *((_QWORD *)PoolWithTag + 2) = v14;
                *((_QWORD *)PoolWithTag + 3) = v1;
                *a1 = 1;
                return PoolWithTag;
              }
            }
          }
        }
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        if ( v1 )
          ExFreePoolWithTag(v1, 0);
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    return 0LL;
  }
  return result;
}
