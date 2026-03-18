/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x140673134
 * Callers:
 *     KiDisplayBlueScreen @ 0x14056A1D4 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402C3000 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     BgpGxDrawRectangle @ 0x14038444C (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140384700 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x140550A80 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x140671B60 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x1406722B0 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14067237C (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x1406726E4 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x140672970 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x140672B80 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x140672D10 (BcpGetDisplayType.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B9E7AC (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  int v7; // r14d
  unsigned int v8; // ebx
  unsigned int DisplayType; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  int *v13; // rax
  int v14; // ecx
  __int64 *v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  UNICODE_STRING *v21; // rcx
  __int16 v22; // cx
  __int64 v23; // r8
  char v24; // bp
  UNICODE_STRING *v25; // rcx
  UNICODE_STRING *v26; // rdx
  int v27; // r9d
  unsigned int BitsPerPixel; // eax
  __int64 v29; // r8
  int ComponentOffsets; // r15d
  __int64 v31; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v35[4]; // [rsp+40h] [rbp-38h] BYREF

  v34 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v7 = a1;
  if ( (dword_140C0E4B0 & 4) != 0 && (dword_140C0E4B0 & 0x400000) == 0 )
  {
    v8 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    IoSaveBugCheckProgress(131);
    return v8;
  }
  if ( (dword_140C0E4B0 & 0x400000) != 0 || (dword_140C0E4B0 & 0x10) == 0 )
  {
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(132);
    return 0LL;
  }
  v35[0] = DWORD2(BgInternal);
  v35[1] = DWORD1(BgInternal);
  v35[2] = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(v35);
  v11 = *(_QWORD *)(qword_140C70C60 + 24);
  if ( v7 == 456 )
    *(_DWORD *)(v11 + 40) = -16777216;
  BgpClearScreen(*(_DWORD *)(v11 + 40));
  IoSaveBugCheckProgress(133);
  LODWORD(BcpCursor) = dword_140C0B5A0[18 * DisplayType + 4];
  v13 = &dword_140C0B5A0[18 * DisplayType + 5];
  v14 = *v13;
  HIDWORD(BcpCursor) = *v13;
  if ( v13 )
    dword_140C64B30 = v14;
  if ( (dword_140C0E4B0 & 0x20000) == 0 )
  {
    v15 = &qword_1400056E8;
    if ( v7 == 456 )
      v15 = &qword_14000B098;
    BcpDisplayCriticalString((unsigned __int16 *)v15, dword_140C0B5A0[18 * DisplayType + 3], v12, DisplayType);
  }
  v16 = dword_140C0B5A0[18 * DisplayType + 9];
  v17 = (unsigned int)dword_140C0B5A0[18 * DisplayType + 8];
  if ( v7 == 456 )
  {
    v18 = v16 + dword_140C64B30;
    v19 = dword_140C0B5A0[18 * DisplayType + 4];
    HIDWORD(BcpCursor) = v18;
    v20 = dword_140C0B5A0[18 * DisplayType + 2];
    LODWORD(BcpCursor) = v17 + v19;
    v21 = &stru_140C70C30;
  }
  else
  {
    v17 = (unsigned int)(dword_140C0B5A0[18 * DisplayType + 4] + v17);
    v20 = dword_140C0B5A0[18 * DisplayType + 2];
    HIDWORD(BcpCursor) = dword_140C64B30 + v16;
    v21 = &stru_140C70C20;
    LODWORD(BcpCursor) = v17;
    if ( (dword_140C0E4B0 & 0x10000000) == 0 )
      v21 = &stru_140C70B40;
  }
  BcpDisplayCriticalString(&v21->Length, v20, v17, DisplayType);
  BcpDisplayCriticalCharacter(v22, dword_140C0B5A0[18 * DisplayType + 2]);
  v24 = 1;
  if ( v7 == 456 )
  {
    v25 = &stru_140C70C40;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_27;
    if ( (a5 & 2) != 0 )
    {
      v26 = &stru_140C70B70;
      v25 = &stru_140C70B90;
    }
    else
    {
      v25 = &stru_140C70B80;
      v26 = &stru_140C70B60;
    }
    if ( (a5 & 4) == 0 )
      v25 = v26;
  }
  BcpDisplayCriticalString(&v25->Length, dword_140C0B5A0[18 * DisplayType + 2], v23, DisplayType);
LABEL_27:
  v27 = 0;
  if ( !qword_140C0E538
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v29 + 8) < BitsPerPixel) && (dword_140C0E4B0 & 0xC00) != 0 )
  {
    v24 = 0;
  }
  else
  {
    v27 = *(_DWORD *)(v29 + 4);
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       &BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       (int *)&v34,
                       DisplayType,
                       v27,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    BcpCursor = BcpErrorMessageOffset;
    dword_140C64B30 = dword_140C0E418;
    if ( v7 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, v7, a2, a3, (__int64)a4, a5);
      if ( v24 )
        BgpGxDrawRectangle((_BYTE *)qword_140C0E538, (__int64)&v34);
    }
    IoSaveBugCheckProgress(134);
    if ( (a5 & 4) != 0 )
    {
      if ( (a5 & 2) == 0 )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      BcpCursor = BcpProgressOffset;
      dword_140C64B30 = dword_140C0E3D8;
      BcpDisplayProgress(0, DisplayType, v31);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_140C70B40;
    a4[1] = &stru_140C70B50;
  }
  return (unsigned int)ComponentOffsets;
}
