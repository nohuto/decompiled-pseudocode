/*
 * XREFs of ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1800AEECC
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180073C10 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     <none>
 */

void __fastcall std::stoi(wchar_t *String, wchar_t *a2, __int64 a3)
{
  wchar_t *v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  wchar_t *EndPtr; // [rsp+38h] [rbp+10h] BYREF

  EndPtr = a2;
  v3 = String;
  v4 = (_DWORD *)_o__errno(String, a2, a3);
  v5 = v4;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(wchar_t **)v3;
  *v4 = 0;
  wcstol(v3, &EndPtr, 10);
  if ( v3 == EndPtr )
  {
    std::_Xinvalid_argument("invalid stoi argument");
    __debugbreak();
  }
  if ( *v5 == 34 )
  {
    std::_Xout_of_range("stoi argument out of range");
    __debugbreak();
  }
}
