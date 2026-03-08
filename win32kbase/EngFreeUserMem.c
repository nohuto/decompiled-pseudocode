/*
 * XREFs of EngFreeUserMem @ 0x1C0196E00
 * Callers:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0028810 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C002B338 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00A6424 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00A6464 (--1PUSHLOCKEX@@QEAA@XZ.c)
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
      if ( *(_QWORD *)CurrentProcessWin32Process )
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
}
