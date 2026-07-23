/*
 * XREFs of _PnpValidatePropertyData @ 0x14062F0CC
 * Callers:
 *     ValidFilter @ 0x14062301C (ValidFilter.c)
 *     PiDqQueryValidateQueryData @ 0x140623F70 (PiDqQueryValidateQueryData.c)
 *     _PnpGetObjectPropertyWorker @ 0x14062CB18 (_PnpGetObjectPropertyWorker.c)
 *     _PnpSetObjectPropertyWorker @ 0x140745F5C (_PnpSetObjectPropertyWorker.c)
 *     PiSwValidatePropertyArray @ 0x14074E8BC (PiSwValidatePropertyArray.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     _GetBaseTypeSize @ 0x140253334 (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x1402533D0 (_IsFixedSizeType.c)
 *     RtlLengthSecurityDescriptor @ 0x140654EF0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140662AA0 (RtlValidRelativeSecurityDescriptor.c)
 */

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
  unsigned int v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // eax
  size_t v17; // r11
  __int64 v18; // r11
  size_t v19; // rax
  unsigned int v20; // r11d
  bool v21; // zf
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
    goto LABEL_9;
  if ( v10 == 4096 )
  {
    if ( v8 <= 1 || !IsFixedSizeType(v9) || (unsigned int)v4 < v20 )
      return (unsigned int)-1073741811;
    v21 = (unsigned int)v4 % v20 == 0;
  }
  else
  {
    if ( v10 != 0x2000 )
    {
      if ( (v9 & 0xF000) != 0 || IsFixedSizeType(v9) && (_DWORD)v4 != v11 )
        return (unsigned int)-1073741811;
      goto LABEL_9;
    }
    if ( v8 == 18 )
      goto LABEL_9;
    v21 = v8 == 20;
  }
  if ( !v21 )
    return (unsigned int)-1073741811;
LABEL_9:
  if ( v8 <= 1 )
  {
    v12 = (_DWORD)v4 == 0;
LABEL_22:
    if ( v12 )
      return v3;
    return (unsigned int)-1073741811;
  }
  switch ( v8 )
  {
    case 0x12u:
      goto LABEL_16;
    case 0x11u:
      if ( SecurityDescriptor )
      {
        v14 = 0;
        if ( !(_DWORD)v4 )
          return v3;
        while ( *(_BYTE *)SecurityDescriptor == 0xFF || *(_BYTE *)SecurityDescriptor == 0 )
        {
          ++v14;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 1);
          if ( v14 >= (unsigned int)v4 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x10u:
      if ( SecurityDescriptor )
      {
        v15 = (unsigned int)v4 >> 3;
        v16 = 0;
        if ( !v15 )
          return v3;
        while ( *SecurityDescriptor >= 0 )
        {
          ++v16;
          ++SecurityDescriptor;
          if ( v16 >= v15 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x19u:
      goto LABEL_16;
    case 0x13u:
      if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
        return (unsigned int)-1073741811;
      v12 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
      goto LABEL_22;
    case 0x14u:
LABEL_16:
      if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
        return (unsigned int)-1073741811;
      if ( (v10 & 0x2000) != 0 )
      {
        v17 = 0LL;
        while ( *(_WORD *)SecurityDescriptor )
        {
          if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4 - v17, &pcbLength) < 0 )
            return (unsigned int)-1073741811;
          if ( (pcbLength & 1) != 0 )
            return (unsigned int)-1073741811;
          v19 = pcbLength + 2;
          pcbLength = v19;
          if ( v19 > 0xFFFE )
            return (unsigned int)-1073741811;
          v17 = v19 + v18;
          if ( v17 > v4 )
            return (unsigned int)-1073741811;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 2 * (v19 >> 1));
        }
        v12 = v17 + 2 == v4;
      }
      else
      {
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4, &pcbLength) < 0 || pcbLength + 2 > 0xFFFE )
          return (unsigned int)-1073741811;
        v12 = pcbLength + 2 == v4;
      }
      goto LABEL_22;
  }
  return v3;
}
