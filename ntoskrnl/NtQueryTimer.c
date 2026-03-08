/*
 * XREFs of NtQueryTimer @ 0x1409F8930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeQueryTimerDueTime @ 0x14056E7B0 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryTimer(HANDLE Handle, int a2, unsigned __int64 a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  NTSTATUS v12; // r15d
  char v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdi
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
    return 3221225475LL;
  if ( a4 != 16 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v10 = a3;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 15) = *(_BYTE *)(v10 + 15);
    v11 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 < 0x7FFFFFFF0000LL )
        v9 = a5;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = (_DWORD *)a5;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = *((_BYTE *)Object + 4);
    v14 = MEMORY[0xFFFFF78000000008];
    v15 = KeQueryTimerDueTime((__int64)Object) - v14;
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *(_BYTE *)(a3 + 8) = v13;
      *(_QWORD *)a3 = v15;
      if ( v11 )
        *v11 = 16;
    }
    else
    {
      *(_BYTE *)(a3 + 8) = v13;
      *(_QWORD *)a3 = v15;
      if ( v11 )
        *v11 = 16;
    }
  }
  return (unsigned int)v12;
}
