/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C0161334
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 *     RIMUpdateDeviceForInputMode @ 0x1C00ACE70 (RIMUpdateDeviceForInputMode.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C018195C (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C01526CC (WPP_RECORDER_SF_s.c)
 *     RIMDeliverConfigRequest @ 0x1C0161484 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C0161930 (RIMFindConfigDeviceForInput.c)
 */

__int16 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 v4; // rax
  __int64 v6; // rbx
  int v8; // edx
  int v9; // ebp
  const char *v10; // rcx
  struct RIMDEV *v11; // rcx
  struct RIMDEV *v13; // [rsp+70h] [rbp+18h] BYREF

  v3 = *(_WORD *)(a3 + 40);
  v13 = 0LL;
  LOWORD(v4) = v3 - 4;
  v6 = a2;
  if ( (unsigned __int16)v4 <= 1u )
  {
    if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 63, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    v9 = RIMFindConfigDeviceForInput(a1, a3, v6, &v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = "found config device";
      if ( !v9 )
        v10 = "NO config device found";
      WPP_RECORDER_SF_s(
        (_DWORD)gRimLog,
        v8,
        1,
        64,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        (__int64)v10);
    }
    if ( !v9
      || ((v11 = v13, *(_WORD *)(a3 + 40) != 4) ? (*((_DWORD *)v13 + 46) |= 0x1000u) : (*((_DWORD *)v13 + 46) |= 0x800u),
          LODWORD(v4) = RIMDeliverConfigRequest(v11),
          *(_DWORD *)(*(_QWORD *)(v6 + 480) + 312LL) &= ~0x1000u,
          (int)v4 < 0) )
    {
      v4 = *(_QWORD *)(v6 + 480);
      *(_DWORD *)(v4 + 312) |= 0x1000u;
    }
  }
  return v4;
}
