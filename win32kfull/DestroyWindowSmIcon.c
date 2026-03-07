__int64 __fastcall DestroyWindowSmIcon(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct tagCURSOR *v4; // rbx

  v2 = *(_QWORD *)(a1[5] + 264);
  if ( !v2 )
    return 0LL;
  v3 = HMValidateHandleNoRip(v2, 3);
  v4 = (struct tagCURSOR *)v3;
  if ( !v3 || (*(_DWORD *)(v3 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(a1[5] + 264) = 0LL;
  _DestroyCursor(v4, 0);
  return 1LL;
}
