__int64 __fastcall PopAssociateThermalRequest(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rdi
  __int64 Dope; // rbp
  __int64 Pool2; // rax
  _QWORD *v9; // rax
  int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  int v16; // eax

  v6 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  if ( *(_QWORD *)(Dope + 64) )
    goto LABEL_17;
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
  Pool2 = ExAllocatePool2(256LL, 144LL, 1819231056LL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v9 = (_QWORD *)(Pool2 + 16);
  v9[1] = v9;
  *v9 = v9;
  v6[5] = 0LL;
  v6[4] = 0LL;
  *((_BYTE *)v6 + 66) = 100;
  v6[6] = a2;
  v10 = PopAcquireCoolingInterface(v6);
  if ( v10 < 0 )
    goto LABEL_21;
  *((_BYTE *)v6 + 64) = 1;
  if ( a3 )
  {
    v10 = PopRegisterCoolingExtensionProtection(v6);
    if ( v10 < 0 )
      goto LABEL_21;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  if ( *(_QWORD *)(Dope + 64) )
  {
LABEL_17:
    if ( a3 )
    {
      v16 = PopRegisterCoolingExtensionProtection(*(PVOID *)(Dope + 64));
      v10 = v16;
      if ( v16 < 0 )
        goto LABEL_15;
    }
    goto LABEL_9;
  }
  v11 = (_QWORD *)qword_140C3C898;
  if ( *(__int64 **)qword_140C3C898 != &PopCoolingExtensionList )
    goto LABEL_24;
  *v6 = &PopCoolingExtensionList;
  v6[1] = v11;
  *v11 = v6;
  qword_140C3C898 = (__int64)v6;
  *(_QWORD *)(Dope + 64) = v6;
  PopDiagTraceCoolingExtension(v6, POP_ETW_EVENT_COOLING_EXTENSION_ADD);
  v6 = 0LL;
LABEL_9:
  PopAcquireRwLockExclusive(*(_QWORD *)(Dope + 64) + 32LL);
  v12 = *(_QWORD *)(Dope + 64);
  *(_QWORD *)(a1 + 32) = v12;
  v13 = v12 + 16;
  v14 = *(_QWORD **)(v13 + 8);
  if ( *v14 != v13 )
LABEL_24:
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)a1 = v13;
  *v14 = a1;
  *(_QWORD *)(v13 + 8) = a1;
  *(_BYTE *)(a1 + 18) = 1;
  PopDiagTraceThermalRequest(a1, POP_ETW_EVENT_THERMAL_REQUEST_ADD);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 136LL) )
    PopThermalUpdateTelemetryClientCount(1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 128LL) )
    *(_BYTE *)(a1 + 41) = 1;
  PopReleaseRwLock(*(_QWORD *)(Dope + 64) + 32LL);
  v10 = 0;
LABEL_15:
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
  if ( v6 )
LABEL_21:
    PopCleanCoolingExtension(v6);
  return (unsigned int)v10;
}
