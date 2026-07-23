/*
 * XREFs of PspSetJobIoAttribution @ 0x1405DAC90
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     IoStartDiskIoAttributionForContext @ 0x1402073F0 (IoStartDiskIoAttributionForContext.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PspIsSetJobIoAttribution @ 0x1405DAE80 (PspIsSetJobIoAttribution.c)
 *     IoDiskIoAttributionAllocate @ 0x1405DAEE0 (IoDiskIoAttributionAllocate.c)
 *     PspRemoveIoAttribution @ 0x1405DAF94 (PspRemoveIoAttribution.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetJobIoAttribution(_DWORD *Object, char a2, char a3, unsigned int a4)
{
  char v4; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  const EVENT_DESCRIPTOR *v14; // rbx
  REGHANDLE v15; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+78h] [rbp+Fh]
  int v28; // [rsp+7Ch] [rbp+13h]
  unsigned int *v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+88h] [rbp+1Fh]
  int v31; // [rsp+8Ch] [rbp+23h]

  v4 = 0;
  v24 = 0LL;
  *(_OWORD *)v23 = 0LL;
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_22;
    v17 = Object[336];
    if ( v17 < a4 )
    {
      v12 = 0LL;
      v13 = -1073741811;
      goto LABEL_14;
    }
    v18 = v17 - a4;
    Object[336] = v18;
    if ( v18 )
    {
      v12 = *((_QWORD *)Object + 169);
    }
    else
    {
LABEL_22:
      v19 = Object[337];
      v12 = *((_QWORD *)Object + 169);
      if ( v19 > a4 )
      {
        Object[337] = v19 - a4;
      }
      else
      {
        PspRemoveIoAttribution(Object);
        Object[337] = 0;
      }
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)PspIsSetJobIoAttribution((__int64)Object) )
  {
    v12 = 0LL;
    v13 = -1073741637;
    goto LABEL_14;
  }
  if ( a3 )
  {
    v9 = Object[336];
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v13 = -1073741670;
      goto LABEL_14;
    }
    if ( v9 )
    {
      Object[336] = v9 + a4;
LABEL_26:
      v12 = *((_QWORD *)Object + 169);
      goto LABEL_11;
    }
    Object[336] = a4;
    v4 = 1;
  }
  v10 = Object[337];
  if ( v10 + a4 < v10 )
  {
    v12 = 0LL;
    v13 = -1073741670;
    goto LABEL_12;
  }
  if ( v10 )
  {
    Object[337] = v10 + a4;
    goto LABEL_26;
  }
  v11 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(Object, 0LL);
  v12 = (__int64)v11;
  if ( v11 )
  {
    IoStartDiskIoAttributionForContext(v11);
    v23[0] = v12;
    LOBYTE(v24) = 1;
    v23[1] = (__int64)Object;
    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v23, 5);
    Object[337] = a4;
    *((_QWORD *)Object + 169) = v12;
LABEL_11:
    v4 = 0;
    v13 = 0;
    goto LABEL_12;
  }
  v12 = 0LL;
  v13 = -1073741801;
LABEL_12:
  if ( v4 )
    Object[336] -= a4;
LABEL_14:
  v20 = Object[309];
  v14 = (const EVENT_DESCRIPTOR *)PsDiskIoAttributionStart;
  v22 = v12;
  v15 = EtwpPsProvRegHandle;
  if ( !a2 )
    v14 = &PsDiskIoAttributionStop;
  v21 = v13;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v14) )
  {
    UserData.Reserved = 0;
    v28 = 0;
    v31 = 0;
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    v26 = &v22;
    v30 = 4;
    v29 = &v21;
    v27 = 8;
    EtwWrite(v15, v14, 0LL, 3u, &UserData);
  }
  return v13;
}
