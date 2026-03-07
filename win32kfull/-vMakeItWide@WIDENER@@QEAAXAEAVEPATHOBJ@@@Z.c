void __fastcall WIDENER::vMakeItWide(WIDENER *this, struct EPATHOBJ *a2)
{
  char *v2; // rbx
  __int64 v4; // rcx

  v2 = (char *)this + 1136;
  EPATHOBJ::vFreeBlocks(a2);
  v4 = *((_QWORD *)a2 + 1);
  *((_DWORD *)a2 + 1) = *((_DWORD *)v2 + 1);
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 24LL);
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 32LL);
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 40LL);
  *(_DWORD *)(*((_QWORD *)a2 + 1) + 80LL) |= 3u;
  *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFFFFEC | 0x10;
  *(_QWORD *)(*((_QWORD *)v2 + 1) + 24LL) = 0LL;
  EPATHOBJ::vUnlock((EPATHOBJ *)v2);
  *((_DWORD *)a2 + 1) = EPATHOBJ::cTotalCurves(a2);
}
