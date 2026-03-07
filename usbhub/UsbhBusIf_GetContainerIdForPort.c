__int64 __fastcall UsbhBusIf_GetContainerIdForPort(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 (__fastcall *v9)(_QWORD, _QWORD, __int64); // rax

  v4 = a2;
  v5 = a1;
  v6 = FdoExt(a1);
  Log(v5, 4, 1967604553, v6 + 4224, v4);
  if ( (*(_DWORD *)(v8 + 2560) & 1) == 0 )
    return 3221225485LL;
  v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v7 + 272);
  if ( v9 )
    return v9(*(_QWORD *)(v7 + 8), (unsigned __int16)v4, a3);
  else
    return 3221225474LL;
}
