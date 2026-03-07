__int64 __fastcall PopDecompressHiberBlocks(
        _DWORD *BugCheckParameter3,
        _QWORD *a2,
        char a3,
        char a4,
        void (__fastcall *a5)(_DWORD *))
{
  char *v8; // r12
  unsigned int v9; // esi
  __int64 v10; // r9
  __int64 Number; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  int *ProducerConsumerBuffer; // r12
  unsigned int v17; // edi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // r9
  _QWORD *v21; // r8
  int v22; // eax
  unsigned __int64 v23; // rdi
  __int64 v24; // r10
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned int v27; // edi
  unsigned int v28; // ecx
  unsigned __int64 v29; // rdi
  __int64 v30; // r9
  char *v31; // rdx
  char *v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  void (__fastcall *v35)(_DWORD *); // rax
  unsigned __int64 v36; // r13
  int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  int v40; // eax
  _BOOL8 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned int v45; // [rsp+54h] [rbp-ACh] BYREF
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  char *v47; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+68h] [rbp-98h]
  int v49; // [rsp+70h] [rbp-90h] BYREF
  void (__fastcall *v50)(_DWORD *); // [rsp+78h] [rbp-88h]
  unsigned __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  char *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  _QWORD v55[22]; // [rsp+A0h] [rbp-60h] BYREF
  char v56; // [rsp+150h] [rbp+50h] BYREF

  v50 = a5;
  memset(v55, 0, sizeof(v55));
  v8 = (char *)qword_140C3CAF8;
  v9 = 0;
  v49 = 0;
  v52 = 0LL;
  v46 = 0;
  v47 = (char *)qword_140C3CAF8;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140C3D158 && BugCheckParameter3[48] == KeGetCurrentPrcb()->Number && byte_140C3CAA0 )
      qword_140C3D158 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( BugCheckParameter3[48] == (_DWORD)Number
      && !byte_140C3CAA1
      && (!byte_140C3CAA0 || (unsigned int)dword_140C3CA84 > 0x640) )
    {
      v12 = __rdtsc();
      if ( byte_140D17C58 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140C6A809 = 1;
      }
      v13 = __rdtsc();
      qword_140C3D140 += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v12;
    }
    v45 = 4;
    v14 = ConsumerPeekAndConsumeBuffer((__int64)v8, &v45, a3, v10, (__int64)a2);
    v15 = v14;
    if ( !v14 )
      break;
    ProducerConsumerBuffer = (int *)PopReadProducerConsumerBuffer(
                                      v14,
                                      4,
                                      (unsigned int)&v49,
                                      (_DWORD)v8,
                                      (__int64)a2,
                                      1);
    v17 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v18 = PopReadProducerConsumerBuffer((int)v15 + 4, v17, (unsigned int)&v56, (_DWORD)v47, (__int64)a2, 1);
    v20 = &v55[6];
    v21 = (_QWORD *)v18;
    v22 = *ProducerConsumerBuffer;
    v48 = v15 + v17 + 4LL;
    v23 = 0LL;
    if ( (_BYTE)v22 )
    {
      v24 = (unsigned __int8)v22;
      do
      {
        v25 = *v21 >> 4;
        v19 = v25 + (*v21 & 0xFLL) + 1;
        v23 += (*v21 & 0xFLL) + 1;
        while ( v25 < v19 )
          *v20++ = v25++;
        ++v21;
        --v24;
      }
      while ( v24 );
    }
    if ( v23 > (unsigned int)BugCheckParameter3[71] )
    {
      PopCheckpointSystemSleep(31LL);
      PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v26 = a2[1];
    v27 = (_DWORD)v23 << 12;
    v54 = v27;
    v55[0] = 0LL;
    LODWORD(v55[1]) = (unsigned __int16)(8 * (((unsigned __int64)v27 >> 12) + 6));
    v55[4] = 0LL;
    v55[5] = v27;
    MmMapMemoryDumpMdlEx2(v26, v19, (__int64)v55, 1);
    v28 = ((unsigned int)*ProducerConsumerBuffer >> 8) & 0x3FFFFF;
    v51 = __rdtsc();
    v53 = v47 + 48;
    if ( v28 == v27 )
    {
      v8 = v47;
      ProducerConsumerCopyFromContextBuffer(v55[3], v27, v47, v48);
      a2[9] = __rdtsc() + a2[9] - v51;
      v29 = __rdtsc();
      ProducerConsumerBufferComplete(v8, v8 + 48, v15, v45);
      a2[10] = __rdtsc() + a2[10] - v29;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(a2[3], v28, v47, v48);
      v30 = v45;
      v31 = v53;
      v48 = __rdtsc();
      v32 = v47;
      a2[9] = v48 + a2[9] - v51;
      ProducerConsumerBufferComplete(v32, v31, v15, v30);
      v33 = __rdtsc();
      v34 = (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) + a2[10] - v48;
      v35 = v50;
      a2[10] = v34;
      if ( v35 )
      {
        v35(BugCheckParameter3);
        v52 = qword_140C3D130;
      }
      v36 = __rdtsc();
      v37 = RtlDecompressBufferProgress(
              *((_WORD *)&PopCompressMethodMap + ((unsigned __int64)(unsigned int)*ProducerConsumerBuffer >> 30)),
              v55[3],
              v27,
              a2[3],
              ((unsigned int)*ProducerConsumerBuffer >> 8) & 0x3FFFFF,
              (__int64)&v46,
              a2[2],
              (__int64)v50,
              (__int64)BugCheckParameter3);
      v38 = __rdtsc();
      if ( v37 < 0 || v46 != v27 )
      {
        BugCheckParameter3[47] = -1073741246;
        PopCheckpointSystemSleep(31LL);
        PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      v39 = v38 + a2[8] - v36;
      a2[8] = v39;
      if ( v50 )
        a2[8] = v52 + v39 - qword_140C3D130;
      v40 = *ProducerConsumerBuffer;
      v8 = v47;
      v41 = (v40 & 0xC0000000) >= 0x80000000;
      v42 = v38 - v48;
      a2[v41 + 13] += v54;
      a2[v41 + 11] += v42;
    }
    if ( !a4 )
      return v9;
  }
  return (unsigned int)-2147483614;
}
