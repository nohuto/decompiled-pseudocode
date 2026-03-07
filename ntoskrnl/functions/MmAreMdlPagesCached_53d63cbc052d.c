__int64 __fastcall MmAreMdlPagesCached(_DWORD *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rax

  v1 = (__int64 *)(a1 + 12);
  do
  {
    v2 = *v1;
    if ( *v1 > (unsigned __int64)qword_140C65820
      || ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
      || (*(_BYTE *)(48 * v2 - 0x21FFFFFFFFDELL) & 0xC0) != 0x40 )
    {
      return 0LL;
    }
    ++v1;
  }
  while ( v1 < (__int64 *)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                            + 12] );
  return 1LL;
}
