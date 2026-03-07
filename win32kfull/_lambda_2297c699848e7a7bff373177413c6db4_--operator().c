bool __fastcall lambda_2297c699848e7a7bff373177413c6db4_::operator()(__int64 a1, unsigned __int8 a2, int a3)
{
  return (unsigned int)a2 <= *(_DWORD *)(gpDispInfo + 136LL)
      && a2 >= *((_BYTE *)&unk_1C035C1E0 + a3)
      && a2 <= *((_BYTE *)&unk_1C035C1E0 + a3 + 12)
      && a2 <= *((_BYTE *)&unk_1C035C1E0 + a3 + 20);
}
