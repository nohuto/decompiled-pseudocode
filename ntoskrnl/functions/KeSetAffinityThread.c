__int64 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  return KiSetLegacyAffinityThread(a1, a2);
}
