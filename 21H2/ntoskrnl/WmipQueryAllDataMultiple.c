/*
 * XREFs of WmipQueryAllDataMultiple @ 0x140932C38
 * Callers:
 *     WmipIoControl @ 0x1406061A0 (WmipIoControl.c)
 *     IoWMIQueryAllDataMultiple @ 0x140931160 (IoWMIQueryAllDataMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_1246750008__private_IsEnabledDeviceUsage @ 0x1403F911C (Feature_1246750008__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x140414300 (memset.c)
 *     WmipQueryAllData @ 0x14062DEE4 (WmipQueryAllData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        unsigned int a1,
        PVOID *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        _DWORD *a5,
        unsigned int a6,
        char *a7,
        int *a8)
{
  _DWORD *v9; // r15
  PVOID *v10; // rdx
  int v11; // r12d
  __int64 v12; // rsi
  char *PoolWithTag; // rax
  char *v14; // rbp
  _QWORD *v15; // rcx
  int v16; // esi
  char v17; // r13
  char *v18; // r14
  char *v19; // rcx
  char *v20; // rbx
  char *v22; // rax
  PVOID *v23; // rbp
  char *v24; // r15
  unsigned int v25; // edi
  PVOID *v27; // rax
  PVOID v28; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // edi
  unsigned int v33; // eax
  int v34; // eax
  __int64 v36; // [rsp+34h] [rbp-104h] BYREF
  char *v37; // [rsp+40h] [rbp-F8h]
  unsigned int v38; // [rsp+48h] [rbp-F0h]
  PVOID *v39; // [rsp+50h] [rbp-E8h]
  PVOID *v40; // [rsp+58h] [rbp-E0h]
  PVOID Object; // [rsp+60h] [rbp-D8h]
  __int64 v42; // [rsp+68h] [rbp-D0h]
  char *v43; // [rsp+70h] [rbp-C8h]
  char *v44; // [rsp+78h] [rbp-C0h]
  IRP *v45; // [rsp+80h] [rbp-B8h]
  _DWORD *v46; // [rsp+88h] [rbp-B0h]
  int *v47; // [rsp+90h] [rbp-A8h]
  _BYTE v48[80]; // [rsp+A0h] [rbp-98h] BYREF

  v9 = a5;
  v39 = a2;
  v45 = a3;
  v47 = a8;
  v46 = a5;
  memset(v48, 0, 0x48uLL);
  v10 = v39;
  v11 = 0;
  v36 = 0LL;
  v38 = 0;
  Object = 0LL;
  if ( v39 )
  {
    v14 = 0LL;
    v43 = 0LL;
  }
  else
  {
    a1 = *(_DWORD *)a7;
    v12 = *(unsigned int *)a7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v12, 0x70696D57u);
    v43 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( a1 )
    {
      v15 = PoolWithTag;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + a7 - PoolWithTag + 8);
        ++v15;
        --v12;
      }
      while ( v12 );
    }
    v10 = v39;
  }
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  v19 = (char *)a5;
  v37 = (char *)a5;
  v20 = (char *)a5;
  if ( !a1 )
    goto LABEL_26;
  v22 = v14;
  v23 = v39;
  v44 = (char *)(v22 - (char *)v10);
  v24 = (char *)(v22 - (char *)v10);
  v42 = a1;
  v40 = v10;
  do
  {
    if ( v20 == v48 || a6 < 0x48 )
    {
      v20 = v48;
      v25 = 72;
      v18 = 0LL;
    }
    else
    {
      v20 = v19;
      v25 = a6;
    }
    memset(v20, 0, 0x48uLL);
    v27 = v40;
    *((_DWORD *)v20 + 11) = 1;
    *(_DWORD *)v20 = 48;
    if ( v23 )
    {
      v28 = *v27;
      Object = v28;
    }
    else
    {
      *((_QWORD *)v20 + 2) = *(PVOID *)((char *)v27 + (_QWORD)v24);
      v28 = Object;
    }
    if ( (int)WmipQueryAllData(v28, v45, a4, (__int64)v20, v25, &v36) < 0 )
      goto LABEL_23;
    v29 = *((_DWORD *)v20 + 11);
    if ( (v29 & 0x100) != 0 )
      goto LABEL_23;
    ++HIDWORD(v36);
    if ( (v29 & 0x20) != 0 )
    {
      v30 = *((_DWORD *)v20 + 12);
      v20 = v48;
LABEL_22:
      v17 = 1;
      v16 += (v30 + 7) & 0xFFFFFFF8;
LABEL_23:
      v19 = v37;
      goto LABEL_24;
    }
    if ( v20 == v48 )
    {
      v30 = v36;
      goto LABEL_22;
    }
    if ( v18 )
      *((_DWORD *)v18 + 3) = v38;
    v31 = *((unsigned int *)v20 + 3);
    v18 = v20;
    while ( (_DWORD)v31 )
    {
      v18 += v31;
      v31 = *((unsigned int *)v18 + 3);
    }
    v32 = (v36 + 7) & 0xFFFFFFF8;
    v16 += v32;
    if ( (unsigned int)Feature_1246750008__private_IsEnabledDeviceUsage() )
      a6 = v32 < a6 ? a6 - v32 : 0;
    else
      a6 -= v32;
    v19 = &v37[v32];
    v33 = v32 + (_DWORD)v37;
    v37 = v19;
    v38 = v33 - (_DWORD)v18;
LABEL_24:
    ++v40;
    --v42;
  }
  while ( v42 );
  v14 = v43;
  v9 = v46;
  v11 = HIDWORD(v36);
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( !v11 )
    return 3221226133LL;
  if ( v17 )
  {
    v34 = 56;
    v9[11] = 32;
    *v9 = 56;
    v9[12] = v16;
  }
  else
  {
    v34 = v16;
  }
  *v47 = v34;
  return 0LL;
}
