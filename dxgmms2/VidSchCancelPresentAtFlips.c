__int64 __fastcall VidSchCancelPresentAtFlips(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  int v8; // ebx
  __int64 v9; // r15
  char v10; // di
  char v11; // si
  unsigned int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // r9
  __int64 v18; // rcx
  unsigned int v20; // [rsp+7Ch] [rbp-35h] BYREF
  unsigned int v21; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v22; // [rsp+84h] [rbp-2Dh] BYREF
  unsigned int v23; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v24[4]; // [rsp+90h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+94h] [rbp-1Dh]
  unsigned int v26; // [rsp+98h] [rbp-19h]
  __int64 v27; // [rsp+A0h] [rbp-11h]
  _QWORD v28[4]; // [rsp+A8h] [rbp-9h] BYREF
  __int16 v29; // [rsp+C8h] [rbp+17h]
  int v30; // [rsp+114h] [rbp+63h]
  unsigned int v31; // [rsp+128h] [rbp+77h]

  v30 = HIDWORD(a2);
  v8 = a2;
  if ( a5 == 1 )
  {
    VidSchiReprogramVSyncSuppressionForPresent(a1, a2, a4, a6);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = 0;
    v11 = -1;
    v20 = 0;
    v21 = -1;
    v12 = 0;
    v23 = -1;
    v22 = -1;
    v28[0] = v9 + 1728;
    v29 = 0;
    AcquireSpinLock::Acquire((Acquire *)v28);
    if ( *(int *)(v9 + 3512) < 0 )
    {
LABEL_10:
      v17 = 37;
      v18 = 0LL;
    }
    else
    {
      v14 = *(int *)(v9 + 3512);
      v15 = *(_QWORD *)(v9 + 3328);
      v16 = 0LL;
      LODWORD(v13) = 0;
      while ( *(_DWORD *)(v15 + 112) != 2
           || *(_DWORD *)v15 != v8
           || *(_DWORD *)(v15 + 4) != v30
           || *(_QWORD *)(v15 + 8) != a3 )
      {
        v13 = (unsigned int)(v13 + 1);
        ++v16;
        v15 += 160LL;
        if ( v16 > v14 )
          goto LABEL_10;
      }
      VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v24,
        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)(*(_QWORD *)(v9 + 3328) + 160LL * (int)v13));
      v14 = *(_QWORD *)(v13 + 152);
      v12 = v25;
      v18 = *(unsigned int *)(v27 + 4LL * v26);
      v31 = *(_DWORD *)(v27 + 4LL * v26);
      if ( v14 )
      {
        VidSchiCancelQueuedIndependentFlips(
          (struct _VIDSCH_GLOBAL *)v9,
          v25,
          (struct _VIDSCH_DEVICE *)v14,
          *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v9 + 8LL * v25 + 3200) + 8 * v18 + 40),
          a4,
          &v23,
          &v20,
          &v21,
          &v22);
        v18 = v31;
        v17 = 0;
        v10 = v20;
        v11 = v21;
      }
    }
    if ( (byte_1C00769C4 & 1) != 0 )
      McTemplateK0qqxxqxqqqq_EtwWriteTransfer(v18, v13, v14, v12, v18, v8, a3, v17, a4, v23, v10, v11, v22);
    AcquireSpinLock::Release((AcquireSpinLock *)v28);
  }
  return 0LL;
}
