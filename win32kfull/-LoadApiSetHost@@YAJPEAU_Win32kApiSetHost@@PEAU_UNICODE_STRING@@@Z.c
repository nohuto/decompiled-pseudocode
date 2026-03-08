/*
 * XREFs of ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E29A4
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x1C00E2644 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C00E2A9C (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 */

__int64 __fastcall LoadApiSetHost(struct _Win32kApiSetHost *a1, struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING *v4; // rcx
  unsigned int v5; // edi
  int v6; // esi
  unsigned int v7; // ebx
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v9.Length = 2883626LL;
  v9.Buffer = (PWSTR)L"\\SystemRoot\\System32\\";
  v11[0] = 3932218LL;
  v11[1] = L"\\SystemRoot\\System32\\Drivers\\";
  v4 = &v9;
  *(_OWORD *)P = 0LL;
  v5 = -2147483647;
  v6 = 0;
  while ( 1 )
  {
    ++v6;
    if ( !FormFullImageName(v4, a2, (struct _UNICODE_STRING *)P) )
      break;
    v7 = ((__int64 (__fastcall *)(PVOID *, _QWORD, _QWORD, _QWORD, char *, char *, _QWORD, PWSTR))MmLoadSystemImage)(
           P,
           0LL,
           0LL,
           v5,
           (char *)a1 + 40,
           (char *)a1 + 32,
           *(_QWORD *)&v9.Length,
           v9.Buffer);
    ExFreePoolWithTag(P[1], 0);
    P[1] = 0LL;
    if ( v7 == -1073741411 || v7 == -1073741554 )
      return 0;
    if ( v7 == -1073741772 )
    {
      v5 &= ~1u;
      v4 = (struct _UNICODE_STRING *)v11;
      if ( v6 < 2 )
        continue;
    }
    return v7;
  }
  return (unsigned int)-1073741801;
}
