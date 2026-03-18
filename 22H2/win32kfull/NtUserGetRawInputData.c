/*
 * XREFs of NtUserGetRawInputData @ 0x1C01543B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputData(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4, int a5)
{
  _QWORD *v6; // r15
  int v7; // r14d
  unsigned int v9; // esi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // r12
  int v15; // ecx
  unsigned int *v16; // rax
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v23[44]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v24; // [rsp+4Ch] [rbp-4Ch]

  v6 = a3;
  v7 = a2;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  v9 = 24;
  if ( a5 != 24 )
    goto LABEL_2;
  v13 = HMValidateHandle(a1, 0x12u);
  v11 = v13;
  v10 = 0;
  if ( !v13 || (v14 = (_QWORD *)(v13 + 32), (v15 = *(_DWORD *)(v13 + 32)) != 0) && (unsigned int)(v15 - 1) > 1 )
  {
    UserSetLastError(6);
    v10 = -1;
    goto LABEL_28;
  }
  v12 = 268435459LL;
  if ( v7 == 268435459 )
  {
    v9 = *(_DWORD *)(v13 + 36);
  }
  else if ( v7 != 268435461 )
  {
LABEL_2:
    v10 = -1;
    UserSetLastError(87);
    goto LABEL_28;
  }
  if ( v6 )
  {
    v16 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v16 = (unsigned int *)MmUserProbeAddress;
    v24 = *v16;
    if ( v24 < v9 )
    {
      v10 = -1;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (unsigned int *)MmUserProbeAddress;
      *a4 = v9;
      UserSetLastError(122);
    }
    else
    {
      v17 = v7 - 268435459;
      if ( v17 )
      {
        if ( v17 == 2 )
        {
          if ( (unsigned __int64)v6 >= MmUserProbeAddress )
            v6 = (_QWORD *)MmUserProbeAddress;
          *(_OWORD *)v6 = *(_OWORD *)v14;
          v6[2] = v14[2];
        }
      }
      else
      {
        ProbeForWrite(v6, v9, 4u);
        memmove(v6, v14, v9);
      }
      v10 = v9;
    }
  }
  else
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v9;
  }
LABEL_28:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23, v11, v12);
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v10;
}
