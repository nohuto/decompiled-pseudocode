/*
 * XREFs of SmKmStoreFileGetExtents @ 0x1409D70D4
 * Callers:
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x140412A30 (ZwFsControlFile.c)
 *     SmArrayGrow @ 0x1405C7AAC (SmArrayGrow.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  struct _PRIVILEGE_SET *v12; // rsi
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
  __int64 v27; // r10
  __int64 v28; // rdx
  unsigned __int64 v29; // r13
  int v30; // eax
  __int64 v31; // rcx
  BOOLEAN v33; // [rsp+50h] [rbp-79h]
  PVOID P; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v36; // [rsp+64h] [rbp-65h]
  struct _PRIVILEGE_SET *v37; // [rsp+68h] [rbp-61h] BYREF
  __int64 v38; // [rsp+70h] [rbp-59h]
  _QWORD *v39; // [rsp+78h] [rbp-51h]
  _DWORD *v40; // [rsp+80h] [rbp-49h]
  struct _PRIVILEGE_SET **v41; // [rsp+88h] [rbp-41h]
  unsigned int *v42; // [rsp+90h] [rbp-39h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-31h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-19h]
  __int64 v46; // [rsp+C0h] [rbp-9h]

  P = 0LL;
  v40 = a8;
  v12 = 0LL;
  v41 = a9;
  v14 = a4;
  v15 = 0x10000;
  v42 = a10;
  v36 = a4;
  v39 = a3;
  IoStatusBlock = 0LL;
  v37 = 0LL;
  v16 = IoSetThreadHardErrorMode(0);
  v33 = v16;
  if ( a7 )
  {
    v17 = *a3;
    v46 = 0LL;
    v18 = &v44;
    P = &v44;
    v45 = 0LL;
    v44 = v17;
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
  v35 = 0;
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
        v27 = v21 - (v26 + v24 - 1);
        v38 = v26 + v24 - 1;
        v28 = (v24 + v27) % v14;
        v29 = (v24 + v27) / v14;
        if ( (_DWORD)v29 )
        {
          v30 = SmArrayGrow(v22, v28, &v35, (const void **)&v37);
          v12 = v37;
          if ( !v30 )
          {
            Status = -1073741670;
            goto LABEL_24;
          }
          v20 += v29;
          v31 = 2LL * v22++;
          *((_QWORD *)&v37->Privilege[0].Luid + v31) = v38;
          *(&v12->PrivilegeCount + 2 * v31) = v29;
        }
      }
      v18 += 2;
      v21 = *v18;
      if ( !*v18 )
      {
        v18 = (__int64 *)P;
        goto LABEL_21;
      }
      v14 = v36;
    }
    Status = -1073741453;
LABEL_24:
    v18 = (__int64 *)P;
    goto LABEL_25;
  }
LABEL_21:
  if ( v23 < *v39 )
  {
    Status = -1073741453;
LABEL_25:
    v16 = v33;
    goto LABEL_29;
  }
  v16 = v33;
  if ( v20 )
  {
    *v40 = v20;
    *v41 = v12;
    v12 = 0LL;
    *v42 = v22;
    Status = 0;
  }
  else
  {
    Status = -1073741672;
  }
LABEL_29:
  if ( v18 && v18 != &v44 )
    ExFreePoolWithTag(v18, 0);
  if ( v12 )
    CmSiFreeMemory(v12);
  IoSetThreadHardErrorMode(v16);
  return (unsigned int)Status;
}
