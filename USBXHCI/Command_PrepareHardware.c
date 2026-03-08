/*
 * XREFs of Command_PrepareHardware @ 0x1C0072DA0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C294 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     XilCommand_GetLinkTrbPointer @ 0x1C001BB9C (XilCommand_GetLinkTrbPointer.c)
 *     XilCommand_GetMaxTrbIndex @ 0x1C001BBC0 (XilCommand_GetMaxTrbIndex.c)
 *     XilCommand_AllocateResources @ 0x1C001BBE0 (XilCommand_AllocateResources.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     XilCommand_FreeResources @ 0x1C00316D4 (XilCommand_FreeResources.c)
 */

__int64 __fastcall Command_PrepareHardware(__int64 a1)
{
  int Resources; // edi
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rdi
  __int64 Pool2; // rax
  char v8; // [rsp+28h] [rbp-48h]
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h]
  char pszDest[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]

  v9 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  Resources = XilCommand_AllocateResources(a1);
  if ( Resources < 0 )
    goto LABEL_10;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  *(_DWORD *)(a1 + 48) = XilCommand_GetMaxTrbIndex(a1);
  *(_QWORD *)(a1 + 56) = XilCommand_GetLinkTrbPointer(v3);
  v5 = a1 + 8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = v4;
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)v5 + 72LL),
      v4,
      7,
      13,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
      v8);
  }
  Pool2 = ExAllocatePool2(64LL, 16LL * (unsigned int)(*(_DWORD *)(a1 + 48) + 1), 1229146200LL);
  *(_QWORD *)(a1 + 72) = Pool2;
  if ( !Pool2 )
  {
    Resources = -1073741670;
LABEL_10:
    XilCommand_FreeResources(a1);
    return (unsigned int)Resources;
  }
  *(_QWORD *)&v10 = 0LL;
  *(_QWORD *)&v9 = 56LL;
  pszDest[0] = 0;
  HIDWORD(v10) = 16;
  BYTE8(v10) = 0;
  *((_QWORD *)&v9 + 1) = 0xC800000400LL;
  v12 = 0x200000002LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d CMD", *(_DWORD *)(*(_QWORD *)v5 + 176LL));
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v9, a1 + 16) < 0 )
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)v5 + 72LL);
  *(_DWORD *)(a1 + 32) = 1;
  return 0;
}
