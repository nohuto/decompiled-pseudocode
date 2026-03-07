__int64 __fastcall DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 )
    *(_DWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(
                             *(_QWORD *)(a1 + 24),
                             *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)a1 = a2 != 0;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  result = a2 == 0 ? 0xC0000264 : 0;
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
