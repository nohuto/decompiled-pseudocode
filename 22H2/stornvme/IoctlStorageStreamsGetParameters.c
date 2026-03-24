/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C0013958
 * Callers:
 *     IoctlToNVMe @ 0x1C0002660 (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00058D4 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rsi
  int v6; // r12d
  unsigned __int8 v7; // cl
  __int64 v8; // rbx
  unsigned int v9; // edx
  unsigned __int16 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int inited; // r15d
  __int16 v14; // ax
  int v15; // r13d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx

  v2 = *(_QWORD *)(a1 + 1736);
  v5 = 0LL;
  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(_BYTE *)(a2 + 7);
  v8 = v7;
  GetNamespaceId(a1, v7);
  if ( (unsigned int)v8 >= 0xFF || !v2 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_30;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v11 = 60LL;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v11 = 16LL;
  }
  v12 = *(_DWORD *)(v11 + a2);
  if ( v12 < 0x4C )
  {
    if ( v12 >= 0x24 )
    {
      *(_DWORD *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 32) = 48;
      inited = -1056964604;
      v6 = 8;
      *(_BYTE *)(a2 + 3) = 18;
      goto LABEL_31;
    }
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v5 + 28) != 1 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 6;
LABEL_30:
    inited = -1056964602;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(a1 + 3792) & 7) == 3 && *(_BYTE *)(a1 + 3793) == (_BYTE)v8 && *(_WORD *)(a1 + 3796) > v10 )
  {
    GetNamespaceId(a1, v9);
    inited = NVMeDirectiveStreamsReturnParameters(a1);
    if ( inited )
    {
      inited = 0;
      *(_WORD *)(a1 + 3798) = -1;
      v14 = -1;
    }
    else
    {
      v14 = 0;
      *(_WORD *)(a1 + 3798) = 0;
    }
    *(_WORD *)(a1 + 3800) = v14;
  }
  else
  {
    inited = NVMeInitStreams(a1, v9);
  }
  v15 = *(_DWORD *)(v2 + 52);
  if ( inited )
  {
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    v6 = 48;
    *(_OWORD *)(v5 + 28) = 0LL;
    *(_OWORD *)(v5 + 44) = 0LL;
    *(_OWORD *)(v5 + 60) = 0LL;
    *(_DWORD *)(v5 + 28) = 1;
    *(_DWORD *)(v5 + 32) = 48;
    *(_DWORD *)(v5 + 36) = v15;
    v16 = v15 * *(_DWORD *)(a1 + 3804);
    *(_DWORD *)(v5 + 40) = v16;
    *(_DWORD *)(v5 + 44) = v16 * *(_DWORD *)(a1 + 3808);
    v17 = *(unsigned __int16 *)(a1 + 3796);
    *(_DWORD *)(v5 + 72) = v17;
    *(_DWORD *)(v5 + 52) = v17;
    *(_DWORD *)(v5 + 48) = 1;
    *(_DWORD *)(v5 + 56) = v16;
    *(_DWORD *)(v5 + 60) = *(unsigned __int16 *)(a1 + 3796);
    v18 = -1;
    v19 = *(unsigned __int16 *)(a1 + 3798);
    if ( (_WORD)v19 == 0xFFFF )
      v19 = -1;
    *(_DWORD *)(v5 + 68) = v19;
    if ( *(_WORD *)(a1 + 3800) != 0xFFFF )
      v18 = *(unsigned __int16 *)(a1 + 3800);
    *(_DWORD *)(v5 + 64) = v18;
    *(_BYTE *)(a2 + 3) = 1;
  }
LABEL_31:
  if ( (unsigned int)v8 < 0xFF )
    StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8 * v8 + 1736), 0LL);
  *(_DWORD *)(v5 + 24) = v6;
  return inited;
}
