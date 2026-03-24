/*
 * XREFs of HMInitHandleTable @ 0x1C0299B50
 * Callers:
 *     Win32UserInitialize @ 0x1C0298BBC (Win32UserInitialize.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0031C90 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0069844 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 HMInitHandleTable()
{
  struct _HANDLEENTRY *v0; // rdi
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v0 = (struct _HANDLEENTRY *)gpvSharedBase;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v4);
  v1 = 0;
  v2 = gpKernelHandleTable;
  gHandlePages = 0LL;
  qword_1C024FCE0 = 0LL;
  qword_1C024FCD8 = 0LL;
  qword_1C024FD58 = v0;
  dword_1C024FD60 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 216) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v2 = 0LL;
    *((_BYTE *)v0 + 24) = 0;
    v1 = 1;
    *((_WORD *)v0 + 13) = 1;
    qword_1C024FCD8 = 2LL;
  }
  else
  {
    qword_1C024FD58 = 0LL;
  }
  return v1;
}
