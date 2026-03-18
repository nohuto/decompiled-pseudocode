/*
 * XREFs of ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00AE4F8
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00AE358 (_RegisterRawInputDevices.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00AE584 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00AE5B4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     FreeHidTLCInfo @ 0x1C0103208 (FreeHidTLCInfo.c)
 */

void CleanupFreedTLCInfo(void)
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _DWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7, gTLCInfoLock);
  v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  v1 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  while ( v1 != v0 )
  {
    v4 = v1;
    v1 = (_QWORD *)*v1;
    if ( !(v4[5] | v4[6] | v4[8] | v4[9]) )
      FreeHidTLCInfo();
    v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  }
  v2 = v0 + 2;
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v5 = v3;
    v3 = (_QWORD *)*v3;
    if ( !*((_DWORD *)v5 + 5) )
    {
      if ( (_QWORD *)v3[1] != v5 || (v6 = (_QWORD *)v5[1], (_QWORD *)*v6 != v5) )
        __fastfail(3u);
      *v6 = v3;
      v3[1] = v6;
      Win32FreePool(v5);
    }
    v2 = &RawInputManagerObject::gHidRequestTable[2];
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7);
}
