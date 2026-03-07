__int64 __fastcall UsbhRefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v8; // rax
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(_QWORD, __int64, __int64, _QWORD); // rax
  int v22; // r8d
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx

  v4 = a4;
  if ( !a1 )
    goto LABEL_29;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_34;
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  if ( !a2 )
LABEL_29:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = *(int *)(v11 + 1152);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 824923716;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a2;
      *(_QWORD *)(v14 + 24) = v12;
    }
  }
  v15 = *(_DWORD *)(v11 + 1152);
  if ( !v15 || (v16 = v15 - 1) == 0 )
  {
    Log(a1, 256, 1146497825, a2, *(int *)(v11 + 1152));
    goto LABEL_27;
  }
  if ( v16 != 1 )
  {
LABEL_27:
    v23 = 0LL;
    goto LABEL_28;
  }
  v17 = *(_QWORD *)(v11 + 1160);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 724260420;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v4;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  v20 = *(_QWORD *)(a1 + 64);
  if ( !v20 )
LABEL_34:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v20 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v21 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v20 + 4464);
  if ( v21 )
  {
    v22 = v21(*(_QWORD *)(v20 + 4232), v17, a3, (unsigned int)v4);
    if ( v22 >= 0 )
    {
      v23 = *(_QWORD *)(v11 + 1160);
      goto LABEL_21;
    }
  }
  else
  {
    v22 = -1073741822;
  }
  v23 = 0LL;
LABEL_21:
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v24 = *(_QWORD *)(a1 + 64);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
      *(_DWORD *)v25 = 841700932;
      *(_QWORD *)(v25 + 16) = v22;
      *(_QWORD *)(v25 + 8) = 0LL;
      *(_QWORD *)(v25 + 24) = v23;
    }
  }
LABEL_28:
  KeReleaseSpinLock(v9, v10);
  return v23;
}
