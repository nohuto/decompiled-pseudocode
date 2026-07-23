/*
 * XREFs of PspQueryQuotaLimits @ 0x140689EEC
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     MmQueryWorkingSetInformation @ 0x14027DCC0 (MmQueryWorkingSetInformation.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspQueryQuotaLimits(
        HANDLE Handle,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        KPROCESSOR_MODE AccessMode)
{
  size_t v6; // rdi
  NTSTATUS result; // eax
  _QWORD *v10; // rcx
  int v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // [rsp+40h] [rbp-D8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD Src[12]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-50h] BYREF

  v6 = a4;
  memset(Src, 0, 0x58uLL);
  Object = 0LL;
  v14 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (_DWORD)v6 != 48 && (_DWORD)v6 != 88 )
    return -1073741820;
  result = ObReferenceObjectByHandleWithTag(
             Handle,
             0x1000u,
             (POBJECT_TYPE)PsProcessType,
             AccessMode,
             0x79517350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v10 = (_QWORD *)*((_QWORD *)Object + 173);
    Src[0] = v10[24];
    Src[1] = v10[8];
    Src[4] = v10[40];
    Src[6] = v10[56];
    Src[5] = -1LL;
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v11 = MmQueryWorkingSetInformation(&v19, &v18, &v17, &Src[2], &Src[3], &v14);
    KeUnstackDetachProcess(&ApcState);
    v12 = 2 - ((v14 & 4) != 0);
    if ( (v14 & 1) != 0 )
      v13 = v12 | 4;
    else
      v13 = v12 | 8;
    LODWORD(Src[10]) = v13;
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( v11 >= 0 )
    {
      memmove(a3, Src, v6);
      if ( a5 )
        *a5 = v6;
    }
    return v11;
  }
  return result;
}
