/*
 * XREFs of FsRtlCheckUpperOplock @ 0x14093AC60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockBreakByCacheFlags @ 0x14023BD20 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpComputeShareableOplockState @ 0x14023F940 (FsRtlpComputeShareableOplockState.c)
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpOplockBreakToII @ 0x1402F3B90 (FsRtlpOplockBreakToII.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     FsRtlpOplockBreakToNone @ 0x14053C500 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x14053C86C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1406B36C8 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(
        _QWORD **a1,
        char a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64),
        unsigned int a6)
{
  int v7; // r15d
  _QWORD *v8; // rdi
  bool v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // ebx
  int v12; // r10d
  _QWORD *i; // rsi
  __int16 v14; // r10
  char v15; // al
  int v16; // r10d
  void (__fastcall *v17)(__int64, __int64); // r15
  bool v18; // zf
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v23; // [rsp+20h] [rbp-1A8h]
  __int64 v24; // [rsp+20h] [rbp-1A8h]
  char v25; // [rsp+80h] [rbp-148h] BYREF
  char v26; // [rsp+81h] [rbp-147h]
  unsigned __int8 v27; // [rsp+82h] [rbp-146h] BYREF
  int v28; // [rsp+84h] [rbp-144h]
  void (__fastcall *v29)(__int64, __int64); // [rsp+88h] [rbp-140h] BYREF
  __int64 v30; // [rsp+90h] [rbp-138h] BYREF
  unsigned int v31; // [rsp+98h] [rbp-130h] BYREF
  unsigned int v32; // [rsp+9Ch] [rbp-12Ch] BYREF
  _QWORD *v33; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD *v34; // [rsp+A8h] [rbp-120h]
  _BYTE v35[80]; // [rsp+B0h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+100h] [rbp-C8h] BYREF
  unsigned int *v37; // [rsp+120h] [rbp-A8h]
  __int64 v38; // [rsp+128h] [rbp-A0h]
  unsigned __int8 *v39; // [rsp+130h] [rbp-98h]
  __int64 v40; // [rsp+138h] [rbp-90h]
  unsigned int *v41; // [rsp+140h] [rbp-88h]
  __int64 v42; // [rsp+148h] [rbp-80h]
  void (__fastcall **v43)(__int64, __int64); // [rsp+150h] [rbp-78h]
  __int64 v44; // [rsp+158h] [rbp-70h]
  _QWORD *v45; // [rsp+160h] [rbp-68h]
  __int64 v46; // [rsp+168h] [rbp-60h]
  __int64 *v47; // [rsp+170h] [rbp-58h]
  __int64 v48; // [rsp+178h] [rbp-50h]

  v30 = a4;
  v29 = a5;
  v7 = ((a2 & 1) << 12) | ((a2 & 6) << 12);
  v34 = *a1;
  v8 = v34;
  v25 = 0;
  v9 = 0;
  v26 = 0;
  v10 = 0;
  v27 = 0;
  memset(v35, 0, 0x48uLL);
  v11 = 0;
  if ( !v34 )
    return v11;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)v34[19]);
  v25 = 1;
  v12 = *((_DWORD *)v34 + 36);
  if ( v12 != 1 )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v12 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v11 = -1073739511;
        v28 = -1073739511;
      }
      else
      {
        for ( i = (_QWORD *)v34[5]; i != v34 + 5; i = (_QWORD *)*i )
        {
          if ( *(_DWORD *)(i[2] + 24LL) == 590400 )
          {
            i = (_QWORD *)i[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u, (__int64)v34);
          }
        }
        FsRtlpComputeShareableOplockState(v34);
      }
      goto LABEL_38;
    }
    if ( !FsRtlpOplockUpperLowerCompatible(v12, v7) )
    {
      if ( v7 )
      {
        if ( v7 != 4096 )
        {
          if ( v7 != 12288 )
          {
            if ( v7 != 20480 )
            {
              v11 = -1073741597;
              v28 = -1073741597;
              goto LABEL_38;
            }
            v10 = 0x2000;
            v9 = (v14 & 4) != 0;
            goto LABEL_19;
          }
          v9 = 1;
LABEL_21:
          v10 = 0x4000;
LABEL_19:
          v15 = v26;
          goto LABEL_27;
        }
        v9 = 1;
        v16 = v14 & 0x5000;
        if ( v16 == 20480 )
        {
          v27 = 1;
          goto LABEL_21;
        }
        v15 = v26;
        if ( v16 )
          v10 = v16;
      }
      else
      {
        v15 = 1;
        v10 = 28672;
      }
LABEL_27:
      v35[0] = 3;
      v17 = v29;
      v18 = !v9;
      v19 = v30;
      if ( v18 )
      {
        if ( !v15 )
        {
LABEL_32:
          if ( !v11 && ((_DWORD)v8[18] & v10) != 0 )
          {
            LODWORD(v23) = 0;
            v21 = FsRtlpOplockBreakByCacheFlags(
                    (__int64)v8,
                    (__int64)v35,
                    0LL,
                    a6 | v27,
                    v23,
                    v10,
                    0LL,
                    0LL,
                    a3,
                    v19,
                    v17,
                    0LL,
                    0LL,
                    0LL,
                    &v25,
                    0LL);
            v11 = v21;
            v28 = v21;
            if ( v27 )
            {
              if ( (unsigned int)dword_140C03770 > 5 )
              {
                v31 = v21;
                v37 = &v31;
                v38 = 4LL;
                v27 = v25;
                v39 = &v27;
                v40 = 1LL;
                v32 = a6;
                v41 = &v32;
                v42 = 4LL;
                LODWORD(v29) = v10;
                v43 = &v29;
                v44 = 4LL;
                v33 = v8;
                v45 = &v33;
                v46 = 8LL;
                LODWORD(v30) = *((_DWORD *)v8 + 36);
                v47 = &v30;
                v48 = 4LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140C03770,
                  (unsigned __int8 *)&word_14002AF7E,
                  0LL,
                  0LL,
                  8u,
                  &v36);
              }
              LODWORD(v24) = 0;
              v11 = FsRtlpOplockBreakByCacheFlags(
                      (__int64)v8,
                      (__int64)v35,
                      0LL,
                      a6,
                      v24,
                      0x2000u,
                      0LL,
                      0LL,
                      a3,
                      v19,
                      v17,
                      0LL,
                      0LL,
                      0LL,
                      &v25,
                      0LL);
              v28 = v11;
            }
          }
          goto LABEL_38;
        }
        v20 = FsRtlpOplockBreakToNone((__int64)v34, (__int64)v35, 0LL, a6, v23, a3, v30, v29, 0LL, 0LL, 0LL, &v25, 0LL);
      }
      else
      {
        v20 = FsRtlpOplockBreakToII((__int64)v34, (__int64)v35, 0LL, a6, v23, a3, v30, v29, 0LL, 0LL, 0LL, &v25, 0LL);
      }
      v28 = v20;
      v11 = v20;
      goto LABEL_32;
    }
  }
LABEL_38:
  if ( v25 )
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v8[19]);
  return v11;
}
