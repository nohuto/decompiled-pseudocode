__int64 __fastcall VfMajorAdvanceIrpStatus(_BYTE *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int (__fastcall *v7)(_BYTE *); // rax

  if ( VfVerifyMode <= 2 || (MmVerifierData & 0x1000) == 0 )
    return 0LL;
  if ( *a1 > 0x1Bu )
    v6 = (*a1 != 0xFF) + 28LL;
  else
    v6 = (unsigned __int8)*a1;
  v7 = (unsigned int (__fastcall *)(_BYTE *))*((_QWORD *)&unk_140D72638 + 12 * v6);
  if ( v7 && v7(a1) )
    return 1LL;
  if ( qword_140D730B8 )
    return qword_140D730B8(a1, a2, a3);
  else
    return 0LL;
}
