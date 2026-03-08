/*
 * XREFs of LinkNodepRunSrsWorker @ 0x1C005DB40
 * Callers:
 *     LinkNodepRunSrsAsync @ 0x1C005DAAC (LinkNodepRunSrsAsync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     WPP_RECORDER_SF_i @ 0x1C002293C (WPP_RECORDER_SF_i.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall LinkNodepRunSrsWorker(__int64 a1, int a2, __int64 a3, char *a4)
{
  volatile signed __int32 *v4; // rax
  int v6; // edi
  char v7; // r14
  volatile signed __int32 *v8; // rsi
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // r10
  char v15; // r9
  char *v16; // r8
  char v17; // r12
  char *v18; // r13
  unsigned __int16 v19; // bp
  int v20; // r15d
  char v21; // cl
  unsigned __int16 v22; // dx
  unsigned int v23; // r15d
  void *Pool2; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  char *i; // rax
  __int64 *v28; // rbp
  __int64 v29; // rdx
  __int64 v31; // [rsp+90h] [rbp+8h]
  char v32; // [rsp+98h] [rbp+10h]

  v31 = a1;
  v4 = (volatile signed __int32 *)(a4 + 36);
  v6 = a2;
  v7 = 0;
  if ( a2 >= 0 )
  {
    v8 = (volatile signed __int32 *)(a4 + 36);
    v9 = 1;
    _InterlockedAdd(v4, 1u);
    v10 = *((_DWORD *)a4 + 8);
    v6 = 0;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          KeBugCheckEx(0xA3u, 1uLL, 0x508E8uLL, 0LL, 0LL);
        goto LABEL_43;
      }
    }
    else
    {
      v12 = *(_QWORD *)a4;
      *((_DWORD *)a4 + 8) = 1;
      v6 = ACPIGet(
             v12,
             0x5352505Fu,
             738263048,
             0LL,
             0,
             (__int64)LinkNodepRunSrsWorker,
             (__int64)a4,
             (__int64)(a4 + 16),
             0LL);
      if ( v6 == 259 )
        return 259LL;
      v4 = v8;
      if ( v6 < 0 )
        goto LABEL_46;
    }
    v13 = *((_QWORD *)a4 + 2);
    *((_DWORD *)a4 + 8) = 2;
    if ( !v13 )
    {
      v6 = -1073741772;
LABEL_45:
      v4 = v8;
      goto LABEL_46;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_i(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        20,
        13,
        (__int64)&WPP_924a918d9bb63f0ecf58b5e5a2c616f6_Traceguids,
        v13);
    }
    v14 = (char *)*((_QWORD *)a4 + 2);
    v15 = 0;
    v16 = v14;
    v17 = 0;
    v18 = 0LL;
    v32 = 0;
    v19 = 0;
    v20 = 0;
    v21 = *v14;
    if ( !*v14 )
      goto LABEL_44;
    while ( 1 )
    {
      if ( v21 < 0 )
      {
        v22 = *(_WORD *)(v16 + 1) + 3;
      }
      else
      {
        v22 = (v21 & 7) + 1;
        v21 &= 0x78u;
      }
      if ( v21 == 120 )
        break;
      if ( v21 == 32 || v21 == -119 )
      {
        v18 = v16;
        if ( v21 == -119 )
        {
          v19 = 9;
          v32 = 1;
        }
        else
        {
          v19 = v22;
        }
        v15 = 1;
        v20 += v19;
      }
      v16 += v22;
      v21 = *v16;
      if ( !*v16 )
        goto LABEL_27;
    }
    v20 += v22;
    if ( v22 > 1u )
      v17 = 1;
LABEL_27:
    if ( !v15 )
    {
LABEL_44:
      ExFreePoolWithTag(v14, 0);
      v6 = -1073741275;
      goto LABEL_45;
    }
    v23 = v20 + 1;
    Pool2 = (void *)ExAllocatePool2(64LL, v23, 1097884481LL);
    *((_QWORD *)a4 + 3) = Pool2;
    if ( !Pool2 )
    {
      ExFreePoolWithTag(*((PVOID *)a4 + 2), 0);
      v6 = -1073741670;
      goto LABEL_45;
    }
    memmove(Pool2, v18, v19);
    ExFreePoolWithTag(*((PVOID *)a4 + 2), 0);
    v25 = *((_QWORD *)a4 + 3);
    if ( v32 )
    {
      *(_BYTE *)(v25 + 4) = 1;
      *(_WORD *)(v25 + 1) = v19 - 3;
      *(_DWORD *)(v25 + 5) = *((_DWORD *)a4 + 2);
    }
    else
    {
      *(_WORD *)(v25 + 1) = 1 << *((_DWORD *)a4 + 2);
    }
    v26 = *((_QWORD *)a4 + 3);
    *(_BYTE *)(v19 + v26) = 120;
    if ( v17 )
    {
      *(_BYTE *)(v19 + v26) = 121;
      for ( i = (char *)*((_QWORD *)a4 + 3); *i != 121; ++i )
        v7 = *i;
      *(_BYTE *)(v19 + v26 + 1) = -v7;
    }
    v28 = AMLIGetNamedChild(*(_QWORD **)a4, 1397904223);
    if ( !v28 )
    {
      v6 = -1073741772;
      ExFreePoolWithTag(*((PVOID *)a4 + 3), 0);
      goto LABEL_45;
    }
    *((_QWORD *)a4 + 9) = *((_QWORD *)a4 + 3);
    *((_WORD *)a4 + 21) = 3;
    *((_DWORD *)a4 + 16) = v23;
    v6 = AMLIAsyncEvalObject(v28, 0LL, 1, a4 + 40, LinkNodepRunSrsWorker, a4);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v28, v29);
    if ( v6 != 259 )
    {
      v4 = v8;
      if ( v6 >= 0 )
      {
        v6 = 0;
LABEL_43:
        ExFreePoolWithTag(*((PVOID *)a4 + 3), 0);
        goto LABEL_45;
      }
LABEL_46:
      a1 = v31;
      goto LABEL_47;
    }
    return 259LL;
  }
LABEL_47:
  if ( *v4 )
    (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a4 + 10))(a1, (unsigned int)v6, 0LL, *((_QWORD *)a4 + 11));
  ExFreePoolWithTag(a4, 0);
  return (unsigned int)v6;
}
