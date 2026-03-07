__int64 __fastcall IoctlQueryEnduranceInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v4; // ebp
  __int64 v6; // rdx
  unsigned __int8 v7; // dl
  _DWORD *SrbDataBuffer; // r13
  unsigned int v9; // edx
  __int64 result; // rax
  unsigned int *v11; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  v11 = 0LL;
  v4 = 0;
  GetSrbExtension(a2);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(v6 + 52) + v6 + 10);
  else
    v7 = *(_BYTE *)(v6 + 7);
  GetNamespaceId(a1, v7);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v11);
  v9 = *v11;
  if ( *v11 >= 0x54 )
  {
    NVMeZeroMemory(SrbDataBuffer + 7, v9 - 28);
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    v2 = -1056964605;
  }
  else
  {
    if ( v9 < 0x24 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v4 = 8;
    *(_BYTE *)(a2 + 3) = 1;
  }
  SrbDataBuffer[8] = 56;
  SrbDataBuffer[7] = 56;
  result = v2;
  SrbDataBuffer[6] = v4;
  return result;
}
