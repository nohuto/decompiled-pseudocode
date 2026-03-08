/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x140766EA8
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1407667FC (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14020C198 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140236738 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406A2DC0 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406A2EDC (PfpGetPageListCount.c)
 *     PfpOpenHandleCreate @ 0x1406A5020 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1406A5824 (PfpOpenHandleClose.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 */

__int64 PfpPrefetchDirectoryStream(__int64 *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r13
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned int v9; // r8d
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r9
  unsigned int v14; // esi
  unsigned int *v15; // r10
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r11
  int v22; // r11d
  __int64 v24[2]; // [rsp+68h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-60h] BYREF
  __int128 v26; // [rsp+80h] [rbp-58h]
  __int64 v27; // [rsp+90h] [rbp-48h]
  unsigned int v28; // [rsp+E0h] [rbp+8h]
  __int64 v29; // [rsp+F8h] [rbp+20h] BYREF
  va_list va; // [rsp+F8h] [rbp+20h]
  __int64 v31; // [rsp+100h] [rbp+28h]
  __int64 v32; // [rsp+108h] [rbp+30h]
  va_list va1; // [rsp+110h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v3 = a1[5];
  v5 = a1[3];
  *(_OWORD *)v24 = 0LL;
  LODWORD(v29) = 0;
  v27 = 0x200000000LL;
  v7 = *a1;
  v8 = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  v9 = *(unsigned __int16 *)(v7 + 30);
  *(_DWORD *)v5 = 4;
  v28 = v9;
  LOBYTE(v7) = v9;
  v10 = v31;
  v11 = (8 * (unsigned int)(v7 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28) & 7);
  LODWORD(v7) = v32;
  *(_QWORD *)(v5 + 8) = v11;
  v12 = PfpOpenHandleCreate((__int64)&Handle, v3, *(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 8), 1048577, v7, 0, a2);
  if ( v12 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
      MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, (_OWORD *)a1 + 3, 0xB0u, v13, (__int64 *)va);
    v14 = 0;
    while ( v14 < *(_DWORD *)(a3 + 16) )
    {
      *(_DWORD *)(v5 + 4) = 0;
      if ( v14 >= *(_DWORD *)(a3 + 16) )
        break;
      v15 = (unsigned int *)(a1 + 4);
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = *(_QWORD *)(a3 + 24);
        v19 = *(_QWORD *)(v18 + 16LL * v14);
        v20 = v8;
        v21 = v19 + *(unsigned int *)(v18 + 16LL * v14 + 8);
        if ( v19 >= v8 )
          v20 = *(_QWORD *)(v18 + 16LL * v14);
        if ( v20 < v21 )
        {
          while ( 1 )
          {
            *(_QWORD *)(v5 + 8LL * v16 + 16) = v20;
            v20 += 4096LL;
            v17 = *(_DWORD *)(v5 + 4) + 1;
            *(_DWORD *)(v5 + 4) = v17;
            v16 = v17;
            if ( v17 >= *((_DWORD *)a1 + 8) )
              break;
            if ( v20 >= v21 )
              goto LABEL_14;
          }
          v8 = v20;
LABEL_14:
          v15 = (unsigned int *)(a1 + 4);
        }
        v16 = v17;
        if ( v17 >= *v15 )
          break;
        ++v14;
      }
      while ( v14 < *(_DWORD *)(a3 + 16) );
      if ( !v17 )
        break;
      if ( (unsigned int)PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v28)) < 0x80 )
      {
        v12 = -1073741248;
        goto LABEL_28;
      }
      v12 = IopXxxControlFile(Handle, (__int64)v24, 590112, v5, 8 * v22 + 16, 0LL, 0, 0);
      if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, *(unsigned int *)(v5 + 4));
      if ( v12 < 0 )
      {
        if ( v12 != -1073741807 )
          goto LABEL_28;
        break;
      }
      if ( v12 == 259 )
        KeBugCheckEx(0x191u, 0x14DDuLL, 0LL, 0LL, 0LL);
    }
    v12 = 0;
  }
LABEL_28:
  if ( (v27 & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&Handle, v3);
  return (unsigned int)v12;
}
