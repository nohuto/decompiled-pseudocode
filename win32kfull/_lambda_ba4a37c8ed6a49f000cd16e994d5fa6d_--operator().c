bool __fastcall lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator()(__int64 a1, unsigned __int8 a2, int a3)
{
  return (unsigned int)a2 <= *(_DWORD *)(gpDispInfo + 136LL)
      && a2 <= *((_BYTE *)&unk_1C035C1E0 + a3 + 4)
      && a2 <= *((_BYTE *)&unk_1C035C1E0 + a3 + 8)
      && a2 <= *((_BYTE *)&unk_1C035C1E0 + a3 + 16);
}
