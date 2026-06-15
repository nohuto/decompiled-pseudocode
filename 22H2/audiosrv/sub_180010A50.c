/*
 * XREFs of sub_180010A50 @ 0x180010A50
 * Callers:
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 *     sub_18000FFF0 @ 0x18000FFF0 (sub_18000FFF0.c)
 *     sub_1800DDCB0 @ 0x1800DDCB0 (sub_1800DDCB0.c)
 *     sub_18012DCE0 @ 0x18012DCE0 (sub_18012DCE0.c)
 * Callees:
 *     sub_180003F3C @ 0x180003F3C (sub_180003F3C.c)
 *     sub_180045060 @ 0x180045060 (sub_180045060.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180010A50(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // esi
  char v5; // bp
  int v6; // eax
  int v7; // r14d
  int v8; // eax
  int v9; // r14d
  __int64 v10; // r14
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r14d
  char v14; // [rsp+40h] [rbp-78h] BYREF
  unsigned int pvData; // [rsp+44h] [rbp-74h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-50h] BYREF
  void *v20; // [rsp+78h] [rbp-40h]
  int v21; // [rsp+80h] [rbp-38h]
  int v22; // [rsp+84h] [rbp-34h]
  char *v23; // [rsp+88h] [rbp-30h]
  __int64 v24; // [rsp+90h] [rbp-28h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v18 = v2;
  v3 = 0;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 88) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_2;
  *(_BYTE *)(a1 + 100) = 0;
  v5 = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableProtectedAudioDG",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    v5 = pvData != 0;
  v6 = sub_180045060(a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18004BD84(retaddr, 343LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", (unsigned int)v6);
    v3 = v7;
    goto LABEL_2;
  }
  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v14 = v5;
    v23 = &v14;
    v24 = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_18019C4C0;
    UserData.Size = *(unsigned __int16 *)off_18019C4C0;
    UserData.Reserved = 2;
    v20 = &unk_18016C28B;
    v21 = 36;
    v22 = 1;
    pvData = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    EventWriteTransfer(qword_18019C4D8, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  v8 = sub_180003F3C(a1, v5);
  v9 = v8;
  if ( !v5 )
    goto LABEL_11;
  if ( v8 < 0 )
  {
    if ( v8 == -2147024319 )
    {
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
      OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"Launch of AudioDG.EXE as a protected process failed with STATUS_INVALID_IMAGE_HASH\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"This usually means that there is a problem with PEAUTH, because an unexpected \n");
      OutputDebugStringW(L" DLL was added to the audiodg.exe process\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L" To find the offending binary, please do the following:\n");
      OutputDebugStringW(L" \t1. Start Event Viewer (type eventvwr from command line\n");
      OutputDebugStringW(L" \t2. Navigate to Applications and Services Log/Microsoft/Windows/CodeIntegrity/Operational node\n");
      OutputDebugStringW(L" \t3. Check the error level events with ID 3002; you'll see the offending binary path.\n");
      OutputDebugStringW(L" The event text should read as: Code Integrity is unable to verify the image integrity of the file ...\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"To get the build to boot, audiodg is being restarted outside of the protected \n");
      OutputDebugStringW(L" environment, audio will continue to function, but playback of protected \n");
      OutputDebugStringW(L" content will be disabled \n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L" For more information, please see:\n");
      OutputDebugStringW(L"    http://dmd/wmpg/mf/cp/PMP/Lists/Protected%20Environment%20FAQ/Flat.aspx\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"********************************************************************************\n");
    }
    v12 = sub_180045060(a1);
    v13 = v12;
    if ( v12 < 0 )
    {
      sub_18004BD84(
        retaddr,
        405LL,
        "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (unsigned int)v12);
      v3 = v13;
      goto LABEL_2;
    }
    v9 = sub_180003F3C(a1, v5 ^ 1u);
LABEL_11:
    if ( v9 < 0 )
    {
      sub_18004BD84(retaddr, 408LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", (unsigned int)v9);
      v3 = v9;
      goto LABEL_2;
    }
  }
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 88) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v10 = qword_18019E640;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64))(*(_QWORD *)qword_18019E640 + 80LL))(
            qword_18019E640,
            sub_18012DAC0,
            a1);
    *(_QWORD *)(a1 + 128) = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 88LL))(
        v10,
        v11,
        *(_QWORD *)(a1 + 88),
        0LL);
  }
LABEL_2:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
