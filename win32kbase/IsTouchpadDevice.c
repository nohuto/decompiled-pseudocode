bool __fastcall IsTouchpadDevice(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  return a1
      && (v1 = HMValidateHandleNoSecure(a1, 19)) != 0
      && (*(_DWORD *)(v1 + 200) & 0x80u) != 0
      && (v2 = *(_QWORD *)(v1 + 472)) != 0
      && *(_DWORD *)(v2 + 24) == 7;
}
