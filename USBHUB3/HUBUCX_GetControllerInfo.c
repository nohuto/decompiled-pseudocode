__int64 __fastcall HUBUCX_GetControllerInfo(__int64 a1)
{
  _DWORD *v1; // rbx
  bool v3; // zf
  __int64 result; // rax

  v1 = (_DWORD *)(a1 + 168);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 576))(*(_QWORD *)(a1 + 248), a1 + 168);
  v3 = *v1 == 3;
  *(_BYTE *)(a1 + 200) = 0;
  result = *(unsigned __int8 *)(a1 + 200);
  if ( v3 )
    result = 1LL;
  *(_BYTE *)(a1 + 200) = result;
  return result;
}
