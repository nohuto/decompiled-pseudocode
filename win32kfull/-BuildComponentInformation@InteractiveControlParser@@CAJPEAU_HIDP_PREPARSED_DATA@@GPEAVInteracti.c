__int64 __fastcall InteractiveControlParser::BuildComponentInformation(
        PHIDP_PREPARSED_DATA PreparsedData,
        __int64 a2,
        struct InteractiveControlDevice *a3)
{
  char *v3; // r15
  struct _HIDP_VALUE_CAPS *ValueCaps; // r14
  struct _HIDP_BUTTON_CAPS *v7; // rsi
  NTSTATUS SpecificValueCaps; // eax
  NTSTATUS v9; // ebx
  UCHAR *v10; // rbx
  SimpleHapticsController *v11; // rcx
  unsigned __int16 v12; // di
  NTSTATUS SpecificButtonCaps; // eax
  USHORT i; // di
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-59h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+44h] [rbp-55h] BYREF
  USHORT v18; // [rsp+48h] [rbp-51h] BYREF
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v19; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-41h] BYREF
  struct _HIDP_VALUE_CAPS v21; // [rsp+60h] [rbp-39h] BYREF

  v3 = (char *)a3 + 72;
  ValueCapsLength[0] = 0;
  ButtonCapsLength[0] = 0;
  ValueCaps = 0LL;
  v7 = 0LL;
  memset_0(&v21, 0, sizeof(v21));
  v18 = 1;
  v19 = 0LL;
  *((_QWORD *)v3 + 15) = v3 + 112;
  *((_QWORD *)v3 + 14) = v3 + 112;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, 0LL, ValueCapsLength, PreparsedData);
  v9 = SpecificValueCaps;
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    goto LABEL_31;
  if ( !ValueCapsLength[0] )
    goto LABEL_18;
  ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72LL * ValueCapsLength[0], 1819440195LL);
  if ( !ValueCaps )
  {
    v9 = -1073741670;
LABEL_32:
    InteractiveControlParser::FreeComponentInformation((struct _INTERACTIVECTRL_CAPABILITIES *)v3);
    return (unsigned int)v9;
  }
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, ValueCaps, ValueCapsLength, PreparsedData) < 0 )
    goto LABEL_18;
  if ( HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0x48u, &v21, &v18, PreparsedData) >= 0 )
  {
    v10 = (UCHAR *)Win32AllocPoolZInit(*((unsigned __int16 *)v3 + 6), 1819440195LL);
    *v10 = v21.ReportID;
    v11 = (SimpleHapticsController *)*((_QWORD *)a3 + 48);
    if ( v11
      && (int)SimpleHapticsController::SendDeviceIOControl(
                v11,
                0xB0192u,
                0LL,
                0LL,
                v10,
                *((unsigned __int16 *)v3 + 6),
                &v20) >= 0 )
    {
      DbgPrintEx(0x4Du, 2u, "InteractiveControlParser::BuildComponentInformationFound Device Resolution Multiplier:\n");
      DbgPrintEx(
        0x4Du,
        2u,
        "InteractiveControlParser::BuildComponentInformation\tLogical Rnage = [%d - %d]\n",
        v21.LogicalMin,
        v21.LogicalMax);
      DbgPrintEx(0x4Du, 2u, "InteractiveControlParser::BuildComponentInformation\tMultiplier Value = %d\n", 1);
    }
    Win32FreePool(v10);
  }
  v12 = 0;
  if ( ValueCapsLength[0] )
  {
    while ( 1 )
    {
      v9 = InteractiveControlParser::CreateAndLinkComponent(
             &ValueCaps[v12],
             0,
             (struct _INTERACTIVECTRL_CAPABILITIES *)v3,
             &v19);
      if ( v9 < 0 )
        break;
      if ( v19 && ValueCaps[v12].LinkCollection == v21.LinkCollection )
        *((_DWORD *)v19 + 31) = 1;
      if ( ++v12 >= ValueCapsLength[0] )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, 0LL, ButtonCapsLength, PreparsedData);
    v9 = SpecificButtonCaps;
    if ( (!SpecificButtonCaps || SpecificButtonCaps == -1072627705) && ButtonCapsLength[0] )
    {
      v7 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInit(72LL * ButtonCapsLength[0], 1819440195LL);
      if ( v7 )
      {
        v9 = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, v7, ButtonCapsLength, PreparsedData);
        if ( v9 >= 0 )
        {
          for ( i = 0; i < ButtonCapsLength[0]; ++i )
          {
            v9 = InteractiveControlParser::CreateAndLinkComponent(
                   (struct _HIDP_VALUE_CAPS *)&v7[i],
                   1,
                   (struct _INTERACTIVECTRL_CAPABILITIES *)v3,
                   &v19);
            if ( v9 < 0 )
              break;
          }
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    if ( !ValueCaps )
      goto LABEL_29;
  }
  Win32FreePool(ValueCaps);
LABEL_29:
  if ( v7 )
    Win32FreePool(v7);
LABEL_31:
  if ( v9 < 0 )
    goto LABEL_32;
  return (unsigned int)v9;
}
