/*
 * XREFs of IsHandleEntrySecure @ 0x1C009362C
 * Callers:
 *     ValidateHwndEx @ 0x1C0038620 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C0042D90 (ValidateHandleSecure.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0031C90 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall IsHandleEntrySecure(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v8; // r8d
  __int16 v9; // cx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)&v16);
  v4 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a2 - (__int64)qword_1C024FD58) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v8 = 0;
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v9 = *((_WORD *)&unk_1C020A46C + 12 * *(unsigned __int8 *)(a2 + 24));
  if ( (v9 & 2) != 0 )
  {
    v11 = v4[v5 + 1];
  }
  else
  {
    if ( (v9 & 1) == 0 )
      return 0LL;
    v10 = v4[v5 + 1];
    if ( !v10 )
      return 0LL;
    v11 = *(_QWORD *)(v10 + 424);
  }
  if ( v11 )
  {
    if ( *(PVOID *)v11 == gpepCSRSS )
      return 1LL;
    v12 = *(_QWORD *)(CurrentProcessWin32Process + 768);
    if ( *(_QWORD *)(v11 + 768) == v12 )
      return 1LL;
    v14 = *(_QWORD **)(v12 + 56);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v12 + 48);
      if ( v15 )
      {
        while ( *v14 != a1 )
        {
          ++v8;
          ++v14;
          if ( v8 >= v15 )
            return 0LL;
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
