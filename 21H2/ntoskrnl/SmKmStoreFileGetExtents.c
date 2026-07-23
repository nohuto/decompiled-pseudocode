/*
 * XREFs of SmKmStoreFileGetExtents @ 0x14092C938
 * Callers:
 *     SmKmStoreFileCreate @ 0x14092C13C (SmKmStoreFileCreate.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SmArrayGrow @ 0x1402A0534 (SmArrayGrow.c)
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1403FACA0 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileGetExtents(
        HANDLE FileHandle,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        struct _PRIVILEGE_SET **a9,
        unsigned int *a10)
{
  struct _PRIVILEGE_SET *v11; // rsi
  unsigned __int64 v14; // r13
  unsigned int v15; // r15d
  BOOLEAN v16; // r12
  __int64 v17; // rcx
  __int64 *v18; // rbx
  NTSTATUS Status; // edi
  int v20; // r14d
  __int64 v21; // r10
  unsigned int v22; // edi
  __int64 v23; // r12
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r13
  int v29; // eax
  __int64 v30; // rcx
  BOOLEAN v32; // [rsp+50h] [rbp-79h]
  PVOID P; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v34; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v35; // [rsp+64h] [rbp-65h]
  struct _PRIVILEGE_SET *v36; // [rsp+68h] [rbp-61h] BYREF
  __int64 v37; // [rsp+70h] [rbp-59h]
  _QWORD *v38; // [rsp+78h] [rbp-51h]
  _DWORD *v39; // [rsp+80h] [rbp-49h]
  struct _PRIVILEGE_SET **v40; // [rsp+88h] [rbp-41h]
  unsigned int *v41; // [rsp+90h] [rbp-39h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-31h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-19h]
  __int64 v45; // [rsp+C0h] [rbp-9h]

  P = 0LL;
  v39 = a8;
  v11 = 0LL;
  v40 = a9;
  v14 = a4;
  v15 = 0x10000;
  v41 = a10;
  v35 = a4;
  v38 = a3;
  IoStatusBlock = 0LL;
  v36 = 0LL;
  v16 = IoSetThreadHardErrorMode(0);
  v32 = v16;
  if ( a7 )
  {
    v17 = *a3;
    v18 = &v43;
    v45 = 0LL;
    v44 = 0LL;
    v43 = v17;
    P = &v43;
  }
  else
  {
    Status = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9003Bu, a3, 8u, &P, 8u);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((PVOID)(a2 + 152), Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    v18 = (__int64 *)P;
    if ( Status < 0 )
      goto LABEL_29;
  }
  v34 = 0;
  v20 = 0;
  v21 = *v18;
  v22 = 0;
  v23 = 0LL;
  if ( *v18 )
  {
    while ( 1 )
    {
      v24 = v18[1];
      v23 += v21;
      if ( v24 < 0 )
        break;
      if ( v15 )
      {
        if ( v21 >= v15 )
          v25 = v15;
        else
          v25 = *(unsigned int *)v18;
        v24 += v25;
        v15 -= v25;
        v21 -= v25;
        v18[1] = v24;
        *v18 = v21;
      }
      if ( v21 >= (__int64)v14 )
      {
        v26 = a5 - ((a5 - 1) & (v24 + a5 - 1LL));
        v37 = v26 + v24 - 1;
        v27 = (v21 + 1 - v26) % v14;
        v28 = (v21 + 1 - v26) / v14;
        if ( (_DWORD)v28 )
        {
          v29 = SmArrayGrow(v22, v27, &v34, (const void **)&v36);
          v11 = v36;
          if ( !v29 )
          {
            Status = -1073741670;
            goto LABEL_24;
          }
          v20 += v28;
          v30 = 2LL * v22++;
          *((_QWORD *)&v36->Privilege[0].Luid + v30) = v37;
          *(&v11->PrivilegeCount + 2 * v30) = v28;
        }
      }
      v18 += 2;
      v21 = *v18;
      if ( !*v18 )
      {
        v18 = (__int64 *)P;
        goto LABEL_21;
      }
      v14 = v35;
    }
    Status = -1073741453;
LABEL_24:
    v18 = (__int64 *)P;
    goto LABEL_25;
  }
LABEL_21:
  if ( v23 < *v38 )
  {
    Status = -1073741453;
LABEL_25:
    v16 = v32;
    goto LABEL_29;
  }
  v16 = v32;
  if ( v20 )
  {
    *v39 = v20;
    *v40 = v11;
    v11 = 0LL;
    *v41 = v22;
    Status = 0;
  }
  else
  {
    Status = -1073741672;
  }
LABEL_29:
  if ( v18 && v18 != &v43 )
    ExFreePoolWithTag(v18, 0);
  if ( v11 )
    CmSiFreeMemory(v11);
  IoSetThreadHardErrorMode(v16);
  return (unsigned int)Status;
}
