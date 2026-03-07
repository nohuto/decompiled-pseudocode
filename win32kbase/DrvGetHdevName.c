_BOOL8 __fastcall DrvGetHdevName(__int64 a1, unsigned __int16 *a2)
{
  return RtlStringCchCopyW(a2, 0x20uLL, (size_t *)(*(_QWORD *)(a1 + 2552) + 64LL)) >= 0;
}
