/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x1C011E920
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026CC04 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C02762F4 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(ULONG64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  HSURF v5[2]; // [rsp+20h] [rbp-48h]
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]
  char v8; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)v5 = *(_OWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) || !v5[0] )
    return 3221225485LL;
  v1 = -1073741811;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
  SURFREF::SURFREF((SURFREF *)v6);
  SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v6, v5[1]);
  if ( (unsigned int)SURFREF::bValid((SURFREF *)v6) && *(_QWORD *)(v7 + 224) )
    v1 = 0;
  SURFREF::~SURFREF((SURFREF *)v6, v2);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
  if ( v1 >= 0 )
  {
    if ( !(unsigned int)bDeleteDCInternal(v5[0], 0LL, 0LL) )
      v1 = -1073741811;
    if ( v1 >= 0 && !(unsigned int)bDeleteSurface(v5[1]) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
