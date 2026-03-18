/*
 * XREFs of NVMeValidateProtocolCommandRequest @ 0x1C001F1E0
 * Callers:
 *     ProtocolCommandToNVMe @ 0x1C001FAF4 (ProtocolCommandToNVMe.c)
 * Callees:
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C001DEC8 (NVMeIsAllowedWithinThrottleLimit.c)
 */

__int64 __fastcall NVMeValidateProtocolCommandRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // r10
  unsigned __int64 v15; // rcx
  int v16; // eax

  v2 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_DWORD **)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_DWORD **)(a2 + 24);
    v6 = 16LL;
  }
  if ( v5[2] != 3 )
    goto LABEL_8;
  v7 = *(unsigned int *)(a2 + v6);
  if ( (unsigned int)v7 < 0x54 )
  {
    if ( (unsigned int)v7 < 0x14 )
    {
LABEL_8:
      *(_BYTE *)(a2 + 3) = 6;
LABEL_9:
      v2 = -1056964602;
LABEL_10:
      *(_BYTE *)(a2 + 3) = 1;
      return v2;
    }
LABEL_7:
    v5[4] = 3;
    goto LABEL_8;
  }
  if ( *v5 != 1 || v5[1] != 84 || v5[6] != 64 )
    goto LABEL_7;
  v9 = (unsigned int)v5[7];
  if ( (_DWORD)v9 )
  {
    v10 = (unsigned int)v5[11];
    if ( v10 < 0x90 )
      goto LABEL_19;
    if ( (v10 & 7) != 0 )
      goto LABEL_19;
    v11 = v7;
    if ( v7 < v10 + v9 )
      goto LABEL_19;
  }
  else
  {
    v11 = v7;
  }
  v12 = (unsigned int)v5[8];
  if ( (_DWORD)v12 )
  {
    v13 = (unsigned int)v5[12];
    if ( v13 < 0x90 || (v13 & 7) != 0 || v11 < v13 + v12 )
      goto LABEL_19;
  }
  v14 = (unsigned int)v5[9];
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned int)v5[13];
    if ( v15 < 0x90 || (v15 & 7) != 0 || v11 < v15 + v14 )
      goto LABEL_19;
  }
  if ( (_DWORD)v12 && (_DWORD)v9 && (unsigned int)v5[12] < v9 + (unsigned __int64)(unsigned int)v5[11]
    || (_DWORD)v14
    && ((_DWORD)v9 && (unsigned int)v5[13] < v9 + (unsigned __int64)(unsigned int)v5[11]
     || (_DWORD)v12 && (unsigned int)v5[13] < v12 + (unsigned __int64)(unsigned int)v5[12]) )
  {
    goto LABEL_19;
  }
  if ( (unsigned int)(v5[14] - 1) > 1 )
    goto LABEL_19;
  if ( (unsigned __int8)v5[20] == 20 && !NVMeIsAllowedWithinThrottleLimit(a1, 5, 0LL) )
  {
    v5[4] = 8;
    v2 = -1056964595;
    *(_BYTE *)(a2 + 3) = 39;
    goto LABEL_10;
  }
  v16 = v5[20] & 3;
  if ( !v16 )
  {
    if ( !v5[8] )
      goto LABEL_43;
LABEL_19:
    v5[4] = 3;
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_9;
  }
  if ( v16 != 1 )
  {
    if ( v16 == 2 && (v5[8] || !v5[9]) )
      goto LABEL_19;
    goto LABEL_51;
  }
  if ( !v5[8] )
    goto LABEL_19;
LABEL_43:
  if ( v5[9] )
    goto LABEL_19;
LABEL_51:
  if ( v5[14] == 2 && !_bittest64((const signed __int64 *)(a1 + 192), 0x25u) )
    goto LABEL_19;
  return v2;
}
