__int64 __fastcall IommupHvDetachPasidSubDeviceDomain(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 16);
  qword_140C62210(0LL, *(unsigned int *)(a1 + 48), 0LL);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C62238)(*(_QWORD *)(v1 + 32), *(unsigned int *)(a1 + 48));
}
