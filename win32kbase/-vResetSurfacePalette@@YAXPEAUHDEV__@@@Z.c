void __fastcall vResetSurfacePalette(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 i; // r8
  void (__fastcall *v7)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  int v8; // [rsp+40h] [rbp+8h]
  int v9; // [rsp+40h] [rbp+8h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( (*((_DWORD *)a1 + 535) & 0x100) != 0 )
  {
    v3 = a1[222];
    v10 = v3;
    if ( *(_DWORD *)(v3 + 60) == 20 && (*(_DWORD *)(v3 + 24) & 0x11000) == 0 )
    {
      v4 = *(_QWORD *)(v2 + 6000);
      v5 = 32LL;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v5 + *(_QWORD *)(v4 + 112));
        HIBYTE(v8) = 48;
        *(_DWORD *)(v5 + *(_QWORD *)(v3 + 112)) = v8;
        v5 += 4LL;
        if ( v5 >= 40 )
          break;
        v3 = v10;
      }
      for ( i = 984LL; i < 992; i += 4LL )
      {
        v9 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + i - 944);
        HIBYTE(v9) = 48;
        *(_DWORD *)(i + *(_QWORD *)(v10 + 112)) = v9;
      }
      v3 = v10;
    }
    if ( (a1[5] & 0x400) == 0 )
    {
      v7 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))a1[355];
      if ( v7 )
        v7(a1[221], &v10, 0LL, 0LL, *(_DWORD *)(v3 + 28));
    }
  }
}
