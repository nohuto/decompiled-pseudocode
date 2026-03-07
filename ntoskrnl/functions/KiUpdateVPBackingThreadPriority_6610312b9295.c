char __fastcall KiUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  int v9; // r8d
  int v10; // r14d
  char v11; // dl
  char v12; // cl
  char v13; // cl
  int v14; // esi
  int v15; // edi
  int v16; // edx
  int v17; // ecx
  _BYTE *v18; // rax
  unsigned int v19; // ecx
  __int64 *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v24 = a3;
  v23 = 0LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
    return 0;
  _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  v8 = KiReadGuestSchedulerAssistPriority(BugCheckParameter1, &v23);
  v9 = *(_DWORD *)(BugCheckParameter1 + 1024);
  v10 = v8;
  if ( v8 != v9 )
  {
    v11 = *(_BYTE *)((char)v8 + BugCheckParameter1 + 824);
    if ( v11 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v8, 1uLL, 0LL);
    *(_BYTE *)((char)v8 + BugCheckParameter1 + 824) = v11 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v8;
    if ( v9 != 32 )
    {
      v12 = *(_BYTE *)((char)v9 + BugCheckParameter1 + 824);
      if ( !v12 )
        KeBugCheckEx(0x157u, BugCheckParameter1, (char)v9, 2uLL, 0LL);
      v13 = v12 - 1;
      *(_BYTE *)((char)v9 + BugCheckParameter1 + 824) = v13;
      if ( !v13 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v9;
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v8;
  }
  v14 = *(char *)(BugCheckParameter1 + 195);
  v15 = KiComputePriorityFloor(BugCheckParameter1, v8);
  if ( a4 && (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF0) != 0 )
  {
    if ( v15 <= v14 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( v15 != v14 )
  {
LABEL_17:
    KiSetBasePriorityAndClearDecrement(BugCheckParameter1, 0LL, 0LL);
    KiUpdateThreadPriority(a2, v16, BugCheckParameter1, v15, a2 != 0);
  }
LABEL_18:
  LODWORD(v24) = *(unsigned __int8 *)(BugCheckParameter1 + 1122);
  KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v24);
  if ( (_DWORD)v24 == (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 512) )
    goto LABEL_28;
  KiSetThreadQosLevelUnsafe(BugCheckParameter1, (unsigned int)v24);
  if ( !a2 )
    goto LABEL_28;
  v17 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
  v22 = a2;
  if ( (v17 & 1) == 0 )
  {
    v20 = &v22;
    v19 = 1;
LABEL_24:
    v21 = v19;
    do
    {
      if ( KeHeteroSystem )
        *(_BYTE *)(*(_QWORD *)(*v20 + 56) + 64LL) ^= (*(_BYTE *)(BugCheckParameter1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v20 + 56) + 64LL)) & 7;
      ++v20;
      --v21;
    }
    while ( v21 );
    goto LABEL_28;
  }
  v18 = *(_BYTE **)(a2 + 34904);
  v19 = (unsigned __int8)*v18;
  v20 = (__int64 *)(v18 + 8);
  if ( *v18 )
    goto LABEL_24;
LABEL_28:
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
  if ( v14 != v15 && (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate(BugCheckParameter1, v14, v10, v15, (__int64)&v23);
  return 1;
}
