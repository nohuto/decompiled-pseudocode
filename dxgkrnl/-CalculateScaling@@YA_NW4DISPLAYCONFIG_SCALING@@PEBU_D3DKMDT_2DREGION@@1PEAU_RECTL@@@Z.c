/*
 * XREFs of ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C006A7AC
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C4888 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall CalculateScaling(int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  char result; // al
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // r9d
  unsigned int v20; // r11d
  unsigned int v21; // r10d
  unsigned int v22; // r8d
  unsigned int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d

  v4 = 0;
  switch ( a1 )
  {
    case 1:
      if ( *a2 != *a3 || a2[1] != a3[1] )
      {
        WdLogSingleEntry1(1LL, 85LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v30,
              v29,
              v31,
              0LL,
              2,
              -1,
              L"*pSurfaceSize == *pContentSize",
              85LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      goto LABEL_22;
    case 2:
      v12 = *a2;
      v13 = *a3;
      if ( v12 < *a3 || (v14 = a2[1], v15 = a3[1], v14 < v15) )
      {
LABEL_13:
        v20 = a3[1];
        v19 = a2[1];
        v21 = *a2;
        v22 = *a3;
        v23 = *a2 * v20;
        v24 = v22 * v19;
        if ( v22 * v19 < v23 )
        {
          v27 = v24 / v20;
          v26 = 0;
          v28 = (v21 - v24 / v20) >> 1;
          v21 = v27 + v28;
          v4 = v28;
        }
        else
        {
          v25 = v23 / v22;
          v26 = (v19 - v25) >> 1;
          v19 = v25 + v26;
        }
        *a4 = v4;
        a4[1] = v26;
        a4[2] = v21;
        goto LABEL_24;
      }
      v16 = (v12 - v13) >> 1;
      v17 = (v14 - v15) >> 1;
      *a4 = v16;
      v18 = v13 + v16;
      v19 = v17 + v15;
      a4[1] = v17;
LABEL_23:
      a4[2] = v18;
LABEL_24:
      result = 1;
      a4[3] = v19;
      return result;
    case 3:
LABEL_22:
      v18 = *a2;
      v19 = a2[1];
      *(_QWORD *)a4 = 0LL;
      goto LABEL_23;
    case 4:
      goto LABEL_13;
  }
  if ( a1 != 5 )
  {
    v7 = a1;
    WdLogSingleEntry1(1LL, a1);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v9,
          v8,
          v10,
          0LL,
          2,
          -1,
          L"Unknown scaling type 0x%lx",
          v7,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return 0;
}
