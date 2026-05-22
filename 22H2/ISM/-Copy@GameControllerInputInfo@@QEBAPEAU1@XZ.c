/*
 * XREFs of ?Copy@GameControllerInputInfo@@QEBAPEAU1@XZ @ 0x1800C43AC
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193AC0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 */

struct GameControllerInputInfo *__fastcall GameControllerInputInfo::Copy(
        GameControllerInputInfo *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rbx
  struct GameControllerInputInfo *result; // rax
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) < 0x58u )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      29LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\lib\\gamecontrollerinfo.cpp",
      a4);
    __debugbreak();
  }
  v5 = operator new(*((unsigned int *)this + 6), (const struct std::nothrow_t *)&std::nothrow);
  result = 0LL;
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 4);
    v8 = *((_DWORD *)this + 2);
    v9 = *((_DWORD *)this + 1);
    v10 = *((_QWORD *)this + 2);
    v5[9] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[8] = 0LL;
    v5[5] = 0LL;
    v5[4] = v7;
    *((_DWORD *)v5 + 1) = v9;
    *((_DWORD *)v5 + 2) = v8;
    *((_DWORD *)v5 + 6) = 88;
    v5[2] = v10;
    *((_BYTE *)v5 + 80) = 0;
    *(_DWORD *)v5 = 64;
    *((_DWORD *)v5 + 6) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 10) = *((_DWORD *)this + 10);
    *((_DWORD *)v5 + 11) = *((_DWORD *)this + 11);
    *((_OWORD *)v5 + 3) = *((_OWORD *)this + 3);
    v5[8] = *((_QWORD *)this + 8);
    *((_DWORD *)v5 + 18) = *((_DWORD *)this + 18);
    *((_DWORD *)v5 + 19) = *((_DWORD *)this + 19);
    memcpy_0(v5 + 11, (char *)this + 88, *((unsigned int *)this + 6) - 88LL);
    return (struct GameControllerInputInfo *)v5;
  }
  return result;
}
