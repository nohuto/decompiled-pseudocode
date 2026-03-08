/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x1C00B141C
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00B1610 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0087408 (WdmlibRtlInitUnicodeStringEx.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C00B18A8 (SeUtilSecurityInfoFromSecurityDescriptor.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x1C00B1BE0 (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00B1E74 (CmRegUtilWstrValueGetDword.c)
 */

__int64 __fastcall PiRegStateReadStackCreationSettingsFromKey(
        void *ClassOrDeviceKey,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  unsigned int *p_DeviceType; // r13
  unsigned int *p_Characteristics; // r12
  unsigned int *p_Exclusivity; // r15
  _KEY_VALUE_FULL_INFORMATION *v7; // rsi
  int inited; // ebx
  unsigned int v9; // r8d
  void *v10; // r9
  int FullBuffer; // eax
  int v12; // eax
  void *v13; // rax
  int Dword; // eax
  unsigned int v15; // r8d
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // eax
  void *SecurityDescriptor; // rcx
  _KEY_VALUE_FULL_INFORMATION *keyInfo; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int8 daclFromDefaultMechanism; // [rsp+98h] [rbp+48h] BYREF
  unsigned int securityInformation; // [rsp+A0h] [rbp+50h] BYREF
  void *newSecurityDescriptor; // [rsp+A8h] [rbp+58h] BYREF

  p_DeviceType = &StackCreationSettings->DeviceType;
  p_Characteristics = &StackCreationSettings->Characteristics;
  StackCreationSettings->Flags = 0;
  p_Exclusivity = &StackCreationSettings->Exclusivity;
  StackCreationSettings->SecurityDescriptor = 0LL;
  newSecurityDescriptor = 0LL;
  securityInformation = 0;
  daclFromDefaultMechanism = 0;
  keyInfo = 0LL;
  StackCreationSettings->DeviceType = 0;
  v7 = 0LL;
  StackCreationSettings->Characteristics = 0;
  StackCreationSettings->Exclusivity = 0;
  DestinationString = 0LL;
  inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, (wchar_t *)L"Security");
  if ( inited < 0
    || (FullBuffer = CmRegUtilUcValueGetFullBuffer(
                       ClassOrDeviceKey,
                       &DestinationString,
                       v9,
                       (unsigned int)v10,
                       &keyInfo),
        v7 = keyInfo,
        v10 = 0LL,
        inited = FullBuffer,
        FullBuffer < 0) )
  {
    if ( inited == -1073741772 )
      inited = (int)v10;
  }
  else
  {
    LOBYTE(v10) = 1;
    inited = SeCaptureSecurityDescriptor((char *)keyInfo + keyInfo->DataOffset, 0LL, 1LL, v10, &newSecurityDescriptor);
    v10 = 0LL;
  }
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    v10 = 0LL;
  }
  if ( inited < 0 )
    goto $ErrorExit_0;
  if ( newSecurityDescriptor )
  {
    v12 = SeUtilSecurityInfoFromSecurityDescriptor(
            newSecurityDescriptor,
            &daclFromDefaultMechanism,
            &securityInformation);
    v10 = 0LL;
    inited = v12;
    if ( v12 < 0 )
      goto $ErrorExit_0;
    if ( daclFromDefaultMechanism )
    {
      ExFreePoolWithTag(newSecurityDescriptor, 0);
    }
    else
    {
      v13 = newSecurityDescriptor;
      StackCreationSettings->Flags |= 2u;
      StackCreationSettings->SecurityDescriptor = v13;
    }
  }
  Dword = CmRegUtilWstrValueGetDword(ClassOrDeviceKey, (wchar_t *)L"DeviceType", v9, p_DeviceType);
  v10 = 0LL;
  inited = Dword;
  if ( Dword < 0 )
  {
    if ( Dword != -1073741772 )
      goto $ErrorExit_0;
  }
  else
  {
    StackCreationSettings->Flags |= 1u;
  }
  v16 = CmRegUtilWstrValueGetDword(ClassOrDeviceKey, (wchar_t *)L"DeviceCharacteristics", v15, p_Characteristics);
  v10 = 0LL;
  inited = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
      goto $ErrorExit_0;
  }
  else
  {
    StackCreationSettings->Flags |= 4u;
  }
  v18 = CmRegUtilWstrValueGetDword(ClassOrDeviceKey, (wchar_t *)L"Exclusive", v17, p_Exclusivity);
  v10 = 0LL;
  inited = v18;
  if ( v18 >= 0 )
  {
    StackCreationSettings->Flags |= 8u;
    return (unsigned int)inited;
  }
  if ( v18 == -1073741772 )
    return 0;
$ErrorExit_0:
  SecurityDescriptor = StackCreationSettings->SecurityDescriptor;
  if ( SecurityDescriptor )
  {
    ExFreePoolWithTag(SecurityDescriptor, 0);
    v10 = 0LL;
  }
  StackCreationSettings->Flags = (unsigned int)v10;
  StackCreationSettings->SecurityDescriptor = v10;
  *p_DeviceType = (unsigned int)v10;
  *p_Characteristics = (unsigned int)v10;
  *p_Exclusivity = (unsigned int)v10;
  return (unsigned int)inited;
}
