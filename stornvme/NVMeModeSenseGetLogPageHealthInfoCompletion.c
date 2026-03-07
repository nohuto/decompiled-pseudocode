__int64 __fastcall NVMeModeSenseGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  _BYTE *v5; // r13
  __int64 SrbScsiData; // rax
  __int64 v7; // rdi
  unsigned int *v8; // rsi
  __int64 v9; // rbp
  bool v10; // zf
  _BYTE *v11; // r12
  _BYTE *SrbDataBuffer; // rax
  _BYTE *v13; // rdi
  bool v14; // cf
  char v15; // cl
  char v16; // cl
  char v17; // al
  __int64 result; // rax
  unsigned int *v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_BYTE **)(SrbExtension + 4200);
  SrbScsiData = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 1840);
  v8 = 0LL;
  LODWORD(v9) = 0;
  v19 = 0LL;
  v10 = *(_BYTE *)(a2 + 3) == 1;
  v11 = (_BYTE *)SrbScsiData;
  v20 = v7;
  if ( v10 )
  {
    SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v19);
    v8 = v19;
    v13 = SrbDataBuffer;
    NVMeZeroMemory(SrbDataBuffer, *v19);
    if ( *v11 == 26 )
    {
      v14 = *v8 < 0x18;
      v9 = 4LL;
      v13[1] = 0;
      *v13 = v14 ? 15 : 23;
      v15 = v13[2] | 0x10;
      v13[2] = v15;
      if ( (*v5 & 8) != 0 )
        v13[2] = v15 | 0x80;
    }
    else
    {
      v14 = *v8 < 0x1C;
      v9 = 8LL;
      *v13 = 0;
      v13[2] = 0;
      v13[1] = v14 ? 18 : 26;
      v16 = v13[3] | 0x10;
      v13[3] = v16;
      if ( (*v5 & 8) != 0 )
        v13[3] = v16 | 0x80;
    }
    v17 = v13[v9];
    v13[v9 + 2] &= 0xFAu;
    v13[v9 + 1] = 10;
    v13[v9] = v17 & 0x40 | 8;
    ProcessNvmeHealthInfoLog(a1, a2, v5, 14LL);
    v7 = v20;
  }
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4240),
             (__int64 *)(SrbExtension + 4200),
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
    if ( *v8 < (unsigned __int64)(unsigned int)v9 + 20 )
      result = (unsigned int)(v9 + 12);
    *v8 = result;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
