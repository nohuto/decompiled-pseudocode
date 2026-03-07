__int64 __fastcall PopWriteSecurePages(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v5; // rdi
  int v6; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (unsigned int)PopHiberScratchPages;
  v2 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
  v3 = *(_QWORD *)(BugCheckParameter3 + 144);
  ++*(_DWORD *)(BugCheckParameter3 + 252);
  v5 = v2 + ((unsigned __int64)(4 * v1 + 4095) >> 12);
  v8 = *(_DWORD *)(BugCheckParameter3 + 152) << 12;
  v6 = HvlIterateSecurePagesForHibernation(BugCheckParameter3, BugCheckParameter3, v3, (__int64)&v8);
  if ( v6 < 0 )
    KeBugCheckEx(0xA0u, 0x10DuLL, 0xAuLL, BugCheckParameter3, v6);
  return PopWriteHiberPages(BugCheckParameter3, v3, 1LL, v5);
}
