__int64 __fastcall MiInitializeInPageSupport(__int64 a1, char a2, volatile signed __int64 *a3)
{
  _DWORD *v6; // r8
  unsigned __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // eax
  unsigned int PagePriorityThread; // eax
  unsigned __int8 v11; // cl
  __int64 result; // rax

  memset((void *)a1, 0, 0x110uLL);
  *(_WORD *)(a1 + 33) = 1536;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  v6 = (_DWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 64;
  *(_QWORD *)(a1 + 64) = a1 + 64;
  *(_WORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 58) = 6;
  *(_DWORD *)(a1 + 60) = 0;
  if ( (a2 & 1) != 0 )
    *v6 |= 0x40u;
  v7 = 1LL;
  *(_DWORD *)(a1 + 176) = 1;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 152) = CurrentThread;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( PagePriorityThread > 5 )
  {
    LOBYTE(PagePriorityThread) = 5;
  }
  else
  {
    *v6 |= 0x80000u;
    if ( PagePriorityThread )
    {
      v11 = PagePriorityThread - 1;
      goto LABEL_8;
    }
  }
  v11 = PagePriorityThread;
LABEL_8:
  *v6 ^= (*v6 ^ ((unsigned __int8)PagePriorityThread << 9)) & 0xE00;
  result = (unsigned int)*v6;
  *v6 = result ^ ((unsigned __int16)result ^ (unsigned __int16)(v11 << 12)) & 0x7000;
  if ( (a2 & 2) != 0 )
  {
    result = KeAbPreAcquire(a1, 0LL);
    if ( result )
    {
      *(_BYTE *)(result + 18) = 1;
      *(_QWORD *)(a1 + 216) = a1;
      return result;
    }
  }
  else if ( a3 )
  {
    if ( _InterlockedExchangeAdd64(a3, v7) + 1 <= 1 )
      __fastfail(0xEu);
  }
  *(_QWORD *)(a1 + 216) = a3;
  return result;
}
