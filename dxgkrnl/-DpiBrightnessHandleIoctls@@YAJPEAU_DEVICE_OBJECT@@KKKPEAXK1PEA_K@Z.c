/*
 * XREFs of ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C039C734
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1C01804E0 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiBrightnessHandleIoctls(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int *a5,
        unsigned int a6,
        char *a7,
        unsigned __int64 *a8)
{
  unsigned int v10; // ebx
  __int64 (__fastcall **DeviceExtension)(struct _DEVICE_OBJECT *, __int64, PVOID *); // r14
  int v13; // r8d
  unsigned int v14; // esi
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // r12
  _DWORD *Pool2; // rsi
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _WORD *v27; // rdi
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rbx
  ULONG TimeIncrement; // eax
  __int64 (__fastcall *v32)(struct _DEVICE_OBJECT *, __int64, PVOID *); // rax
  unsigned int v33; // esi
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // eax
  _DWORD *v37; // rax
  _DWORD *v38; // rdi
  __int64 v39; // rcx
  PVOID *v40; // r8
  __int128 v41; // xmm0
  int v42; // eax
  __int64 (__fastcall *v43)(struct _DEVICE_OBJECT *, __int64, PVOID *); // rax
  int v44; // eax
  unsigned __int8 v45; // cl
  int v46; // eax
  __int64 (__fastcall *v47)(struct _DEVICE_OBJECT *, __int64, PVOID *); // rax
  int v48; // eax
  int v49; // esi
  int v50; // eax
  unsigned int v51; // r8d
  _DWORD *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r9
  int v55; // esi
  int v56; // eax
  int v57; // eax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  int *v59; // [rsp+38h] [rbp-71h]
  _QWORD v60[12]; // [rsp+40h] [rbp-69h] BYREF

  v10 = a2;
  LODWORD(P) = a2;
  DeviceExtension = (__int64 (__fastcall **)(struct _DEVICE_OBJECT *, __int64, PVOID *))a1->DeviceExtension;
  *a8 = 0LL;
  v59 = a5;
  if ( *((_BYTE *)DeviceExtension + 1162) )
    return 3221226166LL;
  v13 = a3 - 2296832;
  if ( !v13 )
  {
    if ( a6 < 8 )
    {
      LODWORD(v23) = -1073741789;
      return (unsigned int)v23;
    }
    LODWORD(P) = 0;
    *(_QWORD *)a7 = 0LL;
    *a8 = 8LL;
    if ( *((_WORD *)DeviceExtension + 2232) )
    {
      *(_DWORD *)a7 = 3;
      v56 = DeviceExtension[564](a1, a2, &P);
      v23 = v56;
      if ( v56 >= 0 )
      {
        *((_DWORD *)a7 + 1) ^= ((unsigned __int8)P ^ (unsigned __int8)(a7[4] ^ (a7[4] ^ (unsigned __int8)P) & 1)) & 2 ^ (*((_DWORD *)a7 + 1) ^ (unsigned int)P) & 1 ^ ((unsigned __int8)P ^ ((unsigned __int8)P ^ (unsigned __int8)(a7[4] ^ (a7[4] ^ (unsigned __int8)P) & 1)) & 2 ^ (unsigned __int8)(a7[4] ^ (a7[4] ^ (unsigned __int8)P) & 1)) & 4;
        return (unsigned int)v23;
      }
    }
    else
    {
      if ( !*((_WORD *)DeviceExtension + 2268) )
      {
        if ( *((_WORD *)DeviceExtension + 2312) )
        {
          *(_DWORD *)a7 = 1;
          LODWORD(v23) = 0;
          return (unsigned int)v23;
        }
        goto LABEL_98;
      }
      *(_DWORD *)a7 = 2;
      v57 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID *))DeviceExtension[574])(a1, &P);
      v23 = v57;
      if ( v57 >= 0 )
      {
        *((_DWORD *)a7 + 1) ^= (*((_DWORD *)a7 + 1) ^ (unsigned int)P) & 1 ^ ((unsigned int)P ^ *((_DWORD *)a7 + 1) ^ (*((_DWORD *)a7 + 1) ^ (unsigned int)P) & 1) & 2;
        return (unsigned int)v23;
      }
    }
    goto LABEL_32;
  }
  v14 = 4;
  v15 = v13 - 4;
  if ( !v15 )
  {
    if ( a6 >= 0xD0 )
    {
      *a8 = 208LL;
      memset(a7, 0, 0xD0uLL);
      if ( *((_WORD *)DeviceExtension + 2232) )
      {
        *(_DWORD *)a7 = 3;
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 204LL, 1953656900LL);
        if ( !Pool2 )
          goto LABEL_13;
        v50 = DeviceExtension[565](a1, v10, (PVOID *)Pool2);
        v23 = v50;
        if ( v50 >= 0 )
        {
          v51 = Pool2[1];
          *((_DWORD *)a7 + 1) = *Pool2;
          *((_DWORD *)a7 + 3) = Pool2[2];
          *((_DWORD *)a7 + 2) = v51;
          if ( v51 )
          {
            v52 = a7 + 20;
            v53 = (char *)(Pool2 + 3) - (a7 + 16);
            v54 = v51;
            do
            {
              *(v52 - 1) = *(_DWORD *)((char *)v52 + v53 - 4);
              *v52 = *(_DWORD *)((char *)v52 + v53);
              v52[1] = *(_DWORD *)((char *)v52 + v53 + 4);
              v52 += 3;
              --v54;
            }
            while ( v54 );
          }
          goto LABEL_82;
        }
        goto LABEL_81;
      }
      if ( *((_WORD *)DeviceExtension + 2268) )
      {
        v55 = 2;
      }
      else
      {
        if ( !*((_WORD *)DeviceExtension + 2312) )
          goto LABEL_98;
        v55 = 1;
      }
      *(_DWORD *)a7 = v55;
      v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, char *, char *))DeviceExtension[582])(
              a1,
              103LL,
              a7 + 4,
              a7 + 5);
      goto LABEL_31;
    }
    goto LABEL_63;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    if ( a6 < 0xC )
      goto LABEL_63;
    *a8 = 12LL;
    *(_QWORD *)a7 = 0LL;
    *((_DWORD *)a7 + 2) = 0;
    if ( !*((_WORD *)DeviceExtension + 2232) )
    {
      if ( *((_WORD *)DeviceExtension + 2268) )
      {
        v49 = 2;
      }
      else
      {
        if ( !*((_WORD *)DeviceExtension + 2312) )
        {
          LODWORD(v23) = -1073741637;
          v22 = 0LL;
          goto LABEL_33;
        }
        v49 = 1;
      }
      *(_DWORD *)a7 = v49;
      v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, char *))DeviceExtension[584])(a1, a7 + 4);
      goto LABEL_31;
    }
    *(_DWORD *)a7 = 3;
    v47 = DeviceExtension[563];
    P = 0LL;
    v48 = v47(a1, a2, &P);
    v23 = v48;
    if ( v48 >= 0 )
    {
      *(_QWORD *)(a7 + 4) = P;
      return (unsigned int)v23;
    }
LABEL_32:
    v22 = v23;
LABEL_33:
    v24 = 3LL;
    goto LABEL_99;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    memset(v60, 0, sizeof(v60));
    v60[0] = 0x6000000028LL;
    memset(&v60[1], 0, 36);
    v30 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    LODWORD(v60[8]) = 1;
    v60[6] = v30 * TimeIncrement;
    v32 = DeviceExtension[489];
    if ( v32 )
      v60[7] = *(_QWORD *)((char *)v32 + 404);
    v33 = (unsigned int)P;
    HIDWORD(v60[8]) = (_DWORD)P;
    if ( a4 < 0x20 )
    {
      LODWORD(v23) = -1073741306;
LABEL_43:
      HIDWORD(v60[10]) = v23;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v60, 0x200000000LL);
      return (unsigned int)v23;
    }
    v23 = (__int64)v59;
    LODWORD(v60[9]) = *v59;
    v34 = SLODWORD(v60[9]);
    if ( LODWORD(v60[9]) == 1 || LODWORD(v60[9]) == 2 )
    {
      LODWORD(v60[11]) |= 1u;
      v45 = *((_BYTE *)v59 + 4);
      *(_QWORD *)((char *)&v60[9] + 4) = v45;
      if ( *((_WORD *)DeviceExtension + 2312) )
      {
        LOBYTE(v34) = v45;
        v46 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64))DeviceExtension[583])(a1, v34);
        LODWORD(v23) = v46;
        if ( v46 >= 0 )
          goto LABEL_43;
        v34 = v46;
        goto LABEL_60;
      }
    }
    else
    {
      if ( LODWORD(v60[9]) != 3 )
      {
        LODWORD(v60[11]) |= 1u;
        LODWORD(v23) = -1073741637;
        *(_QWORD *)((char *)&v60[9] + 4) = 0LL;
LABEL_60:
        v39 = 3LL;
LABEL_61:
        WdLogSingleEntry1(v39, v34);
        goto LABEL_43;
      }
      if ( *((_WORD *)DeviceExtension + 2232) )
      {
        HIDWORD(v60[9]) = v59[1];
        v35 = LODWORD(v60[11]) | 1;
        LODWORD(v60[10]) = v59[2];
        v36 = v59[3];
        LODWORD(v60[11]) |= 1u;
        if ( (v36 & 7) != 0 )
          LODWORD(v60[11]) = v35 & 0xFFFFFFFE;
        v37 = (_DWORD *)ExAllocatePool2(256LL, 32LL, 1953656900LL);
        v38 = v37;
        if ( v37 )
        {
          v40 = (PVOID *)v37;
          v41 = *(_OWORD *)(v59 + 3);
          *v37 = v59[1];
          v37[1] = *(_DWORD *)(v23 + 8);
          v42 = *(_DWORD *)(v23 + 28);
          *(_OWORD *)(v38 + 3) = v41;
          v38[7] = v42;
          v43 = DeviceExtension[562];
          v38[2] = 24;
          v44 = v43(a1, v33, v40);
          LODWORD(v23) = v44;
          if ( v44 < 0 )
            WdLogSingleEntry1(3LL, v44);
          ExFreePoolWithTag(v38, 0x74727044u);
          goto LABEL_43;
        }
        v34 = -1073741801LL;
        LODWORD(v23) = -1073741801;
        v39 = 6LL;
        goto LABEL_61;
      }
    }
    LODWORD(v23) = -1073741637;
    v34 = -1073741637LL;
    goto LABEL_60;
  }
  v18 = v17 - 4;
  if ( !v18 )
  {
    if ( a4 >= 4 )
    {
      if ( !*((_WORD *)DeviceExtension + 2268) )
        goto LABEL_98;
      LODWORD(P) = *a5 & 1;
      v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID *))DeviceExtension[575])(a1, &P);
      goto LABEL_31;
    }
LABEL_63:
    LODWORD(v23) = -1073741306;
    return (unsigned int)v23;
  }
  v19 = v18 - 4;
  if ( v19 )
  {
    if ( v19 != 4 )
      goto LABEL_98;
    if ( a6 >= 0x604 )
    {
      *a8 = 1540LL;
      memset(a7, 0, 0x604uLL);
      if ( *((_WORD *)DeviceExtension + 2268) )
      {
        v20 = 256LL;
        P = (PVOID)ExAllocatePool2(256LL, 1540LL, 1953656900LL);
        Pool2 = P;
        if ( !P )
        {
LABEL_13:
          v22 = -1073741801LL;
          LODWORD(v23) = -1073741801;
          v24 = 6LL;
LABEL_99:
          WdLogSingleEntry1(v24, v22);
          return (unsigned int)v23;
        }
        v25 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, PVOID))DeviceExtension[577])(a1, P);
        v23 = v25;
        if ( v25 >= 0 )
        {
          *(_WORD *)a7 = *(_WORD *)P;
          *((_WORD *)a7 + 1) = *((_WORD *)Pool2 + 1);
          v26 = (char *)Pool2 - a7;
          v27 = a7 + 516;
          do
          {
            *(v27 - 256) = *(_WORD *)((char *)v27 + v26 - 512);
            *v27 = *(_WORD *)((char *)v27 + v26);
            v27[256] = *(_WORD *)((char *)v27 + v26 + 512);
            ++v27;
            --v20;
          }
          while ( v20 );
          Pool2 = P;
          goto LABEL_82;
        }
LABEL_81:
        WdLogSingleEntry1(3LL, v23);
LABEL_82:
        ExFreePoolWithTag(Pool2, 0x74727044u);
        return (unsigned int)v23;
      }
LABEL_98:
      LODWORD(v23) = -1073741637;
      v24 = 3LL;
      v22 = -1073741637LL;
      goto LABEL_99;
    }
    goto LABEL_63;
  }
  if ( a4 < 4 )
    goto LABEL_63;
  v28 = *a5;
  switch ( (_DWORD)v28 )
  {
    case 0:
      v14 = 0;
LABEL_29:
      if ( *((_WORD *)DeviceExtension + 2232) )
      {
        v29 = DeviceExtension[566](a1, v10, (PVOID *)v14);
      }
      else
      {
        if ( !*((_WORD *)DeviceExtension + 2268) )
          goto LABEL_98;
        v29 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD))DeviceExtension[576])(a1, v14);
      }
LABEL_31:
      v23 = v29;
      if ( v29 >= 0 )
        return (unsigned int)v23;
      goto LABEL_32;
    case 1:
      v14 = 1;
      goto LABEL_29;
    case 2:
      v14 = 2;
      goto LABEL_29;
    case 3:
      v14 = 3;
      goto LABEL_29;
    case 4:
      goto LABEL_29;
  }
  WdLogSingleEntry1(3LL, v28);
  LODWORD(v23) = -1073741637;
  return (unsigned int)v23;
}
