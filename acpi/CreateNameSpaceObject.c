__int64 __fastcall CreateNameSpaceObject(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        __int64 *a5,
        int a6)
{
  __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *v8; // r15
  unsigned __int8 *v9; // r14
  unsigned int v10; // edi
  size_t v11; // r15
  char *Pool2; // r13
  KIRQL v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rsi
  KIRQL v17; // dl
  KIRQL v18; // r15
  unsigned int NameSpaceObjectNoLock; // edx
  __int64 v20; // rcx
  __int64 *i; // rcx
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rcx
  char *v26; // rax
  unsigned __int8 *v27; // r15
  unsigned __int8 v28; // al
  __int64 v29; // rax
  __int64 v30; // rcx
  size_t v31; // rax
  bool v32; // zf
  __int64 v33; // rax
  size_t v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rsi
  KIRQL v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  size_t Size; // [rsp+58h] [rbp-A8h]
  __int64 *v43; // [rsp+60h] [rbp-A0h]
  char Str[128]; // [rsp+70h] [rbp-90h] BYREF

  v43 = a5;
  v6 = 0LL;
  v40 = a4;
  v41 = a1;
  v38 = 0LL;
  v8 = a4;
  v9 = a2;
  v10 = 0;
  if ( a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    if ( v11 + 1 >= 0x80 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, v11 + 1, 1768973121LL);
      if ( !Pool2 )
        return 3221225626LL;
    }
    else
    {
      Pool2 = Str;
    }
    memmove(Pool2, v9, v11);
    a1 = v41;
    v9 = (unsigned __int8 *)Pool2;
    Pool2[v11] = 0;
    v8 = v40;
  }
  else
  {
    Pool2 = 0LL;
  }
  if ( !a3 )
    a3 = gpnsNameSpaceRoot;
  if ( v9 )
  {
    v37 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v18 = v37;
    if ( *v9 )
    {
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v9, a3, &v38, 1LL);
      v10 = NameSpaceObjectNoLock;
      if ( !NameSpaceObjectNoLock )
      {
        if ( (a6 & 0x20000) == 0 )
        {
          v6 = v38;
          if ( !_bittest16((const signed __int16 *)(v38 + 64), 8u) )
          {
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v37);
            if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision((__int64)v9, a3) < 0)
              && (a6 & 0x10000) == 0 )
            {
              LogError(-1073741771);
              AcpiDiagTraceAmlError(0LL, -1073741771);
              PrintDebugMessage(35, v9, 0LL, 0LL, 0LL);
            }
            v10 = -1073741771;
            goto LABEL_75;
          }
          v20 = *(_QWORD *)(v38 + 48);
          v10 = 0;
          if ( v20 )
          {
            for ( i = (__int64 *)(v20 + 24); ; i = (__int64 *)(v22 + 56) )
            {
              v22 = *i;
              if ( !*i )
                break;
              if ( v22 == v38 )
              {
                *i = *(_QWORD *)(v38 + 56);
                break;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v6 + 48) + 32LL));
          }
          InsertOwnerObjList(v40, (struct _EX_RUNDOWN_REF *)v6);
          *(_WORD *)(v6 + 64) &= ~0x100u;
          v17 = v37;
          *(_WORD *)(v6 + 64) |= 0x80u;
          goto LABEL_19;
        }
        v10 = -1073741771;
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v37);
        v6 = v38;
LABEL_75:
        if ( v43 )
          *v43 = v6;
        goto LABEL_77;
      }
      if ( NameSpaceObjectNoLock != -1073741772 )
      {
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v37);
        v6 = v38;
LABEL_74:
        if ( v10 != -1073741771 )
          goto LABEL_77;
        goto LABEL_75;
      }
      v6 = v38;
    }
    v10 = 0;
    v23 = *v9 - 92;
    if ( *v9 == 92 )
      v23 = v9[1];
    if ( !v23 )
    {
      v24 = NewNameSpaceObject(v41);
      v6 = v24;
      if ( v24 )
      {
        v25 = v40;
        *(_DWORD *)(v24 + 40) = 1600085852;
        gpnsNameSpaceRoot = v24;
        InsertOwnerObjList(v25, (struct _EX_RUNDOWN_REF *)v24);
      }
      else
      {
        v10 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(0LL, -1073741670);
        PrintDebugMessage(36, 0LL, 0LL, 0LL, 0LL);
      }
LABEL_73:
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v18);
      if ( !v10 )
        goto LABEL_75;
      goto LABEL_74;
    }
    v39 = 0LL;
    v26 = strrchr((const char *)v9, 46);
    if ( v26 )
    {
      *v26 = 0;
      v27 = (unsigned __int8 *)(v26 + 1);
      v10 = GetNameSpaceObjectNoLock(v9, a3, &v39, 2147483649LL);
      if ( v10 )
      {
LABEL_72:
        v18 = v37;
        goto LABEL_73;
      }
      a3 = v39;
    }
    else
    {
      v28 = *v9;
      if ( *v9 == 92 )
      {
        a3 = gpnsNameSpaceRoot;
        v27 = v9 + 1;
        v39 = gpnsNameSpaceRoot;
      }
      else
      {
        v39 = a3;
        v27 = v9;
        if ( v28 == 94 )
        {
          v29 = a3;
          v30 = a3;
          do
          {
            if ( !v29 )
              break;
            a3 = *(_QWORD *)(v30 + 16);
            ++v27;
            v29 = a3;
            v39 = a3;
            v30 = a3;
          }
          while ( *v27 == 94 );
        }
      }
    }
    v31 = -1LL;
    do
      ++v31;
    while ( v27[v31] );
    v32 = *v27 == 0;
    Size = v31;
    if ( v32 || (unsigned int)v31 <= 4 )
    {
      v33 = NewNameSpaceObject(v41);
      v38 = v33;
      v6 = v33;
      if ( v33 )
      {
        if ( *v9 )
        {
          v34 = (unsigned int)Size;
          *(_DWORD *)(v33 + 40) = 1600085855;
          memmove((void *)(v33 + 40), v27, v34);
        }
        else
        {
          *(_DWORD *)(v33 + 40) = 0;
        }
        *(_QWORD *)(v6 + 16) = a3;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
          v6 = v38;
          a3 = v39;
        }
        InsertOwnerObjList(v40, (struct _EX_RUNDOWN_REF *)v6);
        v35 = *(__int64 **)(a3 + 32);
        v36 = a3 + 24;
        if ( *v35 != v36 )
          goto LABEL_70;
        *(_QWORD *)v6 = v36;
        *(_QWORD *)(v6 + 8) = v35;
        *v35 = v6;
        *(_QWORD *)(v36 + 8) = v6;
      }
      else
      {
        v10 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(0LL, -1073741670);
        PrintDebugMessage(36, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v10 = -1073741773;
      LogError(-1073741773);
      AcpiDiagTraceAmlError(0LL, -1073741773);
      PrintDebugMessage(37, v27, 0LL, 0LL, 0LL);
    }
    goto LABEL_72;
  }
  v38 = NewNameSpaceObject(a1);
  v6 = v38;
  if ( v38 )
  {
    v14 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    *(_QWORD *)(v38 + 16) = a3;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
      v6 = v38;
    }
    InsertOwnerObjList(v8, (struct _EX_RUNDOWN_REF *)v6);
    v15 = *(__int64 **)(a3 + 32);
    v16 = a3 + 24;
    if ( *v15 == v16 )
    {
      *(_QWORD *)v6 = v16;
      v17 = v14;
      *(_QWORD *)(v6 + 8) = v15;
      *v15 = v6;
      *(_QWORD *)(v16 + 8) = v6;
LABEL_19:
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v17);
      goto LABEL_75;
    }
LABEL_70:
    __fastfail(3u);
  }
  v10 = -1073741670;
  LogError(-1073741670);
  AcpiDiagTraceAmlError(0LL, -1073741670);
  PrintDebugMessage(36, 0LL, 0LL, 0LL, 0LL);
LABEL_77:
  if ( Pool2 )
  {
    if ( Str != Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return v10;
}
