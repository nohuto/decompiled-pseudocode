/*
 * XREFs of CmpDoWritethroughReparse @ 0x1407B6860
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x1402B3164 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1402BD900 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     CmpRecordParseFailure @ 0x140774724 (CmpRecordParseFailure.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyFullNameLength @ 0x1407B0580 (CmpKeyFullNameLength.c)
 *     CmpUnicodeStringAppendCharacter @ 0x140A1CAF0 (CmpUnicodeStringAppendCharacter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpDoWritethroughReparse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PCUNICODE_STRING a5,
        __int64 a6,
        UNICODE_STRING *a7)
{
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rbp
  __int64 v18; // rdi
  int v19; // eax
  UNICODE_STRING *v20; // rbx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  __int64 KcbAtLayerHeight; // rax
  int started; // eax
  int v26; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  __int128 v28; // [rsp+30h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+40h] [rbp-28h]
  PCUNICODE_STRING SourceString; // [rsp+70h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = *(_DWORD *)(a1 + 40) == -1;
  v28 = 0LL;
  WORD1(v28) = -1;
  SourceString = 0LL;
  *(_OWORD *)Privileges = 0LL;
  if ( !v11 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x2000) == 0 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_13;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 65LL) )
  {
    v12 = -1073741199;
  }
  else
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3, *(_WORD *)(a1 + 66) - 1);
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v28, KcbAtLayerHeight);
    v12 = started;
    if ( started < 0 )
    {
      v22 = a6;
      v23 = started;
      v21 = 65792;
      goto LABEL_23;
    }
    if ( !CmpIsKeyStackDeleted((__int64)&v28) )
    {
LABEL_13:
      v14 = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a1 + 66) - 1);
      v15 = CmpKeyFullNameLength(v14);
      v17 = v15;
      if ( v15 > 0xFFFF )
      {
        v22 = a6;
        v12 = -1073741811;
        v21 = 65872;
      }
      else
      {
        v18 = a6;
        if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess((PRKAPC_STATE)(a6 + 168));
          *(_DWORD *)(v18 + 160) |= 1u;
        }
        if ( a4 )
        {
          v26 = CmpConstructNameWithStatus(*(_QWORD *)(v14 + 72), &SourceString, v16);
          v12 = v26;
          if ( v26 < 0 )
          {
            v23 = v26;
            v21 = 66048;
            v22 = v18;
            goto LABEL_23;
          }
        }
        else
        {
          v19 = CmpConstructNameWithStatus(v14, &SourceString, v16);
          v12 = v19;
          if ( v19 < 0 )
          {
            v23 = v19;
            v21 = 66304;
            v22 = v18;
            goto LABEL_23;
          }
        }
        DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v17, 909528387LL);
        if ( !DestinationString.Buffer )
        {
          v12 = -1073741670;
          CmpRecordParseFailure(v18, 66560, -1073741670);
          goto LABEL_5;
        }
        DestinationString.Length = 0;
        DestinationString.MaximumLength = v17;
        RtlUnicodeStringCopy(&DestinationString, SourceString);
        if ( a4 )
        {
          CmpUnicodeStringAppendCharacter(&DestinationString);
          RtlUnicodeStringCat(&DestinationString, a5);
        }
        v20 = a7;
        ExFreePoolWithTag(a7->Buffer, 0);
        *v20 = DestinationString;
        RtlInitUnicodeString(&DestinationString, 0LL);
        *(_DWORD *)(v18 + 24) |= 0x10u;
        v21 = 66816;
        v22 = v18;
        v12 = 872;
      }
      v23 = v12;
LABEL_23:
      CmpRecordParseFailure(v22, v21, v23);
      goto LABEL_3;
    }
    v12 = -1073741199;
  }
LABEL_3:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_5:
  if ( SourceString )
    CmSiFreeMemory((PPRIVILEGE_SET)SourceString);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return v12;
}
