__int64 __fastcall FsRtlCheckOplockForFsFilterCallback(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rbx
  char v8; // di
  int v9; // r15d
  __int64 v10; // r8
  int v11; // r9d
  int v12; // r10d
  __int64 v13; // r11
  PEVENT_DATA_DESCRIPTOR v14; // [rsp+20h] [rbp-198h]
  char v15[4]; // [rsp+80h] [rbp-138h] BYREF
  int v16; // [rsp+84h] [rbp-134h] BYREF
  int v17; // [rsp+88h] [rbp-130h] BYREF
  _DWORD v18[3]; // [rsp+8Ch] [rbp-12Ch] BYREF
  __int64 v19; // [rsp+98h] [rbp-120h] BYREF
  _QWORD v20[2]; // [rsp+A0h] [rbp-118h] BYREF
  _QWORD v21[10]; // [rsp+B0h] [rbp-108h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+100h] [rbp-B8h] BYREF
  __int64 *v23; // [rsp+120h] [rbp-98h]
  __int64 v24; // [rsp+128h] [rbp-90h]
  int *v25; // [rsp+130h] [rbp-88h]
  __int64 v26; // [rsp+138h] [rbp-80h]
  int *v27; // [rsp+140h] [rbp-78h]
  __int64 v28; // [rsp+148h] [rbp-70h]
  _DWORD *v29; // [rsp+150h] [rbp-68h]
  __int64 v30; // [rsp+158h] [rbp-60h]
  _QWORD *v31; // [rsp+160h] [rbp-58h]
  __int64 v32; // [rsp+168h] [rbp-50h]

  v5 = 0;
  v6 = *a1;
  v20[1] = *a1;
  if ( (a3 & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  if ( v6 )
  {
    v15[0] = 0;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
    v8 = 1;
    v15[0] = 1;
    v9 = *(_DWORD *)(v6 + 144);
    if ( (v9 & 0x7000) != 0 )
    {
      memset(v21, 0, 0x48uLL);
      LOBYTE(v21[0]) = 4;
      v21[6] = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a2 + 4) == 0xFF && *(_DWORD *)(a2 + 24) == 1 && (*(_DWORD *)(a2 + 28) & 0x44) != 0 )
      {
        if ( (unsigned int)dword_140C03770 > 5 && tlgKeywordOn((__int64)&dword_140C03770, 0x400000000000LL) )
        {
          v19 = 1LL;
          v23 = &v19;
          v24 = 8LL;
          v16 = v11;
          v25 = &v16;
          v26 = v13;
          v17 = v12;
          v27 = &v17;
          v28 = v13;
          v18[0] = v9;
          v29 = v18;
          v30 = v13;
          v20[0] = 0x1000000LL;
          v31 = v20;
          v32 = 8LL;
          tlgWriteAgg((__int64)&dword_140C03770, (unsigned __int8 *)&word_14002B05E, v10, v13 + 3, &v22);
        }
        LODWORD(v14) = 0;
        v5 = FsRtlpOplockBreakByCacheFlags(
               v6,
               (__int64)v21,
               0LL,
               a3,
               (__int64)v14,
               0x5000u,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               v15,
               0LL);
        v18[1] = v5;
        v8 = v15[0];
      }
    }
    if ( v8 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
  }
  return v5;
}
