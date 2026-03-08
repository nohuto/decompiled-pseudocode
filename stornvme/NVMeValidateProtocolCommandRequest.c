/*
 * XREFs of NVMeValidateProtocolCommandRequest @ 0x1C0017ED0
 * Callers:
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C00168B4 (NVMeIsAllowedWithinThrottleLimit.c)
 */

__int64 __fastcall NVMeValidateProtocolCommandRequest(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _DWORD *SrbDataBuffer; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // rdx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned int *v18; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v18 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v18);
  if ( SrbDataBuffer[2] != 3 )
    goto LABEL_47;
  v6 = *v18;
  if ( (unsigned int)v6 < 0x54 )
  {
    if ( (unsigned int)v6 < 0x14 )
    {
LABEL_47:
      v4 = -1056964602;
      *(_BYTE *)(a2 + 3) = 6;
      goto LABEL_48;
    }
LABEL_46:
    SrbDataBuffer[4] = 3;
    goto LABEL_47;
  }
  if ( *SrbDataBuffer != 1 )
    goto LABEL_46;
  if ( SrbDataBuffer[1] != 84 )
    goto LABEL_46;
  v7 = 64LL;
  if ( SrbDataBuffer[6] != 64 )
    goto LABEL_46;
  v8 = (unsigned int)SrbDataBuffer[7];
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)SrbDataBuffer[11];
    if ( v9 < 0x90 )
      goto LABEL_46;
    if ( (v9 & 7) != 0 )
      goto LABEL_46;
    v10 = *v18;
    if ( v6 < v9 + v8 )
      goto LABEL_46;
  }
  else
  {
    v7 = (unsigned int)SrbDataBuffer[6];
    v10 = *v18;
  }
  v11 = (unsigned int)SrbDataBuffer[8];
  v12 = v7 + 80;
  if ( (_DWORD)v11 )
  {
    v13 = (unsigned int)SrbDataBuffer[12];
    if ( v13 < v12 || (v13 & 7) != 0 || v10 < v13 + v11 )
      goto LABEL_46;
  }
  v14 = (unsigned int)SrbDataBuffer[9];
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned int)SrbDataBuffer[13];
    if ( v15 < v12 || (v15 & 7) != 0 || v10 < v15 + v14 )
      goto LABEL_46;
  }
  if ( (_DWORD)v11
    && (_DWORD)v8
    && (unsigned int)SrbDataBuffer[12] < v8 + (unsigned __int64)(unsigned int)SrbDataBuffer[11]
    || (_DWORD)v14
    && ((_DWORD)v8 && (unsigned int)SrbDataBuffer[13] < v8 + (unsigned __int64)(unsigned int)SrbDataBuffer[11]
     || (_DWORD)v11 && (unsigned int)SrbDataBuffer[13] < v11 + (unsigned __int64)(unsigned int)SrbDataBuffer[12]) )
  {
    goto LABEL_46;
  }
  if ( (unsigned int)(SrbDataBuffer[14] - 1) > 1 )
    goto LABEL_46;
  if ( (unsigned __int8)SrbDataBuffer[20] == 20 && !NVMeIsAllowedWithinThrottleLimit(a1, 5, 0LL) )
  {
    SrbDataBuffer[4] = 8;
    v4 = -1056964595;
    *(_BYTE *)(a2 + 3) = 39;
LABEL_48:
    *(_BYTE *)(a2 + 3) = 1;
    return v4;
  }
  v16 = SrbDataBuffer[20] & 3;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      if ( v16 == 2 && (SrbDataBuffer[8] || !SrbDataBuffer[9]) )
        goto LABEL_46;
      goto LABEL_44;
    }
    if ( !SrbDataBuffer[8] )
      goto LABEL_46;
  }
  else if ( SrbDataBuffer[8] )
  {
    goto LABEL_46;
  }
  if ( SrbDataBuffer[9] )
    goto LABEL_46;
LABEL_44:
  if ( SrbDataBuffer[14] == 2 && !_bittest64((const signed __int64 *)(a1 + 200), 0x25u) )
    goto LABEL_46;
  return v4;
}
