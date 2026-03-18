/*
 * XREFs of rimIssueReads @ 0x1C0044DC0
 * Callers:
 *     RIMReadInput @ 0x1C0043300 (RIMReadInput.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0044E70 (DeviceTypeToRimInputType.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C0048390 (rimStartDeviceReadIfAllowed.c)
 *     RimInputTypeToDeviceType @ 0x1C00483D0 (RimInputTypeToDeviceType.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall rimIssueReads(__int64 a1)
{
  unsigned int IfAllowed; // ebp
  unsigned int v3; // esi
  __int64 v4; // r8
  unsigned int v5; // r15d
  __int64 i; // rdi
  int v8; // r14d
  __int64 v9; // rdi
  unsigned int v10; // eax

  IfAllowed = 0;
  if ( *(_DWORD *)(a1 + 84) )
  {
    v3 = 0;
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 84) & DeviceTypeToRimInputType(v3);
      if ( v5 )
        break;
LABEL_4:
      if ( ++v3 > 2 )
        return IfAllowed;
    }
    for ( i = *(_QWORD *)(a1 + 424); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      v8 = *(unsigned __int8 *)(i + 48);
      if ( (_BYTE)v8 != 3 )
      {
        if ( v3 != 2 )
        {
          if ( v8 != (unsigned int)RimInputTypeToDeviceType(v5) )
            continue;
LABEL_11:
          IfAllowed = rimStartDeviceReadIfAllowed(a1, i);
          continue;
        }
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2LL, v4) & *(_DWORD *)(a1 + 84)) != 0 )
          goto LABEL_11;
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
