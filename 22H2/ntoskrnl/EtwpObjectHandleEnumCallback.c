/*
 * XREFs of EtwpObjectHandleEnumCallback @ 0x14093DF40
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x1402D0790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x1405B353C (ExCheckSingleFilter.c)
 *     ExUnlockHandleTableEntry @ 0x1405D6CB0 (ExUnlockHandleTableEntry.c)
 *     ObQueryNameString @ 0x14070FAD0 (ObQueryNameString.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

char __fastcall EtwpObjectHandleEnumCallback(__int64 a1, volatile signed __int64 *a2, unsigned int a3, __int64 a4)
{
  bool v4; // cf
  int v5; // eax
  unsigned __int16 v7; // r12
  unsigned __int64 v8; // rcx
  void *v11; // r14
  unsigned int v12; // esi
  _WORD *v13; // r10
  unsigned int v14; // r8d
  int v15; // r11d
  int v16; // r8d
  unsigned int v17; // r9d
  ULONG v18; // r8d
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rbx
  NTSTATUS v20; // r15d
  int Length; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  ULONG ReturnLength; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-31h] BYREF
  int v27; // [rsp+40h] [rbp-29h]
  unsigned int v28; // [rsp+44h] [rbp-25h]
  __int16 v29; // [rsp+48h] [rbp-21h]
  int v30; // [rsp+4Ah] [rbp-1Fh]
  __int16 v31; // [rsp+4Eh] [rbp-1Bh]
  unsigned __int64 *v32; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-11h]
  int v34; // [rsp+68h] [rbp-1h]
  int v35; // [rsp+6Ch] [rbp+3h]

  v4 = *(_BYTE *)(a4 + 64) != 0;
  ReturnLength = 0;
  v5 = *(_DWORD *)(a4 + 44);
  v7 = 4391 - v4;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v30 = 0;
  v31 = 0;
  v27 = v5;
  v11 = (void *)(v8 + 48);
  v28 = a3;
  v26 = v8 + 48;
  if ( *(_BYTE *)(a4 + 68) )
    v28 = a3 | 0x80000000;
  v12 = 1;
  v13 = *(_WORD **)(a4 + 8);
  v29 = (unsigned __int8)(BYTE1(v8) ^ ObHeaderCookie ^ *(_BYTE *)(v8 + 24));
  if ( v13 )
  {
    v14 = 0;
    if ( !*v13 )
    {
LABEL_8:
      ExUnlockHandleTableEntry(a1, a2);
      return 0;
    }
    v15 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(v8) ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)]
                    + 192);
    while ( !(unsigned int)ExCheckSingleFilter(v15, *(_DWORD *)&v13[2 * v14 + 2]) )
    {
      v14 = v16 + 1;
      if ( v14 >= v17 )
        goto LABEL_8;
    }
  }
  ObfReferenceObjectWithTag(v11, 0x54777445u);
  ExUnlockHandleTableEntry(a1, a2);
  v18 = *(unsigned __int16 *)(a4 + 24);
  PoolWithTag = *(_OBJECT_NAME_INFORMATION **)(a4 + 16);
  v32 = &v26;
  ReturnLength = v18;
  v33[0] = 18LL;
  while ( 1 )
  {
    v20 = ObQueryNameString(v11, PoolWithTag, v18, &ReturnLength);
    if ( v20 != -1073741820 )
      break;
    if ( PoolWithTag != *(_OBJECT_NAME_INFORMATION **)(a4 + 16) )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x74777445u);
    if ( !PoolWithTag )
      break;
    v18 = ReturnLength;
  }
  ObfDereferenceObjectWithTag(v11, 0x54777445u);
  if ( !v20 )
  {
    Length = 0x2000;
    if ( PoolWithTag->Name.Length < 0x2000u )
      Length = PoolWithTag->Name.Length;
    v12 = 2;
    v33[1] = PoolWithTag->Name.Buffer;
    v34 = Length;
    v35 = 0;
  }
  v22 = 2LL * v12;
  v33[v22] = 2LL;
  v23 = *(_QWORD *)(a4 + 32);
  v33[v22 - 1] = &EtwpNull;
  EtwpLogKernelEvent((__int64)&v32, *(_QWORD *)(v23 + 1080), *(_DWORD *)v23, v12 + 1, v7, 0x401802u);
  if ( PoolWithTag && PoolWithTag != *(_OBJECT_NAME_INFORMATION **)(a4 + 16) )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0;
}
