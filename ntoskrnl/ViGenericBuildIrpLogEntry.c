__int64 __fastcall ViGenericBuildIrpLogEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 184);
  if ( *(_BYTE *)(v4 - 72) != 14 )
    return 0LL;
  *(_DWORD *)a4 = 1;
  *(_BYTE *)(a4 + 4) = *(_BYTE *)(v4 - 72);
  result = 1LL;
  *(_BYTE *)(a4 + 5) = *(_BYTE *)(v4 - 71);
  *(_BYTE *)(a4 + 6) = *(_BYTE *)(v4 - 70);
  *(_BYTE *)(a4 + 7) = *(_BYTE *)(v4 - 69);
  *(_QWORD *)(a4 + 8) = *(_QWORD *)(v4 - 64);
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v4 - 56);
  *(_QWORD *)(a4 + 24) = *(_QWORD *)(v4 - 48);
  *(_QWORD *)(a4 + 32) = *(_QWORD *)(v4 - 40);
  return result;
}
