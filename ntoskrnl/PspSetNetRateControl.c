/*
 * XREFs of PspSetNetRateControl @ 0x1409B0054
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PspUnlockJobConditionally @ 0x1406FB418 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406FB448 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockRootJobExclusive @ 0x14075168C (PspLockRootJobExclusive.c)
 *     PspNetRateControlDispatch @ 0x1409AF644 (PspNetRateControlDispatch.c)
 *     PspSetJobRateControl @ 0x1409AFE3C (PspSetJobRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1409E28AC (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(void *Src, size_t Size, _QWORD *Object)
{
  char v4; // r12
  int v5; // ebx
  int v6; // r15d
  int v7; // r14d
  int v8; // esi
  struct _KTHREAD *CurrentThread; // r13
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-98h] BYREF
  __int64 v17; // [rsp+38h] [rbp-90h] BYREF
  int v18; // [rsp+40h] [rbp-88h]
  _DWORD v19[5]; // [rsp+44h] [rbp-84h] BYREF
  __int64 v20; // [rsp+58h] [rbp-70h]
  __int128 v21; // [rsp+60h] [rbp-68h] BYREF
  __int128 v22; // [rsp+70h] [rbp-58h] BYREF
  __int64 v23; // [rsp+80h] [rbp-48h]

  v22 = 0LL;
  LODWORD(v23) = 0;
  v21 = 0LL;
  v16 = 0LL;
  v4 = 0;
  memmove(&v21, Src, (unsigned int)Size);
  if ( (DWORD2(v21) & 0xFFFFFFF8) == 0 )
  {
    v6 = BYTE8(v21) & 1;
    if ( (BYTE8(v21) & 1) != 0 )
    {
      v7 = BYTE8(v21) & 4;
      if ( (BYTE8(v21) & 4) != 0 && BYTE12(v21) > 0x40u || (BYTE8(v21) & 6) == 0 )
        return (unsigned int)-1073741811;
    }
    else
    {
      v7 = BYTE8(v21) & 4;
    }
    v17 = 0LL;
    memset(v19, 0, 12);
    v20 = 0LL;
    *(_QWORD *)&v19[3] = Object + 182;
    v18 = 0;
    v8 = BYTE8(v21) & 2;
    if ( (BYTE8(v21) & 2) != 0 )
    {
      LODWORD(v20) = v20 | 0x10;
      *(_QWORD *)&v19[1] = v21;
    }
    if ( v7 )
    {
      LODWORD(v20) = v20 | 8;
      BYTE4(v20) = BYTE12(v21);
    }
    CurrentThread = KeGetCurrentThread();
    PspLockRootJobExclusive((__int64)Object, (__int64)CurrentThread, &v16);
    PspLockJobConditionally((__int64)Object, &v16);
    v10 = *((_DWORD *)Object + 384);
    v11 = v10 & 0x2000000;
    v12 = v10 & 0x4000000;
    if ( (_DWORD)v12 )
      v17 = *(_QWORD *)(Object[191] + 56LL);
    if ( (_BYTE)v6 )
    {
      if ( v11 )
      {
        if ( (_DWORD)v12 )
          LODWORD(v20) = v20 | 2;
      }
      else
      {
        LODWORD(v20) = v20 | 1;
      }
    }
    else if ( (_DWORD)v12 )
    {
      LODWORD(v20) = v20 | 4;
    }
    if ( (v20 & 1) != 0 )
    {
      v5 = PspSetJobRateControl(Object, v12, SBYTE8(v21));
      if ( v5 < 0 )
        goto LABEL_39;
      v4 = 1;
      v13 = PspNetRateControlDispatch((__int64)&v17);
    }
    else
    {
      if ( (v20 & 7) != 0 )
      {
        v5 = PspNetRateControlDispatch((__int64)&v17);
        if ( v5 < 0 )
          goto LABEL_39;
      }
      v13 = PspSetJobRateControl(Object, v12, SBYTE8(v21));
    }
    v5 = v13;
    if ( v13 < 0 )
      goto LABEL_40;
    if ( v6 )
    {
      if ( v8 )
      {
        *(_DWORD *)(Object[191] + 48LL) |= 1u;
        *(_QWORD *)(Object[191] + 40LL) = *(_QWORD *)&v19[1];
      }
      if ( v7 )
      {
        *(_DWORD *)(Object[191] + 48LL) |= 2u;
        *(_BYTE *)(Object[191] + 64LL) = BYTE4(v20);
      }
      *(_QWORD *)(Object[191] + 56LL) = v17;
      v14 = Object[191];
      LODWORD(v22) = *(_DWORD *)(v14 + 48);
      *((_QWORD *)&v22 + 1) = *(_QWORD *)(v14 + 40);
      LOBYTE(v23) = *(_BYTE *)(v14 + 64);
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
    }
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJobSetQuery((_DWORD)Object, 32, (unsigned int)&v22, 0, v13, 1829);
LABEL_39:
    if ( v5 >= 0 )
    {
LABEL_42:
      PspUnlockJobConditionally((__int64)Object, &v16);
      PspUnlockJob(v16, (__int64)CurrentThread);
      return (unsigned int)v5;
    }
LABEL_40:
    if ( v4 )
      PspSetJobRateControl(Object, v12, 0);
    goto LABEL_42;
  }
  return (unsigned int)-1073741811;
}
