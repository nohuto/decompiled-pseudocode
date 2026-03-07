__int64 __fastcall PiUEventCopyEventData(__int64 a1, unsigned int a2, __int64 a3)
{
  NTSTATUS v3; // ebx
  __int64 v6; // r11
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v12; // r11
  const void *v13; // r15
  __int64 v14; // r11
  size_t v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r11
  size_t pcchLength; // [rsp+58h] [rbp+38h] BYREF

  v3 = 0;
  pcchLength = 0LL;
  if ( a2 < 0x40 || *(_DWORD *)(a3 + 64) > a2 )
    return (unsigned int)-1073741789;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a3 + 68);
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a3 + 69);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 88);
  *(_OWORD *)(a1 + 12) = *(_OWORD *)(a3 + 72);
  if ( *(_DWORD *)(a3 + 88) == 1 )
  {
    *(_DWORD *)(a1 + 52) = -1;
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 28) = 1;
    *(_OWORD *)(a1 + 36) = 0LL;
    *(_DWORD *)a1 = 60;
    return (unsigned int)v3;
  }
  if ( *(_DWORD *)(a3 + 88) == 2 )
  {
    v13 = (const void *)(a3 + 136);
    v3 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a3 + 136), 0x7FFFuLL, &pcchLength);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v9 = 2 * pcchLength + 54;
    if ( a2 >= v9 )
    {
      v15 = 2 * pcchLength + 2;
      *(_OWORD *)(a1 + 36) = *(_OWORD *)(v14 + 120);
      memmove((void *)(a1 + 52), v13, v15);
      v3 = CmSetDeviceInterfacePathFormat(v16, a1 + 52, 0LL);
      if ( v3 < 0 )
        return (unsigned int)v3;
      *(_DWORD *)(a1 + 28) = 0;
      goto LABEL_10;
    }
    return (unsigned int)-1073741789;
  }
  if ( *(_DWORD *)(a3 + 88) != 3 )
  {
    if ( *(_DWORD *)(a3 + 88) != 4 )
    {
      if ( *(_DWORD *)(a3 + 88) == 9 )
      {
        v3 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a3 + 120), 0xC8uLL, &pcchLength);
        if ( v3 < 0 )
          return (unsigned int)v3;
        v9 = 2 * pcchLength + 38;
        if ( a2 >= v9 )
        {
          memmove((void *)(a1 + 36), (const void *)(v17 + 120), 2 * pcchLength + 2);
          *(_DWORD *)(a1 + 28) = 3;
          goto LABEL_10;
        }
        return (unsigned int)-1073741789;
      }
      if ( (unsigned int)(*(_DWORD *)(a3 + 88) - 10) > 1 )
        return (unsigned int)-1073741811;
    }
    v3 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a3 + 120), 0xC8uLL, &pcchLength);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v9 = 2 * pcchLength + 38;
    if ( a2 >= v9 )
    {
      memmove((void *)(a1 + 36), (const void *)(v12 + 120), 2 * pcchLength + 2);
      *(_DWORD *)(a1 + 28) = 2;
      goto LABEL_10;
    }
    return (unsigned int)-1073741789;
  }
  v3 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a3 + 128), 0xC8uLL, &pcchLength);
  if ( v3 >= 0 && pcchLength )
  {
    v7 = (2 * (_DWORD)pcchLength + 89) & 0xFFFFFFF8;
    v8 = *(unsigned __int16 *)(v7 + v6 + 74) - 36;
    v9 = v8 + 60;
    if ( a2 >= v8 + 60 )
    {
      *(_OWORD *)(a1 + 36) = *(_OWORD *)(v7 + v6 + 76);
      v10 = *(_DWORD *)(v7 + v6 + 104);
      *(_DWORD *)(a1 + 56) = v8;
      *(_DWORD *)(a1 + 52) = v10;
      memmove((void *)(a1 + 60), (const void *)(v7 + v6 + 108), v8);
      *(_DWORD *)(a1 + 28) = 1;
LABEL_10:
      *(_DWORD *)a1 = v9;
      return (unsigned int)v3;
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v3;
}
