/*
 * XREFs of EngFreeUserMem @ 0x1C00A8740
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001A590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00802E0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00C19C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0017700 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0017740 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rbx
  _QWORD *v3; // rax
  void *v4; // rcx
  PVOID Buffer; // [rsp+20h] [rbp-20h] BYREF
  __int128 v6; // [rsp+28h] [rbp-18h]
  PVOID BaseAddress; // [rsp+50h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+18h] BYREF
  char v9; // [rsp+60h] [rbp+20h] BYREF

  if ( pv )
  {
    BaseAddress = pv;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(pv);
    v2 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      Buffer = BaseAddress;
      v6 = 0LL;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
      v3 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), &Buffer);
      if ( v3 )
      {
        v4 = (void *)v3[2];
        RegionSize = v3[1];
        MmUnsecureVirtualMemory(v4);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        Buffer = BaseAddress;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), &Buffer);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
    }
  }
}
