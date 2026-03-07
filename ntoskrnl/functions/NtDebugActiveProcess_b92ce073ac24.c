__int64 __fastcall NtDebugActiveProcess(ULONG_PTR a1, void *a2)
{
  char PreviousMode; // r14
  __int64 result; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  _KPROCESS *Process; // rsi
  int v9; // edi
  unsigned __int64 Count; // rdi
  __int16 v11; // ax
  __int16 v12; // ax
  BOOLEAN v13; // al
  struct _KEVENT *v14; // rsi
  int v15; // eax
  PVOID Object; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v18[14]; // [rsp+50h] [rbp-49h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v17 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (struct _EX_RUNDOWN_REF *)Object;
    Process = CurrentThread->ApcState.Process;
    if ( Object == Process || Object == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = PreviousMode;
      if ( PsTestProtectedProcessIncompatibility(v5, (__int64)CurrentThread->ApcState.Process, (__int64)Object) )
      {
        v9 = -1073740014;
      }
      else
      {
        Count = v7[124].Count;
        if ( (Count & 1) == 0
          || (memset(v18, 0, 0x68uLL),
              v18[1] = Count,
              v18[2] = 1LL,
              v9 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v18),
              v9 >= 0) )
        {
          if ( !Process[1].Affinity.StaticBitmap[30]
            || (v11 = WORD2(Process[2].Affinity.StaticBitmap[20]), v11 != 332) && v11 != 452
            || v7[176].Count && ((v12 = WORD2(v7[301].Ptr), v12 == 332) || v12 == 452) )
          {
            Object = 0LL;
            v9 = ObReferenceObjectByHandle(a2, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
            if ( v9 >= 0 )
            {
              v13 = ExAcquireRundownProtection_0(v7 + 139);
              v14 = (struct _KEVENT *)Object;
              if ( v13 )
              {
                v15 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (__int64)Object, &v17);
                v9 = DbgkpSetProcessDebugObject((PRKPROCESS)v7, v14, v15, v17);
                ExReleaseRundownProtection_0(v7 + 139);
              }
              else
              {
                v9 = -1073741558;
              }
              ObfDereferenceObject(v14);
            }
          }
          else
          {
            v9 = -1073741637;
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    return (unsigned int)v9;
  }
  return result;
}
