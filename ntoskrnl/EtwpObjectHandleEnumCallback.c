char __fastcall EtwpObjectHandleEnumCallback(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  bool v4; // cf
  unsigned __int16 v6; // r12
  unsigned __int64 HandlePointer; // rax
  void *v11; // r14
  _WORD *v12; // r10
  unsigned int v13; // edi
  unsigned int v14; // r8d
  int v15; // r11d
  int v16; // r8d
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  _WORD *Pool2; // rbx
  int v20; // r15d
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  signed __int32 v25[8]; // [rsp+0h] [rbp-69h] BYREF
  unsigned __int16 v26; // [rsp+20h] [rbp-49h]
  unsigned int v27; // [rsp+28h] [rbp-41h]
  unsigned int v28; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-31h] BYREF
  int v30; // [rsp+40h] [rbp-29h]
  unsigned int v31; // [rsp+44h] [rbp-25h]
  __int16 v32; // [rsp+48h] [rbp-21h]
  int v33; // [rsp+4Ah] [rbp-1Fh]
  __int16 v34; // [rsp+4Eh] [rbp-1Bh]
  unsigned __int64 *v35; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-11h]
  int v37; // [rsp+68h] [rbp-1h]
  int v38; // [rsp+6Ch] [rbp+3h]

  v4 = *(_BYTE *)(a4 + 64) != 0;
  v28 = 0;
  v33 = 0;
  v34 = 0;
  v6 = 4391 - v4;
  HandlePointer = ExGetHandlePointer(a2);
  v30 = *(_DWORD *)(a4 + 44);
  v31 = a3;
  v11 = (void *)(HandlePointer + 48);
  v29 = HandlePointer + 48;
  if ( *(_BYTE *)(a4 + 68) )
    v31 = a3 | 0x80000000;
  v12 = *(_WORD **)(a4 + 8);
  v13 = 1;
  v32 = (unsigned __int8)(BYTE1(HandlePointer) ^ *(_BYTE *)(HandlePointer + 24) ^ ObHeaderCookie);
  if ( v12 )
  {
    v14 = 0;
    if ( !*v12 )
    {
LABEL_8:
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v25, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      return 0;
    }
    v15 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(HandlePointer) ^ (unsigned __int64)*(unsigned __int8 *)(HandlePointer + 24)]
                    + 192);
    while ( !(unsigned int)ExCheckSingleFilter(v15, *(_DWORD *)&v12[2 * v14 + 2]) )
    {
      v14 = v16 + 1;
      if ( v14 >= v17 )
        goto LABEL_8;
    }
  }
  ObfReferenceObjectWithTag(v11, 0x54777445u);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v25, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  v18 = *(unsigned __int16 *)(a4 + 24);
  Pool2 = *(_WORD **)(a4 + 16);
  v35 = &v29;
  v28 = v18;
  v36[0] = 18LL;
  while ( 1 )
  {
    v20 = ObQueryNameStringMode((char *)v11, (__int64)Pool2, v18, &v28, 0);
    if ( v20 != -1073741820 )
      break;
    if ( Pool2 != *(_WORD **)(a4 + 16) )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v28, 1953985605LL);
    if ( !Pool2 )
      break;
    v18 = v28;
  }
  ObfDereferenceObjectWithTag(v11, 0x54777445u);
  if ( !v20 )
  {
    v21 = 0x2000;
    if ( *Pool2 < 0x2000u )
      v21 = (unsigned __int16)*Pool2;
    v13 = 2;
    v36[1] = *((_QWORD *)Pool2 + 1);
    v37 = v21;
    v38 = 0;
  }
  v22 = 2LL * v13;
  v27 = 4200450;
  v26 = v6;
  v36[v22] = 2LL;
  v23 = *(_QWORD *)(a4 + 32);
  v36[v22 - 1] = &EtwpNull;
  EtwpLogKernelEvent((__int64)&v35, *(_QWORD *)(v23 + 1096), *(_DWORD *)v23, v13 + 1, v26, v27);
  if ( Pool2 && Pool2 != *(_WORD **)(a4 + 16) )
    ExFreePoolWithTag(Pool2, 0);
  return 0;
}
