__int64 __fastcall PnpValidatePropertyData(__int64 *SecurityDescriptor, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  unsigned int v6; // r8d
  int BaseTypeSize; // eax
  unsigned int v8; // r8d
  __int16 v9; // r9
  int v10; // r10d
  int v11; // r11d
  bool v12; // zf
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  size_t v20; // rax
  bool v21; // zf
  unsigned int v22; // esi
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // r11d
  size_t v26; // r11
  __int64 v27; // r11
  size_t v28; // rax
  size_t pcbLength; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = SecurityDescriptorLength;
  pcbLength = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(v6);
  v10 = v9 & 0xF000;
  if ( !BaseTypeSize )
    goto LABEL_10;
  if ( v10 == 4096 )
  {
    if ( v8 < 2 || !IsFixedSizeType(v9) || (unsigned int)v4 < v25 )
      return (unsigned int)-1073741811;
    v12 = (unsigned int)v4 % v25 == 0;
LABEL_9:
    if ( !v12 )
      return (unsigned int)-1073741811;
    goto LABEL_10;
  }
  if ( v10 == 0x2000 )
  {
    if ( v8 != 18 && v8 != 20 )
      return (unsigned int)-1073741811;
    goto LABEL_20;
  }
  if ( (v9 & 0xF000) != 0 )
    return (unsigned int)-1073741811;
  if ( IsFixedSizeType(v9) )
  {
    v12 = (_DWORD)v4 == v11;
    goto LABEL_9;
  }
LABEL_10:
  if ( v8 )
  {
    v13 = v8 - 1;
    if ( v13 )
    {
      v14 = v13 - 15;
      if ( !v14 )
      {
        if ( SecurityDescriptor )
        {
          v22 = (unsigned int)v4 >> 3;
          v23 = 0;
          if ( !v22 )
            return v3;
          while ( *SecurityDescriptor >= 0 )
          {
            ++v23;
            ++SecurityDescriptor;
            if ( v23 >= v22 )
              return v3;
          }
        }
        return (unsigned int)-1073741811;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        if ( SecurityDescriptor )
        {
          v24 = 0;
          if ( !(_DWORD)v4 )
            return v3;
          while ( *(_BYTE *)SecurityDescriptor == 0xFF || *(_BYTE *)SecurityDescriptor == 0 )
          {
            ++v24;
            SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 1);
            if ( v24 >= (unsigned int)v4 )
              return v3;
          }
        }
        return (unsigned int)-1073741811;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
            return (unsigned int)-1073741811;
          v21 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
LABEL_26:
          if ( v21 )
            return v3;
          return (unsigned int)-1073741811;
        }
        v18 = v17 - 1;
        if ( v18 && v18 != 5 )
          return v3;
      }
LABEL_20:
      if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
        return (unsigned int)-1073741811;
      if ( (v10 & 0x2000) != 0 )
      {
        v26 = 0LL;
        while ( *(_WORD *)SecurityDescriptor )
        {
          if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)SecurityDescriptor, v4 - v26, &pcbLength) < 0 )
            return (unsigned int)-1073741811;
          if ( (pcbLength & 1) != 0 )
            return (unsigned int)-1073741811;
          v28 = pcbLength + 2;
          pcbLength = v28;
          if ( v28 > 0xFFFE )
            return (unsigned int)-1073741811;
          v26 = v28 + v27;
          if ( v26 > v4 )
            return (unsigned int)-1073741811;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 2 * (v28 >> 1));
        }
        v20 = v26 + 2;
      }
      else
      {
        if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)SecurityDescriptor, v4, &pcbLength) < 0 )
          return (unsigned int)-1073741811;
        v20 = pcbLength + 2;
        if ( pcbLength + 2 > 0xFFFE )
          return (unsigned int)-1073741811;
      }
      v21 = v20 == v4;
      goto LABEL_26;
    }
  }
  if ( (_DWORD)v4 )
    return (unsigned int)-1073741811;
  return v3;
}
