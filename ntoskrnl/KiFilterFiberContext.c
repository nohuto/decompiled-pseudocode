/*
 * XREFs of KiFilterFiberContext @ 0x140B14C30
 * Callers:
 *     KeInitAmd64SpecificState @ 0x140B6F644 (KeInitAmd64SpecificState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 *     ExInitializeNPagedLookasideList @ 0x1403BD370 (ExInitializeNPagedLookasideList.c)
 *     KeExpandKernelStackAndCallout @ 0x1403D0D60 (KeExpandKernelStackAndCallout.c)
 *     KdDisableDebugger @ 0x140565110 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140565340 (KdEnableDebugger.c)
 *     KeKeepData @ 0x1405691C4 (KeKeepData.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 *     KiSwInterruptPresent @ 0x140B65038 (KiSwInterruptPresent.c)
 */

_BOOL8 __fastcall KiFilterFiberContext(__int64 a1)
{
  NTSTATUS v2; // r12d
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int128 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // r15
  NTSTATUS v12; // eax
  char v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int128 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int128 v18; // rax
  NTSTATUS v19; // eax
  char v20; // cl
  int v21; // eax
  int v22; // edx
  NTSTATUS v23; // eax
  char v24; // cl
  int v25; // ecx
  __int64 *v26; // rax
  __int64 v27; // rdx
  _DWORD Parameter[4]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v30; // [rsp+50h] [rbp-79h]
  int v31; // [rsp+58h] [rbp-71h]
  char v32; // [rsp+5Ch] [rbp-6Dh]
  _DWORD v33[4]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v34; // [rsp+70h] [rbp-59h]
  int v35; // [rsp+78h] [rbp-51h]
  char v36; // [rsp+7Ch] [rbp-4Dh]
  _DWORD v37[4]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v38; // [rsp+90h] [rbp-39h]
  int v39; // [rsp+98h] [rbp-31h]
  char v40; // [rsp+9Ch] [rbp-2Dh]
  __int64 v41; // [rsp+A0h] [rbp-29h]
  __int64 v42; // [rsp+A8h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+130h] [rbp+67h] BYREF
  __int64 v45; // [rsp+138h] [rbp+6Fh]
  __int64 v46; // [rsp+140h] [rbp+77h]
  __int64 v47; // [rsp+148h] [rbp+7Fh]

  v2 = KdDisableDebugger();
  KeKeepData();
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3 = __rdtsc();
  v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v45 = *((_QWORD *)&v4 + 1);
  v5 = ((unsigned __int64)v4 ^ *((_QWORD *)&v4 + 1)) % 0xA;
  if ( !*(_QWORD *)&MaxDataSize && !a1 && !__30 )
  {
    if ( PsIntegrityCheckEnabled )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"TV";
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0) >= 0 )
      {
        ExNotifyCallback(CallbackObject, sub_1403DFCC0, &__27);
        ObfDereferenceObject(CallbackObject);
        if ( __27 )
          __30 = 1;
        ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, 0LL, 0LL, 0x200u, 0xAF0uLL, 0x746E494Bu, 0);
      }
    }
  }
  v6 = __rdtsc();
  v7 = (__ROR8__(v6, 3) ^ v6) * (unsigned __int128)0x7010008004002001uLL;
  v46 = *((_QWORD *)&v7 + 1);
  v8 = v7;
  *(_QWORD *)&v7 = __rdtsc();
  v9 = v8 ^ *((_QWORD *)&v7 + 1);
  Parameter[2] = (v5 < 6) + 1;
  v30 = a1;
  v31 = 1;
  v32 = 0;
  v10 = (__ROR8__(v7, 3) ^ (unsigned __int64)v7) * (unsigned __int128)0x7010008004002001uLL;
  v47 = *((_QWORD *)&v10 + 1);
  v11 = ((unsigned __int64)v10 ^ *((_QWORD *)&v10 + 1)) % 6;
  Parameter[1] = v11;
  Parameter[0] = v9 % 0xD;
  v12 = KeExpandKernelStackAndCallout(sub_140B31090, Parameter, 0xC000uLL);
  v13 = v32;
  if ( v12 < 0 )
    v13 = 0;
  v32 = v13;
  if ( v13 )
  {
    if ( v5 >= 6 )
      goto LABEL_21;
    v14 = __rdtsc();
    v15 = (__ROR8__(v14, 3) ^ v14) * (unsigned __int128)0x7010008004002001uLL;
    v41 = *((_QWORD *)&v15 + 1);
    v16 = ((unsigned __int64)v15 ^ *((_QWORD *)&v15 + 1)) % 0xD;
    do
    {
      v17 = __rdtsc();
      v18 = (__ROR8__(v17, 3) ^ v17) * (unsigned __int128)0x7010008004002001uLL;
      v42 = *((_QWORD *)&v18 + 1);
    }
    while ( (_DWORD)v11 && ((unsigned __int64)v18 ^ *((_QWORD *)&v18 + 1)) % 6 == (_DWORD)v11 );
    v33[0] = v16;
    v33[1] = ((unsigned __int64)v18 ^ *((_QWORD *)&v18 + 1)) % 6;
    v33[2] = (v5 < 6) + 1;
    v34 = a1;
    v35 = 0;
    v36 = 0;
    v19 = KeExpandKernelStackAndCallout(sub_140B31090, v33, 0xC000uLL);
    v20 = v36;
    if ( v19 < 0 )
      v20 = 0;
    v36 = v20;
    v13 = v20;
    if ( v20 )
    {
LABEL_21:
      if ( *(_QWORD *)&MaxDataSize )
        goto LABEL_30;
      if ( a1 )
        goto LABEL_38;
      if ( (int)KiSwInterruptPresent() < 0 && !__30 )
      {
LABEL_31:
        if ( qword_140D81650 )
          ExFreePool(qword_140D81650);
        v25 = 24;
        v26 = &__28;
        v27 = 3LL;
        do
        {
          *v26 = 0LL;
          v25 -= 8;
          ++v26;
          --v27;
        }
        while ( v27 );
        for ( ; v25; --v25 )
        {
          *(_BYTE *)v26 = 0;
          v26 = (__int64 *)((char *)v26 + 1);
        }
        __32 = 0;
        __29 = 0;
        __2a = 0LL;
        dword_140C0DF00 = 0;
        qword_140D81080 = 0LL;
        goto LABEL_38;
      }
      v37[0] = 0;
      v37[1] = 7;
      v37[2] = 1;
      v38 = 0LL;
      v21 = KiSwInterruptPresent();
      v40 = 0;
      v22 = 8;
      if ( v21 >= 0 )
        v22 = 0;
      v39 = v22;
      v23 = KeExpandKernelStackAndCallout(sub_140B31090, v37, 0xC000uLL);
      v24 = v40;
      if ( v23 < 0 )
        v24 = 0;
      v40 = v24;
      v13 = v24;
      if ( v24 )
      {
LABEL_30:
        if ( a1 )
          goto LABEL_38;
        goto LABEL_31;
      }
    }
  }
LABEL_38:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v13 != 0;
}
