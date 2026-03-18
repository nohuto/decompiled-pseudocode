/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C01F6390
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, __int64 a2, ULONG64 a3, unsigned int *a4)
{
  int v6; // r12d
  unsigned int v8; // ebx
  unsigned int *v9; // rax
  SIZE_T v10; // r13
  _BYTE *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // r14d
  int v16; // r12d
  int v17; // r12d
  int v18; // r12d
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  _BYTE v22[4]; // [rsp+20h] [rbp-78h] BYREF
  int v23; // [rsp+24h] [rbp-74h]
  int v24; // [rsp+28h] [rbp-70h]

  v6 = a2;
  v8 = 0;
  v24 = 0;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22);
  v9 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  v24 = *v9;
  v12 = HMValidateHandle(a1, 0x13u);
  if ( !v12 )
  {
    v14 = 6LL;
LABEL_5:
    UserSetLastError(v14, (__int64)v11);
    v8 = -1;
    goto LABEL_52;
  }
  switch ( v6 )
  {
    case 536870917:
      if ( *(_BYTE *)(v12 + 48) == 2 )
        v15 = *(_DWORD *)(*(_QWORD *)(v12 + 456) + 104LL);
      else
        v15 = 0;
      break;
    case 536870919:
      v15 = (*(unsigned __int16 *)(v12 + 208) >> 1) + 1;
      break;
    case 536870923:
      v15 = 32;
      break;
    case 536870924:
      v15 = 44;
      break;
    default:
      v14 = 87LL;
      goto LABEL_5;
  }
  if ( !a3 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v15;
    goto LABEL_52;
  }
  if ( (unsigned int)v10 >= v15 )
  {
    ProbeForWrite((volatile void *)a3, v10, 4u);
    v16 = v6 - 536870917;
    if ( !v16 )
    {
      if ( *(_BYTE *)(v12 + 48) == 2 )
        memmove((void *)a3, *(const void **)(*(_QWORD *)(v12 + 456) + 16LL), v15);
      goto LABEL_48;
    }
    v17 = v16 - 2;
    if ( v17 )
    {
      v18 = v17 - 4;
      if ( !v18 )
      {
        if ( (_DWORD)v10 != v15 )
          goto LABEL_27;
        if ( (a3 & 3) == 0 )
        {
          v11 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v11 = (_BYTE *)MmUserProbeAddress;
          *v11 = *v11;
          v11[31] = v11[31];
          *(_OWORD *)a3 = 0LL;
          *(_OWORD *)(a3 + 16) = 0LL;
          *(_DWORD *)a3 = v15;
          if ( *(_BYTE *)(v12 + 48) )
          {
            if ( *(_BYTE *)(v12 + 48) == 1 )
            {
              *(_DWORD *)(a3 + 4) = 1;
              *(_DWORD *)(a3 + 8) = *(_DWORD *)(v12 + 484);
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v12 + 488);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v12 + 458);
              *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v12 + 460);
              *(_DWORD *)(a3 + 24) = *(unsigned __int16 *)(v12 + 462);
              *(_DWORD *)(a3 + 28) = *(unsigned __int16 *)(v12 + 464);
            }
            else if ( *(_BYTE *)(v12 + 48) == 2 )
            {
              *(_DWORD *)(a3 + 4) = 2;
              *(_DWORD *)(a3 + 8) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 456) + 110LL);
              *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 456) + 112LL);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 456) + 114LL);
              *(_WORD *)(a3 + 20) = *(_WORD *)(*(_QWORD *)(v12 + 456) + 42LL);
              *(_WORD *)(a3 + 22) = *(_WORD *)(*(_QWORD *)(v12 + 456) + 40LL);
            }
          }
          else
          {
            *(_DWORD *)(a3 + 8) = *(_WORD *)(v12 + 456) & 0x7FFF;
            *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v12 + 458);
            *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v12 + 460);
            *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v12 + 456) >> 15;
          }
          goto LABEL_48;
        }
        goto LABEL_34;
      }
      if ( v18 == 1 )
      {
        if ( (_DWORD)v10 != v15 )
        {
LABEL_27:
          v8 = -1;
          v23 = -1;
          UserSetLastError(87LL, (__int64)v11);
          goto LABEL_52;
        }
        if ( (a3 & 3) == 0 )
        {
          v19 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v19 = (_BYTE *)MmUserProbeAddress;
          *v19 = *v19;
          v19[43] = v19[43];
          *(_OWORD *)a3 = 0LL;
          *(_OWORD *)(a3 + 16) = 0LL;
          *(_QWORD *)(a3 + 32) = 0LL;
          *(_DWORD *)(a3 + 40) = 0;
          RIMFillDeviceHealthInfo(a3, v12);
          goto LABEL_48;
        }
LABEL_34:
        ExRaiseDatatypeMisalignment();
      }
    }
    else
    {
      if ( v15 <= 2 )
      {
        v8 = -1;
        v23 = -1;
        goto LABEL_52;
      }
      memmove((void *)a3, *(const void **)(v12 + 216), *(unsigned __int16 *)(v12 + 208));
      *(_WORD *)(a3 + 2) = 92;
      *(_WORD *)(a3 + 2LL * (v15 - 1)) = 0;
    }
LABEL_48:
    v8 = v15;
    goto LABEL_52;
  }
  v8 = -1;
  v23 = -1;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  *a4 = v15;
  UserSetLastError(122LL, (__int64)v11);
LABEL_52:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v22, (__int64)v11, v13);
  UserSessionSwitchLeaveCrit(v20);
  return v8;
}
