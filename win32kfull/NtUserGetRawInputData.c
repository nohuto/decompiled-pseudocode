/*
 * XREFs of NtUserGetRawInputData @ 0x1C0147690
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputData(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4, int a5)
{
  _QWORD *v6; // r15
  int v7; // r14d
  unsigned int v9; // esi
  unsigned int v10; // ebx
  __int64 v11; // rax
  _QWORD *v12; // r12
  int v13; // ecx
  unsigned int *v14; // rax
  int v15; // r14d
  __int64 v16; // rcx
  _BYTE v18[44]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-4Ch]

  v6 = a3;
  v7 = a2;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
  v9 = 24;
  if ( a5 != 24 )
    goto LABEL_2;
  v11 = HMValidateHandle(a1, 0x12u);
  v10 = 0;
  if ( !v11 || (v12 = (_QWORD *)(v11 + 32), (v13 = *(_DWORD *)(v11 + 32)) != 0) && (unsigned int)(v13 - 1) > 1 )
  {
    UserSetLastError(6);
    v10 = -1;
    goto LABEL_28;
  }
  if ( v7 == 268435459 )
  {
    v9 = *(_DWORD *)(v11 + 36);
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
    v14 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v19 = *v14;
    if ( v19 < v9 )
    {
      v10 = -1;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (unsigned int *)MmUserProbeAddress;
      *a4 = v9;
      UserSetLastError(122);
    }
    else
    {
      v15 = v7 - 268435459;
      if ( v15 )
      {
        if ( v15 == 2 )
        {
          if ( (unsigned __int64)v6 >= MmUserProbeAddress )
            v6 = (_QWORD *)MmUserProbeAddress;
          *(_OWORD *)v6 = *(_OWORD *)v12;
          v6[2] = v12[2];
        }
      }
      else
      {
        ProbeForWrite(v6, v9, 4u);
        memmove(v6, v12, v9);
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
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18);
  UserSessionSwitchLeaveCrit(v16);
  return v10;
}
