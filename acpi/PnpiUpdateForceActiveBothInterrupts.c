/*
 * XREFs of PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FC4
 * Callers:
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00917BC (PnpiBiosExtendedIrqToIoDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C003C580 (PnpiCleanupForceActiveBothInterrupts.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNSObjectNameSegment @ 0x1C0048384 (AMLIGetNSObjectNameSegment.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C65C (ACPIAmliEvaluateDsm.c)
 *     ACPIRegLocalCopyString @ 0x1C008D388 (ACPIRegLocalCopyString.c)
 *     OSCreateHandle @ 0x1C008DB54 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C008EC30 (OSWriteRegValue.c)
 */

__int64 __fastcall PnpiUpdateForceActiveBothInterrupts(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  PVOID v4; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  _QWORD *v6; // rcx
  unsigned int *v7; // rsi
  __int64 v8; // rax
  __int64 Pool2; // rax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int Data; // [rsp+38h] [rbp-39h] BYREF
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-29h] BYREF
  __int128 v16; // [rsp+58h] [rbp-19h] BYREF
  __int128 v17; // [rsp+68h] [rbp-9h] BYREF
  __int128 v18; // [rsp+78h] [rbp+7h]
  __int128 v19; // [rsp+88h] [rbp+17h]
  char SourceString[8]; // [rsp+98h] [rbp+27h] BYREF

  Handle = 0LL;
  P = 0LL;
  if ( *(_DWORD *)(a1 + 704) != -1 )
    return 0LL;
  if ( !gAcpiHonorBiosPolarities )
  {
    *(_DWORD *)(a1 + 704) = 0;
    return 0LL;
  }
  v3 = *(_QWORD **)(a1 + 760);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v16 = INTERRUPT_DSM_GUID;
  result = ACPIAmliEvaluateDsm(v3, (__int64)&v16, 0, 0, &v17, &P);
  Data = result;
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
    {
      result = 0LL;
      *(_DWORD *)(a1 + 704) = 0;
      Data = 0;
    }
    goto LABEL_9;
  }
  v4 = P;
  if ( *((_WORD *)P + 1) != 3 || !*((_DWORD *)P + 6) )
  {
    BugCheckParameter4 = 1LL;
    goto LABEL_43;
  }
  BugCheckParameter4 = 2LL;
  if ( (**((_BYTE **)P + 4) & 2) == 0 )
  {
    *(_DWORD *)(a1 + 704) = 0;
    goto LABEL_20;
  }
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  AMLIFreeDataBuffs((__int64)P);
  ExFreePoolWithTag(v4, 0x52706341u);
  v6 = *(_QWORD **)(a1 + 760);
  P = 0LL;
  v16 = INTERRUPT_DSM_GUID;
  result = ACPIAmliEvaluateDsm(v6, (__int64)&v16, 0, 1u, &v17, &P);
  Data = result;
  if ( (int)result < 0 )
  {
LABEL_9:
    v4 = P;
    goto LABEL_10;
  }
  v4 = P;
  if ( *((_WORD *)P + 1) != 4 )
  {
LABEL_43:
    Data = -1073741823;
LABEL_44:
    KeBugCheckEx(0xA5u, 0x1000CuLL, 0LL, 1uLL, BugCheckParameter4);
  }
  v7 = (unsigned int *)*((_QWORD *)P + 4);
  v8 = *v7;
  if ( (unsigned int)v8 > 0x3FFFFFFF )
  {
    BugCheckParameter4 = 3LL;
    goto LABEL_43;
  }
  *(_DWORD *)(a1 + 704) = v8;
  if ( (_DWORD)v8 )
  {
    Pool2 = ExAllocatePool2(64LL, 4 * v8, 1148216129LL);
    *(_QWORD *)(a1 + 696) = Pool2;
    if ( !Pool2 )
    {
      Data = -1073741823;
      goto LABEL_21;
    }
  }
  v10 = 0;
  if ( *(_DWORD *)(a1 + 704) )
  {
    while ( 1 )
    {
      v11 = v10;
      v12 = 5LL * v10;
      if ( HIWORD(v7[10 * v10 + 2]) != 1 || *(_QWORD *)&v7[10 * v10 + 6] > 0xFFFFFFFFuLL )
        break;
      ++v10;
      *(_DWORD *)(*(_QWORD *)(a1 + 696) + 4 * v11) = v7[2 * v12 + 6];
      if ( v10 >= *(_DWORD *)(a1 + 704) )
        goto LABEL_20;
    }
    BugCheckParameter4 = 4LL;
    goto LABEL_43;
  }
LABEL_20:
  Data = 0;
LABEL_21:
  AMLIFreeDataBuffs((__int64)v4);
  result = Data;
LABEL_10:
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x52706341u);
    result = Data;
  }
  if ( (int)result < 0 )
  {
    PnpiCleanupForceActiveBothInterrupts(a1);
    if ( (AcpiOverrideAttributes & 0x10000) != 0 )
    {
      if ( (int)OSCreateHandle(
                  "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\DSMFailures",
                  0LL,
                  &Handle) < 0 )
      {
        BugCheckParameter4 = 10LL;
        goto LABEL_44;
      }
      LODWORD(P) = AMLIGetNSObjectNameSegment(*(_QWORD *)(a1 + 760));
      ACPIRegLocalCopyString(SourceString, (__int64)&P, 4u);
      if ( !SourceString[0] )
      {
        BugCheckParameter4 = 11LL;
        goto LABEL_44;
      }
      if ( (int)OSWriteRegValue(SourceString, Handle, &Data, 4u) < 0 )
      {
        BugCheckParameter4 = 12LL;
        goto LABEL_44;
      }
      ZwClose(Handle);
    }
    *(_DWORD *)(a1 + 704) = 0;
    return 0LL;
  }
  return result;
}
