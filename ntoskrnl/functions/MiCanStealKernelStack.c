_BOOL8 __fastcall MiCanStealKernelStack(_QWORD *a1, unsigned __int16 a2)
{
  _QWORD *v2; // r8

  v2 = a1;
  return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4) <= qword_140C65820
      && ((*(_QWORD *)(16 * ((__int64)(a1 + 0x44000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
      && ((a1[5] >> 60) & 7) == 2
      && ((byte_140C6570F & 1) != 0 || ((MiGetLeafPfnBuddy(a1) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0)
      && (*((_BYTE *)v2 + 34) & 7) == 6
      && *((_WORD *)v2 + 16) == a2;
}
