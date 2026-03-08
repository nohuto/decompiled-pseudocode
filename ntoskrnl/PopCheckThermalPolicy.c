/*
 * XREFs of PopCheckThermalPolicy @ 0x140846B78
 * Callers:
 *     PopThermalWorker @ 0x140846460 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopPrintEx @ 0x1402BDCD4 (PopPrintEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall PopCheckThermalPolicy(__int64 a1, __int64 a2, char *a3, int *a4)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // rsi
  __int64 v10; // rcx
  const wchar_t *v11; // r8
  unsigned int *v12; // rdi
  unsigned int v13; // eax
  char v14; // al
  unsigned int v15; // eax
  bool v16; // al
  unsigned int v17; // eax
  __int64 i; // rcx
  unsigned __int64 v19; // rax
  unsigned int v20; // r10d
  unsigned int v21; // eax
  char result; // al
  char v23; // cl
  int v24; // r8d
  unsigned int v25; // edx
  int v26; // r9d
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  bool v31; // cf

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x6D546F50u);
  v9 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag
    && (v10 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL)) != 0 )
  {
    v11 = *(const wchar_t **)(v10 + 136);
  }
  else
  {
    v11 = &word_1408834C0;
  }
  v12 = (unsigned int *)(a1 + 128);
  *(_DWORD *)(a1 + 232) = 1000000 * *(_DWORD *)(a1 + 200);
  v13 = *(_DWORD *)(a1 + 140);
  if ( v13 && *v12 >= v13 )
  {
    PopPrintEx(
      0LL,
      (__int64)"Thermal Zone %S (%p): Above critical temperature (_TMP %d, _CRT %d). Shutdown initiated\n",
      v11,
      (const void *)a1,
      *v12,
      *(_DWORD *)(a1 + 140));
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  *(_BYTE *)(a1 + 210) = v14;
  v15 = *(_DWORD *)(a1 + 188);
  v16 = v15 && *v12 >= v15;
  *(_BYTE *)(a1 + 209) = v16;
  v17 = *(_DWORD *)(a1 + 136);
  if ( v17 )
  {
    v23 = *(_BYTE *)(a1 + 211);
    if ( *v12 < v17 )
    {
      if ( v23 )
        *(_BYTE *)(a1 + 211) = 0;
    }
    else if ( !v23 )
    {
      *(_BYTE *)(a1 + 211) = 1;
    }
  }
  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(a1 + 144); i = (unsigned int)(i + 1) )
  {
    if ( *v12 >= *(_DWORD *)(a1 + 4 * i + 148) )
      break;
  }
  v19 = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 220) = i;
  if ( a2 - *(_QWORD *)(a1 + 96) < v19 )
  {
    *a4 = 0;
    result = *(_BYTE *)(a1 + 65) & 1;
  }
  else
  {
    v20 = *v12;
    if ( *(_DWORD *)(a1 + 80) == 100 && ((v21 = *(_DWORD *)(a1 + 132)) == 0 || v20 < v21) )
    {
      *a4 = 0;
      *(_DWORD *)(a1 + 212) = 0;
      result = 0;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 65) & 1) == 0 )
      {
        *(_DWORD *)(a1 + 104) = 10000 * *(_DWORD *)(a1 + 124);
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 132);
      }
      v24 = *(_DWORD *)(a1 + 76);
      v25 = v20 - *(_DWORD *)(a1 + 108);
      v26 = *(_DWORD *)(a1 + 116) * v25 + *(_DWORD *)(a1 + 120) * (v20 - *(_DWORD *)(a1 + 132));
      *a4 = v26;
      if ( !v25 || ((v25 ^ v26) & 0x80000000) == 0 )
        v24 -= v26;
      if ( v24 > 1000 )
        v24 = 1000;
      v27 = *(_DWORD *)(a1 + 192);
      v28 = 0;
      if ( v24 >= 0 )
        v28 = v24;
      v29 = 10 * v27;
      if ( v28 >= 10 * v27 )
        v29 = v28;
      *(_DWORD *)(a1 + 76) = v29;
      v30 = v29 + 5;
      v31 = (unsigned int)(v30 / 10) < *(_DWORD *)(a1 + 196);
      *(_DWORD *)(a1 + 216) = v30 / 10;
      *(_BYTE *)(a1 + 224) = v31;
      result = 1;
      *(_DWORD *)(a1 + 108) = v20;
      *(_QWORD *)(a1 + 96) = a2;
      *(_DWORD *)(a1 + 212) = 1;
    }
  }
  *a3 = result;
  if ( v9 )
    return ObfDereferenceObjectWithTag(v9, 0x6D546F50u);
  return result;
}
