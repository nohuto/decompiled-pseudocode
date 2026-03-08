/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C001434C
 * Callers:
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeInitStreams @ 0x1C000F660 (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D150 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  bool v3; // zf
  int v5; // r12d
  unsigned __int8 v6; // cl
  __int64 v7; // rdi
  int NamespaceId; // eax
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 SrbDataBuffer; // r14
  unsigned int inited; // esi
  unsigned int v13; // eax
  __int16 v14; // ax
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  _DWORD *v21; // [rsp+D0h] [rbp-78h] BYREF
  int v22; // [rsp+D8h] [rbp-70h]
  __int128 v23; // [rsp+E0h] [rbp-68h]
  __int128 v24; // [rsp+F0h] [rbp-58h]

  v3 = *(_BYTE *)(a2 + 2) == 40;
  v21 = 0LL;
  v5 = 0;
  if ( v3 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  v7 = v6;
  NamespaceId = GetNamespaceId(a1, v6);
  v10 = *(_QWORD *)(a1 + 8 * v7 + 1952);
  v22 = NamespaceId;
  if ( (unsigned int)v7 >= 0xFF || !v10 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    inited = -1056964602;
    SrbDataBuffer = v9;
    if ( (unsigned int)v7 >= 0xFF )
      goto LABEL_29;
    goto LABEL_27;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v21);
  if ( *v21 >= 0x4Cu )
  {
    if ( *(_DWORD *)(SrbDataBuffer + 28) == 1 )
    {
      if ( (*(_BYTE *)(a1 + 4008) & 7) == 3
        && *(_BYTE *)(a1 + 4009) == (_BYTE)v7
        && *(_WORD *)(a1 + 4012) > (unsigned __int16)v9 )
      {
        v23 = 0LL;
        v24 = 0LL;
        v13 = NVMeDirectiveStreamsReturnParameters(a1);
        LOBYTE(v9) = 0;
        inited = v13;
        if ( v13 )
        {
          inited = 0;
          *(_WORD *)(a1 + 4014) = -1;
          v14 = -1;
        }
        else
        {
          v14 = WORD1(v23) + WORD3(v24);
          *(_WORD *)(a1 + 4014) = WORD4(v24);
        }
        *(_WORD *)(a1 + 4016) = v14;
      }
      else
      {
        inited = NVMeInitStreams(a1, v7);
        LOBYTE(v9) = 0;
      }
      v15 = *(_DWORD *)(v10 + 52);
      if ( inited )
      {
        *(_BYTE *)(a2 + 3) = 4;
      }
      else
      {
        v5 = 48;
        *(_OWORD *)(SrbDataBuffer + 28) = 0LL;
        *(_OWORD *)(SrbDataBuffer + 44) = 0LL;
        *(_OWORD *)(SrbDataBuffer + 60) = 0LL;
        *(_DWORD *)(SrbDataBuffer + 28) = 1;
        *(_DWORD *)(SrbDataBuffer + 32) = 48;
        *(_DWORD *)(SrbDataBuffer + 36) = v15;
        v16 = *(_DWORD *)(a1 + 4020) * v15;
        *(_DWORD *)(SrbDataBuffer + 40) = v16;
        *(_DWORD *)(SrbDataBuffer + 44) = *(_DWORD *)(a1 + 4024) * v16;
        v17 = *(unsigned __int16 *)(a1 + 4012);
        *(_DWORD *)(SrbDataBuffer + 72) = v17;
        *(_DWORD *)(SrbDataBuffer + 52) = v17;
        *(_DWORD *)(SrbDataBuffer + 48) = 1;
        *(_DWORD *)(SrbDataBuffer + 56) = v16;
        *(_DWORD *)(SrbDataBuffer + 60) = *(unsigned __int16 *)(a1 + 4012);
        v18 = -1;
        v19 = *(unsigned __int16 *)(a1 + 4014);
        if ( (_WORD)v19 == 0xFFFF )
          v19 = -1;
        *(_DWORD *)(SrbDataBuffer + 68) = v19;
        if ( *(_WORD *)(a1 + 4016) != 0xFFFF )
          v18 = *(unsigned __int16 *)(a1 + 4016);
        *(_DWORD *)(SrbDataBuffer + 64) = v18;
        *(_BYTE *)(a2 + 3) = 1;
      }
      goto LABEL_27;
    }
    goto LABEL_8;
  }
  if ( *v21 < 0x24u )
  {
LABEL_8:
    *(_BYTE *)(a2 + 3) = 6;
    inited = -1056964602;
    goto LABEL_27;
  }
  *(_DWORD *)(SrbDataBuffer + 28) = 1;
  *(_DWORD *)(SrbDataBuffer + 32) = 48;
  inited = -1056964604;
  v5 = 8;
  *(_BYTE *)(a2 + 3) = 18;
LABEL_27:
  if ( *(_BYTE *)(a1 + 24) != (_BYTE)v9 )
    StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8 * v7 + 1952), 0LL);
LABEL_29:
  *(_DWORD *)(SrbDataBuffer + 24) = v5;
  return inited;
}
