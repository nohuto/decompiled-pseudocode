/*
 * XREFs of HdlspKernelAddLogEntry @ 0x140AE7A40
 * Callers:
 *     HeadlessKernelAddLogEntry @ 0x1402B17D0 (HeadlessKernelAddLogEntry.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B5780C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 *     IoInitSystem @ 0x140B5E3E0 (IoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 */

__int64 __fastcall HdlspKernelAddLogEntry(unsigned int a1, unsigned __int16 *a2)
{
  const wchar_t *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  wchar_t Dst[88]; // [rsp+30h] [rbp-E8h] BYREF

  if ( a1 > 0xB )
  {
    switch ( a1 )
    {
      case 0xCu:
        v4 = L"KRNL: Failed to reassign system root.";
        goto LABEL_43;
      case 0xDu:
        v4 = L"KRNL: Failed to protect system partition.";
        goto LABEL_43;
      case 0xEu:
        v4 = L"KRNL: Failed to UnicodeToAnsi system root.";
        goto LABEL_43;
      case 0xFu:
        v4 = L"KRNL: Failed to AnsiToUnicode system root.";
        goto LABEL_43;
      case 0x10u:
        v4 = L"KRNL: Failed to find any groups.";
        goto LABEL_43;
      case 0x12u:
        v4 = L"KRNL: Failed waiting for boot devices to delete.";
        goto LABEL_43;
      case 0x13u:
        v4 = L"KRNL: Failed waiting for boot devices to start.";
        goto LABEL_43;
      case 0x14u:
        v4 = L"KRNL: Failed waiting for boot devices to reinit.";
        goto LABEL_43;
      case 0x15u:
        v4 = L"KRNL: Failed marking boot partition.";
        goto LABEL_43;
    }
  }
  else
  {
    if ( a1 == 11 )
    {
      v4 = L"KRNL: Failed to initialize system drivers.";
      goto LABEL_43;
    }
    if ( a1 > 6 )
    {
      switch ( a1 )
      {
        case 7u:
          v4 = L"KRNL: Failed to initialize (phase 0) plug and play services.";
          break;
        case 8u:
          v4 = L"KRNL: Failed to initialize (phase 1) plug and play services.";
          break;
        case 9u:
          v4 = L"KRNL: Failed to initialize boot drivers.";
          break;
        default:
          v4 = L"KRNL: Failed to locate system dll.";
          break;
      }
      goto LABEL_43;
    }
    switch ( a1 )
    {
      case 6u:
        v4 = L"KRNL: Failed to create root directories.";
        goto LABEL_43;
      case 1u:
        v4 = L"KRNL: Loading ";
        goto LABEL_43;
      case 2u:
        v4 = L"KRNL: Load succeeded.";
        goto LABEL_43;
      case 3u:
        v4 = L"KRNL: Load failed.";
        goto LABEL_43;
      case 4u:
        v4 = L"KRNL: Failed to create event.";
        goto LABEL_43;
      case 5u:
        v4 = L"KRNL: Failed to create object types.";
LABEL_43:
        wcscpy_s(Dst, 0x50uLL, v4);
        goto LABEL_44;
    }
  }
  v4 = 0LL;
  Dst[0] = 0;
LABEL_44:
  v5 = -1LL;
  if ( a1 == 1 && a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v4[v6] );
    v7 = *((_QWORD *)a2 + 1);
    v8 = (unsigned __int64)*a2 >> 1;
    v9 = 79 - v6;
    if ( v8 < 80 - v6 )
      v9 = (unsigned __int64)*a2 >> 1;
    memmove(&Dst[v6], *((const void **)a2 + 1), 2 * v9);
    if ( *(_WORD *)(v7 + 2 * v8 - 2) )
      Dst[v9 + v6] = 0;
  }
  do
    ++v5;
  while ( Dst[v5] );
  return HdlspDispatch(17, (int *)Dst, 2 * v5 + 2, 0LL, 0LL);
}
