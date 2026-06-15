/*
 * XREFs of sub_1800D0FCC @ 0x1800D0FCC
 * Callers:
 *     sub_1800D1600 @ 0x1800D1600 (sub_1800D1600.c)
 * Callees:
 *     sub_18002AEF8 @ 0x18002AEF8 (sub_18002AEF8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006901C @ 0x18006901C (sub_18006901C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     sub_1800D134C @ 0x1800D134C (sub_1800D134C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D0FCC(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HLOCAL v6; // rdi
  DWORD LastError; // ebx
  __int64 v8; // r9
  HLOCAL v9; // r8
  int v10; // eax
  int v11; // edx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+28h]
  HLOCAL hMem; // [rsp+68h] [rbp+38h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  PSID Sid; // [rsp+78h] [rbp+48h] BYREF

  Sid = 0LL;
  hMem = 0LL;
  if ( !a2 )
    goto LABEL_9;
  Sid = 0LL;
  v4 = AppContainerDeriveSidFromMoniker(a2, &Sid);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      43,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      v4);
    goto LABEL_17;
  }
  v6 = hMem;
  if ( hMem )
  {
    LastError = GetLastError();
    LocalFree(v6);
    SetLastError(LastError);
  }
  hMem = 0LL;
  if ( !ConvertSidToStringSidW(Sid, (LPWSTR *)&hMem) )
  {
    v5 = sub_1800B5768(
           (int)retaddr,
           44,
           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
           v8);
    goto LABEL_17;
  }
  v9 = hMem;
  if ( !hMem )
LABEL_9:
    v9 = 0LL;
  (*(void (__fastcall **)(__int64, __int64, HLOCAL, __int64))(*(_QWORD *)qword_18019E618 + 56LL))(
    qword_18019E618,
    a2,
    v9,
    a1);
  v15 = 0LL;
  sub_18006901C(&v15);
  v10 = sub_18002AEF8(&v15);
  v5 = v10;
  if ( v10 >= 0 )
  {
    v10 = sub_1800D134C(v15, hMem, a1);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v5 = 0;
      goto LABEL_16;
    }
    v11 = 59;
  }
  else
  {
    v11 = 55;
  }
  sub_18004BD84(
    (int)retaddr,
    v11,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
    v10);
LABEL_16:
  sub_18006901C(&v15);
LABEL_17:
  if ( hMem )
    LocalFree(hMem);
  if ( Sid )
    RtlFreeSid(Sid);
  return v5;
}
