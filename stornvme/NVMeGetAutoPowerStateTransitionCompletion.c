__int64 __fastcall NVMeGetAutoPowerStateTransitionCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // r9
  char v6; // dl

  result = GetSrbExtension(a2);
  if ( v4 )
  {
    v6 = *(_BYTE *)(v3 + 3);
    if ( v6 != 14 )
    {
      if ( v6 == 1 )
        *(_DWORD *)(v5 + 1880) ^= (*(_DWORD *)(v5 + 1880) ^ (*v4 << 6)) & 0x40;
      *(_BYTE *)(result + 4253) |= 8u;
    }
  }
  return result;
}
