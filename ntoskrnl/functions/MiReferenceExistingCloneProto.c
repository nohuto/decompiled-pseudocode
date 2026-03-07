__int64 __fastcall MiReferenceExistingCloneProto(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *CloneAddress; // rax
  _QWORD *v9; // r9
  __int64 v10; // r10
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a5 = 0LL;
  CloneAddress = MiLocateCloneAddress((__int64)CurrentThread->ApcState.Process, a2);
  if ( !CloneAddress )
    return 1LL;
  result = MiReferenceCloneProto(v10, *(_QWORD *)(CloneAddress[7] + 24LL), a2, a3, v9);
  if ( (_DWORD)result )
  {
    if ( (a3 & 1) != 0 )
      *a5 = a2;
  }
  return result;
}
