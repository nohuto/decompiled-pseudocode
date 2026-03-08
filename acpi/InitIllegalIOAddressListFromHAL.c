/*
 * XREFs of InitIllegalIOAddressListFromHAL @ 0x1C00AB6A0
 * Callers:
 *     AMLIInitialize @ 0x1C00AAAB0 (AMLIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     FreellegalIOAddressList @ 0x1C00AB64C (FreellegalIOAddressList.c)
 */

void InitIllegalIOAddressListFromHAL()
{
  int v0; // eax
  const void *v1; // rdx
  int v2; // ecx
  int v3; // eax
  size_t v4; // rbx
  void *Pool2; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  if ( !gpBadIOAddressList )
  {
    v0 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
           16LL,
           0LL,
           0LL,
           &v6);
    if ( v0 != -1073741820 )
    {
      if ( v0 == -1073741496 )
      {
        v1 = 0LL;
        v2 = 74;
      }
      else
      {
        v1 = (const void *)v0;
        v2 = 73;
      }
      goto LABEL_16;
    }
    if ( !v6 )
    {
      v1 = 0LL;
      v2 = 75;
      goto LABEL_16;
    }
    gpBadIOAddressList = (PVOID)ExAllocatePool2(64LL, v6, 1231842625LL);
    if ( !gpBadIOAddressList )
    {
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v1 = 0LL;
      v2 = 71;
LABEL_16:
      PrintDebugMessage(v2, v1, 0LL, 0LL, 0LL);
      return;
    }
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD, PVOID, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
           16LL,
           v6,
           gpBadIOAddressList,
           &v6);
    if ( v3 )
    {
      PrintDebugMessage(73, (const void *)v3, 0LL, 0LL, 0LL);
      FreellegalIOAddressList();
      return;
    }
    if ( v6 / 0x18 != 1 )
    {
      v4 = 4LL * (v6 / 0x18 - 1);
      Pool2 = (void *)ExAllocatePool2(64LL, v4, 1231842625LL);
      gpBadIOErrorLogDoneList = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, v4);
        return;
      }
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v1 = 0LL;
      v2 = 72;
      goto LABEL_16;
    }
  }
}
