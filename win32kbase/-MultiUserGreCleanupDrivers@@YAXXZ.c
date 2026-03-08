/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00A0BB4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C009EFD4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ldevUnloadImage @ 0x1C002B6B0 (ldevUnloadImage.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00A0C7C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  struct PDEV *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 DxgkWin32kInterface; // rax
  __int64 v9; // rdx
  _DWORD *v10; // [rsp+30h] [rbp+8h]
  struct PDEV *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  while ( 1 )
  {
    v3 = *(struct PDEV **)(v2 + 6080);
    if ( !v3 )
      break;
    PDEV::InitializeClientReferenceCount(*(PDEV **)(v2 + 6080));
    *((_DWORD *)v3 + 3) = 1;
    v11 = v3;
    PDEVOBJ::vUnreferencePdev(&v11);
  }
  v5 = *(_QWORD *)(SGDGetSessionState(v1) + 24);
  v6 = *(_QWORD *)(v5 + 1344);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 128);
      if ( (*(_DWORD *)(v6 + 160) & 0x4000000) != 0 && *(_QWORD *)(v6 + 272) )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
        LOBYTE(v9) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(DxgkWin32kInterface + 400))(
          *(_QWORD *)(v6 + 272),
          v9,
          *(_QWORD *)(v6 + 280));
      }
      v6 = v7;
    }
    while ( v7 );
  }
  DxDdCleanupDxGraphics();
  while ( 1 )
  {
    v10 = *(_DWORD **)(v2 + 1888);
    if ( !v10 )
      break;
    v10[7] = 1;
    ldevUnloadImage(v10);
  }
}
