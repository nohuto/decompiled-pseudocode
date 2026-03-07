__int64 __fastcall CHolographicInteropTexture::ProcessSetFlags(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS *a3)
{
  int v3; // r9d
  int v4; // eax
  __int64 v5; // rax

  v3 = *((_DWORD *)a3 + 2);
  v4 = *((_DWORD *)this + 59) ^ v3;
  *((_DWORD *)this + 59) = v3;
  if ( (v4 & 1) != 0 && (v3 & 1) == 0 )
  {
    v5 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 240) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v5 + 656) + 32LL))(
      *(_QWORD *)(v5 + 656),
      0LL,
      0x8000LL);
  }
  return 0LL;
}
