/*
 * XREFs of SiGetSystemDeviceName @ 0x140784278
 * Callers:
 *     SyspartDirectGetSystemPartition @ 0x140784250 (SyspartDirectGetSystemPartition.c)
 *     SyspartGetFirmwarePartition @ 0x14082BA5C (SyspartGetFirmwarePartition.c)
 *     SyspartDirectGetFirmwareSystemPartition @ 0x140859500 (SyspartDirectGetFirmwareSystemPartition.c)
 *     SyspartDirectGetSystemDisk @ 0x14087DDA0 (SyspartDirectGetSystemDisk.c)
 *     IopFindSystemDevice @ 0x14094E90C (IopFindSystemDevice.c)
 *     SyspartGetSystemPartition @ 0x140A5C67C (SyspartGetSystemPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDeviceName(
        __int64 (__fastcall *a1)(_QWORD, void **),
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v8; // edi
  int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // edi
  void *Src; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-60h]
  unsigned int *v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+48h] [rbp-40h]

  v15 = a4;
  *a4 = 0;
  Src = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v8 = 1;
  if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v16) >= 0 )
  {
    v8 = 0;
    if ( (int)v17 < 3 )
      v8 = v17;
  }
  v9 = a1(v8, &Src);
  if ( v9 >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)Src + v10) );
    v11 = 2 * v10 + 2;
    v14 = v11;
    if ( a2 && a3 >= v11 )
    {
      v9 = 0;
      memmove(a2, Src, v11);
    }
    else
    {
      v9 = -1073741789;
    }
    *a4 = v11;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v9;
}
