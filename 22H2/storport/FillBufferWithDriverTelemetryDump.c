/*
 * XREFs of FillBufferWithDriverTelemetryDump @ 0x1C0057E8C
 * Callers:
 *     RaidStandardSecondaryDumpCallback @ 0x1C0058190 (RaidStandardSecondaryDumpCallback.c)
 * Callees:
 *     memset @ 0x1C0020480 (memset.c)
 *     RtlStringCopyWorkerA @ 0x1C005824C (RtlStringCopyWorkerA.c)
 */

__int64 __fastcall FillBufferWithDriverTelemetryDump(__int64 a1, char *a2, unsigned int *a3)
{
  __int64 v3; // r13
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebp
  size_t v9; // rdx
  size_t *v10; // r8
  STRSAFE_PCNZCH v11; // r9
  _DWORD *v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r10d
  unsigned int v15; // r14d
  unsigned int v16; // r11d
  unsigned int v17; // r12d
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  _DWORD *v23; // rcx
  __int64 v24; // rax
  __int64 result; // rax
  size_t v26; // [rsp+20h] [rbp-38h]

  v3 = BootDriveExtension;
  if ( !a2 || (v6 = *a3) == 0 )
  {
    *a3 = 7776;
    return 3221225507LL;
  }
  if ( v6 >= 0xD8 )
  {
    v7 = 7776;
    if ( v6 < 0x1E60 )
      v7 = *a3;
    memset(a2, 0, v7);
    v8 = 96;
    *(_DWORD *)a2 = 1347703620;
    *((_DWORD *)a2 + 1) = 96;
    *((_DWORD *)a2 + 2) = v7;
    RtlStringCopyWorkerA(a2 + 16, v9, v10, v11, v26);
    *((_DWORD *)a2 + 8) = 0;
    v12 = a2 + 36;
    v13 = *(_QWORD *)(v3 + 24);
    v14 = 0;
    v15 = *(_DWORD *)(v13 + 5060);
    v16 = *(_DWORD *)(v13 + 5056) % v15;
    v17 = (v16 + 1) % v15;
    if ( v16 == v17 )
    {
LABEL_29:
      *((_DWORD *)a2 + 8) = v14;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    while ( 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 5064LL) + 48LL * v16;
      v19 = (unsigned __int64)*(unsigned int *)(v18 + 32) >> 24;
      *((_BYTE *)v12 + 16) = HIBYTE(*(_DWORD *)(v18 + 32));
      if ( !(_BYTE)v19 )
        break;
      if ( (unsigned __int8)v19 <= 0x22u )
      {
        v20 = 0x5001D0180LL;
        if ( _bittest64(&v20, v19) )
          break;
      }
LABEL_25:
      if ( v16 )
        v16 = (v16 - 1) % v15;
      else
        v16 = v15 - 1;
      if ( v16 == v17 )
        goto LABEL_29;
    }
    if ( *(_DWORD *)v18 == 1 )
    {
      if ( (unsigned __int64)v8 + 60 >= v7 )
        goto LABEL_24;
      *(_BYTE *)v12 = BYTE2(*(_DWORD *)(v18 + 32));
      v12[14] = *(_DWORD *)(v18 + 24);
      v12[13] = (unsigned __int8)*(_DWORD *)(v18 + 32);
      v21 = (unsigned __int64)*(unsigned int *)(v18 + 32) >> 8;
      *((_QWORD *)v12 + 4) = 0LL;
      v12[12] = (unsigned __int8)v21;
      *((_QWORD *)v12 + 5) = *(_QWORD *)(v18 + 40);
    }
    else
    {
      if ( *(_DWORD *)v18 )
        goto LABEL_24;
      v22 = 0;
      v23 = v12 - 15;
      if ( v14 )
      {
        while ( *(_DWORD *)(v18 + 24) != v23[14] )
        {
          ++v22;
          v23 -= 15;
          if ( v22 >= v14 )
            goto LABEL_20;
        }
        *((_QWORD *)v23 + 4) = *(_QWORD *)(v18 + 40);
LABEL_20:
        if ( v22 < v14 )
          goto LABEL_24;
      }
      if ( (unsigned __int64)v8 + 60 >= v7 )
      {
LABEL_24:
        if ( v14 >= 0x80 )
          goto LABEL_29;
        goto LABEL_25;
      }
      *(_BYTE *)v12 = BYTE2(*(_DWORD *)(v18 + 32));
      *((_BYTE *)v12 + 16) = HIBYTE(*(_DWORD *)(v18 + 32));
      v12[14] = *(_DWORD *)(v18 + 24);
      v12[13] = (unsigned __int8)*(_DWORD *)(v18 + 32);
      v12[12] = (unsigned __int8)BYTE1(*(_DWORD *)(v18 + 32));
      v24 = *(_QWORD *)(v18 + 40);
      *((_QWORD *)v12 + 5) = 0LL;
      *((_QWORD *)v12 + 4) = v24;
    }
    v12 += 15;
    ++v14;
    v8 += 60;
    goto LABEL_24;
  }
  *a3 = 216;
  return 3221225507LL;
}
