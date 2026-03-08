/*
 * XREFs of ACPIProcessPhysicalDeviceLocationPackage @ 0x1C00984B0
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     AMLIEvalPkgDataElement @ 0x1C0047F38 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C0097E38 (ACPIGetPhysicalDeviceLocationBuffer.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocationPackage(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r12
  int v7; // edi
  _DWORD *v8; // rdx
  unsigned int i; // r14d
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  NTSTATUS v22; // eax
  __int64 v23; // rax
  unsigned __int16 v24; // dx
  __int64 v25; // rax
  __int128 v27; // [rsp+28h] [rbp-69h] BYREF
  __int128 v28; // [rsp+38h] [rbp-59h]
  GUID *Guid; // [rsp+48h] [rbp-49h]
  struct _STRING SourceString; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING StringIn; // [rsp+60h] [rbp-31h] BYREF
  __int128 v32; // [rsp+70h] [rbp-21h] BYREF
  __int128 v33; // [rsp+80h] [rbp-11h]
  _QWORD *v34; // [rsp+90h] [rbp-1h]
  _OWORD v35[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+27h]
  _DWORD *v37; // [rsp+F8h] [rbp+67h]

  v3 = *(_DWORD **)(a1 + 32);
  v36 = 0LL;
  v34 = 0LL;
  Guid = 0LL;
  v37 = v3;
  SourceString = 0LL;
  StringIn = 0LL;
  v7 = 0;
  memset(v35, 0, sizeof(v35));
  v32 = 0LL;
  v33 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( !*v3 )
  {
    v7 = -1073741823;
    goto LABEL_92;
  }
  if ( a2 || a3 )
  {
    v7 = AMLIEvalPkgDataElement(a1, 0, (__int64)v35);
    if ( v7 >= 0 )
    {
      if ( !a2 || (v7 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v35, a2), v7 >= 0) )
      {
        if ( a3 )
        {
          v8 = (_DWORD *)(a3 + 16);
          if ( a2 )
          {
            *(_OWORD *)v8 = *(_OWORD *)a2;
            *(_DWORD *)(a3 + 32) = a2[4];
          }
          else
          {
            v7 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v35, v8);
            if ( v7 < 0 )
              goto LABEL_92;
          }
          if ( *v3 > 1u )
          {
            for ( i = 2; i - 1 < *v3; i += 2 )
            {
              if ( v34 )
              {
                AMLIFreeDataBuffs((__int64)&v32);
                v34 = 0LL;
              }
              if ( Guid )
              {
                AMLIFreeDataBuffs((__int64)&v27);
                Guid = 0LL;
              }
              v7 = AMLIEvalPkgDataElement(a1, i - 1, (__int64)&v32);
              if ( v7 < 0 )
                break;
              if ( WORD1(v32) == 3 && DWORD2(v33) == 16 )
              {
                v10 = v34;
                v11 = *v34 - *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1;
                if ( *v34 == *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1 )
                  v11 = v34[1] - *(_QWORD *)ACPI_PLD_JOINT_BUFFER_GUID.Data4;
                if ( v11 )
                {
                  v12 = *v34 - *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1;
                  if ( *v34 == *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1 )
                    v12 = v34[1] - *(_QWORD *)ACPI_PLD_SPATIAL_BUFFER_GUID.Data4;
                  if ( v12 )
                  {
                    v13 = *v34 - *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1;
                    if ( *v34 == *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1 )
                      v13 = v34[1] - *(_QWORD *)ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data4;
                    if ( v13 )
                    {
                      v15 = *v34 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                      if ( *v34 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                        v15 = v34[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                      if ( !v15 )
                        goto LABEL_66;
                      v16 = *v34 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                      if ( *v34 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                        v16 = v34[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                      if ( !v16 )
                        goto LABEL_66;
                      v17 = *v34 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                      if ( *v34 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                        v17 = v34[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                      if ( v17 )
                      {
                        v18 = *v34 - *(_QWORD *)&ACPI_PLD_CONTAINER_BUFFER_GUID.Data1;
                        if ( *v34 == *(_QWORD *)&ACPI_PLD_CONTAINER_BUFFER_GUID.Data1 )
                          v18 = v34[1] - *(_QWORD *)ACPI_PLD_CONTAINER_BUFFER_GUID.Data4;
                        if ( !v18 && DWORD2(v28) >= 0x10 )
                        {
                          v19 = *(_QWORD *)(a3 + 136) - *(_QWORD *)&GUID_NULL.Data1;
                          if ( !v19 )
                            v19 = *(_QWORD *)(a3 + 144) - *(_QWORD *)GUID_NULL.Data4;
                          if ( !v19 )
                            *(GUID *)(a3 + 136) = *Guid;
                        }
                      }
                      else
                      {
LABEL_66:
                        if ( !*(_QWORD *)(a3 + 128) )
                        {
                          v7 = AMLIEvalPkgDataElement(a1, i, (__int64)&v27);
                          if ( v7 < 0 )
                            break;
                          if ( WORD1(v27) == 3 )
                          {
                            v20 = *v10 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                            if ( *v10 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                              v20 = v10[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                            if ( v20 )
                            {
                              v23 = *v10 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                              if ( *v10 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                                v23 = v10[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                              if ( v23 )
                              {
                                v25 = *v10 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                                if ( *v10 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                                  v25 = v10[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                                if ( !v25 && DWORD2(v28) >= 0x10 )
                                {
                                  v22 = RtlStringFromGUID(Guid, (PUNICODE_STRING)(a3 + 120));
LABEL_90:
                                  v7 = v22;
                                  if ( v22 < 0 )
                                    break;
                                }
                              }
                              else if ( DWORD2(v28) >= 0x10 )
                              {
                                v24 = 0;
                                StringIn.Buffer = (wchar_t *)Guid;
                                StringIn.Length = 0;
                                StringIn.MaximumLength = 16;
                                do
                                {
                                  if ( !*((_WORD *)&Guid->Data1 + ((unsigned __int64)v24 >> 1)) )
                                    break;
                                  v24 += 2;
                                  StringIn.Length = v24;
                                }
                                while ( v24 < 0x10u );
                                if ( v24 )
                                {
                                  v22 = RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(a3 + 120));
                                  goto LABEL_90;
                                }
                              }
                            }
                            else if ( DWORD2(v28) >= 0x10 )
                            {
                              v21 = 0;
                              SourceString.Buffer = (char *)Guid;
                              SourceString.Length = 0;
                              SourceString.MaximumLength = 16;
                              do
                              {
                                if ( !*((_BYTE *)&Guid->Data1 + v21) )
                                  break;
                                SourceString.Length = ++v21;
                              }
                              while ( v21 < 0x10u );
                              v3 = v37;
                              if ( v21 )
                              {
                                v22 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)(a3 + 120), &SourceString, 1u);
                                goto LABEL_90;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v14 = *(_QWORD *)(a3 + 104) - *(_QWORD *)&GUID_NULL.Data1;
                      if ( !v14 )
                        v14 = *(_QWORD *)(a3 + 112) - *(_QWORD *)GUID_NULL.Data4;
                      if ( !v14 )
                      {
                        v7 = AMLIEvalPkgDataElement(a1, i, (__int64)&v27);
                        if ( v7 < 0 )
                          break;
                        if ( WORD1(v27) == 3 && DWORD2(v28) >= 0x10 )
                          *(GUID *)(a3 + 104) = *Guid;
                      }
                    }
                  }
                  else if ( (*(_BYTE *)(a3 + 52) & 0x1F) == 0 )
                  {
                    v7 = AMLIEvalPkgDataElement(a1, i, (__int64)&v27);
                    if ( v7 < 0 )
                      break;
                    if ( WORD1(v27) == 3 && DWORD2(v28) >= 0x10 )
                      *(GUID *)(a3 + 52) = *Guid;
                  }
                }
                else if ( (*(_BYTE *)(a3 + 36) & 0x1F) == 0 )
                {
                  v7 = AMLIEvalPkgDataElement(a1, i, (__int64)&v27);
                  if ( v7 < 0 )
                    break;
                  if ( WORD1(v27) == 3 && DWORD2(v28) >= 0x10 )
                    *(GUID *)(a3 + 36) = *Guid;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_92:
  if ( v36 )
    AMLIFreeDataBuffs((__int64)v35);
  if ( v34 )
    AMLIFreeDataBuffs((__int64)&v32);
  if ( Guid )
    AMLIFreeDataBuffs((__int64)&v27);
  return (unsigned int)v7;
}
