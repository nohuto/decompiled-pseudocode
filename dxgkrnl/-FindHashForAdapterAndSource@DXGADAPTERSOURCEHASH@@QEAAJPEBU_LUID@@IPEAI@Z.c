__int64 __fastcall DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int *a4)
{
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rax
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *v9; // rax
  unsigned int v10; // ebx
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1, a2, &v13);
  if ( Entry )
    goto LABEL_6;
  v9 = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1, a2, 0LL);
  if ( !v9 )
  {
    WdLogSingleEntry2(1LL, a2->HighPart, a2->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Could not find existing entry for adapter luid 0x%lx, 0x%lx",
      a2->HighPart,
      a2->LowPart,
      0LL,
      0LL,
      0LL);
    v10 = -1073741811;
    goto LABEL_7;
  }
  Entry = DXGADAPTERSOURCEHASH::AddEntry(this, a2, a3, (*((_DWORD *)v9 + 3) & 2) != 0);
  if ( Entry )
  {
LABEL_6:
    *a4 = ((__int64)Entry - *((_QWORD *)this + 6)) >> 4;
    v10 = 0;
  }
  else
  {
    v10 = -1073741801;
  }
LABEL_7:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v10;
}
