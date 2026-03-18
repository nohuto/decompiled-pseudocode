/*
 * XREFs of QueryProtocolInfoCompletion @ 0x1C0001720
 * Callers:
 *     <none>
 * Callees:
 *     ProcessNvmeHealthInfoLog @ 0x1C00034D4 (ProcessNvmeHealthInfoLog.c)
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 */

__int16 __fastcall QueryProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  size_t v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rsi
  size_t v10; // r15
  _DWORD *v11; // rdi
  int v12; // ecx
  const void *v13; // rdx
  __int64 v14; // r8
  const void *v15; // rdx
  __int64 v16; // r10
  unsigned int v17; // ebp
  unsigned int v18; // ebp
  int v19; // edx
  __int64 v20; // r8
  bool v21; // zf
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // ecx
  int v26; // eax
  __int64 v28; // [rsp+30h] [rbp-28h]

  SrbExtension = GetSrbExtension(a2);
  v8 = SrbExtension;
  v9 = *(_QWORD *)(SrbExtension + 4232);
  v10 = *(unsigned int *)(SrbExtension + 4240);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v11 = *(_DWORD **)(v5 + 64);
  else
    v11 = *(_DWORD **)(v5 + 24);
  if ( !v6 )
    goto LABEL_51;
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
              goto LABEL_13;
            }
          }
        }
      }
    }
    goto LABEL_21;
  }
  if ( !v9 )
  {
    v12 = v10;
    if ( (_DWORD)SrbExtension == 3 )
    {
      v11[15] = *(_DWORD *)v6;
      v12 = *(_DWORD *)(v8 + 4240);
    }
    v11[14] = v12;
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
    goto LABEL_13;
  }
  if ( (_DWORD)SrbExtension != 2
    || (v15 = *(const void **)(v8 + 4200)) == 0LL
    || !(_DWORD)v10
    || (v16 = *(unsigned int *)(v9 + 44),
        LOWORD(SrbExtension) = v16 + v10,
        *(_DWORD *)(v9 + 40) < (unsigned int)(v16 + v10))
    || (SrbExtension = (unsigned int)v11[13], (v7 = *(_QWORD *)(v9 + 48)) != 0) && v7 < v10 + *(_QWORD *)(v9 + 32) )
  {
LABEL_51:
    *(_BYTE *)(a2 + 3) = 4;
LABEL_21:
    v11[14] = 0;
LABEL_13:
    if ( *(_QWORD *)(v8 + 4200) )
    {
      if ( v9 && *(_DWORD *)(v9 + 12) )
        LODWORD(v10) = *(_DWORD *)(v9 + 12);
      LOWORD(SrbExtension) = NVMeFreeDmaBuffer(a1, (unsigned int)v10, v8 + 4200, *(_QWORD *)(v8 + 4208));
    }
    v14 = *(_QWORD *)(v8 + 4232);
    if ( v14 )
    {
      LOWORD(SrbExtension) = StorPortExtendedFunction(1LL, a1, v14, v7);
      *(_QWORD *)(v8 + 4232) = 0LL;
    }
    *(_QWORD *)(v8 + 4200) = 0LL;
    *(_DWORD *)(v8 + 4240) = 0;
    *(_BYTE *)(v8 + 4253) |= 8u;
    return SrbExtension;
  }
  memmove((char *)v11 + SrbExtension + v16 + 36, v15, v10);
  LODWORD(SrbExtension) = *(_DWORD *)(v8 + 4240);
  if ( *(_DWORD *)(v9 + 44) )
  {
    v11[14] += SrbExtension;
    LODWORD(SrbExtension) = v11[14];
  }
  else
  {
    v11[14] = SrbExtension;
  }
  v17 = *(_DWORD *)(v9 + 40);
  if ( v17 == (_DWORD)SrbExtension )
    goto LABEL_13;
  if ( v17 <= (unsigned int)SrbExtension )
  {
    v11[14] = v17;
    goto LABEL_13;
  }
  *(_BYTE *)(v8 + 4253) |= 3u;
  v18 = v17 - SrbExtension;
  SrbAssignQueueId(a1, a2);
  v19 = *(_DWORD *)(v9 + 44);
  if ( !v19 )
    *(_DWORD *)(v9 + 4) &= ~1u;
  v20 = *(_QWORD *)(v9 + 32) + *(unsigned int *)(v8 + 4240);
  *(_QWORD *)(v9 + 32) = v20;
  v21 = *(_QWORD *)(v9 + 48) == 0LL;
  *(_DWORD *)(v9 + 44) = v19 + *(_DWORD *)(v8 + 4240);
  v22 = *(_DWORD *)(v9 + 12);
  if ( v21 )
  {
    if ( v18 >= v22 )
      v18 = *(_DWORD *)(v9 + 12);
  }
  else
  {
    v23 = *(_DWORD *)(v9 + 12);
    v24 = *(_DWORD *)(v9 + 48) - v20;
    if ( v22 >= v24 )
      v23 = *(_DWORD *)(v9 + 48) - v20;
    if ( v18 >= v23 )
    {
      v18 = *(_DWORD *)(v9 + 48) - v20;
      if ( v22 < v24 )
        v18 = *(_DWORD *)(v9 + 12);
    }
  }
  v28 = v20;
  LOBYTE(v20) = *(_BYTE *)v9;
  BuildGetLogPageCommand(a1, v8, v20, v18, *(_QWORD *)(v9 + 24), *(_DWORD *)(v9 + 8), v28, v11[17]);
  *(_DWORD *)(v8 + 4136) ^= (*(_DWORD *)(v8 + 4136) ^ (v11[18] << 15)) & 0x8000;
  v25 = v11[18];
  v26 = *(_DWORD *)(v8 + 4136);
  *(_BYTE *)(v8 + 4253) |= 4u;
  *(_DWORD *)(v8 + 4136) = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((_WORD)v25 << 7)) & 0xF00;
  *(_QWORD *)(v8 + 4224) = QueryProtocolInfoCompletion;
  *(_QWORD *)(v8 + 4200) = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v8 + 4208) = *(_QWORD *)(v9 + 24);
  *(_DWORD *)(v8 + 4240) = v18;
  *(_QWORD *)(v8 + 4232) = v9;
  LOWORD(SrbExtension) = ProcessCommand(a1, a2);
  return SrbExtension;
}
