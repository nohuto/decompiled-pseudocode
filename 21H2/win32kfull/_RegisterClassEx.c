/*
 * XREFs of _RegisterClassEx @ 0x1C0061460
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C00615D0 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     InternalRegisterClassEx @ 0x1C005FF10 (InternalRegisterClassEx.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, __int16 a3, unsigned int a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // bx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  int v16; // [rsp+68h] [rbp+38h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = gSmartObjNullRef;
  v10 = 0;
  v15 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v15;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(v9) = 7;
    v13 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), v9);
    if ( v13 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL);
  }
  v16 = 0;
  v11 = InternalRegisterClassEx(a1, a3, a4, &v16);
  if ( v11 != *(_QWORD *)v14 )
  {
    if ( v14 != gSmartObjNullRef && !--*(_DWORD *)(v14 + 8) )
    {
      if ( *(_BYTE *)(v14 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v14);
    }
    if ( v11 )
    {
      v14 = *(_QWORD *)(v11 + 128);
      ++*(_DWORD *)(v14 + 8);
    }
    else
    {
      v14 = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v14 )
  {
    if ( !v16 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) + 24LL) = a2[1];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) + 16LL) = *a2;
      *(_WORD *)(*(_QWORD *)v14 + 30LL) = 0;
    }
    v10 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) + 2LL);
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v14);
  return v10;
}
