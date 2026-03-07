unsigned __int64 __fastcall KeCountSetBitsGroupAffinity(_QWORD *a1)
{
  unsigned __int64 v1; // rcx

  v1 = *a1 - ((*a1 >> 1) & 0x5555555555555555LL);
  return (0x101010101010101LL
        * (((v1 & 0x3333333333333333LL)
          + ((v1 >> 2) & 0x3333333333333333LL)
          + (((v1 & 0x3333333333333333LL) + ((v1 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
}
