int __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRange(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        char a4,
        struct VIDMM_VAD_PENDING_OPERATION *a5)
{
  VIDMM_GLOBAL *v9; // rcx
  int v10; // eax
  _QWORD v12[12]; // [rsp+20h] [rbp-68h] BYREF

  memset(v12, 0, 0x58uLL);
  v10 = (*((_DWORD *)a3 + 16) >> 4) & 0x3F;
  LODWORD(v12[0]) = 114;
  HIDWORD(v12[0]) = v10;
  v12[7] = a5;
  v12[6] = a3;
  v12[5] = a2;
  if ( a4 )
    return VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v9, (struct _VIDMM_SYSTEM_COMMAND *)v12);
  else
    return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v12);
}
