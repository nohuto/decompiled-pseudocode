__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 != 0, a4);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
