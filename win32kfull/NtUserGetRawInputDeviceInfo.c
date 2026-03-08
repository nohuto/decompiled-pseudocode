/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C01D48E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, __int64 a2, ULONG64 a3, unsigned int *a4)
{
  int v6; // r12d
  unsigned int v8; // ebx
  unsigned int *v9; // rax
  SIZE_T v10; // r13
  __int64 v11; // rsi
  int v12; // ecx
  unsigned int v13; // r14d
  int v14; // r12d
  int v15; // r12d
  int v16; // r12d
  _BYTE *v17; // rdx
  _BYTE *v18; // rdx
  __int64 v19; // rcx
  _BYTE v21[4]; // [rsp+20h] [rbp-78h] BYREF
  int v22; // [rsp+24h] [rbp-74h]
  int v23; // [rsp+28h] [rbp-70h]

  v6 = a2;
  v8 = 0;
  v23 = 0;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  v9 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  v23 = *v9;
  v11 = HMValidateHandle(a1, 0x13u);
  if ( !v11 )
  {
    v12 = 6;
LABEL_5:
    UserSetLastError(v12);
    v8 = -1;
    goto LABEL_52;
  }
  switch ( v6 )
  {
    case 536870917:
      if ( *(_BYTE *)(v11 + 48) == 2 )
        v13 = *(_DWORD *)(*(_QWORD *)(v11 + 456) + 104LL);
      else
        v13 = 0;
      break;
    case 536870919:
      v13 = (*(unsigned __int16 *)(v11 + 208) >> 1) + 1;
      break;
    case 536870923:
      v13 = 32;
      break;
    case 536870924:
      v13 = 44;
      break;
    default:
      v12 = 87;
      goto LABEL_5;
  }
  if ( !a3 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v13;
    goto LABEL_52;
  }
  if ( (unsigned int)v10 >= v13 )
  {
    ProbeForWrite((volatile void *)a3, v10, 4u);
    v14 = v6 - 536870917;
    if ( !v14 )
    {
      if ( *(_BYTE *)(v11 + 48) == 2 )
        memmove((void *)a3, *(const void **)(*(_QWORD *)(v11 + 456) + 16LL), v13);
      goto LABEL_48;
    }
    v15 = v14 - 2;
    if ( v15 )
    {
      v16 = v15 - 4;
      if ( !v16 )
      {
        if ( (_DWORD)v10 != v13 )
          goto LABEL_27;
        if ( (a3 & 3) == 0 )
        {
          v18 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v18 = (_BYTE *)MmUserProbeAddress;
          *v18 = *v18;
          v18[31] = v18[31];
          *(_OWORD *)a3 = 0LL;
          *(_OWORD *)(a3 + 16) = 0LL;
          *(_DWORD *)a3 = v13;
          if ( *(_BYTE *)(v11 + 48) )
          {
            if ( *(_BYTE *)(v11 + 48) == 1 )
            {
              *(_DWORD *)(a3 + 4) = 1;
              *(_DWORD *)(a3 + 8) = *(_DWORD *)(v11 + 484);
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v11 + 488);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v11 + 458);
              *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v11 + 460);
              *(_DWORD *)(a3 + 24) = *(unsigned __int16 *)(v11 + 462);
              *(_DWORD *)(a3 + 28) = *(unsigned __int16 *)(v11 + 464);
            }
            else if ( *(_BYTE *)(v11 + 48) == 2 )
            {
              *(_DWORD *)(a3 + 4) = 2;
              *(_DWORD *)(a3 + 8) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 456) + 110LL);
              *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 456) + 112LL);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 456) + 114LL);
              *(_WORD *)(a3 + 20) = *(_WORD *)(*(_QWORD *)(v11 + 456) + 42LL);
              *(_WORD *)(a3 + 22) = *(_WORD *)(*(_QWORD *)(v11 + 456) + 40LL);
            }
          }
          else
          {
            *(_DWORD *)(a3 + 8) = *(_WORD *)(v11 + 456) & 0x7FFF;
            *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v11 + 458);
            *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v11 + 460);
            *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v11 + 456) >> 15;
          }
          goto LABEL_48;
        }
        goto LABEL_34;
      }
      if ( v16 == 1 )
      {
        if ( (_DWORD)v10 != v13 )
        {
LABEL_27:
          v8 = -1;
          v22 = -1;
          UserSetLastError(87);
          goto LABEL_52;
        }
        if ( (a3 & 3) == 0 )
        {
          v17 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v17 = (_BYTE *)MmUserProbeAddress;
          *v17 = *v17;
          v17[43] = v17[43];
          *(_OWORD *)a3 = 0LL;
          *(_OWORD *)(a3 + 16) = 0LL;
          *(_QWORD *)(a3 + 32) = 0LL;
          *(_DWORD *)(a3 + 40) = 0;
          RIMFillDeviceHealthInfo(a3, v11);
          goto LABEL_48;
        }
LABEL_34:
        ExRaiseDatatypeMisalignment();
      }
    }
    else
    {
      if ( v13 <= 2 )
      {
        v8 = -1;
        v22 = -1;
        goto LABEL_52;
      }
      memmove((void *)a3, *(const void **)(v11 + 216), *(unsigned __int16 *)(v11 + 208));
      *(_WORD *)(a3 + 2) = 92;
      *(_WORD *)(a3 + 2LL * (v13 - 1)) = 0;
    }
LABEL_48:
    v8 = v13;
    goto LABEL_52;
  }
  v8 = -1;
  v22 = -1;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  *a4 = v13;
  UserSetLastError(122);
LABEL_52:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  UserSessionSwitchLeaveCrit(v19);
  return v8;
}
