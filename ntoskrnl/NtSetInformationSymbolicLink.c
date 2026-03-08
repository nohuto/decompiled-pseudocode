/*
 * XREFs of NtSetInformationSymbolicLink @ 0x140978440
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetInformationSymbolicLink(void *a1, int a2, unsigned __int64 a3, int a4)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v8; // ebx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  _DWORD *v17; // rdx
  int v18; // eax
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 2u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_32:
        ObfDereferenceObject(Object);
        return (unsigned int)v8;
      }
      if ( a4 == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo(v11, v10) )
        {
          if ( PreviousMode )
          {
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v12 = *(_DWORD *)a3;
          }
          else
          {
            v12 = *(_DWORD *)a3;
          }
          v13 = Object;
          *((_DWORD *)Object + 7) |= 8u;
          v13[8] = v12;
          v8 = 0;
          goto LABEL_32;
        }
        goto LABEL_31;
      }
    }
    else if ( a4 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo(v15, v14) )
      {
        if ( PreviousMode )
        {
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v16 = *(_DWORD *)a3;
        }
        else
        {
          v16 = *(_DWORD *)a3;
        }
        v17 = Object;
        v18 = *((_DWORD *)Object + 7) | 1;
        *((_DWORD *)Object + 7) = v18;
        if ( v16 )
          v17[7] = v18 | 4;
        goto LABEL_32;
      }
LABEL_31:
      v8 = -1073741727;
      goto LABEL_32;
    }
    v8 = -1073741820;
    goto LABEL_32;
  }
  return (unsigned int)v8;
}
