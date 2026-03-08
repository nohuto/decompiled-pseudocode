/*
 * XREFs of QueryProtocolInfoCompletion @ 0x1C0018B80
 * Callers:
 *     <none>
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010E14 (BuildGetLogPageCommand.c)
 *     ProcessNvmeHealthInfoLog @ 0x1C0024B64 (ProcessNvmeHealthInfoLog.c)
 */

__int16 __fastcall QueryProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rsi
  size_t v10; // r15
  _DWORD *v11; // rdi
  __int64 v12; // r8
  const void *v13; // rdx
  const void *v14; // rdx
  __int64 v15; // r10
  size_t v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  unsigned int v19; // ebp
  int v20; // edx
  unsigned __int64 v21; // r8
  bool v22; // zf
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // ecx
  int v27; // eax
  unsigned __int64 v29; // [rsp+30h] [rbp-28h]

  SrbExtension = GetSrbExtension(a2);
  v8 = SrbExtension;
  v9 = *(_QWORD *)(SrbExtension + 4232);
  v10 = *(unsigned int *)(SrbExtension + 4240);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v11 = *(_DWORD **)(v5 + 64);
  else
    v11 = *(_DWORD **)(v5 + 24);
  if ( !v6 )
  {
    *(_BYTE *)(v5 + 3) = 4;
LABEL_6:
    v11[14] = 0;
LABEL_7:
    if ( *(_QWORD *)(v8 + 4200) )
    {
      if ( v9 && *(_DWORD *)(v9 + 12) )
        LODWORD(v10) = *(_DWORD *)(v9 + 12);
      LOWORD(SrbExtension) = NVMeFreeDmaBuffer(a1, (unsigned int)v10, (__int64 *)(v8 + 4200), *(_QWORD *)(v8 + 4208));
    }
    v12 = *(_QWORD *)(v8 + 4232);
    if ( v12 )
    {
      LOWORD(SrbExtension) = StorPortExtendedFunction(1LL, a1, v12, v7);
      *(_QWORD *)(v8 + 4232) = 0LL;
    }
    *(_QWORD *)(v8 + 4200) = 0LL;
    *(_DWORD *)(v8 + 4240) = 0;
    *(_BYTE *)(v8 + 4253) |= 8u;
    return SrbExtension;
  }
  LODWORD(SrbExtension) = v11[10];
  if ( *(_BYTE *)(v5 + 3) != 1 )
  {
    if ( (_DWORD)SrbExtension == 2 )
    {
      if ( v9 )
      {
        LODWORD(SrbExtension) = *(_DWORD *)(v9 + 4);
        if ( (SrbExtension & 1) == 0 )
        {
          LOWORD(SrbExtension) = *(_WORD *)(v6 + 14);
          if ( (SrbExtension & 0xE00) == 0 )
          {
            LOWORD(SrbExtension) = SrbExtension & 0x1FE;
            if ( (_WORD)SrbExtension == 4 )
            {
              *(_BYTE *)(v5 + 3) = 1;
              goto LABEL_7;
            }
          }
        }
      }
    }
    goto LABEL_6;
  }
  if ( !v9 )
  {
    if ( (_DWORD)SrbExtension == 3 )
      v11[15] = *(_DWORD *)v6;
    v11[14] = *(_DWORD *)(v8 + 4240);
    LODWORD(SrbExtension) = *(_DWORD *)(v8 + 4240);
    if ( (_DWORD)SrbExtension )
    {
      v13 = *(const void **)(v8 + 4200);
      if ( v13 )
      {
        LOWORD(SrbExtension) = (unsigned __int16)memmove(
                                                   (char *)v11 + (unsigned int)v11[13] + 36,
                                                   v13,
                                                   (unsigned int)SrbExtension);
        if ( v11[10] == 2 && v11[11] == 2 )
          LOWORD(SrbExtension) = ProcessNvmeHealthInfoLog(a1, a2, *(_QWORD *)(v8 + 4200), 13LL);
      }
    }
    goto LABEL_7;
  }
  if ( (_DWORD)SrbExtension != 2
    || (v14 = *(const void **)(v8 + 4200)) == 0LL
    || !(_DWORD)v10
    || (v15 = *(unsigned int *)(v9 + 44),
        LOWORD(SrbExtension) = v15 + v10,
        *(_DWORD *)(v9 + 40) < (unsigned int)(v15 + v10))
    || (SrbExtension = (unsigned int)v11[13], (v16 = *(_QWORD *)(v9 + 48)) != 0) && v16 < v10 + *(_QWORD *)(v9 + 32) )
  {
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_6;
  }
  LOWORD(SrbExtension) = (unsigned __int16)memmove((char *)v11 + SrbExtension + v15 + 36, v14, v10);
  v17 = *(_DWORD *)(v8 + 4240);
  if ( *(_DWORD *)(v9 + 44) )
    v17 += v11[14];
  v11[14] = v17;
  v18 = *(_DWORD *)(v9 + 40);
  if ( v18 == v17 )
    goto LABEL_7;
  if ( v18 <= v17 )
  {
    v11[14] = v18;
    goto LABEL_7;
  }
  *(_BYTE *)(v8 + 4253) |= 3u;
  v19 = v18 - v17;
  SrbAssignQueueId(a1, a2);
  v20 = *(_DWORD *)(v9 + 44);
  if ( !v20 )
    *(_DWORD *)(v9 + 4) &= ~1u;
  v21 = *(_QWORD *)(v9 + 32) + *(unsigned int *)(v8 + 4240);
  *(_QWORD *)(v9 + 32) = v21;
  v22 = *(_QWORD *)(v9 + 48) == 0LL;
  *(_DWORD *)(v9 + 44) = v20 + *(_DWORD *)(v8 + 4240);
  v23 = *(_DWORD *)(v9 + 12);
  if ( v22 )
  {
    if ( v19 >= v23 )
      v19 = *(_DWORD *)(v9 + 12);
  }
  else
  {
    v24 = *(_DWORD *)(v9 + 12);
    v25 = *(_DWORD *)(v9 + 48) - v21;
    if ( v23 >= v25 )
      v24 = *(_DWORD *)(v9 + 48) - v21;
    if ( v19 >= v24 )
    {
      v19 = *(_DWORD *)(v9 + 48) - v21;
      if ( v23 < v25 )
        v19 = *(_DWORD *)(v9 + 12);
    }
  }
  v29 = v21;
  LOBYTE(v21) = *(_BYTE *)v9;
  BuildGetLogPageCommand(a1, v8, v21, v19, *(_QWORD *)(v9 + 24), *(_DWORD *)(v9 + 8), v29, v11[17]);
  v26 = *(_DWORD *)(v8 + 4136) ^ (*(_DWORD *)(v8 + 4136) ^ (v11[18] << 15)) & 0x8000;
  *(_DWORD *)(v8 + 4136) = v26;
  v27 = v11[18];
  *(_BYTE *)(v8 + 4253) |= 4u;
  *(_DWORD *)(v8 + 4136) = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((_WORD)v27 << 7)) & 0xF00;
  *(_QWORD *)(v8 + 4224) = QueryProtocolInfoCompletion;
  *(_QWORD *)(v8 + 4200) = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v8 + 4208) = *(_QWORD *)(v9 + 24);
  *(_DWORD *)(v8 + 4240) = v19;
  *(_QWORD *)(v8 + 4232) = v9;
  LOWORD(SrbExtension) = ProcessCommand(a1, a2);
  return SrbExtension;
}
