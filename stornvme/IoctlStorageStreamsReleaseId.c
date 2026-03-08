/*
 * XREFs of IoctlStorageStreamsReleaseId @ 0x1C0014708
 * Callers:
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C001D090 (NVMeDirectiveStreamsReleaseId.c)
 */

__int64 __fastcall IoctlStorageStreamsReleaseId(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rax
  __int64 v4; // r9
  _DWORD *v5; // rdi
  unsigned __int8 v6; // cl
  unsigned int v7; // edx
  unsigned int v8; // ecx
  int v9; // r9d
  __int64 result; // rax
  _DWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v11);
  v5 = SrbDataBuffer;
  if ( *v11 < 0x28u )
  {
    *(_BYTE *)(a2 + 3) = 21;
LABEL_18:
    result = 3238002694LL;
    goto LABEL_19;
  }
  if ( SrbDataBuffer[8] < 0xCu || SrbDataBuffer[7] != 1 )
    goto LABEL_17;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  v7 = v6;
  if ( v6 == 255 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(v4 + 4008) & 3) != 3 || *(unsigned __int8 *)(v4 + 4009) != v6 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002695LL;
    goto LABEL_19;
  }
  v8 = SrbDataBuffer[9];
  if ( !v8 || *(unsigned __int16 *)(v4 + 4010) < v8 || v8 > 0xFFFF )
  {
LABEL_17:
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_18;
  }
  GetNamespaceId(v4, v7);
  result = NVMeDirectiveStreamsReleaseId(v9);
  *(_BYTE *)(a2 + 3) = (_DWORD)result != 0 ? 4 : 1;
LABEL_19:
  v5[6] = 0;
  return result;
}
