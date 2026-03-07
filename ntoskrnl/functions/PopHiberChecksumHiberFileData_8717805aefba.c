unsigned __int64 __fastcall PopHiberChecksumHiberFileData(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int16 *v16; // rax
  unsigned __int16 *v17; // r14
  __int64 v18; // r15
  unsigned int v19; // r8d
  int v20; // eax
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  unsigned __int64 v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  result = __rdtsc();
  v9 = result;
  v23 = result;
  if ( *(_QWORD *)(a1 + 432) )
  {
    v10 = (unsigned __int64 *)(a1 + 416);
    v11 = a2 ? *(_QWORD *)(a1 + 440) >> 1 : *v10;
    v12 = a3 >> 9;
    if ( v12 < v11 )
    {
      v13 = a5;
      if ( (a5 & 0x1FF) != 0 )
        v13 = a5 - (a5 & 0x1FF) + 512;
      v14 = v12 + (v13 >> 9);
      if ( v14 >= v11 )
        v14 = v11;
      v15 = 0LL;
      v24 = v14;
      if ( v12 < v14 )
      {
        v16 = (unsigned __int16 *)(a1 + 424);
        v17 = (unsigned __int16 *)(a1 + 424);
        do
        {
          v18 = *(_QWORD *)(a1 + 432);
          v19 = a5 - v15;
          if ( a5 - v15 <= 0x200 )
            v17 = v16;
          else
            v19 = 512;
          v20 = tcpxsum(0, (const char *)(a4 + v15), v19);
          v21 = v20;
          if ( a2 )
          {
            *(_WORD *)(v18 + 2 * v12) = v20;
          }
          else
          {
            v20 = *(unsigned __int16 *)(v18 + 2 * v12);
            if ( v20 != v21 )
            {
              PopCheckpointSystemSleep(30LL);
              KeBugCheckEx(0xA0u, 0x10EuLL, 0xAuLL, *(unsigned __int16 *)(v18 + 2 * v12), *v17);
            }
          }
          a4 = v25;
          v17 = (unsigned __int16 *)(a1 + 424);
          *(_WORD *)(a1 + 424) = v20;
          v15 += 512LL;
          v16 = (unsigned __int16 *)(a1 + 424);
          ++v12;
        }
        while ( v12 < v24 );
        v9 = v23;
      }
      v22 = __rdtsc();
      result = (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v9;
      if ( a2 )
      {
        *v10 = v12;
        qword_140C3D008 += result;
      }
      else
      {
        qword_140C3D148 += result;
      }
    }
  }
  return result;
}
