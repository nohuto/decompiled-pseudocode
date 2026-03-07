__int64 __fastcall MiDeleteFinalPageTables(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int i; // r14d
  unsigned __int64 v6; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 result; // rax
  _OWORD v11[3]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+60h] [rbp-9h]
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+68h] [rbp-1h] BYREF

  v12 = 0LL;
  v2 = *(_QWORD *)(BugCheckParameter2 + 40) >> 12;
  memset(&v13, 0, sizeof(v13));
  v3 = 48 * v2;
  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140C656B8;
      if ( !qword_140C656B8 )
        continue;
    }
    else
    {
      v6 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      LOCK_ADDRESS_SPACE(CurrentThread, BugCheckParameter2);
      MiDeleteVirtualAddresses(0, v6, v6, 0, (__int64)v11);
      UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap(BugCheckParameter2);
  BugCheckParameter4 = *(_QWORD *)(v3 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 2 )
    KeBugCheckEx(0x1Au, 0x3453uLL, BugCheckParameter2, 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4), BugCheckParameter4);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess(&v13);
  _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 632), 0xBu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter2 + 40));
  v9 = (unsigned int)MiDeleteTopLevelPage(v8, *(_QWORD *)(BugCheckParameter2 + 40) >> 12) == 3;
  result = *((_QWORD *)&v11[0] + 1);
  if ( v9 )
    return *((_QWORD *)&v11[0] + 1) + 1LL;
  return result;
}
