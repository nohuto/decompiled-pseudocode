/*
 * XREFs of CleanupHidRequestList @ 0x1C01D1030
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00AE584 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00AE5B4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     FreeHidTLCInfo @ 0x1C0103208 (FreeHidTLCInfo.c)
 */

void CleanupHidRequestList()
{
  _QWORD *v0; // rcx
  __int64 v1; // rax
  _QWORD *v2; // rdx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v3, (struct _KTHREAD **)gTLCInfoLock);
  while ( (_QWORD *)RawInputManagerObject::gHidRequestTable[2] != &RawInputManagerObject::gHidRequestTable[2] )
  {
    v0 = (_QWORD *)qword_1C0336DF8;
    *(_DWORD *)(qword_1C0336DF8 + 20) = 0;
    v1 = *v0;
    if ( *(_QWORD **)(*v0 + 8LL) != v0 || (v2 = (_QWORD *)v0[1], (_QWORD *)*v2 != v0) )
      __fastfail(3u);
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    Win32FreePool(v0);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v3);
}
