__int64 __fastcall CDeviceTextureTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v6; // cl

  v4 = *(int *)(*(_QWORD *)(a1 - 392) + 8LL) + a1 - 392;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = 1;
  *(_QWORD *)a2 = *(_QWORD *)(v5 + 896);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 172);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 - 136);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 - 132);
  if ( !*(_BYTE *)(a1 - 128) )
    v6 = (*(_DWORD *)(a1 - 216) & 0x80000) != 0;
  *(_BYTE *)(a2 + 20) = v6;
  return a2;
}
