__int64 __fastcall PopProcessorNotifyLpiCoordinatedStatesNotification(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r11
  __int64 v3; // rdi
  __int64 i; // r8
  __int64 v5; // r10
  __int64 j; // r9
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
  {
    v5 = 0LL;
    for ( j = 24 * i; (unsigned int)v5 < a2[j + 22]; v5 = (unsigned int)(v5 + 1) )
    {
      v7 = *(_QWORD *)&a2[j + 24];
      v8 = *(_QWORD *)(v7 + 24 * v5);
      if ( v8 )
        *(_QWORD *)(v7 + 24 * v5) = *(_QWORD *)(v8 + 72);
    }
  }
  return (*(unsigned __int8 (__fastcall **)(__int64, __int64, _DWORD *))(v2 + 104))(v3, 36LL, a2) == 0 ? 0xC00000BB : 0;
}
