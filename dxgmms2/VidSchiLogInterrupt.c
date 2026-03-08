/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000AEE0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000ADD0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0046CC0 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 */

char __fastcall VidSchiLogInterrupt(__int64 a1, int *a2, char a3)
{
  int v3; // eax
  __int64 v7; // rcx
  __int64 *v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  LARGE_INTEGER *v11; // rdi
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rdi
  LARGE_INTEGER *v15; // rsi
  unsigned __int8 v16; // cf
  __int64 *v17; // rdi
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax

  v3 = *a2;
  if ( *a2 == 10 )
  {
    if ( (*(_DWORD *)(a1 + 2536) & 0x100) != 0 )
    {
      v22 = *((_QWORD *)a2 + 3);
      v23 = a2[18] & 1;
      v24 = (unsigned int)a2[4];
      if ( v23 )
        v25 = a2[3];
      else
        v25 = 0;
      LOBYTE(v3) = WdLogSingleEntry5(4LL, a1, (unsigned int)a2[2], v25, v24, v22);
    }
  }
  else if ( v3 == 1 )
  {
    v7 = a2[3] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[4] + a1 + 88);
LABEL_6:
    v8 = *(__int64 **)(a1 + 632);
    v9 = (unsigned int)v7;
    if ( (unsigned int)v7 < *(_DWORD *)(a1 + 704) )
      v8 += v7;
    v10 = *v8;
    v11 = (LARGE_INTEGER *)(*(_QWORD *)(v10 + 200) + 96LL * *(unsigned int *)(v10 + 212));
    memset(v11, 0, 0x60uLL);
    v11[10] = KeQueryPerformanceCounter(0LL);
    BYTE3(v11[11].QuadPart) = 1;
    *(_DWORD *)(v10 + 212) = (*(_DWORD *)(v10 + 212) + 1) & (*(_DWORD *)(v10 + 208) - 1);
    LOBYTE(v11[11].LowPart) = a3;
    if ( _bittest64(*(const signed __int64 **)(a1 + 592), v9) )
      v12 = 0;
    else
      v12 = 1;
    BYTE2(v11[11].u.LowPart) = v12;
    LOBYTE(v3) = *(_DWORD *)(v10 + 16) == 1;
    BYTE1(v11[11].LowPart) = v3;
    *(_OWORD *)&v11->LowPart = *(_OWORD *)a2;
    *(_OWORD *)&v11[2].LowPart = *((_OWORD *)a2 + 1);
    *(_OWORD *)&v11[4].LowPart = *((_OWORD *)a2 + 2);
    *(_OWORD *)&v11[6].LowPart = *((_OWORD *)a2 + 3);
    *(_OWORD *)&v11[8].LowPart = *((_OWORD *)a2 + 4);
  }
  else
  {
    v3 -= 2;
    switch ( v3 )
    {
      case 0:
        v7 = a2[4] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[5] + a1 + 88);
        goto LABEL_6;
      case 1:
        if ( (*(_DWORD *)(a1 + 2536) & 0x100) != 0 )
        {
          if ( (a2[18] & 1) != 0 )
            v19 = (unsigned int)a2[6];
          else
            v19 = 0LL;
          LOBYTE(v3) = WdLogSingleEntry4(4LL, a1, (unsigned int)a2[2], *((_QWORD *)a2 + 2), v19);
        }
        return v3;
      case 5:
        if ( (*(_DWORD *)(a1 + 2536) & 0x100) != 0 )
        {
          v20 = (unsigned int)a2[4];
          if ( (a2[18] & 1) != 0 )
            v21 = a2[3];
          else
            v21 = 0;
          LOBYTE(v3) = WdLogSingleEntry5(4LL, a1, (unsigned int)a2[2], v21, v20, *((_QWORD *)a2 + 3));
        }
        return v3;
      case 7:
        v17 = *(__int64 **)(a1 + 632);
        v13 = a2[12] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[13] + a1 + 88);
        v18 = (unsigned int)v13;
        if ( (unsigned int)v13 < *(_DWORD *)(a1 + 704) )
          goto LABEL_20;
        goto LABEL_21;
      case 9:
      case 13:
      case 14:
        v13 = a2[2] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[3] + a1 + 88);
        goto LABEL_17;
      case 10:
        v13 = a2[10] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[11] + a1 + 88);
LABEL_17:
        v17 = *(__int64 **)(a1 + 632);
        v18 = (unsigned int)v13;
        if ( (unsigned int)v13 < *(_DWORD *)(a1 + 704) )
LABEL_20:
          v17 += v13;
LABEL_21:
        v14 = *v17;
        v15 = (LARGE_INTEGER *)(*(_QWORD *)(v14 + 200) + 96LL * *(unsigned int *)(v14 + 212));
        memset(v15, 0, 0x60uLL);
        v15[10] = KeQueryPerformanceCounter(0LL);
        BYTE3(v15[11].QuadPart) = 1;
        *(_DWORD *)(v14 + 212) = (*(_DWORD *)(v14 + 212) + 1) & (*(_DWORD *)(v14 + 208) - 1);
        LOBYTE(v15[11].LowPart) = a3;
        v16 = _bittest64(*(const signed __int64 **)(a1 + 592), v18);
        goto LABEL_22;
      case 15:
        v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) + 16LL);
        v15 = (LARGE_INTEGER *)(*(_QWORD *)(v14 + 200) + 96LL * *(unsigned int *)(v14 + 212));
        memset(v15, 0, 0x60uLL);
        v15[10] = KeQueryPerformanceCounter(0LL);
        BYTE3(v15[11].QuadPart) = 1;
        *(_DWORD *)(v14 + 212) = (*(_DWORD *)(v14 + 212) + 1) & (*(_DWORD *)(v14 + 208) - 1);
        LOBYTE(v15[11].LowPart) = a3;
        v16 = _bittest64(*(const signed __int64 **)(a1 + 592), *(unsigned __int16 *)(v14 + 4));
LABEL_22:
        BYTE2(v15[11].u.LowPart) = !v16;
        LOBYTE(v3) = *(_DWORD *)(v14 + 16) == 1;
        BYTE1(v15[11].LowPart) = v3;
        *(_OWORD *)&v15->LowPart = *(_OWORD *)a2;
        *(_OWORD *)&v15[2].LowPart = *((_OWORD *)a2 + 1);
        *(_OWORD *)&v15[4].LowPart = *((_OWORD *)a2 + 2);
        *(_OWORD *)&v15[6].LowPart = *((_OWORD *)a2 + 3);
        *(_OWORD *)&v15[8].LowPart = *((_OWORD *)a2 + 4);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
