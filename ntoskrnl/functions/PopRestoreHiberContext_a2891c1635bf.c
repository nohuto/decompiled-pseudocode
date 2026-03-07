struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int Number; // edi
  unsigned __int64 v4; // r15
  _QWORD *v5; // r13
  unsigned __int64 v6; // rsi
  int v7; // eax
  char v8; // cl
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rdx
  _DWORD *v12; // rsi
  int v13; // ebp
  __int64 v14; // rdi
  int v15; // eax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  void (*v21)(void); // rax
  unsigned int v22; // r8d
  __int64 v23; // r10
  __int64 v24; // rsi
  __int64 v25; // r11
  __int64 v26; // rdi
  unsigned int v27; // ebp
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int128 v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+40h] [rbp-48h]
  unsigned __int64 v37; // [rsp+90h] [rbp+8h]
  void *v38; // [rsp+98h] [rbp+10h]

  v35 = 0LL;
  v36 = 0LL;
  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( Number >= *(_DWORD *)(BugCheckParameter3 + 256) )
    return result;
  v4 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 264) + ((unsigned __int64)Number << 7));
  v5[10] = 0LL;
  if ( Number == *(_DWORD *)(BugCheckParameter3 + 192) )
  {
    byte_140D17C58 = 0;
    v6 = __rdtsc();
    if ( qword_140D18150 )
    {
      v7 = BgLibraryInitialize(qword_140D18150, 0xFFFFFFFFLL);
      v8 = byte_140D17C58;
      if ( v7 >= 0 )
        v8 = 1;
      byte_140D17C58 = v8;
    }
    v9 = __rdtsc();
    qword_140C3D140 += (((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) - v6;
  }
  if ( !Number )
  {
    v38 = qword_140C3CAF8;
    v10 = 0LL;
    v11 = *(_QWORD **)(BugCheckParameter3 + 200);
    v37 = __rdtsc();
    if ( v11[11] == v11[69] )
      v10 = v11[72];
    *(_QWORD *)(BugCheckParameter3 + 400) = v10;
    v12 = qword_140C3CAF8;
    v13 = *(_DWORD *)(BugCheckParameter3 + 280);
    v14 = *(_QWORD *)(BugCheckParameter3 + 272);
    memset(qword_140C3CAF8, 0, 0x40uLL);
    v12[6] = 0;
    *(_QWORD *)v12 = v14;
    v12[2] = v13;
    *((_QWORD *)v12 + 2) = v10;
    *(_BYTE *)(BugCheckParameter3 + 4) = 1;
    IoNotifyDump(2);
    if ( *(_QWORD *)(BugCheckParameter3 + 400) )
    {
      *(_DWORD *)(BugCheckParameter3 + 184) = 9;
      *(_QWORD *)(BugCheckParameter3 + 160) = &v35;
      *(_QWORD *)&v35 = qword_140C3CA78;
      *((_QWORD *)&v35 + 1) = qword_140C3CA78;
      v36 = 0LL;
      ((void (__fastcall *)(_QWORD))off_140C01C68[0])(0LL);
      v15 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
      v16 = v15;
      if ( v15 < 0 || PopSimulateHiberBugcheck == 4 )
      {
        PopCheckpointSystemSleep(28LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v16, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
      }
      v17 = __rdtsc();
      v18 = v37;
      qword_140C3D120 = (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v37;
      v19 = *(_QWORD *)(BugCheckParameter3 + 168);
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( *(_QWORD *)(v19 + 128) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      PopHiberReadChecksums(BugCheckParameter3);
      v20 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_DWORD *)(BugCheckParameter3 + 184) = 10;
      *(_QWORD *)(BugCheckParameter3 + 376) = *(_QWORD *)(v20 + 112) << 12;
      while ( *(_QWORD *)(BugCheckParameter3 + 400) )
      {
        PopRequestRead(BugCheckParameter3, (__int64)v38, 1u);
        if ( (unsigned int)PopDecompressHiberBlocks(
                             (_DWORD *)BugCheckParameter3,
                             v5,
                             1,
                             0,
                             (void (__fastcall *)(_DWORD *))PopDecompressCallback) == -2147483614
          && !*(_DWORD *)(BugCheckParameter3 + 328) )
        {
          _mm_pause();
        }
      }
      PopDecompressHiberBlocks((_DWORD *)BugCheckParameter3, v5, 1, 1, 0LL);
      v21 = *(void (**)(void))(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL);
      if ( v21 )
        v21();
    }
    else
    {
      v18 = v37;
    }
    IoNotifyDump(3);
    ((void (__fastcall *)(__int64))off_140C01C68[0])(1LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
    while ( 1 )
    {
      v22 = *(_DWORD *)(BugCheckParameter3 + 256);
      if ( *(_DWORD *)(BugCheckParameter3 + 16) == v22 )
        break;
      _mm_pause();
    }
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    if ( v22 )
    {
      v28 = *(_QWORD *)(BugCheckParameter3 + 264);
      do
      {
        v29 = v4;
        v30 = (unsigned __int64)v27 << 7;
        qword_140C3D100 += *(_QWORD *)(v30 + v28 + 64);
        qword_140C3D110 += *(_QWORD *)(v30 + *(_QWORD *)(BugCheckParameter3 + 264) + 72);
        qword_140C3D138 += *(_QWORD *)(v30 + *(_QWORD *)(BugCheckParameter3 + 264) + 80);
        v28 = *(_QWORD *)(BugCheckParameter3 + 264);
        v4 = *(_QWORD *)(v28 + v30 + 64) + *(_QWORD *)(v28 + v30 + 72);
        if ( v4 <= v29 )
          v4 = v29;
        v23 += *(_QWORD *)(v28 + v30 + 88);
        v24 += *(_QWORD *)(v28 + v30 + 96);
        ++v27;
        v25 += *(_QWORD *)(v28 + v30 + 104);
        v26 += *(_QWORD *)(v28 + v30 + 112);
        v22 = *(_DWORD *)(BugCheckParameter3 + 256);
      }
      while ( v27 < v22 );
    }
    v31 = v23 / (v25 + 1);
    v32 = v24 / (v26 + 1);
    if ( v32 > v31 )
    {
      v33 = 100 * (qword_140C3D108 * v22 / (v25 + v26 + 1) - v31) / (v32 - v31);
      if ( v33 > 99 )
      {
        dword_140C3CAA4 = 99;
LABEL_41:
        v34 = __rdtsc();
        qword_140C3D128 = (((unsigned __int64)HIDWORD(v34) << 32) | (unsigned int)v34) - v18;
        result = (struct _KPRCB *)(qword_140C3D128 - qword_140C3D120 - v4);
        qword_140C3D0F8 = (__int64)result;
        return result;
      }
      dword_140C3CAA4 = v33;
      if ( (int)v33 >= 1 )
        goto LABEL_41;
    }
    dword_140C3CAA4 = 1;
    goto LABEL_41;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
    _mm_pause();
  result = (struct _KPRCB *)PopDecompressHiberBlocks((_DWORD *)BugCheckParameter3, v5, 0, 1, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  return result;
}
