/*
 * XREFs of IovpCallDriver2 @ 0x140AC96CC
 * Callers:
 *     VfAfterCallDriver @ 0x140ACA3D8 (VfAfterCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CDA88 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CDB1C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405CDBC0 (ViErrorReport6.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140ACFA64 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140ACFB14 (IovUtilIsDeviceObjectMarked.c)
 *     IovpSessionDataDereference @ 0x140ADAFB4 (IovpSessionDataDereference.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

_UNKNOWN **__fastcall IovpCallDriver2(__int64 a1, int *a2)
{
  _UNKNOWN **result; // rax
  _DWORD *v3; // rbp
  __int64 v6; // rsi
  KIRQL v7; // al
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 LowerDeviceObjectWithTag; // rax
  void *v12; // r15
  __int64 v13; // rcx
  int v14; // ecx
  int IsDeviceObjectMarked; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  int v25; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return result;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 8));
  v8 = *(_QWORD *)(v6 + 216) == 0LL;
  *(_BYTE *)(v6 + 16) = v7;
  if ( !v8 && (*(_DWORD *)(a1 + 24) & 0x2000000) != 0 )
    *a2 = 259;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 160);
  if ( (v9 & 0x20000000) == 0 || *a2 == 259 || (v9 & 0x1000000) != 0 )
    goto LABEL_26;
  LowerDeviceObjectWithTag = IovUtilGetLowerDeviceObjectWithTag(*(_QWORD *)(a1 + 160));
  v12 = (void *)LowerDeviceObjectWithTag;
  if ( (*(_DWORD *)(a1 + 24) & 0x10000000) == 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 312LL) + 40LL);
    if ( !v13 )
      goto LABEL_19;
    v14 = *(_DWORD *)(v13 + 396);
    if ( (v14 & 0x10) != 0 )
    {
      IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked(v10, 0LL);
      if ( v10 == *(_QWORD **)(a1 + 64) )
      {
        if ( !IsDeviceObjectMarked )
          goto LABEL_19;
        v16 = 545;
        goto LABEL_14;
      }
      if ( !IsDeviceObjectMarked && (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) )
      {
        v16 = 547;
LABEL_14:
        ViErrorReport10(v16, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
      }
LABEL_19:
      if ( v12 )
      {
LABEL_25:
        ObfDereferenceObjectWithTag(v12, 0x49667256u);
        goto LABEL_26;
      }
      goto LABEL_26;
    }
    if ( (v14 & 0x10000) == 0 )
      goto LABEL_19;
  }
  if ( LowerDeviceObjectWithTag )
  {
    v17 = *(_QWORD *)(v10[1] + 80LL);
    if ( !v17 || !*(_QWORD *)(v17 + 104) )
      ViErrorReport10(0x21Du, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
    goto LABEL_25;
  }
LABEL_26:
  v18 = *(_DWORD *)(a1 + 24);
  if ( (v18 & 0x40000000) == 0 || (v3[8] & 2) != 0 )
    goto LABEL_36;
  v19 = *a2;
  if ( (v18 & 0x2000000) != 0 )
  {
    if ( v19 == 259 || (v18 & 0x1000000) != 0 )
      goto LABEL_36;
    v20 = 574LL;
  }
  else
  {
    if ( v19 != 259 && (v18 & 0x1000000) == 0 )
      goto LABEL_36;
    v20 = 588LL;
  }
  ViErrorReport6(v20, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v19);
  v3[8] |= 2u;
LABEL_36:
  v21 = (unsigned int)*a2;
  if ( _bittest((const signed __int32 *)(a1 + 24), 0x1Eu) )
  {
    v22 = *(_DWORD *)(a1 + 56);
    if ( (_DWORD)v21 == v22 )
    {
      if ( (_DWORD)v21 == -1 )
        ViErrorReport6(549LL, *(const void **)(a1 + 48), *(const void **)(a1 + 72), -1);
    }
    else if ( (_DWORD)v21 != 259 )
    {
      if ( (v3[8] & 1) == 0 )
        ViErrorReport4(v21, *(const void **)(a1 + 48), (const void **)(a1 + 72), v22, *a2);
      v3[8] |= 1u;
    }
  }
  else
  {
    if ( (_DWORD)v21 != 259 )
    {
      if ( (*(_DWORD *)(v6 + 56) & 0x400000) == 0 )
        ViErrorReport1(0x226u, *(const void **)(a1 + 48), *(const void **)(a1 + 72));
      *(_DWORD *)(v6 + 56) |= 0x400000u;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) |= 0x4000000u;
    v23 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v23 + 8) != a1 + 32 || (v24 = *(_QWORD **)(a1 + 40), *v24 != a1 + 32) )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
  }
  v25 = *(_DWORD *)(a1 + 24);
  if ( (v25 & 0x8000000) != 0 && *a2 != 259 && (v25 & 0x1000000) == 0 )
    *a2 = *(_DWORD *)(a1 + 60);
  IovpSessionDataDereference(v3);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
  return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v6);
}
