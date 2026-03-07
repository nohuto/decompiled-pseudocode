__int64 __fastcall KiDisconnectSecondaryInterruptInternal(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r9
  _QWORD *v5; // r8
  bool v6; // cf

  result = 3221225711LL;
  if ( *(_BYTE *)(a1 + 95) )
  {
    v2 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
    v3 = *(_QWORD *)(v2 + 40);
    if ( v3 == a1 )
    {
      if ( *(_QWORD *)(v3 + 8) == v3 + 8 )
        *(_QWORD *)(v2 + 40) = 0LL;
      else
        *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 8) - 8LL;
    }
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v4 + 8) != a1 + 8 || (v5 = *(_QWORD **)(a1 + 16), *v5 != a1 + 8) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = *(_QWORD *)(v2 + 40) != 0LL;
    *(_BYTE *)(a1 + 95) = 0;
    return v6 ? 0x128 : 0;
  }
  return result;
}
