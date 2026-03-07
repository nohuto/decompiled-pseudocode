__int64 __fastcall ConvertDisplayConfigScalingToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        bool *a3)
{
  _DWORD *v5; // rdi
  __int64 DxgkWin32kInterface; // rax

  if ( (*(_DWORD *)a1 & 0x10000) != 0 )
  {
    v5 = (_DWORD *)((char *)a2 + 140);
    if ( *((_DWORD *)a1 + 28) == 128 )
    {
      *v5 = 253;
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
      if ( (*(int (__fastcall **)(_QWORD, char *, _DWORD *))(DxgkWin32kInterface + 320))(
             *((unsigned int *)a1 + 28),
             (char *)a2 + 16,
             v5) < 0 )
        return 3221225485LL;
    }
    *((_DWORD *)a2 + 34) = *v5;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  return 0LL;
}
