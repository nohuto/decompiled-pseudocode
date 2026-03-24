/*
 * XREFs of NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0004670
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     GetSrbScsiData @ 0x1C0004498 (GetSrbScsiData.c)
 *     ProcessNvmeHealthInfoLog @ 0x1C0004590 (ProcessNvmeHealthInfoLog.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeModeSenseGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  char *v5; // r13
  __int64 SrbScsiData; // rax
  __int64 v7; // rdi
  _DWORD *v8; // r14
  __int64 v9; // rbp
  _BYTE *v10; // r12
  _BYTE *v11; // rdi
  __int64 v12; // rax
  char v13; // cl
  char v14; // al
  char v15; // cl
  char v16; // al
  __int64 result; // rax
  bool v18; // cf
  char v19; // cl
  __int64 v20; // [rsp+60h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(char **)(SrbExtension + 4200);
  SrbScsiData = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 1624);
  v8 = 0LL;
  LODWORD(v9) = 0;
  v20 = v7;
  v10 = (_BYTE *)SrbScsiData;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v11 = *(_BYTE **)(a2 + 64);
      v12 = 60LL;
    }
    else
    {
      v11 = *(_BYTE **)(a2 + 24);
      v12 = 16LL;
    }
    v8 = (_DWORD *)(a2 + v12);
    NVMeZeroMemory(v11, *(unsigned int *)(a2 + v12));
    if ( *v10 == 26 )
    {
      v9 = 4LL;
      v13 = v11[2];
      v14 = -(*v8 < 0x18u);
      v11[1] = 0;
      v15 = v13 | 0x10;
      v11[2] = v15;
      *v11 = (v14 & 0xF8) + 23;
      if ( (*v5 & 8) != 0 )
        v11[2] = v15 | 0x80;
    }
    else
    {
      v18 = *v8 < 0x1Cu;
      v9 = 8LL;
      *v11 = 0;
      v11[2] = 0;
      v11[1] = v18 ? 18 : 26;
      v19 = v11[3] | 0x10;
      v11[3] = v19;
      if ( (*v5 & 8) != 0 )
        v11[3] = v19 | 0x80;
    }
    v16 = v11[v9];
    v11[v9 + 2] &= 0xFAu;
    v11[v9 + 1] = 10;
    v11[v9] = v16 & 0x40 | 8;
    ProcessNvmeHealthInfoLog(a1, a2, v5, 14);
    v7 = v20;
  }
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4240),
             SrbExtension + 4200,
             *(_QWORD *)(SrbExtension + 4208));
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_QWORD *)(SrbExtension + 4232) = 0LL;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( (*(_BYTE *)(v7 + 525) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 3) = 0;
      *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xF8 | 1;
      SrbAssignQueueId(a1, a2);
      *(_OWORD *)(SrbExtension + 4096) = 0LL;
      *(_OWORD *)(SrbExtension + 4112) = 0LL;
      *(_OWORD *)(SrbExtension + 4128) = 0LL;
      *(_OWORD *)(SrbExtension + 4144) = 0LL;
      *(_BYTE *)(SrbExtension + 4096) = 10;
      *(_BYTE *)(SrbExtension + 4136) = 6;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetFeaturesCurrentCacheValueCompletion;
      return ProcessCommand(a1, a2);
    }
    result = (unsigned int)(v9 + 20);
    if ( (unsigned int)*v8 < (unsigned __int64)(unsigned int)v9 + 20 )
      result = (unsigned int)(v9 + 12);
    *v8 = result;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
