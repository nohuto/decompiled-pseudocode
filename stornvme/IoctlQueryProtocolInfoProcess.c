/*
 * XREFs of IoctlQueryProtocolInfoProcess @ 0x1C0013B68
 * Callers:
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018ED0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019218 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001944C (QueryProtocolInfoLogPageData.c)
 */

__int64 __fastcall IoctlQueryProtocolInfoProcess(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rdx
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v11);
  v5 = *v11;
  if ( (unsigned int)v5 < 0x4C
    || (v6 = (unsigned int)SrbDataBuffer[13], v5 < v6 + 36 + (unsigned __int64)(unsigned int)SrbDataBuffer[14]) )
  {
    *(_BYTE *)(v3 + 3) = 21;
  }
  else
  {
    if ( (!(_DWORD)v6 || (((_BYTE)v6 + 36) & 7) == 0) && SrbDataBuffer[9] == 3 )
    {
      v7 = SrbDataBuffer[10];
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
          return QueryProtocolInfoIdentifyData(v4, v3);
        v9 = v8 - 1;
        if ( !v9 )
          return QueryProtocolInfoLogPageData(v4, v3);
        if ( v9 == 1 )
          return QueryProtocolInfoFeatureData(v4, v3);
      }
    }
    *(_BYTE *)(v3 + 3) = 6;
  }
  return 3238002694LL;
}
