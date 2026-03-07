__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // r9
  unsigned int v5; // r11d
  int v6; // r15d
  __int64 result; // rax
  int v8; // eax
  bool v9; // r10
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  GetSrbExtension(a2);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v13);
  v6 = SrbDataBuffer[11];
  switch ( v6 )
  {
    case 0:
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v12 = *(_DWORD *)(a2 + 24);
      else
        v12 = *(_DWORD *)(a2 + 12);
      if ( (v12 & 1) != 0 )
        goto LABEL_29;
LABEL_33:
      GetNamespaceId(a1, v5);
      goto LABEL_34;
    case 1:
      goto LABEL_34;
    case 2:
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v11 = *(_DWORD *)(a2 + 24);
      else
        v11 = *(_DWORD *)(a2 + 12);
      if ( (v11 & 1) != 0 )
        goto LABEL_34;
      goto LABEL_33;
  }
  if ( v6 != 3 )
  {
    if ( v6 != 5 )
    {
      if ( v6 != 6 )
      {
        result = 3238002690LL;
LABEL_32:
        *(_BYTE *)(a2 + 3) = 6;
        return result;
      }
      goto LABEL_34;
    }
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v8 = *(_DWORD *)(a2 + 24);
    else
      v8 = *(_DWORD *)(a2 + 12);
    if ( (v8 & 1) != 0 )
    {
      v9 = SrbDataBuffer[12] == 0;
      goto LABEL_30;
    }
    goto LABEL_19;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v10 = *(_DWORD *)(a2 + 24);
  else
    v10 = *(_DWORD *)(a2 + 12);
  if ( (v10 & 1) == 0 )
  {
LABEL_19:
    GetNamespaceId(a1, v5);
    goto LABEL_30;
  }
LABEL_29:
  v9 = SrbDataBuffer[12] == 0;
LABEL_30:
  if ( v9 )
  {
    result = 3238002694LL;
    goto LABEL_32;
  }
LABEL_34:
  if ( SrbDataBuffer[14] >= 0x1000u )
  {
    NVMeAllocateDmaBuffer(a1, 0x1000u);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
