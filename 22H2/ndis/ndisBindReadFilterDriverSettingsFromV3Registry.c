/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C010284C
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010B3DC (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0101F14 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0102C30 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, __int64 a2)
{
  PVOID *v3; // rbx
  void *v4; // rcx
  int String; // eax
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (dword_1C00E5A24 & 1) == 0 )
  {
    dword_1C00E5564 = 1;
    dword_1C00E5A24 |= 1u;
    xmmword_1C00E5550 = xmmword_1C00CE128;
    dword_1C00E5560 = 6;
    xmmword_1C00E5568 = xmmword_1C00CE140;
    dword_1C00E5578 = 8;
    dword_1C00E5590 = 20;
    xmmword_1C00E5580 = xmmword_1C00CE0F8;
    dword_1C00E55A8 = 22;
    xmmword_1C00E5598 = xmmword_1C00CE0E0;
    dword_1C00E557C = 2;
    dword_1C00E5594 = 4;
    dword_1C00E55AC = 8;
    xmmword_1C00E55B0 = xmmword_1C00CE110;
    dword_1C00E55C0 = 24;
    dword_1C00E55C4 = 16;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v3 = (PVOID *)&xmmword_1C00E5550;
  v8 = a2;
  while ( 1 )
  {
    v7 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&v8,
                         (const struct _NETSETUPPROPKEY *)v3,
                         &v7) )
      break;
    if ( v7 )
      *(_DWORD *)(a1 + 40) |= *((_DWORD *)v3 + 5);
    v3 += 3;
    if ( v3 == &qword_1C00E55C8 )
    {
      v4 = *(void **)(a1 + 48);
      *(_QWORD *)(a1 + 48) = 0LL;
      if ( v4 )
        ExFreePoolWithTag(v4, 0x7274534Bu);
      String = NetSetupPropertyBag::ReadString(
                 (NetSetupPropertyBag *)&v8,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00CA4C8,
                 (void **)(a1 + 48));
      return !String || String == -1073741772;
    }
  }
  return 0;
}
