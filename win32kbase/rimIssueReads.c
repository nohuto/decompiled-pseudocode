/*
 * XREFs of rimIssueReads @ 0x1C0039C14
 * Callers:
 *     RIMReadInput @ 0x1C0039160 (RIMReadInput.c)
 * Callees:
 *     rimStartDeviceReadIfAllowed @ 0x1C0009E48 (rimStartDeviceReadIfAllowed.c)
 *     DeviceTypeToRimInputType @ 0x1C0039CC0 (DeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C0039D00 (RimInputTypeToDeviceType.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall rimIssueReads(__int64 a1)
{
  int v1; // ebx
  unsigned int IfAllowed; // r14d
  unsigned int v4; // ebp
  unsigned int v5; // r15d
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rbx
  unsigned int v10; // eax

  v1 = *(_DWORD *)(a1 + 84);
  IfAllowed = 0;
  if ( v1 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = v1 & DeviceTypeToRimInputType(v4);
      if ( v5 )
      {
        v7 = *(_QWORD *)(a1 + 424);
        if ( v7 )
          break;
      }
LABEL_4:
      if ( ++v4 > 2 )
        return IfAllowed;
    }
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v7 + 48);
      if ( (_BYTE)v8 != 3 )
      {
        if ( v4 == 2 )
        {
          if ( ((unsigned int)RimDeviceTypeToRimInputType(v7, 2LL) & *(_DWORD *)(a1 + 84)) == 0 )
            goto LABEL_11;
LABEL_10:
          IfAllowed = rimStartDeviceReadIfAllowed(a1, v7);
          goto LABEL_11;
        }
        if ( v8 == (unsigned int)RimInputTypeToDeviceType(v5) )
          goto LABEL_10;
      }
LABEL_11:
      v7 = *(_QWORD *)(v7 + 40);
      if ( !v7 )
      {
        v1 = *(_DWORD *)(a1 + 84);
        goto LABEL_4;
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 424);
  while ( v9 )
  {
    v10 = rimStartDeviceReadIfAllowed(a1, v9);
    v9 = *(_QWORD *)(v9 + 40);
    IfAllowed = v10;
  }
  return IfAllowed;
}
