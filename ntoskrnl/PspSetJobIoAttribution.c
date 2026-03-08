/*
 * XREFs of PspSetJobIoAttribution @ 0x1407530A0
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspSetJobIoRateControl @ 0x140752E58 (PspSetJobIoRateControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402C4114 (IoStartDiskIoAttributionForContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspIsSetJobIoAttribution @ 0x140753294 (PspIsSetJobIoAttribution.c)
 *     IoDiskIoAttributionAllocate @ 0x1407532F4 (IoDiskIoAttributionAllocate.c)
 *     PspRemoveIoAttribution @ 0x14075339C (PspRemoveIoAttribution.c)
 */

__int64 __fastcall PspSetJobIoAttribution(_DWORD *Object, char a2, char a3, unsigned int a4)
{
  char v4; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  const EVENT_DESCRIPTOR *v17; // rbx
  REGHANDLE v18; // rdi
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
    if ( a3 )
    {
      v14 = Object[390];
      if ( v14 < a4 )
      {
        v12 = 0LL;
        v13 = -1073741811;
        goto LABEL_24;
      }
      v15 = v14 - a4;
      Object[390] = v15;
      if ( v15 )
      {
        v12 = *((_QWORD *)Object + 196);
        goto LABEL_11;
      }
    }
    v16 = Object[391];
    v12 = *((_QWORD *)Object + 196);
    if ( v16 > a4 )
    {
      Object[391] = v16 - a4;
    }
    else
    {
      PspRemoveIoAttribution(Object);
      Object[391] = 0;
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)PspIsSetJobIoAttribution((__int64)Object) )
  {
    v12 = 0LL;
    v13 = -1073741637;
    goto LABEL_24;
  }
  if ( a3 )
  {
    v9 = Object[390];
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v13 = -1073741670;
      goto LABEL_24;
    }
    if ( v9 )
    {
      Object[390] = v9 + a4;
      goto LABEL_18;
    }
    Object[390] = a4;
    v4 = 1;
  }
  v10 = Object[391];
  if ( v10 + a4 >= v10 )
  {
    if ( !v10 )
    {
      v11 = IoDiskIoAttributionAllocate(Object, 0LL);
      v12 = v11;
      if ( v11 )
      {
        IoStartDiskIoAttributionForContext(v11);
        v23[0] = v12;
        LOBYTE(v24) = 1;
        v23[1] = (__int64)Object;
        PspEnumJobsAndProcessesInJobHierarchy(
          Object,
          (int)PspSetJobIoAttributionJobPreCallback,
          0,
          (int)PspSetJobIoAttributionProcessCallback,
          (__int64)v23,
          5);
        Object[391] = a4;
        *((_QWORD *)Object + 196) = v12;
LABEL_11:
        v13 = 0;
        goto LABEL_24;
      }
      v13 = -1073741801;
      goto LABEL_22;
    }
    Object[391] = v10 + a4;
LABEL_18:
    v12 = *((_QWORD *)Object + 196);
    goto LABEL_11;
  }
  v13 = -1073741670;
LABEL_22:
  v12 = 0LL;
  if ( v4 )
    Object[390] -= a4;
LABEL_24:
  v20 = Object[363];
  v17 = (const EVENT_DESCRIPTOR *)PsDiskIoAttributionStart;
  v22 = v12;
  v18 = EtwpPsProvRegHandle;
  if ( !a2 )
    v17 = &PsDiskIoAttributionStop;
  v21 = v13;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v17) )
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
    EtwWrite(v18, v17, 0LL, 3u, &UserData);
  }
  return v13;
}
