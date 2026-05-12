/*
 * XREFs of RaUnitAsyncError @ 0x1C00073C8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0007A00 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C0007250 (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000735C (RaidSrbStatusToNtStatus.c)
 *     RaidUnitReleaseIrp @ 0x1C00077D4 (RaidUnitReleaseIrp.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015604 (RaidUnitProcessBusyRequest.c)
 *     IsZonedWriteRequest @ 0x1C0016450 (IsZonedWriteRequest.c)
 *     WPP_SF_qqD @ 0x1C00337B0 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0049E8C (RaidLogRequestComplete.c)
 *     WPP_SF_qdq @ 0x1C004C4B0 (WPP_SF_qdq.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  IRP *v3; // rbp
  char v6; // r10
  char v7; // r14
  _BYTE *v8; // rdi
  int v9; // ecx
  char v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v13; // r11d
  unsigned int i; // r9d
  _BYTE *v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _LARGE_INTEGER ByteOffset; // r15
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // [rsp+78h] [rbp+10h]
  unsigned int v26; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 168);
  v3 = *(IRP **)(a2 + 160);
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v8 = (_BYTE *)(v2 + 4);
    v25 = *(_DWORD *)(v2 + 12);
    v26 = *(_DWORD *)(v2 + 16);
    goto LABEL_3;
  }
  v25 = *(_DWORD *)(v2 + 24);
  v26 = *(_DWORD *)(v2 + 60);
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v13 = *(_DWORD *)(v2 + 56);
    for ( i = 0; i < v13; ++i )
    {
      v15 = v8;
      v16 = *(unsigned int *)(v2 + 4LL * i + 120);
      if ( (unsigned int)v16 >= 0x80 )
      {
        v17 = *(unsigned int *)(v2 + 16);
        if ( (unsigned int)v16 <= (unsigned int)v17 )
        {
          v18 = (unsigned int)v16;
          v19 = *(_DWORD *)(v16 + v2) - 64;
          if ( v19 )
          {
            v24 = v19 - 1;
            if ( v24 )
            {
              if ( v24 == 1 && v18 + 40 <= v17 )
              {
                v8 = (_BYTE *)(v18 + v2 + 8);
LABEL_3:
                v7 = *v8;
                break;
              }
            }
            else
            {
              if ( v18 + 56 <= v17 )
              {
                v7 = *(_BYTE *)(v18 + v2 + 8);
                v6 = 1;
              }
              v8 = (_BYTE *)(v18 + v2 + 8);
              if ( v18 + 56 > v17 )
                v8 = v15;
            }
          }
          else if ( v18 + 40 <= v17 )
          {
            v6 = 1;
            v8 = (_BYTE *)(v18 + v2 + 8);
            v7 = *v8;
          }
          if ( v6 )
            break;
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
      a1,
      v2,
      *(_BYTE *)(v2 + 3) & 0x3F);
  }
  v9 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v9 != 5 && ((v7 - 8) & 0xDF) != 0 && v9 != 37 || (unsigned __int8)IsZonedWriteRequest(a1, 0LL, a2, 0LL) )
    goto LABEL_9;
  if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v7 - 8) & 0xDF) == 0 )
    ++*(_DWORD *)(a1 + 2152);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( *(_BYTE *)(a1 + 3216) && (g_QosFlags & 1) == 0
    || (v23 = *(_DWORD *)(a1 + 1800), ByteOffset.LowPart >= v23) && v23 && (*(_BYTE *)(v2 + 3) & 0x3F) != 0x25 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 56LL, v20, a1, ByteOffset.LowPart, v2);
    }
    *(_BYTE *)(v2 + 3) = 4;
    if ( v7 == 8 )
      *v8 = 40;
LABEL_9:
    if ( (v25 & 0x100) == 0 && !*(_BYTE *)(a1 + 692) )
    {
      *(_BYTE *)(a1 + 692) = 1;
      *(_BYTE *)(v2 + 3) |= 0x40u;
    }
    RaidUnitHandleSpecialErrorConditions(a1, a2);
    v10 = 63;
    if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v7 - 8) & 0xDF) == 0 )
      v3->IoStatus.Status = -1073741661;
    else
      v3->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v2 + 3));
    v11 = v26;
    if ( ((unsigned __int8)v10 & *(_BYTE *)(v2 + 3)) != 18 )
      v11 = 0LL;
    v3->IoStatus.Information = v11;
    RaidUnitReleaseIrp(v3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        57LL,
        &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
        a1,
        v3,
        v3->IoStatus.Status);
    }
    if ( (qword_1C0069310 & 0x10) != 0 )
      RaidLogRequestComplete(*(_QWORD *)(a1 + 24), v3, v2);
    RaidCompleteRequestEx(v3);
    return 1;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 55LL, v20, a1, ByteOffset.LowPart, v2);
  }
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
  RaidUnitProcessBusyRequest(a1, a2, v8);
  return 0;
}
